from __future__ import annotations

import re
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
VISION_GENERIC = ROOT / "resource/set/vision/vision_generic.inc"


class VisionPropertyCompatibilityTests(unittest.TestCase):
    def test_obsolete_weapon_specific_vision_properties_are_removed(self):
        text = VISION_GENERIC.read_text(encoding="utf-8")

        self.assertNotRegex(text, r"\{firing_(?:silent|silencer|grenade|knife)_[A-Za-z0-9_]+")

    def test_shared_modern_optic_contract_is_preserved(self):
        text = VISION_GENERIC.read_text(encoding="utf-8")

        for token in (
            '(include "new_vision.inc")',
            '(define "human_in_IR_and_optic_spectre"',
            '(define "vision_new_optic_human_cannon"',
            '(define "vision_optic_modern_1gen"',
            '(define "vision_optic_modern_4gen"',
            '{"vision_optic"',
            '(define "sensor_acoustic"',
        ):
            self.assertIn(token, text)

    def test_human_optics_and_acoustic_sensor_use_generic_firing_state(self):
        text = VISION_GENERIC.read_text(encoding="utf-8")

        self.assertIn("{firing (* %human_ir (* %optic 1))}", text)
        self.assertRegex(
            text,
            re.compile(
                r'\(define "sensor_acoustic".*?\{human 0\.001\s*\{firing 1\}',
                re.DOTALL,
            ),
        )


if __name__ == "__main__":
    unittest.main()
