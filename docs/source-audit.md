# Reviewed source collision audit

Review date: 2026-07-27

This audit records commit-safe facts from the exact installed Workshop stack. The private collision bundle and parent-mod files remain outside GitHub.

## Exact source evidence

| Load | Source | Workshop ID | Detected `mod.info` name | Files | `mod.info` SHA-256 |
|---:|---|---:|---|---:|---|
| 1 | West-81 | `2897299509` | `West-81` | 23,224 | `0019da74386e8d79c17507d3161389caab81dd1f439b4ed8560106747b61d557` |
| 2 | Code-X | `3261086933` | `Code-X` | 26,468 | `e4d9c720c664a0cb2988ef6ccb362ef0089943cedea09199caa475791b0b2c9c` |
| 3 | SC Modding Platform | `3629384797` | `[GOH] SC Modding Plataform - v0.6.3` | 9 | `61d7e3fe9d5705e3a48e9084022b4ed19af3d4d2fc73ae4226d73299f70ec3c5` |
| 4 | Last Victim 40K | `3629381350` | `[GOH] SC Last Victim 40k Mod - OPEN TEST VERSION v0.6.3` | 9,647 | `aa96473588b4715d7dc36bb9d2ee56d76f8af69ace4f91a5f8d8afaaeef383a5` |

Private review bundle SHA-256:

```text
2477179943d2afc2ff6e37b7867020606f8f05ad52f8970e6c4f93b962736e2f
```

## Collision results

The ordered comparison found 1,020 overlapping paths:

- 510 byte-identical collisions
- 510 review-required collisions
- 17 critical, 27 high, 84 medium, and 892 general-review paths
- 1,008 collisions exist only between West-81 and Code-X
- 12 paths involve SC Platform or Last Victim 40K

The 12 cross-stack paths consist of:

- five loose multiplayer mode scripts: `battlezones.lua`, `conquest.lua`, `frontlines.lua`, `laststand.lua`, and `utility.lua`;
- six opaque package archives: `entity.pak`, `gamelogic.pak`, `interface.pak`, `map.pak`, `sound.pak`, and `texture.pak`;
- per-mod `mod.info`.

## First Battle Zones findings

`battlezones.lua` is a close Last Victim derivative of the West-81 script. Its meaningful changes are purchase timing, order timing, one AT-infantry property rename, and removal of West-81-specific doctrine and sortie priority multipliers. Last Victim is already the effective load-order winner.

`utility.lua` requires a compatibility merge. Last Victim changes the debug defaults and removes the shared main-logic require. Code-X adds purchase-retry state, `GetUnitSelectionTTSLimit`, `GameModeSpawnUnit`, and delayed unit selection. A first-slice override should preserve the Code-X purchase pipeline and shared-logic require while applying Last Victim's disabled debug defaults.

`conquest.lua`, `frontlines.lua`, and `laststand.lua` are outside the first Battle Zones checkpoint. They remain explicitly deferred rather than being copied into the compatibility mod.

`resource/properties/human.ext` collides only between West-81 and Code-X, but it is global and remains relevant to the later human-rig checkpoint. It must not be treated as a harmless modern-only collision.

## Gate status

The exact roots, manifests, hashes, and collision bundle have been reviewed. The source gate remains closed because two manual confirmations are still outstanding:

1. The four displayed launcher entries match the detected installed sources.
2. The four-parent stack launches successfully before the compatibility mod is enabled.

No runtime checkpoint may merge until those confirmations and its required in-game test record exist.
