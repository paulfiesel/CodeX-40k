from __future__ import annotations

import copy
import unittest

from tools.validate_runtime_test_record import validate


def sample_record() -> dict:
    commit = "a" * 40
    return {
        "schema_version": 1,
        "status": "template",
        "checkpoint": "lobby",
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
                "workshop_id": "3282681270",
                "version": "0.6.3",
                "mod_info_sha256": "3" * 64,
            },
            {
                "position": 4,
                "key": "last-victim-40k",
                "workshop_id": "3282689669",
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
            "map": "test map",
            "mode": "battle_zones",
            "difficulty": "normal",
        },
        "factions": {"modern": "nato", "warhammer": "imperium"},
        "steps": ["Open the lobby", "Start the match"],
        "checks": {
            "launcher": False,
            "lobby": False,
            "spawn": False,
            "human_rig": False,
            "combat": False,
            "match_completion": False,
            "ai_purchase": False,
            "no_crash": False,
        },
        "log": {"path": "game.log", "sha256": "5" * 64, "excerpt": ""},
        "outcome": "not-run",
        "notes": "",
    }


class RuntimeTestRecordTests(unittest.TestCase):
    def test_template_shape_is_valid(self) -> None:
        self.assertEqual(validate(sample_record()), [])

    def test_completed_lobby_record_can_pass(self) -> None:
        record = sample_record()
        record["status"] = "completed"
        record["outcome"] = "pass"
        record["checks"].update({"launcher": True, "lobby": True, "no_crash": True})
        record["log"]["excerpt"] = "Lobby opened with both factions and no fatal errors."
        self.assertEqual(validate(record, require_pass=True), [])

    def test_require_pass_rejects_template_and_failed_checks(self) -> None:
        errors = validate(sample_record(), require_pass=True)
        self.assertTrue(any("status completed" in error for error in errors))
        self.assertTrue(any("outcome pass" in error for error in errors))
        self.assertTrue(any("required checks" in error for error in errors))
        self.assertTrue(any("log excerpt" in error for error in errors))

    def test_battle_zones_requires_match_completion(self) -> None:
        record = sample_record()
        record["checkpoint"] = "battle-zones"
        record["status"] = "completed"
        record["outcome"] = "pass"
        for key in ("launcher", "lobby", "spawn", "human_rig", "combat", "no_crash"):
            record["checks"][key] = True
        record["log"]["excerpt"] = "Representative units spawned and fought."
        errors = validate(record, require_pass=True)
        self.assertTrue(any("match_completion" in error for error in errors))

    def test_wrong_workshop_id_is_rejected(self) -> None:
        record = sample_record()
        record["load_order"][1]["workshop_id"] = "wrong"
        errors = validate(record)
        self.assertTrue(any("3261086933" in error for error in errors))

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
