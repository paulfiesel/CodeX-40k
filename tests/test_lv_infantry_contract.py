from __future__ import annotations

import re
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
UNITS_DIR = ROOT / "resource/set/multiplayer/units"
ROSTER = UNITS_DIR / "roster_conquest.set"
LV_INF_SETTINGS = UNITS_DIR / "conquest/settings_inf_lv_compat.set"

DEFINE_RE = re.compile(r'^\s*\(define\s+"([^"]+)"', re.IGNORECASE | re.MULTILINE)


class LastVictimInfantryContractTests(unittest.TestCase):
    def test_required_lv_tier_macros_exist_once(self):
        text = LV_INF_SETTINGS.read_text(
            encoding="utf-8", errors="surrogateescape"
        )
        definitions = DEFINE_RE.findall(text)
        required = {
            "sc_unit_misc_settings_general",
            "sc_unit_tier_cx",
            "sc_inf_settings_general",
            "sc_inf_tier_cx",
            "sc_inf_tier0",
            "sc_inf_tier1",
            "sc_inf_tier2",
            "sc_inf_tier3",
            "sc_inf_tier4",
            "sc_inf_tier5",
            "sc_inf_tier6",
            "sc_inf_tier7",
            "sc_inf_tankman",
        }
        self.assertEqual(set(definitions), required)
        for name in required:
            self.assertEqual(definitions.count(name), 1, name)

    def test_lv_tier_values_preserve_reviewed_contract(self):
        text = LV_INF_SETTINGS.read_text(
            encoding="utf-8", errors="surrogateescape"
        )
        self.assertRegex(
            text,
            r'\(define\s+"sc_inf_tier0"[\s\S]*?\{cp\s+1\.5\}[\s\S]*?\{cw\s+0\.25\}',
        )
        self.assertRegex(
            text,
            r'\(define\s+"sc_inf_tier7"[\s\S]*?\{cp\s+8\.0\}[\s\S]*?\{cw\s+6\.0\}',
        )
        self.assertRegex(
            text,
            r'\(define\s+"sc_inf_tankman"[\s\S]*?\{cp\s+1\}[\s\S]*?\{cw\s+0\.5\}',
        )

    def test_lv_templates_load_before_lv_roster(self):
        roster = ROSTER.read_text(
            encoding="utf-8", errors="surrogateescape"
        )
        settings_include = '(include "conquest/settings_inf_lv_compat.set")'
        lv_roster_include = '(include "SC_DLC_LV40k.set")'
        self.assertEqual(roster.count(settings_include), 1)
        self.assertEqual(roster.count(lv_roster_include), 1)
        self.assertLess(roster.index(settings_include), roster.index(lv_roster_include))


if __name__ == "__main__":
    unittest.main()
