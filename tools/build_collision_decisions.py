#!/usr/bin/env python3
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path

REVIEW_FIELDS = (
    "decision",
    "rationale",
    "compatibility_path",
    "checkpoints",
    "reviewed_by",
    "review_notes",
)


def load_json(path: Path) -> dict:
    return json.loads(path.read_text(encoding="utf-8"))


def source_versions(collision: dict) -> list[dict]:
    fields = ("load_index", "mod", "path", "sha256", "size", "kind")
    versions = [{field: entry.get(field) for field in fields} for entry in collision.get("entries", [])]
    return sorted(versions, key=lambda item: (int(item.get("load_index") or 0), str(item.get("mod") or "")))


def fingerprint(collision: dict) -> str:
    payload = {
        "normalized_path": collision.get("normalized_path"),
        "classification": collision.get("classification"),
        "effective_winner": collision.get("effective_winner"),
        "entries": source_versions(collision),
    }
    encoded = json.dumps(payload, sort_keys=True, separators=(",", ":")).encode("utf-8")
    return hashlib.sha256(encoded).hexdigest()


def build_ledger(triage: dict, existing: dict | None = None) -> dict:
    previous = {
        item.get("normalized_path"): item
        for item in (existing or {}).get("collisions", [])
        if isinstance(item, dict)
    }
    decisions = []
    for collision in sorted(triage.get("collisions", []), key=lambda item: str(item.get("normalized_path", ""))):
        path = str(collision.get("normalized_path", ""))
        digest = fingerprint(collision)
        triage_data = collision.get("triage", {})
        item = {
            "normalized_path": path,
            "classification": collision.get("classification"),
            "effective_winner": collision.get("effective_winner"),
            "priority": triage_data.get("priority", "review"),
            "area": triage_data.get("area", "unclassified"),
            "recommended_action": triage_data.get("recommended_action", "manual classification required"),
            "source_fingerprint": digest,
            "source_versions": source_versions(collision),
            "decision": "identical" if collision.get("classification") == "identical" else "unresolved",
            "rationale": "",
            "compatibility_path": None,
            "checkpoints": [],
            "reviewed_by": None,
            "review_notes": "",
        }
        old = previous.get(path)
        if old and old.get("source_fingerprint") == digest:
            for field in REVIEW_FIELDS:
                if field in old:
                    item[field] = old[field]
        decisions.append(item)
    return {
        "schema_version": 1,
        "load_order": triage.get("load_order", []),
        "collision_count": len(decisions),
        "collisions": decisions,
    }


def main() -> int:
    parser = argparse.ArgumentParser(description="Create or refresh a collision decision ledger.")
    parser.add_argument("--triage", type=Path, required=True)
    parser.add_argument("--output", type=Path, required=True)
    parser.add_argument("--existing", type=Path)
    args = parser.parse_args()

    existing_path = args.existing or (args.output if args.output.is_file() else None)
    existing = load_json(existing_path) if existing_path and existing_path.is_file() else None
    document = build_ledger(load_json(args.triage), existing)
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(document, indent=2, sort_keys=True) + "\n", encoding="utf-8")
    print(f"wrote {document['collision_count']} collision decisions to {args.output}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
