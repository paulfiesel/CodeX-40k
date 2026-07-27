#!/usr/bin/env python3
from __future__ import annotations

import argparse
import re
from pathlib import Path

from audit_common import iter_files

INCLUDE_RE = re.compile(r"\(include\s+[\"']([^\"']+)[\"']")
REQUIRE_RE = re.compile(r"require\s*\(\s*(?:\[\[|[\"'])(.*?)(?:\]\]|[\"'])\s*\)")
TEXT_SUFFIXES = {".set", ".inc", ".ext", ".def", ".lua"}


def candidates(source: Path, root: Path, target: str, dependencies: list[Path]):
    clean = target.replace("\\", "/").lstrip("/")
    roots = [root, root / "resource", source.parent, *dependencies]
    if clean.startswith("resource/"):
        clean_without_resource = clean[len("resource/") :]
        roots.extend([root / "resource", *(dep / "resource" for dep in dependencies)])
    else:
        clean_without_resource = clean
    for base in roots:
        yield base / clean
        yield base / clean_without_resource
        if not Path(clean).suffix:
            yield base / f"{clean}.lua"
            yield base / f"{clean_without_resource}.lua"


def main() -> int:
    parser = argparse.ArgumentParser(description="Validate include and Lua require targets.")
    parser.add_argument("root", type=Path)
    parser.add_argument("--dependency-root", type=Path, action="append", default=[])
    args = parser.parse_args()

    root = args.root.resolve()
    dependencies = [path.resolve() for path in args.dependency_root]
    failures = []
    for path in iter_files(root):
        if path.suffix.casefold() not in TEXT_SUFFIXES:
            continue
        text = path.read_text(encoding="utf-8", errors="ignore")
        targets = [*INCLUDE_RE.findall(text), *REQUIRE_RE.findall(text)]
        for target in targets:
            if not any(candidate.is_file() for candidate in candidates(path, root, target, dependencies)):
                failures.append((path.relative_to(root).as_posix(), target))

    for source, target in failures:
        print(f"missing target: {source} -> {target}")
    print(f"checked includes and requires: {len(failures)} missing")
    return 1 if failures else 0


if __name__ == "__main__":
    raise SystemExit(main())
