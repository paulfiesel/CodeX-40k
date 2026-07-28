from __future__ import annotations

import re
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
VISION_WRAPPER = ROOT / "resource/set/vision/vision_fields.inc"
VISION_FIELDS = ROOT / "resource/set/vision/vision_fields_codex_compat.inc"


class VisionFieldContractTests(unittest.TestCase):
    def test_wrapper_preserves_codex_fields_and_adds_lv40k_irregular_human(self):
        wrapper = VISION_WRAPPER.read_text(
            encoding="utf-8", errors="surrogateescape"
        )
        self.assertIn('(include "vision_fields_codex_compat.inc")', wrapper)
        self.assertIn('{"human_irregular"', wrapper)
        self.assertIn('("vision_human")', wrapper)

    def test_glass_calls_supply_numeric_radius(self):
        fields = VISION_FIELDS.read_text(
            encoding="utf-8", errors="surrogateescape"
        )
        calls = re.findall(r'\("glass"\s+args\s+([0-9]+(?:\.[0-9]+)?)\)', fields)
        self.assertEqual(calls, ["7", "50"])
        self.assertNotRegex(fields, r'\("glass"\s*\)')
        self.assertNotIn("%0", fields)

    def test_field_file_contains_expected_code_x_families(self):
        fields = VISION_FIELDS.read_text(
            encoding="utf-8", errors="surrogateescape"
        )
        for token in (
            '{"human"',
            '{"tank_gunner_optic_IR_3g"',
            '{"aircraft_optic_IR_4g"',
            '{"radar_pnsr5m"',
            '{"antiship_missile_close"',
        ):
            self.assertIn(token, fields)

    def test_owned_field_file_is_not_the_sc_packed_consumer(self):
        fields = VISION_FIELDS.read_text(
            encoding="utf-8", errors="surrogateescape"
        )
        self.assertNotIn("sc_fauna_spot_props", fields)
        self.assertNotIn("sc_vision_troopers_size", fields)


if __name__ == "__main__":
    unittest.main()
