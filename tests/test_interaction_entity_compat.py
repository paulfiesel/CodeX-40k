from __future__ import annotations

import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
DUMMY = ROOT / "resource/set/interaction_entity/dummy.inc"


class InteractionEntityCompatibilityTests(unittest.TestCase):
    def test_codex_dummy_registry_is_complete_and_does_not_require_root_spawn_define(self):
        text = DUMMY.read_text(encoding="utf-8")

        self.assertGreater(len(text.splitlines()), 3000)
        self.assertNotIn('\t\t("spawn")\n', text)
        self.assertIn(
            '{on crew in\n\t\t("para_tags_remove")\n\t\t{bone show "para"}',
            text,
        )
        self.assertIn('(define "para_tags_remove"', text)


if __name__ == "__main__":
    unittest.main()
