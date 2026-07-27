from __future__ import annotations

import json
import tempfile
import unittest
from pathlib import Path

from tools.check_source_gate import evaluate, validate_status


READY_DOCUMENT = {
    "schema_version": 1,
    "dependencies": [
        {"load_position": 1, "key": "west81", "status": "ready"},
        {"load_position": 2, "key": "codex", "status": "ready"},
        {"load_position": 3, "key": "sc-platform", "status": "ready"},
        {"load_position": 4, "key": "last-victim-40k", "status": "ready"},
    ],
}


class SourceGateTests(unittest.TestCase):
    def _write_status(self, root: Path, document: dict) -> Path:
        path = root / "status.json"
        path.write_text(json.dumps(document), encoding="utf-8")
        return path

    def test_expected_ready_document_is_valid(self) -> None:
        self.assertEqual(validate_status(READY_DOCUMENT), [])

    def test_incomplete_sources_allow_documentation_only_tree(self) -> None:
        document = json.loads(json.dumps(READY_DOCUMENT))
        document["dependencies"][0]["status"] = "missing"
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            status = self._write_status(root, document)
            self.assertEqual(evaluate(root, status), [])

    def test_incomplete_sources_block_runtime_directories(self) -> None:
        document = json.loads(json.dumps(READY_DOCUMENT))
        document["dependencies"][2]["status"] = "missing"
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            (root / "resource").mkdir()
            status = self._write_status(root, document)
            errors = evaluate(root, status)
            self.assertEqual(len(errors), 1)
            self.assertIn("sc-platform", errors[0])
            self.assertIn("resource", errors[0])

    def test_ready_sources_allow_runtime_directories(self) -> None:
        with tempfile.TemporaryDirectory() as temporary:
            root = Path(temporary)
            (root / "resource").mkdir()
            (root / "localizations").mkdir()
            status = self._write_status(root, READY_DOCUMENT)
            self.assertEqual(evaluate(root, status), [])

    def test_wrong_dependency_order_is_rejected(self) -> None:
        document = json.loads(json.dumps(READY_DOCUMENT))
        document["dependencies"][0], document["dependencies"][1] = (
            document["dependencies"][1],
            document["dependencies"][0],
        )
        errors = validate_status(document)
        self.assertTrue(any("ordered exactly" in error for error in errors))
        self.assertTrue(any("load positions" in error for error in errors))


if __name__ == "__main__":
    unittest.main()
