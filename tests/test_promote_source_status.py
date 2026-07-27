from __future__ import annotations

import hashlib
import json
import tempfile
import unittest
from pathlib import Path

from tools.intake_workshop_sources import DEPENDENCIES
from tools.promote_source_status import build_status


class PromoteSourceStatusTests(unittest.TestCase):
    @staticmethod
    def _sha(path: Path) -> str:
        return hashlib.sha256(path.read_bytes()).hexdigest()

    def _write_inputs(self, root: Path) -> tuple[Path, Path]:
        sources = []
        for dependency in DEPENDENCIES:
            manifest_name = dependency.manifest_name
            manifest = {
                "name": dependency.key,
                "root": f"E:/private/{dependency.workshop_id}",
                "file_count": 1,
                "files": [
                    {
                        "path": "mod.info",
                        "normalized_path": "mod.info",
                        "size": 10,
                        "sha256": dependency.workshop_id.zfill(64)[:64],
                        "extension": ".info",
                        "kind": "text",
                    }
                ],
            }
            (root / manifest_name).write_text(json.dumps(manifest), encoding="utf-8")
            sources.append(
                {
                    "load_position": dependency.load_position,
                    "key": dependency.key,
                    "expected_name": dependency.name,
                    "workshop_id": dependency.workshop_id,
                    "source_root": f"E:/private/{dependency.workshop_id}",
                    "manifest": manifest_name,
                    "status": "verified-root",
                    "mod_info_sha256": (dependency.workshop_id * 8)[:64],
                    "mod_info": {"name": dependency.name, "version": "test"},
                }
            )

        intake = {
            "schema_version": 1,
            "workshop_root": "E:/private",
            "load_order": [dependency.key for dependency in DEPENDENCIES],
            "sources": sources,
            "errors": [],
        }
        collisions = {
            "load_order": [dependency.key for dependency in DEPENDENCIES],
            "collision_count": 1,
            "collisions": [{"normalized_path": "resource/properties/human.ext"}],
        }
        intake_path = root / "intake-report.json"
        collisions_path = root / "collisions.json"
        intake_path.write_text(json.dumps(intake), encoding="utf-8")
        collisions_path.write_text(json.dumps(collisions), encoding="utf-8")
        return intake_path, collisions_path

    def test_build_status_records_commit_safe_evidence(self) -> None:
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            intake_path, collisions_path = self._write_inputs(root)
            document = build_status(
                intake_path,
                collisions_path,
                reviewer="paulfiesel",
                reviewed_at="2026-07-27T12:30:00+00:00",
            )
            self.assertEqual([item["status"] for item in document["dependencies"]], ["ready"] * 4)
            self.assertEqual(document["review"]["collision_report"]["collision_count"], 1)
            self.assertFalse(document["review"]["combined_parent_stack_launch_required"])
            self.assertTrue(all(item["source_identity_verified"] for item in document["dependencies"]))
            serialized = json.dumps(document)
            self.assertNotIn("source_root", serialized)
            self.assertNotIn("workshop_root", serialized)
            self.assertTrue(all(item["manifest"]["file_count"] == 1 for item in document["dependencies"]))

    def test_combined_stack_launch_is_not_a_source_prerequisite(self) -> None:
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            intake_path, collisions_path = self._write_inputs(root)
            document = build_status(
                intake_path,
                collisions_path,
                reviewer="paulfiesel",
                reviewed_at="2026-07-27T12:30:00+00:00",
            )
            self.assertEqual(document["review"]["combined_parent_stack_launch_required"], False)

    def test_wrong_source_order_is_rejected(self) -> None:
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            intake_path, collisions_path = self._write_inputs(root)
            intake = json.loads(intake_path.read_text(encoding="utf-8"))
            intake["sources"] = list(reversed(intake["sources"]))
            intake_path.write_text(json.dumps(intake), encoding="utf-8")
            with self.assertRaises(ValueError):
                build_status(
                    intake_path,
                    collisions_path,
                    reviewer="paulfiesel",
                    reviewed_at="2026-07-27T12:30:00+00:00",
                )

    def test_empty_manifest_is_rejected(self) -> None:
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            intake_path, collisions_path = self._write_inputs(root)
            first_manifest = root / DEPENDENCIES[0].manifest_name
            document = json.loads(first_manifest.read_text(encoding="utf-8"))
            document["file_count"] = 0
            document["files"] = []
            first_manifest.write_text(json.dumps(document), encoding="utf-8")
            with self.assertRaises(ValueError):
                build_status(
                    intake_path,
                    collisions_path,
                    reviewer="paulfiesel",
                    reviewed_at="2026-07-27T12:30:00+00:00",
                )


if __name__ == "__main__":
    unittest.main()
