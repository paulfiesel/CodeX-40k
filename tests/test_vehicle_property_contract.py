from __future__ import annotations

import json
import re
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
ARMOR_WRAPPER = ROOT / "resource/properties/armor.ext"
ARMOR_BASE = ROOT / "resource/properties/armor_codex_compat.ext"
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
    def test_wrapper_preserves_durability_sidecar_and_restores_recoil_define(self) -> None:
        wrapper = ARMOR_WRAPPER.read_text(encoding="utf-8")
        self.assertIn('(include "armor_codex_compat.ext")', wrapper)
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

    def test_overlay_carries_the_complete_codex_durability_family(self) -> None:
        text = ARMOR_BASE.read_text(encoding="utf-8")
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
        block = definition(ARMOR_BASE.read_text(encoding="utf-8"), "general_durability")
        self.assertEqual(
            placeholders(block),
            {"body", "engine", "mantlet", "turret", "gun", "track"},
        )
        self.assertNotIn("%ammo", block)
        self.assertNotIn("%health", block)

    def test_fixed_component_health_prevents_recorded_durability_crashes(self) -> None:
        block = definition(ARMOR_BASE.read_text(encoding="utf-8"), "general_durability")
        self.assertIn('{component tag "ammo"', block)
        self.assertIn('{hp 170}', block)
        self.assertIn('{component tag "fuel"', block)
        self.assertIn('{hp 100}', block)

        evidence = json.loads(EVIDENCE.read_text(encoding="utf-8"))
        self.assertEqual(
            {failure["entry"] for failure in evidence["durability_failures"]},
            {
                "gui2:lre:spawn(gaz2975a_nsvt)",
                "world: load map /map/multi/dcg_frozen_highlands/map",
            },
        )
        for failure in evidence["durability_failures"]:
            self.assertIn("%ammo", failure["failure"])
            self.assertIn("/properties/car.ext", failure["caller"])

    def test_recoil_bridge_covers_preview_and_map_load_crashes(self) -> None:
        evidence = json.loads(EVIDENCE.read_text(encoding="utf-8"))
        failures = evidence["missing_define_failures"]
        self.assertEqual(
            {failure["entry"] for failure in failures},
            {
                "gui2:lre:spawn(bmp-1_rus)",
                "world: load map /map/multi/dcg_radekhiv/map",
            },
        )
        for failure in failures:
            self.assertIn("recoil_side_volumes", failure["failure"])
            self.assertIn("tank_unarmed.ext", failure["caller"])

        code_x = evidence["source_contracts"]["code_x"]
        self.assertEqual(
            code_x["tank_unarmed_include_order"],
            ["abm.inc", "mobility.inc", "vehicle.ext", "armor.ext", "tank_crew.ext"],
        )
        self.assertEqual(code_x["tank_unarmed_required_define"], "recoil_side_volumes")
        self.assertTrue(code_x["vehicle_ext_defines_required_macro"])

        bridge = evidence["effective_compatibility_contract"]["recoil_bridge"]
        self.assertEqual(bridge["definition_name"], "recoil_side_volumes")
        self.assertEqual(len(bridge["volume_names"]), 8)
        self.assertEqual(bridge["component"], "recoil_gun")

    def test_effective_contract_bridges_sc_and_codex_callers(self) -> None:
        evidence = json.loads(EVIDENCE.read_text(encoding="utf-8"))
        sc_contract = evidence["source_contracts"]["sc_platform"]
        codex_contract = evidence["source_contracts"]["code_x"]
        effective = evidence["effective_compatibility_contract"]

        self.assertIn("ammo", sc_contract["general_durability_placeholders"])
        self.assertTrue(sc_contract["tier_calls_supply_ammo"])
        self.assertGreater(sc_contract["tier_call_count"], 0)

        self.assertFalse(codex_contract["car_call_supplies_ammo"])
        self.assertNotIn("ammo(", codex_contract["car_call"])

        block = definition(ARMOR_BASE.read_text(encoding="utf-8"), "general_durability")
        self.assertEqual(placeholders(block), set(effective["general_durability_placeholders"]))
        self.assertEqual(effective["ammo_component_hp"], 170)
        self.assertEqual(effective["fuel_component_hp"], 100)

    def test_runtime_evidence_rejects_the_disproved_second_diagnosis(self) -> None:
        evidence = json.loads(EVIDENCE.read_text(encoding="utf-8"))
        disproved = evidence["disproved_diagnosis"]
        self.assertFalse(disproved["vehicle_medium_autocannon"])
        self.assertFalse(disproved["smgcw_plasma"])


if __name__ == "__main__":
    unittest.main()
