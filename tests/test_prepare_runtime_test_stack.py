from __future__ import annotations

import tempfile
import unittest
from pathlib import Path

from tools.prepare_runtime_test_stack import (
    deploy_runtime_overlay,
    patch_mod_info,
    restore_mod_info,
    restore_runtime_overlay,
)


class PrepareRuntimeTestStackTests(unittest.TestCase):
    def test_patch_is_idempotent_and_restorable(self) -> None:
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            path = root / "mod.info"
            original = (
                '{mod\n'
                '\t{name "[GOH] SC Modding Plataform - v0.6.3"}\n'
                '\t{minGameVersion "1.060.0"}\n'
                '\t{maxGameVersion "1.063.0"}\n'
                '}\n'
            )
            path.write_text(original, encoding="utf-8")

            message = patch_mod_info(path, "SC Modding Platform", "1.064.0")
            self.assertIn("1.063.0 -> 1.064.0", message)
            self.assertIn('{maxGameVersion "1.064.0"}', path.read_text(encoding="utf-8"))

            backup = root / "mod.info.cx40k-backup"
            self.assertTrue(backup.is_file())
            self.assertEqual(backup.read_text(encoding="utf-8"), original)

            second = patch_mod_info(path, "SC Modding Platform", "1.064.0")
            self.assertIn("already prepared", second)
            self.assertEqual(backup.read_text(encoding="utf-8"), original)

            restored = restore_mod_info(path)
            self.assertIn("restored", restored)
            self.assertEqual(path.read_text(encoding="utf-8"), original)

    def test_missing_max_version_is_rejected(self) -> None:
        with tempfile.TemporaryDirectory() as temporary:
            path = Path(temporary) / "mod.info"
            path.write_text('{mod {name "SC Last Victim 40K"}}', encoding="utf-8")
            with self.assertRaises(ValueError):
                patch_mod_info(path, "SC Last Victim 40K", "1.064.0")

    def test_deploy_overlay_is_exact_hash_verified_and_restorable(self) -> None:
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            source = root / "checkout"
            target = root / "3696721120"

            (source / "resource/properties").mkdir(parents=True)
            (source / "localizations/default").mkdir(parents=True)
            (target / "resource/properties").mkdir(parents=True)
            (target / "localizations/default").mkdir(parents=True)

            (source / "mod.info").write_text('{mod {name "CX40K DEV"}}', encoding="utf-8")
            (source / "resource/properties/armor.ext").write_text("new armor", encoding="utf-8")
            (source / "resource/properties/abm.inc").write_text("new wrapper", encoding="utf-8")
            (source / "resource/properties/abm_codex_compat.inc").write_text(
                "new sidecar", encoding="utf-8"
            )
            (source / "localizations/default/new.pot").write_text("new loc", encoding="utf-8")

            (target / "mod.info").write_text('{mod {name "OLD"}}', encoding="utf-8")
            (target / "resource/properties/old.ext").write_text("old resource", encoding="utf-8")
            (target / "localizations/default/old.pot").write_text("old loc", encoding="utf-8")

            result = deploy_runtime_overlay(source, target)
            self.assertIn("deployed exact runtime overlay", result)
            self.assertFalse((target / "resource/properties/old.ext").exists())
            self.assertFalse((target / "localizations/default/old.pot").exists())
            self.assertEqual(
                (target / "resource/properties/armor.ext").read_text(encoding="utf-8"),
                "new armor",
            )
            self.assertTrue((target / ".cx40k-runtime-deployment.txt").is_file())

            second = deploy_runtime_overlay(source, target)
            self.assertIn("deployed exact runtime overlay", second)
            self.assertEqual(
                (target / ".cx40k-runtime-backup/resource/properties/old.ext").read_text(
                    encoding="utf-8"
                ),
                "old resource",
            )

            restored = restore_runtime_overlay(target)
            self.assertIn("restored runtime overlay backup", restored)
            self.assertEqual(
                (target / "resource/properties/old.ext").read_text(encoding="utf-8"),
                "old resource",
            )
            self.assertEqual((target / "mod.info").read_text(encoding="utf-8"), '{mod {name "OLD"}}')
            self.assertFalse((target / ".cx40k-runtime-deployment.txt").exists())


if __name__ == "__main__":
    unittest.main()
