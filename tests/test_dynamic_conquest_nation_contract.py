from __future__ import annotations

import json
import re
import unittest
from itertools import product
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
REGISTRY_PATH = ROOT / "docs/runtime/dynamic-conquest-nation-registry.json"
ARMIES_DIR = ROOT / "resource/set/multiplayer/armies"
GENERIC_ALLIANCES = (
    ROOT / "resource/set/multiplayer/games/presets/alliances_generic.inc"
)
CAMPAIGN_ALLIANCES = (
    ROOT
    / "resource/set/multiplayer/games/presets/alliances_cx40k_conquest.inc"
)
MATCHUPS = ROOT / "resource/set/dynamic_campaign/+cx40k_matchups.inc"

ARMY_ID_RE = re.compile(r"\{id\s+(\d+)\}")
ARMY_REF_RE = re.compile(r'\{armies\s+"([^"]+)"\}')
CARD_RE = re.compile(r'^\s*\{"([^"]+\((?:imp|ork|tyr)\))"', re.MULTILINE)
AI_UNIT_RE = re.compile(r'unit\s*=\s*"([^"]+\((?:imp|ork|tyr)\))"')


class DynamicConquestNationContractTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls) -> None:
        cls.registry = json.loads(REGISTRY_PATH.read_text(encoding="utf-8"))
        cls.modern = set(cls.registry["supported_campaign_matrix"]["modern"])
        cls.forty_k = set(cls.registry["supported_campaign_matrix"]["forty_k"])
        cls.supported = cls.modern | cls.forty_k

    def test_parent_army_ids_are_globally_unique(self) -> None:
        armies = self.registry["armies"]
        army_ids = [entry["army_id"] for entry in armies.values()]
        self.assertEqual(len(army_ids), len(set(army_ids)))
        self.assertEqual(self.modern, {"nato", "ukr", "rusa", "prc"})
        self.assertEqual(self.forty_k, {"imp", "tyr", "ork"})
        self.assertEqual(
            {key for key, value in armies.items() if value["campaign_supported"]},
            self.supported,
        )

    def test_supported_army_files_pin_reviewed_ids(self) -> None:
        for nation in self.supported:
            army_file = ARMIES_DIR / f"{nation}.set"
            self.assertTrue(army_file.is_file(), nation)
            match = ARMY_ID_RE.search(army_file.read_text(encoding="utf-8"))
            self.assertIsNotNone(match, nation)
            self.assertEqual(
                int(match.group(1)), self.registry["armies"][nation]["army_id"], nation
            )

    def test_generic_alliance_union_accounts_for_every_parent_army(self) -> None:
        text = GENERIC_ALLIANCES.read_text(encoding="utf-8")
        references = ARMY_REF_RE.findall(text)
        expected = set(self.registry["armies"])
        self.assertEqual(set(references), expected)
        for nation in expected:
            self.assertEqual(references.count(nation), 1, nation)

    def test_campaign_alliance_preset_is_exact_supported_matrix(self) -> None:
        text = CAMPAIGN_ALLIANCES.read_text(encoding="utf-8")
        references = ARMY_REF_RE.findall(text)
        self.assertEqual(set(references), self.supported)
        self.assertEqual(len(references), len(self.supported))

    def test_matchups_are_exact_cross_stock_pairs_in_both_directions(self) -> None:
        lines = {
            line.strip().strip('"')
            for line in MATCHUPS.read_text(encoding="utf-8").splitlines()
            if line.strip().startswith('"')
        }
        expected = {
            pair
            for modern, forty_k in product(self.modern, self.forty_k)
            for pair in (f"{modern} {forty_k}", f"{forty_k} {modern}")
        }
        self.assertEqual(lines, expected)

    def test_dcg_runtime_ids_are_unique_for_every_supported_nation(self) -> None:
        ids = self.registry["dcg_runtime_ids"]
        self.assertTrue(self.supported <= set(ids))
        supported_ids = [ids[nation] for nation in self.supported]
        self.assertEqual(len(supported_ids), len(set(supported_ids)))
        self.assertEqual(
            {nation: ids[nation] for nation in ("rusa", "ukr", "nato", "prc")},
            {"rusa": 1, "ukr": 2, "nato": 3, "prc": 6},
        )
        self.assertEqual(
            {nation: ids[nation] for nation in ("imp", "ork", "tyr")},
            {"imp": 7, "ork": 8, "tyr": 9},
        )

    def test_every_supported_nation_has_the_complete_campaign_contract(self) -> None:
        contracts = self.registry["campaign_contracts"]
        self.assertEqual(set(contracts), self.supported)
        for nation, contract in contracts.items():
            self.assertEqual(
                set(contract) - {"source_hashes"},
                {"army", "research", "units", "ai_purchase"},
                nation,
            )
            for key in ("army", "research", "units", "ai_purchase"):
                self.assertTrue(contract[key].startswith("resource/"), (nation, key))
            self.assertTrue(contract["source_hashes"], nation)

    def test_local_40k_research_cards_and_ai_purchases_close(self) -> None:
        contracts = self.registry["campaign_contracts"]
        for nation in ("imp", "ork", "tyr"):
            contract = contracts[nation]
            units_path = ROOT / contract["units"]
            research_path = ROOT / contract["research"]
            ai_path = ROOT / contract["ai_purchase"]
            for path in (units_path, research_path, ai_path):
                self.assertTrue(path.is_file(), str(path))

            cards = {
                card for card in CARD_RE.findall(units_path.read_text(encoding="utf-8"))
                if card.endswith(f"({nation})")
            }
            research_cards = {
                card
                for card in CARD_RE.findall(research_path.read_text(encoding="utf-8"))
                if card.endswith(f"({nation})")
            }
            ai_cards = {
                card
                for card in AI_UNIT_RE.findall(ai_path.read_text(encoding="utf-8"))
                if card.endswith(f"({nation})")
            }

            self.assertTrue(cards, nation)
            self.assertEqual(research_cards, cards, nation)
            self.assertTrue(ai_cards, nation)
            self.assertTrue(ai_cards <= cards, nation)

    def test_tyranid_research_has_no_unloaded_doctrine_cards(self) -> None:
        text = (
            ROOT / "resource/set/dynamic_campaign/unit_research_tyr.set"
        ).read_text(encoding="utf-8")
        self.assertNotIn('"doctrine_tyr_', text)


if __name__ == "__main__":
    unittest.main()
