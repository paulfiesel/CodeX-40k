# Runtime test records

Every runtime checkpoint must include a completed JSON test record based on `template.json`. Documentation-only and audit-tooling PRs do not require one.

## Create a record

Copy the template to a descriptive filename, such as:

```text
docs/runtime-test-records/2026-07-27-lobby-pr15.json
```

Replace every placeholder with the exact tested state:

- runtime branch commit SHA;
- test timestamp and tester;
- exact five-mod load order;
- launcher versions and `mod.info` hashes for all four dependencies;
- game version, map, mode, and difficulty;
- one modern faction and one Warhammer faction;
- exact test steps;
- all applicable check results;
- game-log path, SHA-256, and relevant excerpt;
- final pass or fail outcome.

Validate structure while preparing the test:

```powershell
python tools/validate_runtime_test_record.py docs/runtime-test-records/<record>.json
```

Before a runtime PR is eligible to merge, require passing checkpoint evidence:

```powershell
python tools/validate_runtime_test_record.py `
  docs/runtime-test-records/<record>.json `
  --require-pass
```

## Checkpoints

- `lobby`: launcher, lobby visibility, and crash-free entry.
- `human-rig`: lobby, spawn, representative human rig, combat, and no crash.
- `battle-zones`: full representative match through normal completion.
- `ai-purchasing`: Battle Zones plus confirmed AI purchase activity.
- `remaining-factions`: each expanded faction group spawns and completes a match.
- `domination`: representative Domination match completion.
- `frontlines`: representative Frontlines match completion.

The validator rejects missing checks, incorrect Workshop IDs, mismatched compatibility commits, invalid hashes, unknown modes, incomplete load order, and passing records without a relevant log excerpt.

A failed test record should remain committed when it explains a reverted or superseded runtime checkpoint. Set `status` to `completed`, `outcome` to `fail`, record the failed checks, and identify the last known-good commit in `notes`.
