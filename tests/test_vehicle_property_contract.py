from __future__ import annotations

import json
import re
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
ARMOR = ROOT / "resource/properties/armor.ext"
ABM_WRAPPER = ROOT / "resource/properties/abm.inc"
ABM_BASE = ROOT / "resource/properties/abm_codex_compat.inc"
ABM_CW = ROOT / "resource/properties/abm_cw_compat.inc"
EVIDENCE = ROOT / "docs/runtime-evidence/vehicle-property-contract.json"


def definition(text: str, name: str) -> str:
    marker = f'(define "{name}"'
    start = text.index(marker)
    depth = 0
    for index in range(start, len(text)):
        if text[index] == "(":
            depth += 1
        elif text[index] == ")":
            depth -= 1
            if depth == 0:
                return text[start : index + 1]
    raise AssertionError(f"unclosed definition: {name}")


def placeholders(block: str) -> set[str]:
    return set(re.findall(r"%([A-Za-z0-9_]+)", block))


class VehiclePropertyContractTests(unittest.TestCase):
    def test_abm_wrapper_restores_recoil_define_before_tank_invocation(self) -> None:
        wrapper = ABM_WRAPPER.read_text(encoding="utf-8")
        self.assertIn('(include "abm_codex_compat.inc")', wrapper)
        self.assertIn('(include "abm_cw_compat.inc")', wrapper)
        self.assertEqual(wrapper.count('(define "recoil_side_volumes"'), 1)

        block = definition(wrapper, "recoil_side_volumes")
        expected_volumes = {
            "recoil_gun_front",
            "recoil_gun_left",
            "recoil_gun_right",
            "recoil_gun_back",
            "recoil_gun_baleft",
            "recoil_gun_baright",
            "recoil_gun_frright",
            "recoil_gun_frleft",
        }
        self.assertEqual(set(re.findall(r'\{volume "([^"]+)"', block)), expected_volumes)
        self.assertIn('{component "recoil_gun"}', block)
        self.assertNotIn("%", block)

    def test_abm_sidecar_preserves_the_complete_codex_family(self) -> None:
        text = ABM_BASE.read_text(encoding="utf-8")
        for name in (
            "accuracy_by_motion",
            "abm_dymamic",
            "abm_dymamic_autocannon",
            "abm_mgun",
            "hm68_abm_stab_lrange",
            "codz_abm_mrl_atacms",
        ):
            self.assertIn(f'(define "{name}"', text, name)
        self.assertGreaterEqual(len(text.splitlines()), 300)

    def test_cold_war_stabilizer_family_is_restored_as_one_contract(self) -> None:
        text = ABM_CW.read_text(encoding="utf-8")
        expected = {
            "CW_stab_2D_0_2class",
            "CW_stab_2D_0_5class",
            "CW_stab_2D_1_0class",
            "CW_stab_no_stabiliser",
            "CW_stab_no_stabiliser_grad",
            "CW_stab_abm",
            "CW_stab_no_suo",
            "CW_stab_ld_suo",
            "CW_stab_ldwind_suo",
            "CW_stab_autotrack_suo",
            "CW_stab_autotrack_wind_suo",
        }
        found = set(re.findall(r'\(define "(CW_stab_[^"]+)"', text))
        self.assertEqual(found, expected)
        self.assertEqual(text.count('(define "CW_stab_abm"'), 1)
        self.assertEqual(placeholders(definition(text, "CW_stab_abm")), {"abm"})
        self.assertIn("{DisorderTime 4.5}", definition(text, "CW_stab_ld_suo"))

    def test_overlay_carries_the_complete_codex_durability_family(self) -> None:
        text = ARMOR.read_text(encoding="utf-8")
        for name in (
            "general_durability",
            "cannon_durability",
            "plane_durability",
            "helicopter_durability",
            "train_durability",
            "moto_durability",
            "bike_durability",
            "marine_durability",
        ):
            self.assertIn(f'(define "{name}"', text, name)
        self.assertGreaterEqual(len(text.splitlines()), 760)

    def test_general_durability_uses_codex_argument_contract(self) -> None:
        block = definition(ARMOR.read_text(encoding="utf-8"), "general_durability")
        self.assertEqual(
            placeholders(block),
            {"body", "engine", "mantlet", "turret", "gun", "track"},
        )
        self.assertNotIn("%ammo", block)
        self.assertNotIn("%health", block)

    def test_fixed_component_health_prevents_recorded_durability_crashes(self) -> None:
        block = definition(ARMOR.read_text(encoding="utf-8"), "general_durability")
        self.assertIn('{component tag "ammo"', block)
        self.assertIn("{hp 170}", block)
        self.assertIn('{component tag "fuel"', block)
        self.assertIn("{hp 100}", block)

        evidence = json.loads(EVIDENCE.read_text(encoding="utf-8"))
        self.assertEqual(
            {failure["entry"] for failure in evidence["durability_failures"]},
            {
                "gui2:lre:spawn(gaz2975a_nsvt)",
                "world: load map /map/multi/dcg_frozen_highlands/map",
            },
        )

    def test_repeated_recoil_failures_are_bound_to_the_active_include_order(self) -> None:
        evidence = json.loads(EVIDENCE.read_text(encoding="utf-8"))
        failures = evidence["missing_define_failures"]
        self.assertEqual(
            {failure["entry"] for failure in failures[-2:]},
            {
                "gui2:lre:spawn(bmp-1_rus)",
                "world: load map /map/multi/dcg_f_factory/map",
            },
        )
        for failure in failures:
            self.assertIn("recoil_side_volumes", failure["failure"])
            self.assertIn("tank_unarmed.ext", failure["caller"])

        code_x = evidence["source_contracts"]["code_x"]
        self.assertEqual(code_x["tank_unarmed_include_order"][0], "abm.inc")
        self.assertEqual(code_x["tank_unarmed_required_define"], "recoil_side_volumes")

        bridge = evidence["effective_compatibility_contract"]["recoil_bridge"]
        self.assertEqual(bridge["definition_path"], "resource/properties/abm.inc")
        self.assertEqual(bridge["definition_name"], "recoil_side_volumes")
        self.assertEqual(len(bridge["volume_names"]), 8)

    def test_runtime_evidence_rejects_the_disproved_second_diagnosis(self) -> None:
        evidence = json.loads(EVIDENCE.read_text(encoding="utf-8"))
        disproved = evidence["disproved_diagnosis"]
        self.assertFalse(disproved["vehicle_medium_autocannon"])
        self.assertFalse(disproved["smgcw_plasma"])


if __name__ == "__main__":
    unittest.main()
