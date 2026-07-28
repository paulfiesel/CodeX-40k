from __future__ import annotations

import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
SOUND_DEFINES = ROOT / "resource/set/interaction_entity/tank/sound-defines.inc"


class TankSoundCompatibilityTests(unittest.TestCase):
    def test_m4a4_legacy_family_is_defined_once_and_reuses_the_m4_block(self):
        text = SOUND_DEFINES.read_text(encoding="utf-8")

        self.assertIn('(define "m4_sherman_sound"', text)
        self.assertEqual(text.count('(define "m4a4_sherman_sound"'), 1)
        self.assertIn(
            '(define "m4a4_sherman_sound"\n\t("m4_sherman_sound")\n)',
            text,
        )


if __name__ == "__main__":
    unittest.main()
