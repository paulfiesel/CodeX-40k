#!/usr/bin/env python3
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path, PurePosixPath
from zipfile import ZIP_DEFLATED, ZipFile, ZipInfo

FIXED_ZIP_TIME = (1980, 1, 1, 0, 0, 0)
DEFAULT_MAX_FILE_BYTES = 2_000_000

PROFILE_RULES = {
    "lobby": {
        "prefixes": (
            "resource/set/multiplayer/",
            "resource/script/multiplayer/",
        ),
        "path_keywords": (
            "alliance",
            "army",
            "nation",
            "multiplayer",
        ),
        "content_tokens": (),
    },
    "human-rig": {
        "prefixes": (),
        "path_keywords": (
            "human",
            "skin",
            "skeleton",
            "animation",
            "breed",
            "pose",
            "ragdoll",
            "hitbox",
            "attachment",
            "human_fsm",
            "abm",
        ),
        "content_tokens": (
            "_staging_sc_h_skin_test",
            "human_fsm",
        ),
    },
}


def load_json(path: Path) -> dict:
    return json.loads(path.read_text(encoding="utf-8"))


def encode_json(document: dict) -> bytes:
    return (json.dumps(document, indent=2, sort_keys=True) + "\n").encode("utf-8")


def sha256_bytes(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def safe_relative(value: str) -> PurePosixPath:
    normalized = value.replace("\\", "/")
    path = PurePosixPath(normalized)
    if path.is_absolute() or not path.parts or any(part in {"", ".", ".."} for part in path.parts):
        raise ValueError(f"unsafe source path: {value!r}")
    return path


def zip_info(name: str) -> ZipInfo:
    info = ZipInfo(name, FIXED_ZIP_TIME)
    info.compress_type = ZIP_DEFLATED
    info.external_attr = 0o644 << 16
    return info


def sanitized_intake(report: dict) -> dict:
    sanitized = {
        "schema_version": report.get("schema_version"),
        "load_order": report.get("load_order", []),
        "errors": report.get("errors", []),
        "sources": [],
    }
    for source in report.get("sources", []):
        sanitized["sources"].append(
            {key: value for key, value in source.items() if key != "source_root"}
        )
    return sanitized


def source_roots(report: dict) -> dict[str, Path]:
    roots: dict[str, Path] = {}
    for source in report.get("sources", []):
        key = source.get("key")
        raw_root = source.get("source_root")
        if not isinstance(key, str) or not isinstance(raw_root, str):
            raise ValueError("every intake source must contain string key and source_root fields")
        if source.get("status") != "verified-root":
            raise ValueError(f"source {key!r} is not a verified root")
        root = Path(raw_root).expanduser().resolve()
        if not root.is_dir():
            raise FileNotFoundError(f"source root no longer exists: {root}")
        roots[key] = root
    return roots


def source_positions(report: dict) -> dict[str, int]:
    return {
        str(source["key"]): int(source["load_position"])
        for source in report.get("sources", [])
    }


def read_verified_file(root: Path, relative: PurePosixPath, expected_sha256: str | None) -> bytes:
    candidate = (root / Path(*relative.parts)).resolve()
    if not candidate.is_relative_to(root):
        raise ValueError(f"source path escapes root: {relative}")
    if not candidate.is_file():
        raise FileNotFoundError(f"manifest file no longer exists: {candidate}")
    data = candidate.read_bytes()
    actual_sha256 = sha256_bytes(data)
    if expected_sha256 and actual_sha256 != expected_sha256:
        raise RuntimeError(
            f"source changed after manifest generation: {candidate} "
            f"expected {expected_sha256}, found {actual_sha256}"
        )
    return data


def normalized_profiles(profiles: list[str]) -> tuple[str, ...]:
    values = profiles or ["lobby", "human-rig"]
    unknown = sorted(set(values) - set(PROFILE_RULES))
    if unknown:
        raise ValueError(f"unknown source-slice profiles: {unknown}")
    return tuple(sorted(set(values)))


def path_matches(path: str, profiles: tuple[str, ...]) -> bool:
    normalized = path.casefold()
    for profile in profiles:
        rules = PROFILE_RULES[profile]
        if any(normalized.startswith(prefix.casefold()) for prefix in rules["prefixes"]):
            return True
        if any(keyword.casefold() in normalized for keyword in rules["path_keywords"]):
            return True
    return False


def content_tokens(profiles: tuple[str, ...], extra_tokens: list[str]) -> tuple[str, ...]:
    tokens = {
        token.casefold()
        for profile in profiles
        for token in PROFILE_RULES[profile]["content_tokens"]
        if token
    }
    tokens.update(token.casefold() for token in extra_tokens if token)
    return tuple(sorted(tokens))


def content_matches(data: bytes, tokens: tuple[str, ...]) -> bool:
    if not tokens:
        return False
    text = data.decode("utf-8", errors="replace").casefold()
    return any(token in text for token in tokens)


def manifest_for_source(intake_report_path: Path, source: dict) -> tuple[Path, dict]:
    manifest_name = source.get("manifest")
    if not isinstance(manifest_name, str) or not manifest_name:
        raise ValueError(f"source {source.get('key')!r} is missing manifest filename")
    path = intake_report_path.parent / manifest_name
    if not path.is_file():
        raise FileNotFoundError(f"manifest not found: {path}")
    manifest = load_json(path)
    if manifest.get("name") != source.get("key"):
        raise ValueError(f"manifest name mismatch for source {source.get('key')!r}")
    files = manifest.get("files")
    if not isinstance(files, list) or manifest.get("file_count") != len(files):
        raise ValueError(f"manifest file count mismatch for source {source.get('key')!r}")
    return path, manifest


def build_slice(
    intake_report_path: Path,
    output_path: Path,
    *,
    profiles: list[str] | None = None,
    extra_tokens: list[str] | None = None,
    max_file_bytes: int = DEFAULT_MAX_FILE_BYTES,
) -> dict:
    if max_file_bytes < 1:
        raise ValueError("max_file_bytes must be positive")

    intake = load_json(intake_report_path)
    if intake.get("errors"):
        raise ValueError(f"intake report contains errors: {intake['errors']}")

    roots = source_roots(intake)
    positions = source_positions(intake)
    selected_profiles = normalized_profiles(profiles or [])
    tokens = content_tokens(selected_profiles, extra_tokens or [])

    payloads: dict[str, bytes] = {
        "reports/intake-report.json": encode_json(sanitized_intake(intake)),
    }
    source_entries: list[dict] = []
    included_count = 0
    skipped_binary = 0
    skipped_size = 0
    scanned_text = 0

    for source in intake.get("sources", []):
        key = str(source["key"])
        position = positions[key]
        root = roots[key]
        _, manifest = manifest_for_source(intake_report_path, source)
        selected_manifest_entries: list[dict] = []

        mod_info = read_verified_file(
            root,
            PurePosixPath("mod.info"),
            source.get("mod_info_sha256"),
        )
        payloads[f"sources/{position:02d}-{key}/mod.info"] = mod_info

        for entry in sorted(manifest.get("files", []), key=lambda item: str(item.get("normalized_path", ""))):
            raw_path = str(entry.get("path", ""))
            normalized_path = str(entry.get("normalized_path", raw_path))
            kind = entry.get("kind")
            size = int(entry.get("size", 0))

            if kind != "text":
                if path_matches(normalized_path, selected_profiles):
                    skipped_binary += 1
                continue
            if size > max_file_bytes:
                if path_matches(normalized_path, selected_profiles):
                    skipped_size += 1
                continue

            relative = safe_relative(raw_path)
            selected_by_path = path_matches(normalized_path, selected_profiles)
            data: bytes | None = None
            selected_by_content = False

            if selected_by_path or tokens:
                data = read_verified_file(root, relative, entry.get("sha256"))
                scanned_text += 1
            if not selected_by_path and data is not None:
                selected_by_content = content_matches(data, tokens)
            if not selected_by_path and not selected_by_content:
                continue

            assert data is not None
            archive_path = f"files/{position:02d}-{key}/{relative.as_posix()}"
            payloads[archive_path] = data
            included_count += 1
            selected_manifest_entries.append(
                {
                    "path": raw_path,
                    "normalized_path": normalized_path,
                    "size": size,
                    "sha256": entry.get("sha256"),
                    "extension": entry.get("extension"),
                    "kind": kind,
                    "selected_by": [
                        reason
                        for reason, selected in (
                            ("path", selected_by_path),
                            ("content", selected_by_content),
                        )
                        if selected
                    ],
                    "archive_path": archive_path,
                }
            )

        sanitized_manifest = {
            "name": key,
            "file_count": len(selected_manifest_entries),
            "files": selected_manifest_entries,
        }
        payloads[f"manifests/{position:02d}-{key}.json"] = encode_json(sanitized_manifest)
        source_entries.append(
            {
                "load_position": position,
                "key": key,
                "selected_file_count": len(selected_manifest_entries),
            }
        )

    index = {
        "schema_version": 1,
        "load_order": intake.get("load_order", []),
        "profiles": list(selected_profiles),
        "content_tokens": list(tokens),
        "max_file_bytes": max_file_bytes,
        "included_text_files": included_count,
        "skipped_binary_path_matches": skipped_binary,
        "skipped_size_path_matches": skipped_size,
        "scanned_text_files": scanned_text,
        "sources": source_entries,
    }
    payloads["slice-index.json"] = encode_json(index)

    output_path.parent.mkdir(parents=True, exist_ok=True)
    with ZipFile(output_path, "w") as archive:
        for name in sorted(payloads):
            archive.writestr(zip_info(name), payloads[name])
    return index


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Export deterministic private source slices for lobby and human-rig review."
    )
    parser.add_argument(
        "--intake-report",
        type=Path,
        default=Path(".audit/sources/intake-report.json"),
    )
    parser.add_argument(
        "--profile",
        action="append",
        choices=sorted(PROFILE_RULES),
        default=[],
        help="Source slice profile. Repeat to combine. Defaults to lobby and human-rig.",
    )
    parser.add_argument(
        "--contains",
        action="append",
        default=[],
        help="Also include text files containing this case-insensitive token.",
    )
    parser.add_argument(
        "--max-file-bytes",
        type=int,
        default=DEFAULT_MAX_FILE_BYTES,
    )
    parser.add_argument(
        "--output",
        type=Path,
        default=Path(".audit/sources/runtime-source-slice.zip"),
    )
    args = parser.parse_args()

    try:
        index = build_slice(
            args.intake_report,
            args.output,
            profiles=args.profile,
            extra_tokens=args.contains,
            max_file_bytes=args.max_file_bytes,
        )
    except (FileNotFoundError, RuntimeError, ValueError, json.JSONDecodeError) as exc:
        parser.error(str(exc))

    print(
        f"wrote {index['included_text_files']} source text files to {args.output}; "
        f"profiles={','.join(index['profiles'])}"
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
