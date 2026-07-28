from __future__ import annotations

import re
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
WEAPONS_DEFINES = ROOT / "resource/set/interaction_entity/weapons-defines.inc"
REPORT = ROOT / "docs/runtime/weapons-defines-compat.txt"


class WeaponDefinitionCompatibilityTests(unittest.TestCase):
    def test_legacy_cannon_sound_families_are_restored_without_duplicates(self):
        text = WEAPONS_DEFINES.read_text(encoding="utf-8")
        names = re.findall(r'^\s*\(define\s+"([^"]+)"', text, re.MULTILINE)

        self.assertEqual(len(names), len(set(names)))
        self.assertEqual(names.count("MG08"), 1)
        self.assertEqual(names.count("Vickers_GO"), 1)
        self.assertIn('weapon/shot/smallarms/s3/d2/GER/MG08/', text)
        self.assertIn('weapon/shot/smallarms/s3/d3/GER/MG08/', text)
        self.assertIn('weapon/shot/smallarms/s3/d2/ENG/Vickers_GO/', text)
        self.assertIn('weapon/shot/smallarms/s3/d3/ENG/Vickers_GO/', text)

    def test_merge_report_records_the_exact_restored_definition_set(self):
        report = REPORT.read_text(encoding="utf-8")
        self.assertIn("Missing definitions restored: 2", report)
        self.assertRegex(report, r'(?m)^MG08$')
        self.assertRegex(report, r'(?m)^Vickers_GO$')


if __name__ == "__main__":
    unittest.main()
