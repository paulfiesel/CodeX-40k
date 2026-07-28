from __future__ import annotations

import json
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
ABM_WRAPPER = ROOT / "resource/properties/abm.inc"
VEHICLE_BRIDGE = ROOT / "resource/properties/vehicle_codex_compat.inc"
VISION_WRAPPER = ROOT / "resource/set/vision/vision_fields.inc"
EVIDENCE = ROOT / "docs/runtime-evidence/launches-16-17.json"
UPDATER = ROOT / "tools/update_runtime_test.ps1"


class RuntimeLaunches1617Tests(unittest.TestCase):
    def test_bmp_vehicle_macros_are_loaded_before_tank_extenders(self) -> None:
        wrapper = ABM_WRAPPER.read_text(encoding="utf-8")
        bridge = VEHICLE_BRIDGE.read_text(encoding="utf-8")

        self.assertIn('(include "vehicle_codex_compat.inc")', wrapper)
        for macro in (
            "components_tank",
            "comp_armor_increment",
            "armor_turret_ring",
        ):
            self.assertIn(f'(define "{macro}"', bridge)
        self.assertIn('{component "turret_ring"', bridge)
        self.assertIn('{thickness %thickness}', bridge)

    def test_lv40k_irregular_human_vision_is_bridged(self) -> None:
        wrapper = VISION_WRAPPER.read_text(encoding="utf-8")
        self.assertIn('(include "vision_fields_codex_compat.inc")', wrapper)
        self.assertIn('{"human_irregular"', wrapper)
        self.assertIn('("vision_human")', wrapper)

    def test_uploaded_logs_and_old_breed_fix_are_recorded(self) -> None:
        evidence = json.loads(EVIDENCE.read_text(encoding="utf-8"))
        failures = {launch["launch"]: launch for launch in evidence["launches"]}
        self.assertIn("components_tank", failures[16]["failure"])
        self.assertIn("human_irregular", failures[17]["failure"])

        old_fix = evidence["old_breed_fix"]
        self.assertEqual(old_fix["runtime_status"], "reference_only")
        self.assertEqual(
            old_fix["contained_sha256"],
            "c29c96c2ef882347b6c2ac8156ff82b80b4d3b0821df6be957d57cf8b299e225",
        )
        self.assertTrue(
            any("falls back" in value for value in old_fix["relevant_contracts"])
        )

    def test_single_command_updater_pulls_and_deploys_active_workshop_copy(self) -> None:
        updater = UPDATER.read_text(encoding="utf-8")
        self.assertIn("git fetch origin", updater)
        self.assertIn('git reset --hard "origin/$Branch"', updater)
        self.assertIn("--deploy-overlay", updater)
        self.assertIn("3696721120", updater)


if __name__ == "__main__":
    unittest.main()
