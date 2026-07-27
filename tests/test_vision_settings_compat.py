from __future__ import annotations

import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
VISION_SETTINGS = ROOT / "resource/set/vision/settings.set"
VISION_GENERIC = ROOT / "resource/set/vision/vision_generic.inc"


class VisionSettingsCompatibilityTests(unittest.TestCase):
    def test_mod_five_restores_the_code_x_term_registry(self):
        text = VISION_SETTINGS.read_text(encoding="utf-8")

        for token in (
            '{cannon_01a     actor  "vision_lev01a_can"}',
            '{vehicle_06',
            '{vehicle_07',
            '{vehicle_08',
            '{small_UAV',
            '{UAV',
            '{firing_silent_pb',
            '{firing_silent_rm277',
            '{firing_grenade_f1',
            '{firing_knife_knife1',
        ):
            self.assertIn(token, text)

    def test_every_top_level_vision_rule_has_a_registered_actor_term(self):
        settings = VISION_SETTINGS.read_text(encoding="utf-8")
        generic = VISION_GENERIC.read_text(encoding="utf-8")

        for token in (
            "cannon_01a",
            "vehicle_06",
            "vehicle_07",
            "stealth_plane",
            "small_UAV",
            "UAV",
            "targetable_missile",
            "targetable_impactor",
            "large_antirad_point",
        ):
            self.assertIn("{" + token, generic)
            self.assertIn("{" + token, settings)


if __name__ == "__main__":
    unittest.main()
