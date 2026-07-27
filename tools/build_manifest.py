#!/usr/bin/env python3
from __future__ import annotations

import argparse
import json
from pathlib import Path

from audit_common import is_probably_text, iter_files, normalized_relative, sha256


def build_manifest(root: Path, name: str, excludes: list[str]) -> dict:
    files = []
    for path in iter_files(root, excludes):
        relative = path.relative_to(root).as_posix()
        files.append(
            {
                "path": relative,
                "normalized_path": normalized_relative(path, root),
                "size": path.stat().st_size,
                "sha256": sha256(path),
                "extension": path.suffix.casefold(),
                "kind": "text" if is_probably_text(path) else "binary",
            }
        )
    return {"name": name, "root": str(root.resolve()), "file_count": len(files), "files": files}


def main() -> int:
    parser = argparse.ArgumentParser(description="Build a deterministic mod file manifest.")
    parser.add_argument("root", type=Path)
    parser.add_argument("--name", required=True)
    parser.add_argument("--output", type=Path, required=True)
    parser.add_argument("--exclude", action="append", default=[])
    args = parser.parse_args()

    root = args.root.resolve()
    if not root.is_dir():
        parser.error(f"not a directory: {root}")

    excludes = [".git", "__pycache__", ".audit", "source-mods", *args.exclude]
    manifest = build_manifest(root, args.name, excludes)
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(manifest, indent=2, sort_keys=True) + "\n", encoding="utf-8")
    print(f"wrote {manifest['file_count']} files to {args.output}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
