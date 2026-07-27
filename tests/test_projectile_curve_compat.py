from __future__ import annotations

import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
PROJECTILE_PATTERN = ROOT / "resource/set/stuff/bazooka/proj_weapon.pattern"


class ProjectileCurveCompatibilityTests(unittest.TestCase):
    def test_bazooka_projectile_uses_supported_curve(self):
        text = PROJECTILE_PATTERN.read_text(encoding="utf-8")

        self.assertIn('{curve "bullet"}', text)
        self.assertNotIn('{curve "cumulative"}', text)

    def test_west81_bazooka_contract_is_preserved(self):
        text = PROJECTILE_PATTERN.read_text(encoding="utf-8")

        self.assertIn('{calibre 50}', text)
        self.assertIn('{speed 10000}', text)
        self.assertIn('{projectileDamageThreshold 3}', text)
        self.assertIn('{projectileDamage 0}', text)
        self.assertIn('{unlimitedRangeTPC 0}', text)
        self.assertIn('{SpreadXYRatio\t1}', text)


if __name__ == "__main__":
    unittest.main()
