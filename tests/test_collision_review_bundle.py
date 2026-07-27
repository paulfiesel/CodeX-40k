from __future__ import annotations

import hashlib
import json
import tempfile
import unittest
from pathlib import Path
from zipfile import ZipFile

from tools.export_collision_review_bundle import build_bundle


class CollisionReviewBundleTests(unittest.TestCase):
    def _write_source(self, root: Path, name: str, text_value: str) -> dict:
        root.mkdir(parents=True)
        mod_info = root / "mod.info"
        mod_info.write_text(f'{{mod {{name "{name}"}}}}', encoding="utf-8")
        text_path = root / "resource" / "set" / "common.set"
        text_path.parent.mkdir(parents=True)
        text_path.write_text(text_value, encoding="utf-8")
        binary_path = root / "resource" / "entity" / "model.mdl"
        binary_path.parent.mkdir(parents=True)
        binary_path.write_bytes(b"\x00\x01\x02")
        return {
            "mod_info": mod_info,
            "text": text_path,
            "binary": binary_path,
        }

    @staticmethod
    def _sha(path: Path) -> str:
        return hashlib.sha256(path.read_bytes()).hexdigest()

    def _documents(self, temporary: Path) -> tuple[Path, Path, dict[str, dict]]:
        files = {
            "west81": self._write_source(temporary / "west81", "West-81", "west\n"),
            "codex": self._write_source(temporary / "codex", "Code-X", "codex\n"),
        }
        intake = {
            "schema_version": 1,
            "workshop_root": "E:/private/workshop/path",
            "load_order": ["west81", "codex"],
            "errors": [],
            "sources": [
                {
                    "load_position": index,
                    "key": key,
                    "status": "verified-root",
                    "source_root": str((temporary / key).resolve()),
                    "mod_info_sha256": self._sha(files[key]["mod_info"]),
                    "mod_info": {"name": key},
                }
                for index, key in enumerate(("west81", "codex"), start=1)
            ],
        }
        collisions = {
            "load_order": ["west81", "codex"],
            "collision_count": 2,
            "collisions": [
                {
                    "normalized_path": "resource/set/common.set",
                    "classification": "review-required",
                    "effective_winner": "codex",
                    "entries": [
                        {
                            "load_index": index,
                            "mod": key,
                            "path": "resource/set/common.set",
                            "sha256": self._sha(files[key]["text"]),
                            "size": files[key]["text"].stat().st_size,
                            "kind": "text",
                        }
                        for index, key in enumerate(("west81", "codex"), start=1)
                    ],
                },
                {
                    "normalized_path": "resource/entity/model.mdl",
                    "classification": "identical",
                    "effective_winner": "codex",
                    "entries": [
                        {
                            "load_index": index,
                            "mod": key,
                            "path": "resource/entity/model.mdl",
                            "sha256": self._sha(files[key]["binary"]),
                            "size": files[key]["binary"].stat().st_size,
                            "kind": "binary",
                        }
                        for index, key in enumerate(("west81", "codex"), start=1)
                    ],
                },
            ],
        }
        intake_path = temporary / "intake.json"
        collisions_path = temporary / "collisions.json"
        intake_path.write_text(json.dumps(intake), encoding="utf-8")
        collisions_path.write_text(json.dumps(collisions), encoding="utf-8")
        return intake_path, collisions_path, files

    def test_bundle_includes_text_and_scrubs_local_roots(self) -> None:
        with tempfile.TemporaryDirectory() as raw_temporary:
            temporary = Path(raw_temporary)
            intake_path, collisions_path, _ = self._documents(temporary)
            output = temporary / "bundle.zip"
            index = build_bundle(intake_path, collisions_path, output)

            self.assertEqual(index["included_text_versions"], 2)
            self.assertEqual(index["skipped_versions"], 2)
            with ZipFile(output) as archive:
                names = set(archive.namelist())
                self.assertIn("files/01-west81/resource/set/common.set", names)
                self.assertIn("files/02-codex/resource/set/common.set", names)
                self.assertIn("sources/01-west81/mod.info", names)
                self.assertNotIn("files/01-west81/resource/entity/model.mdl", names)
                sanitized = json.loads(archive.read("reports/intake-report.json"))
                self.assertNotIn("workshop_root", sanitized)
                self.assertTrue(all("source_root" not in source for source in sanitized["sources"]))
                bundle_index = json.loads(archive.read("bundle-index.json"))
                binary_collision = next(
                    collision
                    for collision in bundle_index["collisions"]
                    if collision["normalized_path"] == "resource/entity/model.mdl"
                )
                binary_versions = binary_collision["versions"]
                self.assertTrue(all(version["bundle_status"] == "skipped-binary" for version in binary_versions))

    def test_bundle_is_deterministic(self) -> None:
        with tempfile.TemporaryDirectory() as raw_temporary:
            temporary = Path(raw_temporary)
            intake_path, collisions_path, _ = self._documents(temporary)
            first = temporary / "first.zip"
            second = temporary / "second.zip"
            build_bundle(intake_path, collisions_path, first)
            build_bundle(intake_path, collisions_path, second)
            self.assertEqual(first.read_bytes(), second.read_bytes())

    def test_bundle_rejects_sources_changed_after_manifest(self) -> None:
        with tempfile.TemporaryDirectory() as raw_temporary:
            temporary = Path(raw_temporary)
            intake_path, collisions_path, files = self._documents(temporary)
            files["codex"]["text"].write_text("changed\n", encoding="utf-8")
            with self.assertRaises(RuntimeError):
                build_bundle(intake_path, collisions_path, temporary / "bundle.zip")


if __name__ == "__main__":
    unittest.main()
