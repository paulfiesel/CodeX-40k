from __future__ import annotations

import re
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
PROBE = ROOT / "tools/update_runtime_indomitus_probe.ps1"
AUDITOR = ROOT / "tools/audit_runtime_stack.ps1"


class IndomitusProbeContractTests(unittest.TestCase):
    def test_probe_is_source_bound_and_separates_framework_from_human_rig(self) -> None:
        text = PROBE.read_text(encoding="utf-8")

        self.assertIn('[ValidateSet("Framework", "HumanRig")]', text)
        self.assertIn('[string]$Probe = "Framework"', text)
        self.assertIn('$SourceRoot = Join-Path $WorkshopRoot "3683854813"', text)
        self.assertIn('$TargetRoot = Join-Path $WorkshopRoot "3696721120"', text)

        expected_hashes = {
            "6c80fd57911bc9f75a9df82f4b5f254acb5ac1063fdb53bdaaa2b4624fce0209",
            "99c4dc6597abf9c1b18fe6c0f239e7af132d45604c0e8883a6aa3a145c077fe8",
            "c9fdc347a087e47e6bf2068bd4115a15a2212aec2f71c7acbf287ee9420e82c7",
            "cca1b0d1db1f91b67ebfd087e80c92a367339789608323382d73b9681eaabf1f",
            "889f53e57e0b2cc42b51fadf843c095f8b6670414f54bf31e6a0b6bcacc1b205",
            "117e9c39bbd1186a67c5fe307629368dad4466ad4bcd1c23c80b5b3467ba0fba",
            "4688afaca4ac501b9ba3f2249200b16d9209561efd8d5bcde9efc2ea9b7c6831",
        }
        self.assertEqual(set(re.findall(r'"([0-9a-f]{64})"', text)), expected_hashes)

        framework_block, human_block = text.split('else {', maxsplit=1)
        self.assertIn("conquest.lua", framework_block)
        self.assertIn("utility.lua", framework_block)
        self.assertNotIn("skin.ply", framework_block)
        self.assertIn("human.def", human_block)
        self.assertIn("human.mdl", human_block)
        self.assertIn("skin.ply", human_block)
        self.assertIn("human_anm.ext", human_block)
        self.assertIn("_reg_human_movement.inc", human_block)

    def test_framework_probe_adapts_the_current_nine_id_runtime_contract(self) -> None:
        text = PROBE.read_text(encoding="utf-8")
        current_map = (
            "local nationMap = { rusa = 1, ukr = 2, nato = 3, csa = 4, "
            "sov = 5, prc = 6, imp = 7, ork = 8, tyr = 9 }"
        )
        self.assertIn(current_map, text)
        self.assertIn("CX40K_PROBE: Indomitus conquest framework active", text)
        self.assertIn("CX40K_PROBE: Indomitus utility framework active", text)
        self.assertIn("UTF8Encoding($false)", text)

    def test_human_rig_probe_copies_binary_files_without_text_conversion(self) -> None:
        text = PROBE.read_text(encoding="utf-8")
        self.assertIn("Copy-Item -LiteralPath $Source -Destination $Target -Force", text)
        self.assertNotIn("ReadAllText($Source)", text)
        self.assertIn("Probe deployment hash mismatch", text)

    def test_auditor_records_probe_ownership_and_all_rig_files(self) -> None:
        text = AUDITOR.read_text(encoding="utf-8")
        for path in (
            "resource\\script\\multiplayer\\modes\\conquest.lua",
            "resource\\script\\multiplayer\\modes\\utility.lua",
            "resource\\entity\\humanskin\\human\\human.def",
            "resource\\entity\\humanskin\\human\\human.mdl",
            "resource\\entity\\humanskin\\human\\skin.ply",
            "resource\\properties\\animation\\human\\human_anm.ext",
            "resource\\properties\\animation\\human\\_reg_human_movement.inc",
        ):
            self.assertIn(path, text)
        self.assertIn(".cx40k-indomitus-probe.json", text)
        self.assertIn("indomitus_probe = $ProbeManifest", text)
        self.assertIn("schema_version = 2", text)


if __name__ == "__main__":
    unittest.main()
