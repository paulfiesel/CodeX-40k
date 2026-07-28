#!/usr/bin/env python3
"""Prepare the exact local parent stack and deploy the PR runtime overlay."""

from __future__ import annotations

import argparse
import hashlib
import re
import shutil
from pathlib import Path

PARENTS = {
    "3629384797": "SC Modding Platform",
    "3629381350": "SC Last Victim 40K",
}
OVERLAY_WORKSHOP_ID = "3696721120"
RUNTIME_ROOTS = ("resource", "localizations")
CRITICAL_OVERLAY_FILES = (
    "resource/properties/armor.ext",
    "resource/properties/abm.inc",
    "resource/properties/abm_codex_compat.inc",
)
MAX_VERSION_RE = re.compile(r'(\{maxGameVersion\s+")([^"]+)("\})')
NAME_RE = re.compile(r'\{name\s+"([^"]+)"\}')


def patch_mod_info(path: Path, expected_name: str, game_version: str) -> str:
    if not path.is_file():
        raise FileNotFoundError(f"missing parent mod metadata: {path}")

    text = path.read_text(encoding="utf-8-sig")
    name_match = NAME_RE.search(text)
    actual_name = name_match.group(1) if name_match else "<unknown>"
    if expected_name.casefold().replace(" ", "") not in actual_name.casefold().replace(" ", ""):
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


def sha256(path: Path) -> str:
    return hashlib.sha256(path.read_bytes()).hexdigest()


def _copy_item(source: Path, target: Path) -> None:
    if source.is_dir():
        shutil.copytree(source, target)
    else:
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(source, target)


def deploy_runtime_overlay(source_root: Path, target_root: Path) -> str:
    source_root = source_root.resolve()
    target_root = target_root.resolve()

    if source_root == target_root:
        missing = [relative for relative in CRITICAL_OVERLAY_FILES if not (source_root / relative).is_file()]
        if missing:
            raise FileNotFoundError(f"runtime repository is missing critical files: {', '.join(missing)}")
        return f"runtime overlay already lives in active folder: {target_root}"

    if not (source_root / "mod.info").is_file():
        raise FileNotFoundError(f"source overlay has no mod.info: {source_root}")
    if not (source_root / "resource").is_dir():
        raise FileNotFoundError(f"source overlay has no resource directory: {source_root}")
    if not target_root.is_dir():
        raise FileNotFoundError(
            f"active Workshop overlay folder does not exist: {target_root}. "
            "Install or create the Workshop item before deploying."
        )

    backup_root = target_root / ".cx40k-runtime-backup"
    if not backup_root.exists():
        backup_root.mkdir(parents=True)
        for name in ("mod.info", *RUNTIME_ROOTS):
            current = target_root / name
            if current.exists():
                _copy_item(current, backup_root / name)

    for name in RUNTIME_ROOTS:
        source = source_root / name
        target = target_root / name
        if target.exists():
            if target.is_dir():
                shutil.rmtree(target)
            else:
                target.unlink()
        if source.exists():
            _copy_item(source, target)

    shutil.copy2(source_root / "mod.info", target_root / "mod.info")

    deployed_hashes: list[str] = []
    for relative in CRITICAL_OVERLAY_FILES:
        source = source_root / relative
        target = target_root / relative
        if not source.is_file() or not target.is_file():
            raise FileNotFoundError(f"critical overlay file was not deployed: {relative}")
        source_hash = sha256(source)
        target_hash = sha256(target)
        if source_hash != target_hash:
            raise OSError(f"deployed file hash mismatch: {relative}")
        deployed_hashes.append(f"{relative}={target_hash[:12]}")

    manifest = target_root / ".cx40k-runtime-deployment.txt"
    manifest.write_text(
        "\n".join(
            [
                f"source={source_root}",
                f"target={target_root}",
                *deployed_hashes,
                "",
            ]
        ),
        encoding="utf-8",
    )
    return f"deployed exact runtime overlay to {target_root}: " + ", ".join(deployed_hashes)


def restore_runtime_overlay(target_root: Path) -> str:
    target_root = target_root.resolve()
    backup_root = target_root / ".cx40k-runtime-backup"
    if not backup_root.is_dir():
        return f"no runtime overlay backup to restore: {target_root}"

    for name in ("mod.info", *RUNTIME_ROOTS):
        target = target_root / name
        if target.exists():
            if target.is_dir():
                shutil.rmtree(target)
            else:
                target.unlink()
        backup = backup_root / name
        if backup.exists():
            _copy_item(backup, target)

    manifest = target_root / ".cx40k-runtime-deployment.txt"
    if manifest.exists():
        manifest.unlink()
    return f"restored runtime overlay backup: {target_root}"


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Patch parent version metadata and optionally deploy this checkout into the active Workshop overlay."
    )
    parser.add_argument(
        "--workshop-root",
        type=Path,
        required=True,
        help="Workshop content root containing the numbered mod folders.",
    )
    parser.add_argument(
        "--game-version",
        default="1.064.0",
        help="Installed Gates of Hell version to permit. Default: 1.064.0",
    )
    parser.add_argument(
        "--deploy-overlay",
        action="store_true",
        help=f"Mirror this checkout's runtime files into active Workshop folder {OVERLAY_WORKSHOP_ID}.",
    )
    parser.add_argument(
        "--source-root",
        type=Path,
        default=Path(__file__).resolve().parents[1],
        help="Compatibility checkout to deploy. Defaults to this repository.",
    )
    parser.add_argument(
        "--overlay-folder",
        default=OVERLAY_WORKSHOP_ID,
        help=f"Active Workshop overlay folder. Default: {OVERLAY_WORKSHOP_ID}",
    )
    parser.add_argument(
        "--restore",
        action="store_true",
        help="Restore one-time backups instead of patching/deploying.",
    )
    args = parser.parse_args()

    root = args.workshop_root.resolve()
    if not root.is_dir():
        parser.error(f"workshop root does not exist: {root}")

    failures: list[str] = []
    for folder, expected_name in PARENTS.items():
        mod_info = root / folder / "mod.info"
        try:
            message = (
                restore_mod_info(mod_info)
                if args.restore
                else patch_mod_info(mod_info, expected_name, args.game_version)
            )
            print(message)
        except (FileNotFoundError, OSError, ValueError) as error:
            failures.append(str(error))

    if args.deploy_overlay:
        try:
            target = root / args.overlay_folder
            message = (
                restore_runtime_overlay(target)
                if args.restore
                else deploy_runtime_overlay(args.source_root, target)
            )
            print(message)
        except (FileNotFoundError, OSError, ValueError) as error:
            failures.append(str(error))

    if failures:
        for failure in failures:
            print(f"ERROR: {failure}")
        return 1

    if not args.restore:
        print("Runtime stack prepared. Steam Workshop updates may overwrite local parent or overlay edits.")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
