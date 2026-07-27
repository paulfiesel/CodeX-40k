# Dependency source intake

Runtime reconciliation requires exact copies of the four active dependency folders. Source assets remain outside this repository and are represented here only by generated manifests and reviewed compatibility decisions.

## Required folders

Copy or extract the active mods into this ignored local layout:

```text
source-mods/
  01-west81/
  02-codex/
  03-sc-platform/
  04-last-victim-40k/
```

Each directory must begin at the mod root containing its own `mod.info`, `resource`, and localization folders where applicable. Do not nest the actual mod root beneath an extra ZIP-name directory.

## Generate manifests

From the repository root:

```bash
python tools/build_manifest.py source-mods/01-west81 --name west81 --output .audit/sources/01-west81.json
python tools/build_manifest.py source-mods/02-codex --name codex --output .audit/sources/02-codex.json
python tools/build_manifest.py source-mods/03-sc-platform --name sc-platform --output .audit/sources/03-sc-platform.json
python tools/build_manifest.py source-mods/04-last-victim-40k --name last-victim-40k --output .audit/sources/04-last-victim-40k.json
```

Then generate the ordered collision report:

```bash
python tools/compare_mod_stacks.py \
  --manifest .audit/sources/01-west81.json \
  --manifest .audit/sources/02-codex.json \
  --manifest .audit/sources/03-sc-platform.json \
  --manifest .audit/sources/04-last-victim-40k.json \
  --output .audit/sources/collisions.json
```

## Snapshot acceptance checks

A source snapshot is accepted only when:

1. Its root contains the expected `mod.info`.
2. Its displayed name and version match the active launcher entry.
3. The manifest records every file beneath the root.
4. The folder has not been edited for compatibility work.
5. The game launches with that dependency stack before mod #5 is activated.

The manifests may be committed after review. The parent assets and complete source folders must not be committed.

## Review order

Collision review proceeds in this order:

1. Multiplayer armies, alliances, presets, and roster entry points.
2. Human properties, skin inheritance, skeletons, and animation sets.
3. Battle Zones mode initialization and AI purchase dispatch.
4. Shared global properties, ballistics, accuracy, vehicles, and inventories.
5. Localization and interface assets.
6. Additional modes after the Battle Zones vertical slice passes.
