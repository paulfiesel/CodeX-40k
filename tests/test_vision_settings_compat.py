from __future__ import annotations

import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
VISION_SETTINGS = ROOT / "resource/set/vision/settings.set"
VISION_GENERIC = ROOT / "resource/set/vision/vision_generic.inc"


class VisionSettingsCompatibilityTests(unittest.TestCase):
    def test_mod_five_restores_the_code_x_term_registry(self):
        text = VISION_SETTINGS.read_text(encoding="utf-8", errors="surrogateescape")
        for token in (
            "cannon_01a",
            "vehicle_06",
            "vehicle_07",
            "vehicle_08",
            "small_UAV",
            "UAV",
            "firing_silent_pb",
            "firing_silent_rm277",
            "firing_grenade_f1",
            "firing_knife_knife1",
        ):
            self.assertIn("{" + token, text)

    def test_sc_platform_trooper_target_categories_are_registered(self):
        text = VISION_SETTINGS.read_text(encoding="utf-8", errors="surrogateescape")
        for size in range(1, 33):
            for suffix in ("", "_s", "_ss"):
                token = f"sc_vision_troopers_size{size}{suffix}"
                declaration = f'{{{token} actor "{token}"}}'
                self.assertEqual(text.count(declaration), 1, token)

    def test_every_modern_actor_family_used_by_generic_rules_is_registered(self):
        settings = VISION_SETTINGS.read_text(encoding="utf-8", errors="surrogateescape")
        generic = VISION_GENERIC.read_text(encoding="utf-8", errors="surrogateescape")
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
