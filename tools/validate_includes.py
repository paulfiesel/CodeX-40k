#!/usr/bin/env python3
from __future__ import annotations

import argparse
import json
import re
from pathlib import Path

from audit_common import iter_files

INCLUDE_RE = re.compile(r"\(include\s+[\"']([^\"']+)[\"']")
REQUIRE_RE = re.compile(r"require\s*\(\s*(?:\[\[|[\"'])(.*?)(?:\]\]|[\"'])\s*\)")
TEXT_SUFFIXES = {".set", ".inc", ".ext", ".def", ".lua"}
SHA256_RE = re.compile(r"^[0-9a-f]{64}$")


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


def load_external_includes(path: Path) -> tuple[set[tuple[str, str]], list[str]]:
    if not path.is_file():
        return set(), []
    try:
        document = json.loads(path.read_text(encoding="utf-8"))
    except (OSError, json.JSONDecodeError) as exc:
        return set(), [f"could not read external include ledger {path}: {exc}"]

    errors: list[str] = []
    if document.get("schema_version") != 1:
        errors.append("external include ledger schema_version must be 1")
    artifact_hash = document.get("source_artifact_sha256")
    if not isinstance(artifact_hash, str) or not SHA256_RE.fullmatch(artifact_hash):
        errors.append("external include ledger source_artifact_sha256 must be a SHA-256")

    entries = document.get("entries")
    if not isinstance(entries, list):
        return set(), errors + ["external include ledger entries must be a list"]

    approved: set[tuple[str, str]] = set()
    for index, entry in enumerate(entries):
        prefix = f"external include ledger entries[{index}]"
        if not isinstance(entry, dict):
            errors.append(f"{prefix} must be an object")
            continue
        source = entry.get("source")
        target = entry.get("target")
        owner = entry.get("owner")
        resolved_path = entry.get("resolved_path")
        digest = entry.get("sha256")
        if not isinstance(source, str) or not source:
            errors.append(f"{prefix}.source must be a non-empty string")
        if not isinstance(target, str) or not target:
            errors.append(f"{prefix}.target must be a non-empty string")
        if owner not in {"west81", "codex", "sc-platform", "last-victim-40k"}:
            errors.append(f"{prefix}.owner is invalid")
        if not isinstance(resolved_path, str) or not resolved_path.startswith("resource/"):
            errors.append(f"{prefix}.resolved_path must begin with resource/")
        if not isinstance(digest, str) or not SHA256_RE.fullmatch(digest):
            errors.append(f"{prefix}.sha256 must be a SHA-256")
        if isinstance(source, str) and source and isinstance(target, str) and target:
            approved.add((source.replace("\\", "/").casefold(), target.replace("\\", "/").casefold()))

    return approved, errors


def main() -> int:
    parser = argparse.ArgumentParser(description="Validate include and Lua require targets.")
    parser.add_argument("root", type=Path)
    parser.add_argument("--dependency-root", type=Path, action="append", default=[])
    parser.add_argument(
        "--external-includes",
        type=Path,
        help="Hash-bound parent include ledger. Defaults to docs/external-includes.json beneath root.",
    )
    args = parser.parse_args()

    root = args.root.resolve()
    dependencies = [path.resolve() for path in args.dependency_root]
    ledger_path = args.external_includes or root / "docs" / "external-includes.json"
    approved_external, ledger_errors = load_external_includes(ledger_path)

    failures: list[tuple[str, str]] = []
    external_count = 0
    for path in iter_files(root):
        if path.suffix.casefold() not in TEXT_SUFFIXES:
            continue
        text = path.read_text(encoding="utf-8", errors="ignore")
        targets = [*INCLUDE_RE.findall(text), *REQUIRE_RE.findall(text)]
        source = path.relative_to(root).as_posix()
        for target in targets:
            if any(candidate.is_file() for candidate in candidates(path, root, target, dependencies)):
                continue
            key = (source.casefold(), target.replace("\\", "/").casefold())
            if key in approved_external:
                external_count += 1
                continue
            failures.append((source, target))

    for error in ledger_errors:
        print(f"invalid ledger: {error}")
    for source, target in failures:
        print(f"missing target: {source} -> {target}")
    print(
        "checked includes and requires: "
        f"{len(failures)} missing, {external_count} exact parent targets approved"
    )
    return 1 if failures or ledger_errors else 0


if __name__ == "__main__":
    raise SystemExit(main())
