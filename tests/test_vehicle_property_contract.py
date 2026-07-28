from __future__ import annotations

import hashlib
import re
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
ARMOR = ROOT / "resource/properties/armor.ext"


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


class VehiclePropertyContractTests(unittest.TestCase):
    def test_armor_overlay_is_exact_reviewed_codex_source(self) -> None:
        normalized = ARMOR.read_text(encoding="utf-8").replace("\r\n", "\n")
        self.assertEqual(
            hashlib.sha256(normalized.encode("utf-8")).hexdigest(),
            "499b97fe4469549afe95503c59127e3275902f00246b5e6dc85b500e9ff1bea0",
        )

    def test_general_durability_uses_codex_argument_contract(self) -> None:
        text = ARMOR.read_text(encoding="utf-8")
        block = definition(text, "general_durability")
        placeholders = set(re.findall(r"%([A-Za-z0-9_]+)", block))
        self.assertEqual(
            placeholders,
            {"body", "engine", "mantlet", "turret", "gun", "track"},
        )
        self.assertNotIn("%ammo", block)
        self.assertNotIn("%health", block)

    def test_fixed_component_health_prevents_preview_spawn_holes(self) -> None:
        block = definition(ARMOR.read_text(encoding="utf-8"), "general_durability")
        self.assertIn('{component tag "ammo"', block)
        self.assertIn('{hp 170}', block)
        self.assertIn('{component tag "fuel"', block)
        self.assertIn('{hp 100}', block)


if __name__ == "__main__":
    unittest.main()
