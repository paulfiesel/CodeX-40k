from __future__ import annotations

import copy
import unittest

from tools.validate_runtime_test_record import validate


def sample_record() -> dict:
    commit = "a" * 40
    return {
        "schema_version": 2,
        "status": "template",
        "checkpoint": "campaign-setup",
        "repository_commit": commit,
        "tested_at": "2026-07-27T12:40:00+00:00",
        "tester": "paulfiesel",
        "load_order": [
            {
                "position": 1,
                "key": "west81",
                "workshop_id": "2897299509",
                "version": "active",
                "mod_info_sha256": "1" * 64,
            },
            {
                "position": 2,
                "key": "codex",
                "workshop_id": "3261086933",
                "version": "active",
                "mod_info_sha256": "2" * 64,
            },
            {
                "position": 3,
                "key": "sc-platform",
                "workshop_id": "3629384797",
                "version": "0.6.3",
                "mod_info_sha256": "3" * 64,
            },
            {
                "position": 4,
                "key": "last-victim-40k",
                "workshop_id": "3629381350",
                "version": "0.6.3",
                "mod_info_sha256": "4" * 64,
            },
            {
                "position": 5,
                "key": "compatibility",
                "repository_commit": commit,
            },
        ],
        "environment": {
            "game_version": "current",
            "map": "campaign setup",
            "mode": "dynamic_conquest",
            "difficulty": "normal",
            "player_side": "modern",
        },
        "factions": {"modern": "nato", "warhammer": "imperium"},
        "steps": ["Create the campaign", "Save and reload it"],
        "checks": {
            "launcher": False,
            "campaign_setup": False,
            "research_tree": False,
            "reinforcement_list": False,
            "reinforcement_purchase": False,
            "deployment": False,
            "human_rig": False,
            "combat": False,
            "ai_purchase": False,
            "battle_completion": False,
            "campaign_progression": False,
            "save_reload": False,
            "no_crash": False,
        },
        "log": {"path": "game.log", "sha256": "5" * 64, "excerpt": ""},
        "outcome": "not-run",
        "notes": "",
    }


class RuntimeTestRecordTests(unittest.TestCase):
    def test_template_shape_is_valid(self) -> None:
        self.assertEqual(validate(sample_record()), [])

    def test_completed_campaign_setup_record_can_pass(self) -> None:
        record = sample_record()
        record["status"] = "completed"
        record["outcome"] = "pass"
        record["checks"].update(
            {
                "launcher": True,
                "campaign_setup": True,
                "research_tree": True,
                "reinforcement_list": True,
                "save_reload": True,
                "no_crash": True,
            }
        )
        record["log"]["excerpt"] = "Campaign created, saved, and reloaded with both faction roots intact."
        self.assertEqual(validate(record, require_pass=True), [])

    def test_require_pass_rejects_template_and_failed_checks(self) -> None:
        errors = validate(sample_record(), require_pass=True)
        self.assertTrue(any("status completed" in error for error in errors))
        self.assertTrue(any("outcome pass" in error for error in errors))
        self.assertTrue(any("required checks" in error for error in errors))
        self.assertTrue(any("log excerpt" in error for error in errors))

    def test_dynamic_conquest_requires_battle_and_campaign_completion(self) -> None:
        record = sample_record()
        record["checkpoint"] = "dynamic-conquest"
        record["status"] = "completed"
        record["outcome"] = "pass"
        for key in (
            "launcher",
            "campaign_setup",
            "research_tree",
            "reinforcement_list",
            "reinforcement_purchase",
            "deployment",
            "human_rig",
            "combat",
            "ai_purchase",
            "save_reload",
            "no_crash",
        ):
            record["checks"][key] = True
        record["log"]["excerpt"] = "Representative units deployed and fought."
        errors = validate(record, require_pass=True)
        self.assertTrue(any("battle_completion" in error for error in errors))
        self.assertTrue(any("campaign_progression" in error for error in errors))

    def test_wrong_workshop_id_is_rejected(self) -> None:
        record = sample_record()
        record["load_order"][2]["workshop_id"] = "wrong"
        errors = validate(record)
        self.assertTrue(any("3629384797" in error for error in errors))

    def test_wrong_mode_and_player_side_are_rejected(self) -> None:
        record = sample_record()
        record["environment"]["mode"] = "battle_zones"
        record["environment"]["player_side"] = "unknown"
        errors = validate(record)
        self.assertTrue(any("dynamic_conquest" in error for error in errors))
        self.assertTrue(any("modern or warhammer" in error for error in errors))

    def test_compatibility_commit_must_match_record(self) -> None:
        record = sample_record()
        record["load_order"][4]["repository_commit"] = "b" * 40
        errors = validate(record)
        self.assertTrue(any("must match repository_commit" in error for error in errors))

    def test_unknown_check_key_is_rejected(self) -> None:
        record = copy.deepcopy(sample_record())
        record["checks"]["unknown"] = True
        errors = validate(record)
        self.assertTrue(any("unknown keys" in error for error in errors))


if __name__ == "__main__":
    unittest.main()
