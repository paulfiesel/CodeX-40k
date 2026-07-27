#!/usr/bin/env python3
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path, PurePosixPath
from zipfile import ZIP_DEFLATED, ZipFile, ZipInfo

FIXED_ZIP_TIME = (1980, 1, 1, 0, 0, 0)
DEFAULT_MAX_FILE_BYTES = 2_000_000


def load_json(path: Path) -> dict:
    with path.open("r", encoding="utf-8") as handle:
        return json.load(handle)


def sha256_bytes(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def safe_relative(value: str) -> PurePosixPath:
    normalized = value.replace("\\", "/")
    path = PurePosixPath(normalized)
    if path.is_absolute() or not path.parts or any(part in {"", ".", ".."} for part in path.parts):
        raise ValueError(f"unsafe source path: {value!r}")
    return path


def sanitized_intake(report: dict) -> dict:
    sanitized = {
        "schema_version": report.get("schema_version"),
        "load_order": report.get("load_order", []),
        "errors": report.get("errors", []),
        "sources": [],
    }
    for source in report.get("sources", []):
        sanitized_source = {key: value for key, value in source.items() if key != "source_root"}
        sanitized["sources"].append(sanitized_source)
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


def zip_info(name: str) -> ZipInfo:
    info = ZipInfo(name, FIXED_ZIP_TIME)
    info.compress_type = ZIP_DEFLATED
    info.external_attr = 0o644 << 16
    return info


def encode_json(document: dict) -> bytes:
    return (json.dumps(document, indent=2, sort_keys=True) + "\n").encode("utf-8")


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


def build_bundle(
    intake_report_path: Path,
    collisions_path: Path,
    output_path: Path,
    *,
    triage_json_path: Path | None = None,
    triage_markdown_path: Path | None = None,
    max_file_bytes: int = DEFAULT_MAX_FILE_BYTES,
) -> dict:
    if max_file_bytes < 1:
        raise ValueError("max_file_bytes must be positive")

    intake = load_json(intake_report_path)
    collisions = load_json(collisions_path)
    roots = source_roots(intake)
    source_positions = {
        source["key"]: int(source["load_position"])
        for source in intake.get("sources", [])
    }

    payloads: dict[str, bytes] = {
        "reports/intake-report.json": encode_json(sanitized_intake(intake)),
        "reports/collisions.json": encode_json(collisions),
    }
    if triage_json_path and triage_json_path.is_file():
        payloads["reports/collision-triage.json"] = triage_json_path.read_bytes()
    if triage_markdown_path and triage_markdown_path.is_file():
        payloads["reports/collision-triage.md"] = triage_markdown_path.read_bytes()

    for source in intake.get("sources", []):
        key = source["key"]
        position = int(source["load_position"])
        relative = PurePosixPath("mod.info")
        data = read_verified_file(roots[key], relative, source.get("mod_info_sha256"))
        payloads[f"sources/{position:02d}-{key}/mod.info"] = data

    index_entries: list[dict] = []
    included_files = 0
    skipped_files = 0
    for collision in sorted(collisions.get("collisions", []), key=lambda item: item.get("normalized_path", "")):
        collision_entry = {
            "normalized_path": collision.get("normalized_path"),
            "classification": collision.get("classification"),
            "effective_winner": collision.get("effective_winner"),
            "versions": [],
        }
        for entry in sorted(collision.get("entries", []), key=lambda item: int(item.get("load_index", 0))):
            key = str(entry.get("mod", ""))
            version = {
                "load_index": entry.get("load_index"),
                "mod": key,
                "path": entry.get("path"),
                "kind": entry.get("kind"),
                "size": entry.get("size"),
                "sha256": entry.get("sha256"),
            }
            if key not in roots:
                version["bundle_status"] = "skipped-unknown-source"
                skipped_files += 1
            elif entry.get("kind") != "text":
                version["bundle_status"] = "skipped-binary"
                skipped_files += 1
            elif int(entry.get("size", 0)) > max_file_bytes:
                version["bundle_status"] = "skipped-size-limit"
                skipped_files += 1
            else:
                relative = safe_relative(str(entry.get("path", "")))
                data = read_verified_file(roots[key], relative, entry.get("sha256"))
                position = source_positions[key]
                archive_path = f"files/{position:02d}-{key}/{relative.as_posix()}"
                payloads[archive_path] = data
                version["bundle_status"] = "included"
                version["archive_path"] = archive_path
                included_files += 1
            collision_entry["versions"].append(version)
        index_entries.append(collision_entry)

    index = {
        "schema_version": 1,
        "load_order": collisions.get("load_order", intake.get("load_order", [])),
        "collision_count": len(index_entries),
        "included_text_versions": included_files,
        "skipped_versions": skipped_files,
        "max_file_bytes": max_file_bytes,
        "collisions": index_entries,
    }
    payloads["bundle-index.json"] = encode_json(index)

    output_path.parent.mkdir(parents=True, exist_ok=True)
    with ZipFile(output_path, "w") as archive:
        for name in sorted(payloads):
            archive.writestr(zip_info(name), payloads[name])
    return index


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Export an ignored private ZIP containing collision metadata and colliding text files."
    )
    parser.add_argument(
        "--intake-report",
        type=Path,
        default=Path(".audit/sources/intake-report.json"),
    )
    parser.add_argument(
        "--collisions",
        type=Path,
        default=Path(".audit/sources/collisions.json"),
    )
    parser.add_argument("--triage-json", type=Path)
    parser.add_argument("--triage-markdown", type=Path)
    parser.add_argument(
        "--output",
        type=Path,
        default=Path(".audit/sources/collision-review-bundle.zip"),
    )
    parser.add_argument(
        "--max-file-bytes",
        type=int,
        default=DEFAULT_MAX_FILE_BYTES,
        help="Maximum size for each included colliding text file.",
    )
    args = parser.parse_args()

    try:
        index = build_bundle(
            args.intake_report,
            args.collisions,
            args.output,
            triage_json_path=args.triage_json,
            triage_markdown_path=args.triage_markdown,
            max_file_bytes=args.max_file_bytes,
        )
    except (FileNotFoundError, RuntimeError, ValueError, json.JSONDecodeError) as exc:
        parser.error(str(exc))

    print(
        f"wrote {index['included_text_versions']} colliding text versions "
        f"to {args.output}; skipped {index['skipped_versions']}"
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
