# Code-X archived source baseline

## Provenance

The imported Code-X source is preserved outside `main` so it can be inspected without redistributing it through the compatibility mod.

- Archive branch: `archive/imported-codex-snapshot`
- Source commit: `5e4f676bc2c4227c9146b7255110499ce8e74c7f`
- Source root: `3261086933/`
- Declared mod name: `Code-X`
- Declared version tag: `Code-X beta0.8`

This is an exact archive of the source imported into this repository, but it is not yet proven byte-identical to the currently installed Code-X workshop copy. Runtime compatibility decisions must therefore be checked against a fresh installed snapshot before release.

## High-risk collision surfaces

The archive confirms that Code-X owns several global paths that are likely to collide with the SC Platform or Last Victim stack:

- `resource/properties/human.ext`
- `resource/properties/armor.ext`
- `resource/properties/vehicle.ext`
- `resource/properties/tank.ext`
- `resource/set/ballistics.set`
- `resource/set/big.firearms.accuracy`
- `resource/script/multiplayer/modes/conquest.lua`
- multiplayer roster, army, preset, doctrine, and purchase-table registries
- shared localization namespaces

These files may not be copied into the compatibility layer merely because they exist in Code-X. A compatibility-owned file is justified only when the effective five-mod stack requires a late merged override.

## Code-X human family

The archived `resource/properties/human.ext` establishes a complete Code-X human contract rather than a cosmetic skin definition. It includes:

- vitality and stamina rules
- damage volumes and multipliers
- inventory masks, armor volumes, and attachment bones
- `human_fsm.ext`
- visor, hearing, recognition, and information ranges
- movement, strafe, and animation mappings
- `right_hand`, `aim_ref`, `IK_UpDown`, `head`, and visor-related bone references
- human brain, target, collider, simulator, and weaponry configuration

The compatibility layer must preserve this Code-X family separately from Last Victim's SC human family rooted in `_staging_sc_h_skin_test`. A global replacement of `human.ext` is prohibited unless source comparison proves that no narrower alias or inheritance bridge can work.

## Current decision boundary

The archive is sufficient to identify Code-X risk areas and prepare validators. It is not sufficient to author a safe runtime merge because exact snapshots of West-81, the SC Modding Platform, and Last Victim 40K are still missing.

Until those sources are inventoried, runtime work is limited to documentation, source-intake tooling, collision classification, and test planning. No speculative roster, rig, or multiplayer override should merge into `main`.
