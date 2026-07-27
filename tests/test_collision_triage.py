from __future__ import annotations

import unittest

from tools.triage_collisions import classify_path, render_markdown, triage_report


class CollisionTriageTests(unittest.TestCase):
    def test_dynamic_campaign_registry_is_critical(self) -> None:
        result = classify_path("resource/set/dynamic_campaign/unit_research_prc.set")
        self.assertEqual(result["area"], "dynamic-conquest-registry")
        self.assertEqual(result["priority"], "critical")

    def test_conquest_mode_script_is_critical(self) -> None:
        result = classify_path("resource/script/multiplayer/modes/conquest.lua")
        self.assertEqual(result["area"], "dynamic-conquest-script")
        self.assertEqual(result["priority"], "critical")

    def test_conquest_unit_script_is_critical(self) -> None:
        result = classify_path("resource/script/multiplayer/units/prc/conquest.prc.lua")
        self.assertEqual(result["area"], "dynamic-conquest-units")
        self.assertEqual(result["priority"], "critical")

    def test_human_ext_is_critical_human_rig(self) -> None:
        result = classify_path("resource/properties/human.ext")
        self.assertEqual(result["area"], "human-rig")
        self.assertEqual(result["priority"], "critical")

    def test_unrelated_multiplayer_registry_is_deferred_to_high(self) -> None:
        result = classify_path("resource/set/multiplayer/units/common.set")
        self.assertEqual(result["area"], "multiplayer-registry")
        self.assertEqual(result["priority"], "high")

    def test_localization_is_medium_priority(self) -> None:
        result = classify_path("localizations/default/interface/text/common.pot")
        self.assertEqual(result["area"], "localization")
        self.assertEqual(result["priority"], "medium")

    def test_report_orders_conquest_critical_before_lower_priorities(self) -> None:
        source = {
            "load_order": ["one", "two"],
            "collisions": [
                {
                    "normalized_path": "localizations/default/test.pot",
                    "effective_winner": "two",
                },
                {
                    "normalized_path": "resource/set/dynamic_campaign/values.set",
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
        self.assertIn("resource/set/dynamic_campaign/values.set", markdown)
        self.assertIn("Ordered review queue", markdown)


if __name__ == "__main__":
    unittest.main()
