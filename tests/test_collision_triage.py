from __future__ import annotations

import unittest

from tools.triage_collisions import classify_path, render_markdown, triage_report


class CollisionTriageTests(unittest.TestCase):
    def test_human_ext_is_critical_human_rig(self) -> None:
        result = classify_path("resource/properties/human.ext")
        self.assertEqual(result["area"], "human-rig")
        self.assertEqual(result["priority"], "critical")

    def test_multiplayer_registry_is_critical(self) -> None:
        result = classify_path("resource/set/multiplayer/units/common.set")
        self.assertEqual(result["area"], "multiplayer-registry")
        self.assertEqual(result["priority"], "critical")

    def test_multiplayer_script_is_high_priority(self) -> None:
        result = classify_path("resource/script/multiplayer/modes/bot.main.lua")
        self.assertEqual(result["area"], "multiplayer-script")
        self.assertEqual(result["priority"], "high")

    def test_localization_is_medium_priority(self) -> None:
        result = classify_path("localizations/default/interface/text/common.pot")
        self.assertEqual(result["area"], "localization")
        self.assertEqual(result["priority"], "medium")

    def test_report_orders_critical_before_lower_priorities(self) -> None:
        source = {
            "load_order": ["one", "two"],
            "collisions": [
                {
                    "normalized_path": "localizations/default/test.pot",
                    "effective_winner": "two",
                },
                {
                    "normalized_path": "resource/properties/human.ext",
                    "effective_winner": "two",
                },
                {
                    "normalized_path": "resource/script/multiplayer/modes/test.lua",
                    "effective_winner": "two",
                },
            ],
        }
        report = triage_report(source)
        priorities = [entry["triage"]["priority"] for entry in report["collisions"]]
        self.assertEqual(priorities, ["critical", "high", "medium"])
        self.assertEqual(report["priority_counts"], {"critical": 1, "high": 1, "medium": 1})
        markdown = render_markdown(report)
        self.assertIn("resource/properties/human.ext", markdown)
        self.assertIn("Ordered review queue", markdown)


if __name__ == "__main__":
    unittest.main()
