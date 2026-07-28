from __future__ import annotations

import json
import re
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
VALUES = ROOT / "resource/set/dynamic_campaign/values.set"
CONTRACT = ROOT / "docs/runtime/dynamic-conquest-map-contract.json"


def named_child_blocks(text: str, root: str) -> list[tuple[str, str]]:
    marker = "{" + root
    start = text.index(marker)
    root_open = text.index("{", start)
    depth = 0
    root_close = None
    for index in range(root_open, len(text)):
        if text[index] == "{":
            depth += 1
        elif text[index] == "}":
            depth -= 1
            if depth == 0:
                root_close = index
                break
    if root_close is None:
        raise AssertionError(f"unclosed {root} block")

    children: list[tuple[str, str]] = []
    index = root_open + 1
    while index < root_close:
        if text[index] != "{":
            index += 1
            continue
        child_open = index
        depth = 0
        child_close = None
        for cursor in range(child_open, root_close + 1):
            if text[cursor] == "{":
                depth += 1
            elif text[cursor] == "}":
                depth -= 1
                if depth == 0:
                    child_close = cursor
                    break
        if child_close is None:
            raise AssertionError(f"unclosed child in {root}")
        block = text[child_open : child_close + 1]
        match = re.match(r'\{\s*"?([^\s"{}]+)', block)
        if match is None:
            raise AssertionError(f"unnamed child in {root}: {block[:80]}")
        children.append((match.group(1), block))
        index = child_close + 1
    return children


class DynamicConquestMapContractTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls) -> None:
        cls.contract = json.loads(CONTRACT.read_text(encoding="utf-8"))
        cls.values_text = VALUES.read_text(encoding="utf-8")

    def test_campaign_regions_are_exact_reviewed_map_pools(self) -> None:
        region_blocks = named_child_blocks(self.values_text, "Regions")
        actual = [name for name, _ in region_blocks]
        expected = self.contract["campaign_regions"]
        self.assertEqual(actual, expected)
        self.assertTrue(set(actual) <= set(self.contract["effective_parent"]["regions"]))

    def test_every_region_loads_the_same_supported_matchup_matrix(self) -> None:
        for name, block in named_child_blocks(self.values_text, "Regions"):
            self.assertEqual(block.count('(include "+cx40k_matchups.inc")'), 1, name)

    def test_known_unusable_or_orphan_regions_are_not_selectable(self) -> None:
        actual = {name for name, _ in named_child_blocks(self.values_text, "Regions")}
        self.assertFalse(actual & set(self.contract["excluded_regions"]))
        self.assertNotIn('{Europe', self.values_text)
        self.assertNotIn('{Asia', self.values_text)
        self.assertNotIn('{Test', self.values_text)

    def test_campaign_game_mode_is_closed(self) -> None:
        modes = [name for name, _ in named_child_blocks(self.values_text, "GameModes")]
        self.assertEqual(modes, [self.contract["game_mode"]])

    def test_contract_is_bound_to_the_reviewed_source_slice(self) -> None:
        self.assertRegex(self.contract["source_artifact_sha256"], r"^[0-9a-f]{64}$")
        self.assertRegex(
            self.contract["effective_parent"]["sha256"], r"^[0-9a-f]{64}$"
        )
        self.assertEqual(self.contract["effective_parent"]["owner"], "codex")
        self.assertEqual(
            self.contract["runtime_evidence"]["failure"],
            "Could not find any maps for campaign_capture_the_flag on wood",
        )


if __name__ == "__main__":
    unittest.main()
