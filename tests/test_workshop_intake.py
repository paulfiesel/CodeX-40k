from __future__ import annotations

import argparse
import tempfile
import unittest
from pathlib import Path

from tools.intake_workshop_sources import (
    DEPENDENCIES,
    build_commands,
    inspect_sources,
    parse_mod_info,
    parse_override,
)


class WorkshopIntakeTests(unittest.TestCase):
    def test_dependency_order_and_workshop_ids_are_locked(self) -> None:
        self.assertEqual(
            [(dependency.key, dependency.workshop_id) for dependency in DEPENDENCIES],
            [
                ("west81", "2897299509"),
                ("codex", "3261086933"),
                ("sc-platform", "3282681270"),
                ("last-victim-40k", "3282689669"),
            ],
        )

    def test_parse_mod_info_extracts_launcher_fields(self) -> None:
        with tempfile.TemporaryDirectory() as temporary:
            path = Path(temporary) / "mod.info"
            path.write_text(
                '{mod\n{name "Example Mod"}\n{version "0.6.3"}\n{minGameVersion "1.061.0"}\n}',
                encoding="utf-8",
            )
            self.assertEqual(
                parse_mod_info(path),
                {"name": "Example Mod", "version": "0.6.3", "minGameVersion": "1.061.0"},
            )

    def test_inspect_sources_requires_mod_info_at_each_root(self) -> None:
        with tempfile.TemporaryDirectory() as temporary:
            workshop_root = Path(temporary)
            for dependency in DEPENDENCIES:
                root = workshop_root / dependency.workshop_id
                root.mkdir()
                (root / "mod.info").write_text('{mod {name "Test"}}', encoding="utf-8")

            entries, errors = inspect_sources(workshop_root, {})
            self.assertEqual(errors, [])
            self.assertEqual([entry["status"] for entry in entries], ["verified-root"] * 4)
            self.assertTrue(all(entry.get("mod_info_sha256") for entry in entries))

            (workshop_root / DEPENDENCIES[-1].workshop_id / "mod.info").unlink()
            entries, errors = inspect_sources(workshop_root, {})
            self.assertEqual(entries[-1]["status"], "missing-mod-info")
            self.assertIn("last-victim-40k", errors[0])

    def test_source_override_accepts_known_keys_only(self) -> None:
        key, path = parse_override("codex=E:/mods/Codex")
        self.assertEqual(key, "codex")
        self.assertEqual(path, Path("E:/mods/Codex"))
        with self.assertRaises(argparse.ArgumentTypeError):
            parse_override("unknown=E:/mods/Unknown")

    def test_build_commands_preserves_load_order(self) -> None:
        entries = [
            {
                "key": dependency.key,
                "source_root": f"/sources/{dependency.key}",
                "manifest": dependency.manifest_name,
            }
            for dependency in DEPENDENCIES
        ]
        commands = build_commands(Path("/repo"), Path("/audit"), entries)
        self.assertEqual(len(commands), 6)
        compare = commands[4]
        manifest_values = [compare[index + 1] for index, value in enumerate(compare) if value == "--manifest"]
        self.assertEqual(
            manifest_values,
            [
                "/audit/01-west81.json",
                "/audit/02-codex.json",
                "/audit/03-sc-platform.json",
                "/audit/04-last-victim-40k.json",
            ],
        )


if __name__ == "__main__":
    unittest.main()
