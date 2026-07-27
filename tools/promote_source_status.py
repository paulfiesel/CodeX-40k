#!/usr/bin/env python3
from __future__ import annotations

import argparse
import hashlib
import json
from datetime import datetime, timezone
from pathlib import Path

try:
    from intake_workshop_sources import DEPENDENCIES
except ModuleNotFoundError:
    from tools.intake_workshop_sources import DEPENDENCIES

EXPECTED_KEYS = tuple(dependency.key for dependency in DEPENDENCIES)


def load_json(path: Path) -> dict:
    return json.loads(path.read_text(encoding="utf-8"))


def sha256(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as handle:
        for chunk in iter(lambda: handle.read(1024 * 1024), b""):
            digest.update(chunk)
    return digest.hexdigest()


def validate_reviewed_at(value: str) -> str:
    try:
        datetime.fromisoformat(value.replace("Z", "+00:00"))
    except ValueError as exc:
        raise ValueError("reviewed_at must be ISO-8601") from exc
    return value


def build_status(
    intake_report_path: Path,
    collisions_path: Path,
    *,
    reviewer: str,
    reviewed_at: str,
) -> dict:
    if not reviewer.strip():
        raise ValueError("reviewer must be non-empty")
    validate_reviewed_at(reviewed_at)

    intake = load_json(intake_report_path)
    if intake.get("errors"):
        raise ValueError(f"intake report contains errors: {intake['errors']}")
    if tuple(intake.get("load_order", [])) != EXPECTED_KEYS:
        raise ValueError(f"intake load order must be {EXPECTED_KEYS}")

    sources = intake.get("sources")
    if not isinstance(sources, list) or len(sources) != len(EXPECTED_KEYS):
        raise ValueError("intake report must contain exactly four sources")
    by_key = {source.get("key"): source for source in sources if isinstance(source, dict)}
    if tuple(source.get("key") for source in sources) != EXPECTED_KEYS:
        raise ValueError("intake sources must appear in exact load order")

    collisions = load_json(collisions_path)
    if tuple(collisions.get("load_order", [])) != EXPECTED_KEYS:
        raise ValueError("collision report load order does not match the required dependency order")
    if collisions.get("collision_count") != len(collisions.get("collisions", [])):
        raise ValueError("collision_count does not match collision entries")

    output_sources = []
    for dependency in DEPENDENCIES:
        source = by_key[dependency.key]
        if source.get("status") != "verified-root":
            raise ValueError(f"{dependency.key}: source root is not verified")
        if not source.get("mod_info_sha256"):
            raise ValueError(f"{dependency.key}: missing mod.info hash")
        manifest_name = source.get("manifest")
        if not isinstance(manifest_name, str) or not manifest_name:
            raise ValueError(f"{dependency.key}: missing manifest filename")
        manifest_path = intake_report_path.parent / manifest_name
        if not manifest_path.is_file():
            raise FileNotFoundError(f"{dependency.key}: manifest not found at {manifest_path}")
        manifest = load_json(manifest_path)
        files = manifest.get("files")
        if manifest.get("name") != dependency.key:
            raise ValueError(f"{dependency.key}: manifest name mismatch")
        if not isinstance(files, list) or manifest.get("file_count") != len(files) or not files:
            raise ValueError(f"{dependency.key}: manifest must contain a non-empty complete file list")

        output_sources.append(
            {
                "load_position": dependency.load_position,
                "key": dependency.key,
                "name": dependency.name,
                "workshop_id": dependency.workshop_id,
                "status": "ready",
                "source_identity_verified": True,
                "mod_info_sha256": source["mod_info_sha256"],
                "mod_info": source.get("mod_info", {}),
                "manifest": {
                    "path": manifest_name,
                    "sha256": sha256(manifest_path),
                    "file_count": manifest["file_count"],
                },
            }
        )

    return {
        "schema_version": 1,
        "review": {
            "reviewer": reviewer.strip(),
            "reviewed_at": reviewed_at,
            "source_readiness_basis": "verified installed roots, exact mod.info hashes, complete manifests, and collision audit",
            "combined_parent_stack_launch_required": False,
            "collision_report": {
                "path": collisions_path.name,
                "sha256": sha256(collisions_path),
                "collision_count": collisions["collision_count"],
            },
        },
        "dependencies": output_sources,
    }


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Promote exact dependency sources to ready after manifest and collision review."
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
    parser.add_argument("--output", type=Path, default=Path("docs/source-status.json"))
    parser.add_argument("--reviewer", required=True)
    parser.add_argument(
        "--reviewed-at",
        default=lambda: datetime.now(timezone.utc).isoformat(),
        help="ISO-8601 review timestamp. Defaults to current UTC time.",
    )
    args = parser.parse_args()

    reviewed_at = args.reviewed_at() if callable(args.reviewed_at) else args.reviewed_at
    try:
        document = build_status(
            args.intake_report,
            args.collisions,
            reviewer=args.reviewer,
            reviewed_at=reviewed_at,
        )
    except (FileNotFoundError, ValueError, json.JSONDecodeError) as exc:
        parser.error(str(exc))

    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(document, indent=2, sort_keys=True) + "\n", encoding="utf-8")
    print(f"marked {len(document['dependencies'])} dependency sources ready in {args.output}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
