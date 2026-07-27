# Installed source audit, 2026-07-27

## Scope

This audit describes the exact locally installed dependency stack represented by the private `collision-review-bundle.zip`. It records hashes, counts, and collision decisions only. It does not publish parent-mod source files or binary assets.

## Dependency identity

| Load | Key | Workshop ID | Detected name | `mod.info` SHA-256 |
|---:|---|---:|---|---|
| 1 | `west81` | `2897299509` | West-81 | `0019da74386e8d79c17507d3161389caab81dd1f439b4ed8560106747b61d557` |
| 2 | `codex` | `3261086933` | Code-X | `e4d9c720c664a0cb2988ef6ccb362ef0089943cedea09199caa475791b0b2c9c` |
| 3 | `sc-platform` | `3629384797` | [GOH] SC Modding Plataform - v0.6.3 | `61d7e3fe9d5705e3a48e9084022b4ed19af3d4d2fc73ae4226d73299f70ec3c5` |
| 4 | `last-victim-40k` | `3629381350` | [GOH] SC Last Victim 40k Mod - OPEN TEST VERSION v0.6.3 | `aa96473588b4715d7dc36bb9d2ee56d76f8af69ace4f91a5f8d8afaaeef383a5` |

## Inventory totals

- West-81: 23,224 files
- Code-X: 26,468 files
- SC Modding Platform: 9 files
- Last Victim 40K: 9,647 files
- Total: 59,348 files
- Colliding paths: 1,020
- Byte-identical collisions: 510
- Review-required collisions: 510
- Colliding text versions included in the private bundle: 2,028
- Binary or oversized versions skipped by the private exporter: 22
- Private bundle SHA-256: `2477179943d2afc2ff6e37b7867020606f8f05ad52f8970e6c4f93b962736e2f`

The original general-purpose triage classified 17 paths as critical, 27 as high, 84 as medium, and 892 as manual review. Dynamic Conquest-specific triage supersedes that ordering.

## Dynamic Conquest critical collisions

Code-X currently wins these West-81/Code-X campaign configuration paths:

- `resource/set/dynamic_campaign/map_points.set`
- `resource/set/dynamic_campaign/resources_high.set`
- `resource/set/dynamic_campaign/resources_low.set`
- `resource/set/dynamic_campaign/resources_standard.set`
- `resource/set/dynamic_campaign/resources_very_high.set`
- `resource/set/dynamic_campaign/unit_research_prc.set`
- `resource/set/dynamic_campaign/unit_research_sov.set`
- `resource/set/dynamic_campaign/values.set`

Last Victim currently wins these three-way loose-script collisions:

- `resource/script/multiplayer/modes/conquest.lua`
- `resource/script/multiplayer/modes/utility.lua`

The conquest script versions are not interchangeable:

- Code-X uses current `BotApi.Conquest` identifiers, explicit spawn-point rotation through `GameModeSpawnUnit`, prep-time completion handling, and a unit-selection timing hook.
- Last Victim uses different attacker and defender wave timing and legacy campaign identifier fields.
- West-81 contains a much larger division-aware wave and purchase system that should not be imported wholesale unless the selected Code-X faction requires it.

Therefore, normal load order is not a sufficient compatibility decision for the Dynamic Conquest tactical path.

## Direct Last Victim cross-stack collisions

The review-required paths involving Last Victim are:

- `mod.info`
- `resource/entity.pak`
- `resource/gamelogic.pak`
- `resource/interface.pak`
- `resource/map.pak`
- `resource/script/multiplayer/modes/battlezones.lua`
- `resource/script/multiplayer/modes/conquest.lua`
- `resource/script/multiplayer/modes/frontlines.lua`
- `resource/script/multiplayer/modes/laststand.lua`
- `resource/script/multiplayer/modes/utility.lua`
- `resource/sound.pak`
- `resource/texture.pak`

For the active scope, only `conquest.lua`, `utility.lua`, and campaign-reachable packaged content are immediate concerns. Other multiplayer modes remain deferred.

## Required next analysis

The private bundle is collision-focused and does not include every unique parent path. Before implementing issue #6, inspect the complete source manifests and exact unique campaign entry points for:

1. Dynamic Conquest faction and opponent registration.
2. Campaign army and side IDs.
3. Research roots and unit research files.
4. Reinforcement availability and purchase tables.
5. Save-stable identifiers.
6. First-pair localization and interface references.
7. Human-rig dependencies reached by the selected conquest reinforcements.

## Runtime policy

No Dynamic Conquest runtime override may merge until:

- its collision decisions are source-fingerprint-valid;
- campaign setup and tactical behavior are tested against this exact dependency state;
- a completed Dynamic Conquest runtime record is attached;
- save and reload preserve campaign state and identifiers.
