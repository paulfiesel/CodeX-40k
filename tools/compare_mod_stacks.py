#!/usr/bin/env python3
from __future__ import annotations

import argparse
import json
from collections import defaultdict
from pathlib import Path

from audit_common import load_manifest


def classify(entries: list[dict]) -> str:
    hashes = {entry["sha256"] for entry in entries}
    return "identical" if len(hashes) == 1 else "review-required"


def main() -> int:
    parser = argparse.ArgumentParser(description="Compare ordered mod manifests by normalized path.")
    parser.add_argument("--manifest", type=Path, action="append", required=True)
    parser.add_argument("--output", type=Path, required=True)
    args = parser.parse_args()

    manifests = [load_manifest(path) for path in args.manifest]
    by_path: dict[str, list[dict]] = defaultdict(list)
    for load_index, manifest in enumerate(manifests, start=1):
        for file_entry in manifest.get("files", []):
            by_path[file_entry["normalized_path"]].append(
                {
                    "load_index": load_index,
                    "mod": manifest["name"],
                    "path": file_entry["path"],
                    "sha256": file_entry["sha256"],
                    "size": file_entry["size"],
                    "kind": file_entry["kind"],
                }
            )

    collisions = []
    for normalized_path, entries in sorted(by_path.items()):
        if len(entries) < 2:
            continue
        collisions.append(
            {
                "normalized_path": normalized_path,
                "classification": classify(entries),
                "effective_winner": entries[-1]["mod"],
                "entries": entries,
            }
        )

    report = {
        "load_order": [manifest["name"] for manifest in manifests],
        "collision_count": len(collisions),
        "collisions": collisions,
    }
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(report, indent=2, sort_keys=True) + "\n", encoding="utf-8")
    print(f"found {len(collisions)} colliding paths")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
