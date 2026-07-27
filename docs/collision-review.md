# Collision decision workflow

Every overlapping parent-mod path must receive an explicit decision before runtime compatibility files are added. The reviewed ledger lives at `docs/collision-decisions.json`.

## Generate or refresh the ledger

After exact source intake and collision triage:

```powershell
python tools/build_collision_decisions.py `
  --triage .audit/sources/collision-triage.json `
  --output docs/collision-decisions.json
```

When the output file already exists, reviewed fields are preserved only when the source fingerprint still matches. Any changed parent file automatically returns that path to `unresolved`.

Validate the committed ledger against the exact current collision report:

```powershell
python tools/validate_collision_decisions.py `
  docs/collision-decisions.json `
  --collisions .audit/sources/collisions.json
```

Before a runtime checkpoint is considered ready, require every collision assigned to that checkpoint to be resolved. The full ledger can be checked with:

```powershell
python tools/validate_collision_decisions.py `
  docs/collision-decisions.json `
  --collisions .audit/sources/collisions.json `
  --require-resolved
```

## Decision values

- `unresolved`: review has not reached a defensible result.
- `identical`: every parent version has the same hash, so load order is harmless.
- `inherit-winner`: the normal load-order winner is intentionally retained and mod #5 adds no file at that path.
- `compatibility-merge`: mod #5 owns a merged override at `compatibility_path`.
- `compatibility-alias`: mod #5 isolates one family behind a new path or identifier and rewires references to it.
- `exclude-from-slice`: the collision is intentionally excluded from the current supported checkpoint.

Every nontrivial decision requires a rationale. Compatibility merges and aliases also require the exact path mod #5 will own.

## Checkpoint tags

Use only these checkpoint identifiers while Dynamic Conquest is the active target:

- `campaign-setup`
- `human-rig`
- `conquest-ai`
- `dynamic-conquest`
- `remaining-factions`

A collision may affect more than one checkpoint. Duplicate tags are invalid. Battle Zones, Domination, and Frontlines are deliberately not accepted as active checkpoint tags until the Dynamic Conquest vertical slice is complete.

## Dynamic Conquest review order

1. Campaign faction, army, side, and opponent registration.
2. Research roots, unit research, and reinforcement availability.
3. Campaign values, resource presets, map points, and save-stable identifiers.
4. `resource/script/multiplayer/modes/conquest.lua` and `utility.lua` tactical behavior.
5. Human-rig and vehicle-pose dependencies reached by the selected conquest units.
6. Localization and interface assets required by campaign setup and progression.

## Source fingerprint rule

Each ledger entry stores a SHA-256 fingerprint derived from the collision path, classification, effective winner, and every parent version's path, size, type, and content hash. A decision is valid only for that exact source state. Updated Workshop content must regenerate the manifests, collision report, triage, and ledger before runtime work continues.
