#!/usr/bin/env python3
from __future__ import annotations

import argparse
import json
import re
from pathlib import Path

from audit_common import iter_files

TOKENS = {
    "sc_base": re.compile(r"_staging_sc_h_skin_test", re.IGNORECASE),
    "skeleton": re.compile(r"skeleton", re.IGNORECASE),
    "animation": re.compile(r"anim(?:ation)?", re.IGNORECASE),
    "human_base": re.compile(r"human\.ext|human_base", re.IGNORECASE),
}


def main() -> int:
    parser = argparse.ArgumentParser(description="Inventory human rig and animation references.")
    parser.add_argument("root", type=Path)
    parser.add_argument("--output", type=Path)
    parser.add_argument("--require-sc-base", action="store_true")
    args = parser.parse_args()
    root = args.root.resolve()

    matches = []
    for path in iter_files(root):
        if path.suffix.casefold() not in {".set", ".inc", ".ext", ".def", ".mdl", ".lua"}:
            continue
        text = path.read_text(encoding="utf-8", errors="ignore")
        found = sorted(name for name, pattern in TOKENS.items() if pattern.search(text))
        if found:
            matches.append({"path": path.relative_to(root).as_posix(), "tokens": found})

    report = {"match_count": len(matches), "matches": matches}
    if args.output:
        args.output.parent.mkdir(parents=True, exist_ok=True)
        args.output.write_text(json.dumps(report, indent=2, sort_keys=True) + "\n", encoding="utf-8")
    print(f"rig-reference inventory: {len(matches)} files")

    has_runtime_files = (root / "resource").exists()
    has_sc_base = any("sc_base" in match["tokens"] for match in matches)
    if args.require_sc_base and has_runtime_files and not has_sc_base:
        print("runtime files exist but no _staging_sc_h_skin_test reference was found")
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
