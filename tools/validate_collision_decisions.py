#!/usr/bin/env python3
from __future__ import annotations

import argparse
import json
from pathlib import Path

try:
    from build_collision_decisions import fingerprint
except ModuleNotFoundError:
    from tools.build_collision_decisions import fingerprint

ALLOWED_DECISIONS = {
    "unresolved",
    "identical",
    "inherit-winner",
    "compatibility-merge",
    "compatibility-alias",
    "exclude-from-slice",
}
COMPATIBILITY_DECISIONS = {"compatibility-merge", "compatibility-alias"}
RATIONALE_REQUIRED = {
    "inherit-winner",
    "compatibility-merge",
    "compatibility-alias",
    "exclude-from-slice",
}
ALLOWED_CHECKPOINTS = {
    "lobby",
    "human-rig",
    "battle-zones",
    "ai-purchasing",
    "remaining-factions",
    "domination",
    "frontlines",
}


def load_json(path: Path) -> dict:
    return json.loads(path.read_text(encoding="utf-8"))


def validate(document: dict, collision_report: dict | None = None, require_resolved: bool = False) -> list[str]:
    errors: list[str] = []
    if document.get("schema_version") != 1:
        errors.append("schema_version must be 1")

    entries = document.get("collisions")
    if not isinstance(entries, list):
        return errors + ["collisions must be a list"]
    if document.get("collision_count") != len(entries):
        errors.append("collision_count must match the number of entries")

    seen: set[str] = set()
    actual: dict[str, dict] = {}
    for index, entry in enumerate(entries):
        prefix = f"collisions[{index}]"
        if not isinstance(entry, dict):
            errors.append(f"{prefix} must be an object")
            continue
        path = entry.get("normalized_path")
        if not isinstance(path, str) or not path:
            errors.append(f"{prefix}.normalized_path must be a non-empty string")
            continue
        if path in seen:
            errors.append(f"duplicate collision path: {path}")
        seen.add(path)
        actual[path] = entry

        decision = entry.get("decision")
        if decision not in ALLOWED_DECISIONS:
            errors.append(f"{path}: invalid decision {decision!r}")
            continue
        if require_resolved and decision == "unresolved":
            errors.append(f"{path}: decision remains unresolved")

        rationale = entry.get("rationale")
        if decision in RATIONALE_REQUIRED and (not isinstance(rationale, str) or not rationale.strip()):
            errors.append(f"{path}: {decision} requires a rationale")

        compatibility_path = entry.get("compatibility_path")
        if decision in COMPATIBILITY_DECISIONS:
            if not isinstance(compatibility_path, str) or not compatibility_path.strip():
                errors.append(f"{path}: {decision} requires compatibility_path")
        elif compatibility_path not in (None, ""):
            errors.append(f"{path}: compatibility_path is only valid for compatibility decisions")

        checkpoints = entry.get("checkpoints")
        if not isinstance(checkpoints, list) or any(not isinstance(value, str) for value in checkpoints):
            errors.append(f"{path}: checkpoints must be a list of strings")
        else:
            unknown = sorted(set(checkpoints) - ALLOWED_CHECKPOINTS)
            if unknown:
                errors.append(f"{path}: unknown checkpoints {unknown}")
            if len(checkpoints) != len(set(checkpoints)):
                errors.append(f"{path}: checkpoints must not contain duplicates")

        digest = entry.get("source_fingerprint")
        if not isinstance(digest, str) or len(digest) != 64:
            errors.append(f"{path}: source_fingerprint must be a SHA-256 string")

    if collision_report is not None:
        expected = {
            str(collision.get("normalized_path")): collision
            for collision in collision_report.get("collisions", [])
        }
        missing = sorted(set(expected) - set(actual))
        extra = sorted(set(actual) - set(expected))
        if missing:
            errors.append(f"ledger is missing collision paths: {missing}")
        if extra:
            errors.append(f"ledger contains stale collision paths: {extra}")
        for path in sorted(set(expected) & set(actual)):
            if actual[path].get("source_fingerprint") != fingerprint(expected[path]):
                errors.append(f"{path}: source fingerprint does not match the current collision report")
    return errors


def main() -> int:
    parser = argparse.ArgumentParser(description="Validate a collision decision ledger.")
    parser.add_argument("ledger", type=Path)
    parser.add_argument("--collisions", type=Path)
    parser.add_argument("--require-resolved", action="store_true")
    args = parser.parse_args()

    report = load_json(args.collisions) if args.collisions else None
    errors = validate(load_json(args.ledger), report, args.require_resolved)
    if errors:
        for error in errors:
            print(f"ERROR: {error}")
        return 1
    print("collision decision ledger passed")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
