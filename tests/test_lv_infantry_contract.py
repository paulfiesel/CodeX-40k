from __future__ import annotations

import re
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
UNITS_DIR = ROOT / "resource/set/multiplayer/units"
ROSTER = UNITS_DIR / "roster_conquest.set"
LV_INF_SETTINGS = UNITS_DIR / "conquest/settings_inf_lv_compat.set"
LV_CARD_SETTINGS = UNITS_DIR / "conquest/settings_lv_compat.set"

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

    def test_exact_donor_card_wrapper_family_exists_once(self):
        text = LV_CARD_SETTINGS.read_text(
            encoding="utf-8", errors="surrogateescape"
        )
        definitions = DEFINE_RE.findall(text)
        required = {
            "conquest_squad",
            "conquest_squad_costed",
            "conquest_vehicle",
            "conquest_vehicle_costed",
            "conquest_squad_manual",
            "conquest_vehicle_manual",
            "conquest_squad_manual_tyr",
            "conquest_vehicle_manual_tyr",
            "sc_inf_squad_with1types_doc",
            "sc_inf_squad_with2types_doc",
            "sc_inf_squad_with3types_doc",
            "sc_inf_squad_with4types_doc",
            "sc_inf_squad_with5types_doc",
            "sc_inf_squad_with6types_doc",
            "sc_fauna_squad_with1types_doc",
            "sc_fauna_squad_with2types_doc",
            "sc_fauna_squad_with3types_doc",
            "sc_vehicle_no_crew_doc",
            "sc_vehicle_x3_no_crew_doc",
            "sc_vehicle_crew1types_doc",
            "sc_vehicle_crew3types_doc",
            "sc_vehicle_crew4types_doc",
            "sc_vehicle_crew5types_doc",
            "sc_squad_vehicle_x2_doc",
            "sc_squad_vehicle_x4_doc",
            "sc_squad_vehicle_x5_doc",
            "sc_squad_with5types_doc",
            "sc_squad_with6types_doc",
            "sc_squad_vehicle_x2_with5types_doc",
        }
        self.assertEqual(set(definitions), required)
        self.assertEqual(len(definitions), 29)
        for name in required:
            self.assertEqual(definitions.count(name), 1, name)

    def test_lv_card_wrappers_preserve_namespace_contract(self):
        text = LV_CARD_SETTINGS.read_text(
            encoding="utf-8", errors="surrogateescape"
        )
        self.assertRegex(
            text,
            r'\(define\s+"sc_inf_squad_with2types_doc"[\s\S]*?'
            r'mp/\[SC_DLC_%package\]/\[MP\]/%side_mp/%c1 '
            r'mp/\[SC_DLC_%package\]/\[MP\]/%side_mp/%c2',
        )
        self.assertRegex(
            text,
            r'\(define\s+"sc_vehicle_crew5types_doc"[\s\S]*?'
            r'cw\(6\)\s+cp\(6\)',
        )
        self.assertRegex(
            text,
            r'\(define\s+"sc_squad_vehicle_x2_with5types_doc"[\s\S]*?'
            r'%cv1e[\s\S]*?%cv2e',
        )
        self.assertRegex(
            text,
            r'\(define\s+"conquest_squad_manual_tyr"[\s\S]*?'
            r'\{squad_cost_factor\s+0\.01\}',
        )
        self.assertRegex(
            text,
            r'\(define\s+"conquest_vehicle_manual_tyr"[\s\S]*?'
            r'\{squad_cost_factor\s+0\.01\}',
        )

    def test_lv_card_parents_load_before_wrappers(self):
        text = LV_CARD_SETTINGS.read_text(
            encoding="utf-8", errors="surrogateescape"
        )
        self.assertLess(
            text.index('(define "conquest_squad"'),
            text.index('(define "sc_inf_squad_with2types_doc"'),
        )
        self.assertLess(
            text.index('(define "conquest_vehicle"'),
            text.index('(define "sc_vehicle_crew1types_doc"'),
        )

    def test_roster_loads_only_supported_local_lv_factions(self):
        roster = ROSTER.read_text(
            encoding="utf-8", errors="surrogateescape"
        )
        card_settings_include = '(include "conquest/settings_lv_compat.set")'
        infantry_settings_include = '(include "conquest/settings_inf_lv_compat.set")'
        supported_includes = [
            '(include "conquest/inf_ork.set")',
            '(include "conquest/inf_tyr.set")',
            '(include "conquest/units_ork.set")',
            '(include "conquest/units_tyr.set")',
        ]

        self.assertEqual(roster.count(card_settings_include), 1)
        self.assertEqual(roster.count(infantry_settings_include), 1)
        for include in supported_includes:
            self.assertGreaterEqual(roster.count(include), 1, include)
            self.assertLess(roster.index(card_settings_include), roster.index(include))
            self.assertLess(roster.index(infantry_settings_include), roster.index(include))

        self.assertEqual(roster.count('(include "conquest/units_ork.set")'), 1)
        self.assertEqual(roster.count('(include "conquest/units_tyr.set")'), 1)
        self.assertNotIn('(include "SC_DLC_LV40k.set")', roster)
        self.assertNotIn('SC_DLC_LV40k/inf_ork.inc', roster)
        self.assertNotIn('SC_DLC_LV40k/inf_tyr.inc', roster)
        self.assertNotIn('SC_DLC_LV40k/units_ork_evz.inc', roster)
        self.assertNotIn('SC_DLC_LV40k/units_tyr_lev.inc', roster)


if __name__ == "__main__":
    unittest.main()
