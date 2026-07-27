from __future__ import annotations

import hashlib
import json
import tempfile
import unittest
from pathlib import Path
from zipfile import ZipFile

from tools.export_source_review_slice import build_slice, normalized_profiles


def digest(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


class SourceReviewSliceTests(unittest.TestCase):
    def _fixture(self, temporary: Path) -> Path:
        audit = temporary / ".audit" / "sources"
        audit.mkdir(parents=True)
        sources = []
        load_order = []

        files_by_key = {
            "west81": {
                "mod.info": b'{mod {name "West-81"}}',
                "resource/set/dynamic_campaign/values.set": b"{values west81}",
                "resource/set/interaction_entity/entity.set": b'(include "vehicle.inc")',
                "resource/entity.pak": b"\x00\x01\x02",
                "resource/entity/misc.def": b'{skin "_staging_sc_h_skin_test"}',
                "resource/other.txt": b"unrelated",
            },
            "codex": {
                "mod.info": b'{mod {name "Code-X"}}',
                "resource/properties/human.ext": b"{extension human}",
                "resource/script/multiplayer/modes/utility.lua": b"function TrySpawnUnit() end",
                "resource/script/multiplayer/modes/conquest.lua": b"BotApi.Conquest = {}",
            },
            "sc-platform": {
                "mod.info": b'{mod {name "Platform"}}',
                "resource/entity.pak": b"\x04\x05\x06",
            },
            "last-victim-40k": {
                "mod.info": b'{mod {name "Last Victim"}}',
                "resource/entity/skins/staging.def": b'{skin "_staging_sc_h_skin_test"}',
                "resource/set/multiplayer/armies/imp.set": b"{army imp}",
            },
        }

        for position, (key, files) in enumerate(files_by_key.items(), start=1):
            root = temporary / key
            root.mkdir()
            manifest_entries = []
            for relative, data in files.items():
                path = root / relative
                path.parent.mkdir(parents=True, exist_ok=True)
                path.write_bytes(data)
                kind = "binary" if relative.endswith(".pak") else "text"
                manifest_entries.append(
                    {
                        "path": relative,
                        "normalized_path": relative.casefold(),
                        "size": len(data),
                        "sha256": digest(data),
                        "extension": Path(relative).suffix.casefold(),
                        "kind": kind,
                    }
                )
            manifest_name = f"{position:02d}-{key}.json"
            (audit / manifest_name).write_text(
                json.dumps(
                    {
                        "name": key,
                        "root": str(root),
                        "file_count": len(manifest_entries),
                        "files": manifest_entries,
                    }
                ),
                encoding="utf-8",
            )
            sources.append(
                {
                    "load_position": position,
                    "key": key,
                    "source_root": str(root),
                    "manifest": manifest_name,
                    "status": "verified-root",
                    "mod_info_sha256": digest(files["mod.info"]),
                }
            )
            load_order.append(key)

        intake = audit / "intake-report.json"
        intake.write_text(
            json.dumps(
                {
                    "schema_version": 1,
                    "load_order": load_order,
                    "sources": sources,
                    "errors": [],
                }
            ),
            encoding="utf-8",
        )
        return intake

    def test_default_profiles_cover_campaign_entity_and_rig_files(self) -> None:
        with tempfile.TemporaryDirectory() as raw:
            temporary = Path(raw)
            intake = self._fixture(temporary)
            output = temporary / "slice.zip"
            index = build_slice(intake, output)

            self.assertEqual(
                index["profiles"],
                ["dynamic-conquest", "entity-runtime", "human-rig"],
            )
            self.assertEqual(index["included_text_files"], 8)
            self.assertEqual(index["skipped_binary_path_matches"], 2)
            with ZipFile(output) as archive:
                names = set(archive.namelist())
                self.assertIn(
                    "files/01-west81/resource/set/dynamic_campaign/values.set",
                    names,
                )
                self.assertIn(
                    "files/01-west81/resource/set/interaction_entity/entity.set",
                    names,
                )
                self.assertIn(
                    "files/02-codex/resource/properties/human.ext",
                    names,
                )
                self.assertIn(
                    "files/02-codex/resource/script/multiplayer/modes/conquest.lua",
                    names,
                )
                self.assertIn(
                    "files/04-last-victim-40k/resource/set/multiplayer/armies/imp.set",
                    names,
                )
                self.assertNotIn("files/01-west81/resource/entity.pak", names)
                self.assertNotIn("files/01-west81/resource/other.txt", names)

                report = json.loads(archive.read("reports/intake-report.json"))
                self.assertTrue(all("source_root" not in source for source in report["sources"]))
                west_manifest = json.loads(archive.read("manifests/01-west81.json"))
                omitted = {
                    entry["normalized_path"]: entry
                    for entry in west_manifest["omitted_files"]
                }
                self.assertEqual(omitted["resource/entity.pak"]["reason"], "binary")
                manifest_text = archive.read("manifests/01-west81.json").decode("utf-8")
                self.assertNotIn(str(temporary), manifest_text)

    def test_dynamic_conquest_profile_excludes_entity_and_rig_only_files(self) -> None:
        with tempfile.TemporaryDirectory() as raw:
            temporary = Path(raw)
            intake = self._fixture(temporary)
            output = temporary / "conquest.zip"
            index = build_slice(intake, output, profiles=["dynamic-conquest"])
            self.assertEqual(index["profiles"], ["dynamic-conquest"])
            with ZipFile(output) as archive:
                names = set(archive.namelist())
                self.assertIn(
                    "files/01-west81/resource/set/dynamic_campaign/values.set",
                    names,
                )
                self.assertIn(
                    "files/02-codex/resource/script/multiplayer/modes/conquest.lua",
                    names,
                )
                self.assertNotIn(
                    "files/01-west81/resource/set/interaction_entity/entity.set",
                    names,
                )
                self.assertNotIn(
                    "files/02-codex/resource/properties/human.ext",
                    names,
                )

    def test_entity_runtime_profile_records_binary_package_without_copying_it(self) -> None:
        with tempfile.TemporaryDirectory() as raw:
            temporary = Path(raw)
            intake = self._fixture(temporary)
            output = temporary / "entity.zip"
            index = build_slice(intake, output, profiles=["entity-runtime"])
            self.assertEqual(index["skipped_binary_path_matches"], 2)
            with ZipFile(output) as archive:
                manifest = json.loads(archive.read("manifests/03-sc-platform.json"))
                self.assertEqual(manifest["omitted_file_count"], 1)
                self.assertEqual(
                    manifest["omitted_files"][0]["normalized_path"],
                    "resource/entity.pak",
                )

    def test_output_is_deterministic(self) -> None:
        with tempfile.TemporaryDirectory() as raw:
            temporary = Path(raw)
            intake = self._fixture(temporary)
            first = temporary / "first.zip"
            second = temporary / "second.zip"
            build_slice(intake, first)
            build_slice(intake, second)
            self.assertEqual(first.read_bytes(), second.read_bytes())

    def test_stale_manifest_hash_is_rejected(self) -> None:
        with tempfile.TemporaryDirectory() as raw:
            temporary = Path(raw)
            intake = self._fixture(temporary)
            target = (
                temporary
                / "west81"
                / "resource"
                / "set"
                / "dynamic_campaign"
                / "values.set"
            )
            target.write_text("changed", encoding="utf-8")
            with self.assertRaises(RuntimeError):
                build_slice(
                    intake,
                    temporary / "slice.zip",
                    profiles=["dynamic-conquest"],
                )

    def test_unknown_profile_is_rejected(self) -> None:
        with self.assertRaises(ValueError):
            normalized_profiles(["lobby"])


if __name__ == "__main__":
    unittest.main()
