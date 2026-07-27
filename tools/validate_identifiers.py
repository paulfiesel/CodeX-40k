#!/usr/bin/env python3
from __future__ import annotations

import argparse
import re
from collections import defaultdict
from pathlib import Path

from audit_common import iter_files

ARMY_BLOCK_RE = re.compile(r"\{army\s+(.*?)\n\}", re.DOTALL)
ARMY_ID_RE = re.compile(r"\{id\s+(\d+)\}")
DEFINE_RE = re.compile(r"\(define\s+[\"']([^\"']+)[\"']")


def main() -> int:
    parser = argparse.ArgumentParser(description="Detect conflicting army IDs and duplicate compatibility definitions.")
    parser.add_argument("root", type=Path)
    args = parser.parse_args()
    root = args.root.resolve()

    army_ids: dict[str, list[str]] = defaultdict(list)
    definitions: dict[str, list[str]] = defaultdict(list)
    for path in iter_files(root):
        if path.suffix.casefold() not in {".set", ".inc", ".ext", ".def"}:
            continue
        relative = path.relative_to(root).as_posix()
        text = path.read_text(encoding="utf-8", errors="ignore")
        for block in ARMY_BLOCK_RE.findall(text):
            match = ARMY_ID_RE.search(block)
            if match:
                army_ids[match.group(1)].append(relative)
        for identifier in DEFINE_RE.findall(text):
            if identifier.startswith("cx40k_"):
                definitions[identifier].append(relative)

    failures = []
    for identifier, paths in sorted(army_ids.items()):
        unique = sorted(set(paths))
        if len(unique) > 1:
            failures.append(f"army id {identifier} appears in: {', '.join(unique)}")
    for identifier, paths in sorted(definitions.items()):
        unique = sorted(set(paths))
        if len(unique) > 1:
            failures.append(f"compatibility definition {identifier} appears in: {', '.join(unique)}")

    for failure in failures:
        print(failure)
    print(f"identifier validation: {len(failures)} conflicts")
    return 1 if failures else 0


if __name__ == "__main__":
    raise SystemExit(main())
