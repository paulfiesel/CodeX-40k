from __future__ import annotations

import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
CONQUEST_LUA = ROOT / "resource/script/multiplayer/modes/conquest.lua"


class ConquestDefenderReinforcementTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls) -> None:
        cls.source = CONQUEST_LUA.read_text(encoding="utf-8")

    def test_defender_bot_is_identified_from_dynamic_conquest_team(self) -> None:
        self.assertIn("botDefender = teamSize > 1", self.source)
        self.assertIn('SetVar("id_defenderbot"', self.source)

    def test_defender_gets_initial_and_followup_waves(self) -> None:
        self.assertIn("DefenderInitialMin = 4", self.source)
        self.assertIn("DefenderInitialMax = 6", self.source)
        self.assertIn("DefenderSupportMin = 1", self.source)
        self.assertIn("DefenderSupportMax = 3", self.source)
        self.assertIn("waveSpawnPossible = true", self.source)

    def test_reinforcements_remain_ai_owned(self) -> None:
        self.assertIn("BotApi.Commands:SpawnAt", self.source)
        self.assertNotIn('control user', self.source)
        self.assertNotIn('SetVar("id_1st_player", BotApi.Instance.playerId)', self.source)

    def test_followup_waves_are_irregular_and_squad_weighted(self) -> None:
        self.assertIn("DefenderWaveOffMin = 4 * 60000", self.source)
        self.assertIn("DefenderWaveOffMax = 7 * 60000", self.source)
        self.assertIn("DefenderQuietCycleChance = 0.35", self.source)
        self.assertIn('if UnitType("Squad") then return t.priority * 2.5 end', self.source)


if __name__ == "__main__":
    unittest.main()
