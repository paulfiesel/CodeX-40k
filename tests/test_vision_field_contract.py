from __future__ import annotations

import re
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
VISION_DIR = ROOT / "resource/set/vision"


class VisionFieldContractTests(unittest.TestCase):
    def test_owned_root_selects_owned_fields(self):
        root = (VISION_DIR / "vision.set").read_text(
            encoding="utf-8", errors="surrogateescape"
        )
        self.assertIn('(define "radius"', root)
        self.assertIn('{radius (* 1.8 %r)}', root)
        self.assertEqual(root.count('(include "vision_fields.inc")'), 1)
        self.assertEqual(root.count('(include "vision_generic.inc")'), 1)

    def test_glass_calls_supply_numeric_radius(self):
        fields = (VISION_DIR / "vision_fields.inc").read_text(
            encoding="utf-8", errors="surrogateescape"
        )
        calls = re.findall(r'\("glass"\s+args\s+([0-9]+(?:\.[0-9]+)?)\)', fields)
        self.assertEqual(calls, ["7", "50"])
        self.assertNotRegex(fields, r'\("glass"\s*\)')


if __name__ == "__main__":
    unittest.main()
