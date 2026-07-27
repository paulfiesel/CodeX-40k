from __future__ import annotations

import hashlib
import json
from pathlib import Path
from typing import Iterable

DEFAULT_EXCLUDES = {".git", "__pycache__", ".audit", "source-mods"}


def iter_files(root: Path, excludes: Iterable[str] = DEFAULT_EXCLUDES):
    excluded = set(excludes)
    for path in sorted(root.rglob("*")):
        if not path.is_file():
            continue
        relative = path.relative_to(root)
        if any(part in excluded for part in relative.parts):
            continue
        yield path


def sha256(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as handle:
        for chunk in iter(lambda: handle.read(1024 * 1024), b""):
            digest.update(chunk)
    return digest.hexdigest()


def is_probably_text(path: Path) -> bool:
    data = path.read_bytes()[:8192]
    return b"\x00" not in data


def normalized_relative(path: Path, root: Path) -> str:
    return path.relative_to(root).as_posix().casefold()


def load_manifest(path: Path) -> dict:
    with path.open("r", encoding="utf-8") as handle:
        return json.load(handle)
