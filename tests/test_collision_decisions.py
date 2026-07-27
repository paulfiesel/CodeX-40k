from __future__ import annotations

import copy
import unittest

from tools.build_collision_decisions import build_ledger, fingerprint
from tools.validate_collision_decisions import validate


def sample_collision(path: str = "resource/set/multiplayer/common.set", digest: str = "a" * 64) -> dict:
    return {
        "normalized_path": path,
        "classification": "review-required",
        "effective_winner": "last-victim-40k",
        "entries": [
            {
                "load_index": 2,
                "mod": "codex",
                "path": path,
                "sha256": digest,
                "size": 12,
                "kind": "text",
            },
            {
                "load_index": 4,
                "mod": "last-victim-40k",
                "path": path,
                "sha256": "b" * 64,
                "size": 14,
                "kind": "text",
            },
        ],
        "triage": {
            "priority": "critical",
            "area": "multiplayer-registry",
            "recommended_action": "hand review",
        },
    }


class CollisionDecisionTests(unittest.TestCase):
    def test_build_defaults_and_preserves_review_for_matching_sources(self) -> None:
        collision = sample_collision()
        triage = {"load_order": ["codex", "last-victim-40k"], "collisions": [collision]}
        first = build_ledger(triage)
        self.assertEqual(first["collisions"][0]["decision"], "unresolved")
        first["collisions"][0].update(
            {
                "decision": "compatibility-merge",
                "rationale": "Both parent registries must remain reachable.",
                "compatibility_path": collision["normalized_path"],
                "checkpoints": ["lobby"],
            }
        )
        refreshed = build_ledger(triage, first)
        self.assertEqual(refreshed["collisions"][0]["decision"], "compatibility-merge")
        self.assertEqual(refreshed["collisions"][0]["checkpoints"], ["lobby"])

    def test_changed_source_fingerprint_resets_review(self) -> None:
        collision = sample_collision()
        triage = {"load_order": [], "collisions": [collision]}
        existing = build_ledger(triage)
        existing["collisions"][0]["decision"] = "inherit-winner"
        existing["collisions"][0]["rationale"] = "Previously reviewed."
        changed = copy.deepcopy(collision)
        changed["entries"][0]["sha256"] = "c" * 64
        refreshed = build_ledger({"load_order": [], "collisions": [changed]}, existing)
        self.assertEqual(refreshed["collisions"][0]["decision"], "unresolved")
        self.assertNotEqual(fingerprint(collision), fingerprint(changed))

    def test_identical_collision_defaults_to_identical(self) -> None:
        collision = sample_collision()
        collision["classification"] = "identical"
        ledger = build_ledger({"load_order": [], "collisions": [collision]})
        self.assertEqual(ledger["collisions"][0]["decision"], "identical")

    def test_validator_requires_compatibility_path_and_rationale(self) -> None:
        collision = sample_collision()
        ledger = build_ledger({"load_order": [], "collisions": [collision]})
        entry = ledger["collisions"][0]
        entry["decision"] = "compatibility-merge"
        errors = validate(ledger)
        self.assertTrue(any("requires a rationale" in error for error in errors))
        self.assertTrue(any("requires compatibility_path" in error for error in errors))
        entry["rationale"] = "Merge both registries."
        entry["compatibility_path"] = collision["normalized_path"]
        entry["checkpoints"] = ["lobby"]
        self.assertEqual(validate(ledger), [])

    def test_validator_checks_coverage_fingerprint_and_resolution(self) -> None:
        collision = sample_collision()
        report = {"collisions": [collision]}
        ledger = build_ledger({"load_order": [], "collisions": [collision]})
        unresolved = validate(ledger, report, require_resolved=True)
        self.assertTrue(any("remains unresolved" in error for error in unresolved))
        ledger["collisions"][0]["source_fingerprint"] = "0" * 64
        stale = validate(ledger, report)
        self.assertTrue(any("does not match" in error for error in stale))
        ledger["collisions"] = []
        ledger["collision_count"] = 0
        missing = validate(ledger, report)
        self.assertTrue(any("missing collision paths" in error for error in missing))


if __name__ == "__main__":
    unittest.main()
