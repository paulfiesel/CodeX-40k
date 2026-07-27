from __future__ import annotations

import re
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
BALLISTICS = ROOT / "resource/set/ballistics.set"
PROJECTILE_PATTERN = ROOT / "resource/set/stuff/bazooka/proj_weapon.pattern"


class ProjectileCurveCompatibilityTests(unittest.TestCase):
    def test_modern_ballistics_registry_is_complete(self):
        text = BALLISTICS.read_text(encoding="utf-8")
        curves = set(re.findall(r'\{curve\s+"([^"]+)"', text))

        self.assertEqual(
            curves,
            {
                "bullet",
                "bullet_sniper",
                "autorifle",
                "assaultrifle",
                "ngsw_rm277",
                "bullet_mg",
                "bullet_hmg",
                "bullet_smg",
                "bullet_pistol",
                "shotgun",
                "gun_autocannon",
                "gun_std",
                "cumulative",
                "gun_heavy",
            },
        )

    def test_last_victim_ballistics_are_retained(self):
        text = BALLISTICS.read_text(encoding="utf-8")

        self.assertIn(
            '(include "/set/SC_ballistics/SC_DLC_LV40k_ballistics.inc")',
            text,
        )

    def test_west81_bazooka_contract_keeps_its_registered_curve(self):
        registry = BALLISTICS.read_text(encoding="utf-8")
        pattern = PROJECTILE_PATTERN.read_text(encoding="utf-8")

        self.assertIn('{curve "cumulative"}', registry)
        self.assertIn('{curve "cumulative"}', pattern)
        self.assertIn('{calibre 50}', pattern)
        self.assertIn('{speed 10000}', pattern)
        self.assertIn('{projectileDamageThreshold 3}', pattern)
        self.assertIn('{projectileDamage 0}', pattern)
        self.assertIn('{unlimitedRangeTPC 0}', pattern)
        self.assertIn('{SpreadXYRatio\t1}', pattern)


if __name__ == "__main__":
    unittest.main()
