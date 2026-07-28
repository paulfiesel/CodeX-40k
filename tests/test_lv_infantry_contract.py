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

    def test_roster_loads_only_supported_lv_factions(self):
        roster = ROSTER.read_text(
            encoding="utf-8", errors="surrogateescape"
        )
        settings_include = '(include "conquest/settings_inf_lv_compat.set")'
        supported_includes = [
            '(include "SC_DLC_LV40k/inf_ork.inc")',
            '(include "SC_DLC_LV40k/inf_tyr.inc")',
            '(include "SC_DLC_LV40k/units_ork_evz.inc")',
            '(include "SC_DLC_LV40k/units_tyr_lev.inc")',
        ]

        self.assertEqual(roster.count(settings_include), 1)
        for include in supported_includes:
            self.assertEqual(roster.count(include), 1, include)
            self.assertLess(roster.index(settings_include), roster.index(include))

        self.assertNotIn('(include "SC_DLC_LV40k.set")', roster)
        for unsupported_family in (
            "inf_sms.inc",
            "inf_igc.inc",
            "inf_igt.inc",
            "inf_eld.inc",
            "inf_csm.inc",
            "inf_dch.inc",
            "units_sms_ums.inc",
            "units_igc_cad.inc",
            "units_igt_ldm.inc",
            "units_eld_bie.inc",
            "units_csm_ths.inc",
            "units_dch_und.inc",
        ):
            self.assertNotIn(unsupported_family, roster)


if __name__ == "__main__":
    unittest.main()
