from __future__ import annotations

import re
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
HUMAN_CAMERA = ROOT / "resource/set/third_person/human.inc"


class ThirdPersonCompatibilityTests(unittest.TestCase):
    def test_human_default_exposes_all_weapon_zoom_levels(self):
        text = HUMAN_CAMERA.read_text(encoding="utf-8")

        self.assertIn('{"default"', text)
        self.assertIn("{defaultLevel\t0", text)

        levels = re.findall(r"\{level\s*;(\d+)", text)
        self.assertEqual(levels, ["0", "1", "2"])
        self.assertIn('{camera\t\t"human_zoom1.5"}', text)

    def test_level_two_retains_scoped_weapon_behavior(self):
        text = HUMAN_CAMERA.read_text(encoding="utf-8")
        level_two = text.split("{level ;2", 1)[1]

        self.assertIn("{zoom}", level_two)
        self.assertIn("{ManualAccuracyZoom}", level_two)
        self.assertIn("{drop_zoom_on_reload}", level_two)


if __name__ == "__main__":
    unittest.main()
