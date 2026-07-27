from __future__ import annotations

import json
import subprocess
import sys
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
TOOLS = ROOT / "tools"


class AuditToolTests(unittest.TestCase):
    def run_tool(self, name: str, *args: str):
        return subprocess.run(
            [sys.executable, str(TOOLS / name), *args],
            cwd=ROOT,
            text=True,
            capture_output=True,
            check=False,
        )

    def test_manifest_and_collision_report(self):
        with tempfile.TemporaryDirectory() as temp_dir:
            temp = Path(temp_dir)
            first = temp / "first"
            second = temp / "second"
            first.mkdir()
            second.mkdir()
            (first / "same.set").write_text("one\n", encoding="utf-8")
            (second / "same.set").write_text("two\n", encoding="utf-8")
            first_manifest = temp / "first.json"
            second_manifest = temp / "second.json"
            report = temp / "report.json"

            self.assertEqual(self.run_tool("build_manifest.py", str(first), "--name", "first", "--output", str(first_manifest)).returncode, 0)
            self.assertEqual(self.run_tool("build_manifest.py", str(second), "--name", "second", "--output", str(second_manifest)).returncode, 0)
            self.assertEqual(self.run_tool("compare_mod_stacks.py", "--manifest", str(first_manifest), "--manifest", str(second_manifest), "--output", str(report)).returncode, 0)

            data = json.loads(report.read_text(encoding="utf-8"))
            self.assertEqual(data["collision_count"], 1)
            self.assertEqual(data["collisions"][0]["classification"], "review-required")
            self.assertEqual(data["collisions"][0]["effective_winner"], "second")

    def test_empty_runtime_validators_pass(self):
        self.assertEqual(self.run_tool("validate_includes.py", str(ROOT)).returncode, 0)
        self.assertEqual(self.run_tool("validate_identifiers.py", str(ROOT)).returncode, 0)
        self.assertEqual(self.run_tool("validate_rig_references.py", str(ROOT)).returncode, 0)


if __name__ == "__main__":
    unittest.main()
