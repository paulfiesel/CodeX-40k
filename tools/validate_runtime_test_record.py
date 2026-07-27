#!/usr/bin/env python3
from __future__ import annotations

import argparse
import json
import re
from datetime import datetime
from pathlib import Path

EXPECTED_LOAD_ORDER = (
    (1, "west81", "2897299509"),
    (2, "codex", "3261086933"),
    (3, "sc-platform", "3629384797"),
    (4, "last-victim-40k", "3629381350"),
    (5, "compatibility", None),
)
CHECKPOINT_REQUIREMENTS = {
    "lobby": {"launcher", "lobby", "no_crash"},
    "human-rig": {"launcher", "lobby", "spawn", "human_rig", "combat", "no_crash"},
    "battle-zones": {
        "launcher",
        "lobby",
        "spawn",
        "human_rig",
        "combat",
        "match_completion",
        "no_crash",
    },
    "ai-purchasing": {
        "launcher",
        "lobby",
        "spawn",
        "human_rig",
        "combat",
        "match_completion",
        "ai_purchase",
        "no_crash",
    },
    "remaining-factions": {"launcher", "lobby", "spawn", "combat", "match_completion", "no_crash"},
    "domination": {"launcher", "lobby", "spawn", "combat", "match_completion", "no_crash"},
    "frontlines": {"launcher", "lobby", "spawn", "combat", "match_completion", "no_crash"},
}
ALL_CHECKS = {
    "launcher",
    "lobby",
    "spawn",
    "human_rig",
    "combat",
    "match_completion",
    "ai_purchase",
    "no_crash",
}
HEX_40 = re.compile(r"^[0-9a-f]{40}$")
HEX_64 = re.compile(r"^[0-9a-f]{64}$")


def load_json(path: Path) -> dict:
    return json.loads(path.read_text(encoding="utf-8"))


def nonempty_string(value: object) -> bool:
    return isinstance(value, str) and bool(value.strip())


def validate(record: dict, require_pass: bool = False) -> list[str]:
    errors: list[str] = []
    if record.get("schema_version") != 1:
        errors.append("schema_version must be 1")

    status = record.get("status")
    if status not in {"template", "completed"}:
        errors.append("status must be template or completed")
    checkpoint = record.get("checkpoint")
    if checkpoint not in CHECKPOINT_REQUIREMENTS:
        errors.append(f"checkpoint must be one of {sorted(CHECKPOINT_REQUIREMENTS)}")

    commit = record.get("repository_commit")
    if not isinstance(commit, str) or not HEX_40.fullmatch(commit):
        errors.append("repository_commit must be a lowercase 40-character commit SHA")
    tested_at = record.get("tested_at")
    if not nonempty_string(tested_at):
        errors.append("tested_at must be an ISO-8601 string")
    else:
        try:
            datetime.fromisoformat(str(tested_at).replace("Z", "+00:00"))
        except ValueError:
            errors.append("tested_at must be an ISO-8601 string")
    if not nonempty_string(record.get("tester")):
        errors.append("tester must be non-empty")

    load_order = record.get("load_order")
    if not isinstance(load_order, list) or len(load_order) != len(EXPECTED_LOAD_ORDER):
        errors.append("load_order must contain the exact five-mod stack")
    else:
        for index, (position, key, workshop_id) in enumerate(EXPECTED_LOAD_ORDER):
            entry = load_order[index]
            prefix = f"load_order[{index}]"
            if not isinstance(entry, dict):
                errors.append(f"{prefix} must be an object")
                continue
            if entry.get("position") != position or entry.get("key") != key:
                errors.append(f"{prefix} must be position {position} key {key}")
            if key == "compatibility":
                if entry.get("repository_commit") != commit:
                    errors.append("compatibility load-order commit must match repository_commit")
            else:
                if entry.get("workshop_id") != workshop_id:
                    errors.append(f"{key}: Workshop ID must be {workshop_id}")
                if not nonempty_string(entry.get("version")):
                    errors.append(f"{key}: version must be non-empty")
                digest = entry.get("mod_info_sha256")
                if not isinstance(digest, str) or not HEX_64.fullmatch(digest):
                    errors.append(f"{key}: mod_info_sha256 must be a lowercase SHA-256 string")

    environment = record.get("environment")
    if not isinstance(environment, dict):
        errors.append("environment must be an object")
    else:
        for field in ("game_version", "map", "mode", "difficulty"):
            if not nonempty_string(environment.get(field)):
                errors.append(f"environment.{field} must be non-empty")
        if environment.get("mode") not in {"battle_zones", "domination", "frontlines"}:
            errors.append("environment.mode must be battle_zones, domination, or frontlines")

    factions = record.get("factions")
    if not isinstance(factions, dict):
        errors.append("factions must be an object")
    else:
        if not nonempty_string(factions.get("modern")):
            errors.append("factions.modern must be non-empty")
        if not nonempty_string(factions.get("warhammer")):
            errors.append("factions.warhammer must be non-empty")

    steps = record.get("steps")
    if not isinstance(steps, list) or not steps or any(not nonempty_string(step) for step in steps):
        errors.append("steps must be a non-empty list of non-empty strings")

    checks = record.get("checks")
    if not isinstance(checks, dict):
        errors.append("checks must be an object")
    else:
        missing_checks = sorted(ALL_CHECKS - set(checks))
        extra_checks = sorted(set(checks) - ALL_CHECKS)
        if missing_checks:
            errors.append(f"checks are missing keys: {missing_checks}")
        if extra_checks:
            errors.append(f"checks contain unknown keys: {extra_checks}")
        for key in ALL_CHECKS & set(checks):
            if not isinstance(checks[key], bool):
                errors.append(f"checks.{key} must be boolean")

    log = record.get("log")
    if not isinstance(log, dict):
        errors.append("log must be an object")
    else:
        if not nonempty_string(log.get("path")):
            errors.append("log.path must be non-empty")
        digest = log.get("sha256")
        if not isinstance(digest, str) or not HEX_64.fullmatch(digest):
            errors.append("log.sha256 must be a lowercase SHA-256 string")
        if not isinstance(log.get("excerpt"), str):
            errors.append("log.excerpt must be a string")

    outcome = record.get("outcome")
    if outcome not in {"not-run", "pass", "fail"}:
        errors.append("outcome must be not-run, pass, or fail")

    if require_pass:
        if status != "completed":
            errors.append("a mergeable test record must have status completed")
        if outcome != "pass":
            errors.append("a mergeable test record must have outcome pass")
        if checkpoint in CHECKPOINT_REQUIREMENTS and isinstance(checks, dict):
            failed = sorted(key for key in CHECKPOINT_REQUIREMENTS[checkpoint] if checks.get(key) is not True)
            if failed:
                errors.append(f"checkpoint {checkpoint} has failed or missing required checks: {failed}")
        if isinstance(log, dict) and not str(log.get("excerpt", "")).strip():
            errors.append("a mergeable test record must include a relevant log excerpt")
    return errors


def main() -> int:
    parser = argparse.ArgumentParser(description="Validate manual runtime test evidence.")
    parser.add_argument("record", type=Path)
    parser.add_argument("--require-pass", action="store_true")
    args = parser.parse_args()

    errors = validate(load_json(args.record), require_pass=args.require_pass)
    if errors:
        for error in errors:
            print(f"ERROR: {error}")
        return 1
    print("runtime test record passed")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
