# Runtime test records

Every runtime checkpoint must include a completed JSON test record based on `template.json`. Documentation-only and audit-tooling PRs do not require one.

## Create a record

Copy the template to a descriptive filename, such as:

```text
docs/runtime-test-records/2026-07-27-campaign-setup-prXX.json
```

Replace every placeholder with the exact tested state:

- runtime branch commit SHA;
- test timestamp and tester;
- exact five-mod load order;
- launcher versions and `mod.info` hashes for all four dependencies;
- game version, tested map or campaign-setup state, Dynamic Conquest mode, difficulty, and player side;
- one modern faction and one Warhammer faction;
- exact campaign and tactical test steps;
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

- `campaign-setup`: faction selection, valid research root, valid reinforcement list, campaign save/reload, and no crash.
- `human-rig`: campaign deployment, representative human rig, tactical combat, and no crash.
- `conquest-ai`: tactical deployment, AI purchasing and orders, battle completion, return to campaign, and no crash.
- `dynamic-conquest`: complete research, purchase, deployment, combat, AI, battle completion, campaign progression, save, and reload cycle.
- `remaining-factions`: the same campaign cycle for each additional faction pair after the first vertical slice.

A full first-pair validation requires separate completed records with `environment.player_side` set to `modern` and `warhammer`.

The validator rejects missing campaign checks, incorrect Workshop IDs, mismatched compatibility commits, invalid hashes, non-conquest modes, incomplete load order, invalid player-side direction, and passing records without a relevant log excerpt.

Battle Zones, Domination, and Frontlines are outside the active runtime gate.

A failed test record should remain committed when it explains a reverted or superseded runtime checkpoint. Set `status` to `completed`, `outcome` to `fail`, record the failed checks, and identify the last known-good commit in `notes`.
