# Historical 3701902245 compatibility baseline

Source archive: `3701902245 - Backup New.zip`

Archive SHA-256: `fdcc653cd1664c09a5e3648ae0d68184fab5ba117a61388e79795b9ca4c5a7cf`

This archive is retained as a historical source reference. It must not be copied wholesale into the active compatibility overlay.

## What the archive actually is

The runtime metadata and README describe a six-layer stack:

1. base game
2. West-81 (`2897299509`)
3. CTRM (`3112486913`)
4. SC Modding Platform (`3629384797`)
5. SC Last Victim 40K (`3629381350`)
6. this overlay (`3701902245`)

It is therefore not a pure vanilla-only patch and it is not a Code-X patch. It is a broad CTRM-era compatibility overlay that happened to expose WWII-side factions against Last Victim Orks and Tyranids.

The archive contains 471 files, including 463 runtime/localization files. Its newest ZIP timestamp is 2026-04-08, before the current Gates of Hell and parent-mod revisions under test.

## Why it is valuable

Unlike the recent thin compatibility branch, this baseline owns the full runtime boundary that was close to loading tactically:

- `conquest.lua` and `utility.lua`
- the mission-side `dcg_script.inc` and `dcg_script.incall`
- campaign game registration, faction matchups, army files, research trees, rosters, unit wrappers, and AI purchase pools
- the interaction-entity root and `dummy.inc`
- SC human-skin selection
- shared vehicle/property roots, ballistics, vision, and third-person registries

This makes it useful for identifying hidden whole-family contracts. It does not prove that every copied file is required.

## Documentation conflicts

The archive's generated audit and implementation plan are not authoritative:

- `AUDIT_REPORT.txt` says `conquest.lua` is 967 lines; the archived file is 342 lines.
- The plan describes Indomitus `ig`/`tg` branch folding; the actual runtime maps `sov`, `csa`, `prc`, `ork`, and `tyr` to mission branches 1 through 5.
- The README describes CTRM as the source of truth, while the implementation plan still describes an older Indomitus-based design.
- `mod.info` names the result `CTRM vs LV 40K Xenos`.

Only the runtime files and reproduced game behavior should be treated as evidence.

## Rebuild policy

The active rebuild starts from `main`, not from PR #32 and not from the archive tree.

The archive is divided into independently testable families:

1. Campaign registry: game mode, values, alliances, armies, research, roster wrappers, and AI purchase pools.
2. Mission runtime: `conquest.lua`, `utility.lua`, and the DCG mission script.
3. Entity runtime: interaction root, `dummy.inc`, and human-skin routing.
4. Shared properties: vehicle, armor, recoil/stabilizer, ballistics, vision, and camera families.
5. Presentation: localization and Dynamic Conquest UI assets.

No family is admitted merely because it existed in the old overlay. Each checkpoint must add one coherent family, reproduce the same test, and record whether the failure boundary moves.

## First target

Reproduce the historical parent stack before reintroducing Code-X:

- West-81
- CTRM
- SC Modding Platform
- SC Last Victim 40K
- clean rebuilt overlay

Initial faction slice: one WWII-side faction versus one LV xenos faction. The first tactical gate is map entry with one known infantry purchase per side. Code-X is added only after that baseline completes a tactical battle.
