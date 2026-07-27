#!/usr/bin/env python3
from __future__ import annotations

import argparse
import hashlib
import json
import os
import re
import shlex
import subprocess
import sys
from dataclasses import dataclass
from pathlib import Path


@dataclass(frozen=True)
class Dependency:
    load_position: int
    key: str
    name: str
    workshop_id: str
    manifest_name: str


DEPENDENCIES = (
    Dependency(1, "west81", "West-81", "2897299509", "01-west81.json"),
    Dependency(2, "codex", "Code-X", "3261086933", "02-codex.json"),
    Dependency(3, "sc-platform", "[GOH] SC Modding Platform", "3629384797", "03-sc-platform.json"),
    Dependency(4, "last-victim-40k", "[GOH] SC Last Victim 40K", "3629381350", "04-last-victim-40k.json"),
)

MOD_INFO_FIELDS = ("name", "version", "minGameVersion", "maxGameVersion")


def parse_override(value: str) -> tuple[str, Path]:
    key, separator, raw_path = value.partition("=")
    if not separator or not key.strip() or not raw_path.strip():
        raise argparse.ArgumentTypeError("source overrides must use KEY=PATH")
    known = {dependency.key for dependency in DEPENDENCIES}
    key = key.strip()
    if key not in known:
        raise argparse.ArgumentTypeError(f"unknown dependency key {key!r}; expected one of {sorted(known)}")
    return key, Path(raw_path.strip()).expanduser()


def parse_mod_info(path: Path) -> dict[str, str]:
    text = path.read_text(encoding="utf-8", errors="replace")
    fields: dict[str, str] = {}
    for field in MOD_INFO_FIELDS:
        match = re.search(r"\{\s*" + re.escape(field) + r'\s+"([^"]*)"\s*\}', text, flags=re.IGNORECASE)
        if match:
            fields[field] = match.group(1)
    return fields


def sha256(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as handle:
        for chunk in iter(lambda: handle.read(1024 * 1024), b""):
            digest.update(chunk)
    return digest.hexdigest()


def default_workshop_candidates() -> list[Path]:
    candidates = []
    for drive in ("E", "D", "C", "F", "G"):
        candidates.append(Path(f"{drive}:/Steam/steamapps/workshop/content/400750"))
        candidates.append(Path(f"{drive}:/Program Files (x86)/Steam/steamapps/workshop/content/400750"))
    return candidates


def resolve_workshop_root(explicit: Path | None) -> Path:
    if explicit is not None:
        return explicit.expanduser().resolve()

    environment = os.environ.get("GOH_WORKSHOP_ROOT")
    if environment:
        return Path(environment).expanduser().resolve()

    for candidate in default_workshop_candidates():
        if candidate.is_dir():
            return candidate.resolve()

    searched = ", ".join(str(candidate) for candidate in default_workshop_candidates())
    raise FileNotFoundError(
        "could not locate the Gates of Hell Workshop root; pass --workshop-root or set "
        f"GOH_WORKSHOP_ROOT. Searched: {searched}"
    )


def inspect_sources(workshop_root: Path, overrides: dict[str, Path]) -> tuple[list[dict], list[str]]:
    entries: list[dict] = []
    errors: list[str] = []
    for dependency in DEPENDENCIES:
        root = overrides.get(dependency.key, workshop_root / dependency.workshop_id).expanduser().resolve()
        mod_info = root / "mod.info"
        entry = {
            "load_position": dependency.load_position,
            "key": dependency.key,
            "expected_name": dependency.name,
            "workshop_id": dependency.workshop_id,
            "source_root": str(root),
            "manifest": dependency.manifest_name,
        }
        if not root.is_dir():
            entry["status"] = "missing-folder"
            errors.append(f"{dependency.key}: missing folder {root}")
        elif not mod_info.is_file():
            entry["status"] = "missing-mod-info"
            errors.append(f"{dependency.key}: {root} does not contain mod.info")
        else:
            entry["status"] = "verified-root"
            entry["mod_info_sha256"] = sha256(mod_info)
            entry["mod_info"] = parse_mod_info(mod_info)
        entries.append(entry)
    return entries, errors


def build_commands(repo_root: Path, output_dir: Path, entries: list[dict]) -> list[list[str]]:
    python = sys.executable
    commands: list[list[str]] = []
    manifests: list[Path] = []
    for entry in entries:
        manifest = output_dir / entry["manifest"]
        manifests.append(manifest)
        commands.append(
            [
                python,
                str(repo_root / "tools" / "build_manifest.py"),
                entry["source_root"],
                "--name",
                entry["key"],
                "--output",
                str(manifest),
            ]
        )

    collision_report = output_dir / "collisions.json"
    compare = [python, str(repo_root / "tools" / "compare_mod_stacks.py")]
    for manifest in manifests:
        compare.extend(["--manifest", str(manifest)])
    compare.extend(["--output", str(collision_report)])
    commands.append(compare)
    commands.append(
        [
            python,
            str(repo_root / "tools" / "triage_collisions.py"),
            "--input",
            str(collision_report),
            "--output-json",
            str(output_dir / "collision-triage.json"),
            "--output-markdown",
            str(output_dir / "collision-triage.md"),
        ]
    )
    return commands


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Verify the exact installed dependency roots and generate ordered collision manifests."
    )
    parser.add_argument(
        "--workshop-root",
        type=Path,
        help="Gates of Hell Workshop content root, such as E:/Steam/steamapps/workshop/content/400750.",
    )
    parser.add_argument(
        "--source",
        action="append",
        default=[],
        metavar="KEY=PATH",
        help="Override one dependency path, for example --source codex=E:/mods/Codex.",
    )
    parser.add_argument(
        "--output-dir",
        type=Path,
        default=Path(".audit/sources"),
        help="Directory for local manifests and collision reports.",
    )
    parser.add_argument("--dry-run", action="store_true", help="Verify roots and print commands without hashing files.")
    args = parser.parse_args()

    try:
        workshop_root = resolve_workshop_root(args.workshop_root)
        overrides = dict(parse_override(value) for value in args.source)
    except (FileNotFoundError, argparse.ArgumentTypeError) as exc:
        parser.error(str(exc))

    repo_root = Path(__file__).resolve().parents[1]
    output_dir = args.output_dir
    if not output_dir.is_absolute():
        output_dir = repo_root / output_dir
    output_dir = output_dir.resolve()
    output_dir.mkdir(parents=True, exist_ok=True)

    entries, errors = inspect_sources(workshop_root, overrides)
    report = {
        "schema_version": 1,
        "workshop_root": str(workshop_root),
        "load_order": [dependency.key for dependency in DEPENDENCIES],
        "sources": entries,
        "errors": errors,
    }
    report_path = output_dir / "intake-report.json"
    report_path.write_text(json.dumps(report, indent=2, sort_keys=True) + "\n", encoding="utf-8")

    if errors:
        for error in errors:
            print(f"ERROR: {error}")
        print(f"wrote intake report to {report_path}")
        return 1

    commands = build_commands(repo_root, output_dir, entries)
    for command in commands:
        print(shlex.join(command))
        if not args.dry_run:
            subprocess.run(command, check=True)

    print(f"source intake complete: {output_dir}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
