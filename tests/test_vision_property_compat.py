from __future__ import annotations

import re
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
VISION_DIR = ROOT / "resource/set/vision"
VISION_GENERIC = VISION_DIR / "vision_generic.inc"
VISION_SETTINGS = VISION_DIR / "settings.set"
NEW_VISION = VISION_DIR / "new_vision.inc"

DEFINE_RE = re.compile(r'^\s*\(define\s+"([^"]+)"', re.MULTILINE)
CALL_RE = re.compile(r'\("([A-Za-z0-9_+.-]+)"(?:\s|\))')


class VisionPropertyCompatibilityTests(unittest.TestCase):
    def test_matched_code_x_files_are_owned_together(self):
        for path in (VISION_GENERIC, VISION_SETTINGS, NEW_VISION):
            self.assertTrue(path.is_file(), path)
            self.assertGreater(path.stat().st_size, 100)

    def test_reusable_vision_contracts_remain_defines(self):
        text = VISION_GENERIC.read_text(encoding="utf-8", errors="surrogateescape")
        for name in (
            "vision_optic",
            "vision_optic_driver",
            "vision_new_optic_human_cannon",
            "vision_new_optic_vehicle",
            "small_UAV_in_rad_spectre",
            "sensor_acoustic",
        ):
            self.assertEqual(text.count(f'(define "{name}"'), 1, name)

        self.assertNotIn('{"vision_optic"', text)
        self.assertIn('(define "vision_optic"', text)
        self.assertIn('("vision_optic" args 70)', text)

    def test_all_vision_named_macro_calls_resolve_inside_owned_family(self):
        combined = "\n".join(
            path.read_text(encoding="utf-8", errors="surrogateescape")
            for path in (VISION_GENERIC, NEW_VISION)
        )
        definitions = set(DEFINE_RE.findall(combined))
        calls = {
            name for name in CALL_RE.findall(combined)
            if name.startswith("vision_")
        }
        self.assertEqual(sorted(calls - definitions), [])

    def test_radar_helper_family_is_complete(self):
        text = VISION_GENERIC.read_text(encoding="utf-8", errors="surrogateescape")
        for name in (
            "stealth_plane_in_rad_spectre_short",
            "stealth_plane_in_rad_spectre",
            "small_UAV_in_rad_spectre",
            "aviation_in_rad_spectre",
        ):
            self.assertEqual(text.count(f'(define "{name}"'), 1, name)


if __name__ == "__main__":
    unittest.main()
