from __future__ import annotations

import tempfile
import unittest
from pathlib import Path

from tools.prepare_runtime_test_stack import patch_mod_info, restore_mod_info


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


if __name__ == "__main__":
    unittest.main()
