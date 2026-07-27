#!/usr/bin/env python3
"""Prepare the exact local parent stack for Code:X vs. 40K runtime testing.

The current SC Platform and Last Victim releases declare a maximum supported
Gates of Hell version below 1.064.0, so the game disables them before mod #5
can load. This tool raises only maxGameVersion in those two local mod.info
files. It creates a one-time backup beside each file and is idempotent.
"""

from __future__ import annotations

import argparse
import re
import shutil
from pathlib import Path

PARENTS = {
    "3629384797": "SC Modding Platform",
    "3629381350": "SC Last Victim 40K",
}
MAX_VERSION_RE = re.compile(r'(\{maxGameVersion\s+")([^"]+)("\})')
NAME_RE = re.compile(r'\{name\s+"([^"]+)"\}')


def patch_mod_info(path: Path, expected_name: str, game_version: str) -> str:
    if not path.is_file():
        raise FileNotFoundError(f"missing parent mod metadata: {path}")

    text = path.read_text(encoding="utf-8-sig")
    name_match = NAME_RE.search(text)
    actual_name = name_match.group(1) if name_match else "<unknown>"
    if expected_name.casefold().replace(" ", "") not in actual_name.casefold().replace(" ", ""):
        # Last Victim and SC Platform have changed punctuation/spelling between releases.
        expected_tokens = {token for token in expected_name.casefold().split() if len(token) > 2}
        actual_tokens = set(actual_name.casefold().replace("-", " ").split())
        if not expected_tokens.intersection(actual_tokens):
            raise ValueError(
                f"unexpected mod at {path.parent}: expected {expected_name!r}, found {actual_name!r}"
            )

    version_match = MAX_VERSION_RE.search(text)
    if not version_match:
        raise ValueError(f"no maxGameVersion field found in {path}")

    current = version_match.group(2)
    backup = path.with_name("mod.info.cx40k-backup")
    if not backup.exists():
        shutil.copy2(path, backup)

    if current == game_version:
        return f"already prepared: {actual_name} maxGameVersion={current}"

    updated = MAX_VERSION_RE.sub(
        lambda match: f'{match.group(1)}{game_version}{match.group(3)}',
        text,
        count=1,
    )
    path.write_text(updated, encoding="utf-8")
    return f"prepared: {actual_name} maxGameVersion {current} -> {game_version}"


def restore_mod_info(path: Path) -> str:
    backup = path.with_name("mod.info.cx40k-backup")
    if not backup.is_file():
        return f"no backup to restore: {path}"
    shutil.copy2(backup, path)
    return f"restored: {path}"


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Patch SC Platform and Last Victim local maxGameVersion fields for runtime testing."
    )
    parser.add_argument(
        "--workshop-root",
        type=Path,
        required=True,
        help="Workshop content root containing folders 3629384797 and 3629381350.",
    )
    parser.add_argument(
        "--game-version",
        default="1.064.0",
        help="Installed Gates of Hell version to permit. Default: 1.064.0",
    )
    parser.add_argument(
        "--restore",
        action="store_true",
        help="Restore the one-time backups instead of patching.",
    )
    args = parser.parse_args()

    root = args.workshop_root.resolve()
    if not root.is_dir():
        parser.error(f"workshop root does not exist: {root}")

    failures: list[str] = []
    for folder, expected_name in PARENTS.items():
        mod_info = root / folder / "mod.info"
        try:
            message = restore_mod_info(mod_info) if args.restore else patch_mod_info(
                mod_info, expected_name, args.game_version
            )
            print(message)
        except (FileNotFoundError, OSError, ValueError) as error:
            failures.append(str(error))

    if failures:
        for failure in failures:
            print(f"ERROR: {failure}")
        return 1

    if not args.restore:
        print("Parent metadata prepared. Steam Workshop updates may overwrite these local edits.")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
