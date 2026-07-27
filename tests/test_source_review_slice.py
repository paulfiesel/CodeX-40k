from __future__ import annotations

import hashlib
import json
import tempfile
import unittest
from pathlib import Path
from zipfile import ZipFile

from tools.export_source_review_slice import build_slice


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
                "resource/set/multiplayer/armies/usa.set": b"{army usa}",
                "resource/entity/misc.def": b'{skin "_staging_sc_h_skin_test"}',
                "resource/entity/model.mdl": b"\x00\x01\x02",
                "resource/other.txt": b"unrelated",
            },
            "codex": {
                "mod.info": b'{mod {name "Code-X"}}',
                "resource/properties/human.ext": b"{extension human}",
                "resource/script/multiplayer/modes/utility.lua": b"function TrySpawnUnit() end",
            },
            "sc-platform": {
                "mod.info": b'{mod {name "Platform"}}',
            },
            "last-victim-40k": {
                "mod.info": b'{mod {name "Last Victim"}}',
                "resource/entity/skins/staging.def": b'{skin "_staging_sc_h_skin_test"}',
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
                kind = "binary" if relative.endswith(".mdl") else "text"
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

    def test_combined_profiles_include_unique_registry_and_rig_files(self) -> None:
        with tempfile.TemporaryDirectory() as raw:
            temporary = Path(raw)
            intake = self._fixture(temporary)
            output = temporary / "slice.zip"
            index = build_slice(intake, output)

            self.assertEqual(index["included_text_files"], 5)
            with ZipFile(output) as archive:
                names = set(archive.namelist())
                self.assertIn(
                    "files/01-west81/resource/set/multiplayer/armies/usa.set",
                    names,
                )
                self.assertIn(
                    "files/01-west81/resource/entity/misc.def",
                    names,
                )
                self.assertIn(
                    "files/02-codex/resource/properties/human.ext",
                    names,
                )
                self.assertIn(
                    "files/02-codex/resource/script/multiplayer/modes/utility.lua",
                    names,
                )
                self.assertIn(
                    "files/04-last-victim-40k/resource/entity/skins/staging.def",
                    names,
                )
                self.assertNotIn("files/01-west81/resource/other.txt", names)
                report = json.loads(archive.read("reports/intake-report.json"))
                self.assertTrue(all("source_root" not in source for source in report["sources"]))
                manifests = archive.read("manifests/01-west81.json").decode("utf-8")
                self.assertNotIn(str(temporary), manifests)

    def test_lobby_profile_does_not_include_rig_only_files(self) -> None:
        with tempfile.TemporaryDirectory() as raw:
            temporary = Path(raw)
            intake = self._fixture(temporary)
            output = temporary / "lobby.zip"
            index = build_slice(intake, output, profiles=["lobby"])
            self.assertEqual(index["profiles"], ["lobby"])
            with ZipFile(output) as archive:
                names = set(archive.namelist())
                self.assertIn(
                    "files/01-west81/resource/set/multiplayer/armies/usa.set",
                    names,
                )
                self.assertNotIn(
                    "files/02-codex/resource/properties/human.ext",
                    names,
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
            target = temporary / "west81" / "resource" / "set" / "multiplayer" / "armies" / "usa.set"
            target.write_text("changed", encoding="utf-8")
            with self.assertRaises(RuntimeError):
                build_slice(intake, temporary / "slice.zip", profiles=["lobby"])


if __name__ == "__main__":
    unittest.main()
