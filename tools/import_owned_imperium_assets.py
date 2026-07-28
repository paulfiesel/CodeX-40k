#!/usr/bin/env python3
from __future__ import annotations

import argparse
import shutil
from pathlib import Path


def approved_assets(source: Path) -> list[Path]:
    assets = [
        source / "resource/interface/pages/multi/flag_imp.tga",
        source / "resource/interface/pages/main/avatar_dummy_ai(imp).dds",
    ]
    campaign_root = source / "resource/interface/pages/main/dynamic_campaign"
    assets.extend(
        path
        for path in sorted(campaign_root.iterdir())
        if path.is_file() and "imp" in path.name.casefold()
    )
    return assets


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Import user-owned Imperium campaign UI assets into this worktree."
    )
    parser.add_argument(
        "--source",
        type=Path,
        required=True,
        help="Installed Imperium vs Xenos Conquest mod root containing resource/.",
    )
    parser.add_argument(
        "--destination",
        type=Path,
        default=Path("."),
        help="Compatibility repository root. Defaults to the current directory.",
    )
    args = parser.parse_args()

    source = args.source.resolve()
    destination = args.destination.resolve()
    mod_info = source / "mod.info"
    if not mod_info.is_file():
        parser.error(f"source does not contain mod.info: {source}")
    if "Imperium vs Xenos Conquest" not in mod_info.read_text(encoding="utf-8", errors="replace"):
        parser.error(f"source is not the expected user-owned Conquest submod: {source}")

    assets = approved_assets(source)
    missing = [path for path in assets if not path.is_file()]
    if missing:
        for path in missing:
            print(f"ERROR: missing {path}")
        return 1

    for source_path in assets:
        relative = source_path.relative_to(source)
        destination_path = destination / relative
        destination_path.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(source_path, destination_path)
        print(f"copied {relative.as_posix()}")

    print(f"imported {len(assets)} user-owned Imperium UI assets")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
