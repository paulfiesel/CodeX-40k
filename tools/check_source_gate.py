#!/usr/bin/env python3
from __future__ import annotations

import argparse
import json
from pathlib import Path

EXPECTED_KEYS = ("west81", "codex", "sc-platform", "last-victim-40k")
ALLOWED_STATUSES = {"missing", "archived-unverified", "snapshot-reviewed", "ready"}
RUNTIME_DIRECTORIES = ("resource", "localizations")


def load_status(path: Path) -> dict:
    with path.open("r", encoding="utf-8") as handle:
        return json.load(handle)


def validate_status(document: dict) -> list[str]:
    errors: list[str] = []
    if document.get("schema_version") != 1:
        errors.append("schema_version must be 1")

    dependencies = document.get("dependencies")
    if not isinstance(dependencies, list):
        return errors + ["dependencies must be a list"]

    keys: list[str] = []
    positions: list[int] = []
    for index, entry in enumerate(dependencies):
        prefix = f"dependencies[{index}]"
        if not isinstance(entry, dict):
            errors.append(f"{prefix} must be an object")
            continue
        key = entry.get("key")
        status = entry.get("status")
        position = entry.get("load_position")
        if not isinstance(key, str):
            errors.append(f"{prefix}.key must be a string")
        else:
            keys.append(key)
        if status not in ALLOWED_STATUSES:
            errors.append(f"{prefix}.status must be one of {sorted(ALLOWED_STATUSES)}")
        if not isinstance(position, int):
            errors.append(f"{prefix}.load_position must be an integer")
        else:
            positions.append(position)

    if tuple(keys) != EXPECTED_KEYS:
        errors.append(f"dependency keys must be ordered exactly as {EXPECTED_KEYS}")
    if positions != [1, 2, 3, 4]:
        errors.append("load positions must be exactly [1, 2, 3, 4]")
    return errors


def unresolved_dependencies(document: dict) -> list[str]:
    return [
        str(entry.get("key", "<unknown>"))
        for entry in document.get("dependencies", [])
        if entry.get("status") != "ready"
    ]


def present_runtime_directories(root: Path) -> list[str]:
    return [name for name in RUNTIME_DIRECTORIES if (root / name).exists()]


def evaluate(root: Path, status_path: Path) -> list[str]:
    try:
        document = load_status(status_path)
    except (OSError, json.JSONDecodeError) as exc:
        return [f"could not read source status: {exc}"]

    errors = validate_status(document)
    if errors:
        return errors

    unresolved = unresolved_dependencies(document)
    runtime = present_runtime_directories(root)
    if unresolved and runtime:
        errors.append(
            "runtime directories are blocked until every dependency is ready: "
            f"runtime={runtime}, unresolved={unresolved}"
        )
    return errors


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Block compatibility runtime files until all dependency snapshots are ready."
    )
    parser.add_argument("root", type=Path, nargs="?", default=Path("."))
    parser.add_argument(
        "--status",
        type=Path,
        default=Path("docs/source-status.json"),
        help="Path to the machine-readable dependency status document.",
    )
    args = parser.parse_args()

    errors = evaluate(args.root, args.status)
    if errors:
        for error in errors:
            print(f"ERROR: {error}")
        return 1
    print("source gate passed")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
