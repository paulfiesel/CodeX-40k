from __future__ import annotations

import json
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
VEHICLE_BRIDGE = ROOT / "resource/properties/vehicle_codex_compat.inc"
SKIN_BRIDGE = (
    ROOT
    / "resource/set/interaction_entity/SC_Plataform/SC_human/SC_h_skin.inc"
)
WRONG_SKIN_PATH = ROOT / "resource/set/interaction_entity/SC_h_skin.inc"
EVIDENCE = ROOT / "docs/runtime-evidence/launches-18-19.json"


class RuntimeLaunches1819Tests(unittest.TestCase):
    def test_code_x_vehicle_macro_families_are_repaired_together(self) -> None:
        bridge = VEHICLE_BRIDGE.read_text(encoding="utf-8")

        required = (
            "components_tank",
            "comp_armor_increment",
            "armor_turret_ring",
            "turr_speed",
            "gun_speed",
            "missile_aimpoint_custom",
            "missile_aimpoint_tanksize",
            "missile_aimpoint_wieselsize",
            "missile_aimpoint_stansize",
            "missile_aimpoint_boatsize",
            "missile_aimpoint_trucksize",
            "missile_aimpoint_air",
        )
        for macro in required:
            self.assertIn(f'(define "{macro}"', bridge)

        self.assertLess(
            bridge.index('(define "missile_aimpoint_custom"'),
            bridge.index('(define "missile_aimpoint_wieselsize"'),
        )
        self.assertIn('{speed (* %deg_per_s 0.000355)}', bridge)

    def test_sc_human_skin_fallback_patches_the_effective_current_path(self) -> None:
        self.assertTrue(SKIN_BRIDGE.is_file())
        self.assertFalse(WRONG_SKIN_PATH.exists())
        skin = SKIN_BRIDGE.read_text(encoding="utf-8")

        self.assertIn('(include "SC_h_skin/SC_sk_GEM_default.inc")', skin)
        self.assertIn('(include "SC_h_skin/SC_DLC_LV40k.inc")', skin)
        self.assertIn(
            '(include "/set/breed/SC_Plataform/[MP]/SC_skin_selector.inc")',
            skin,
        )
        self.assertIn('{Delay 0.5', skin)
        self.assertIn('{if not tagged "sc_h_skin_tag_skeleton_defined"', skin)
        self.assertEqual(
            skin.count('{Call "SC_H_Skin_Call_Set_GEM_Default_Skin"}'),
            1,
        )
        self.assertIn("t(lv40k_orkboy)", skin)
        self.assertIn("t(lv40k_ogryn)", skin)
        self.assertIn("t(lv40k_eldarfemale)", skin)
        self.assertIn('("SC_Abilities_Define_Spawn_Event")', skin)
        self.assertIn('("SC_H_Request_Define_Spawn_Event")', skin)

    def test_launch_evidence_distinguishes_sdl_failure_from_native_ctd(self) -> None:
        evidence = json.loads(EVIDENCE.read_text(encoding="utf-8"))
        launches = {entry["launch"]: entry for entry in evidence["launches"]}

        self.assertIn("missile_aimpoint_wieselsize", launches[18]["failure"])
        self.assertFalse(launches[19]["terminal_exception"])
        self.assertEqual(launches[19]["unresolved_breed_count"], 284)
        self.assertEqual(launches[19]["undefined_skeleton_count"], 284)
        self.assertEqual(
            evidence["human_skin_source"]["activation"],
            "reconciled",
        )
        self.assertEqual(
            evidence["human_skin_source"]["authoritative_sc_sha256"],
            "d2ae8e962453bcda1a37d4bf11d7368a7c01e425eb460971a32657fe5d7167df",
        )


if __name__ == "__main__":
    unittest.main()
