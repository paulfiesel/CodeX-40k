# Dependency source intake

Runtime reconciliation requires exact copies of the four active dependency folders. Source assets remain outside this repository and are represented here only by generated manifests and reviewed compatibility decisions.

## Exact Workshop folders

The active Workshop roots are expected beneath the Gates of Hell content folder, normally `steamapps/workshop/content/400750`:

```text
2897299509  West-81
3261086933  Code-X
3282681270  [GOH] SC Modding Platform
3282689669  [GOH] SC Last Victim 40K
```

Each directory must begin at the mod root containing its own `mod.info`, `resource`, and localization folders where applicable. Do not point intake at a parent ZIP directory or a nested copy that does not contain `mod.info` directly.

## Automated installed-source intake

From the repository root on Paul's current Steam library:

```powershell
python tools/intake_workshop_sources.py --workshop-root "E:\Steam\steamapps\workshop\content\400750"
```

The tool performs these steps in load order:

1. Verifies that every expected Workshop folder exists.
2. Requires `mod.info` at each source root.
3. Records the `mod.info` SHA-256 and detected name/version fields in `.audit/sources/intake-report.json`.
4. Generates one deterministic file manifest per dependency.
5. Generates `.audit/sources/collisions.json` with the effective load-order winner for every overlapping path.
6. Generates `.audit/sources/collision-triage.json` and `.audit/sources/collision-triage.md` with critical registry and rig collisions first.

Use `--dry-run` to verify roots without hashing every parent asset. A local or renamed source can replace one Workshop path without changing load order:

```powershell
python tools/intake_workshop_sources.py `
  --workshop-root "E:\Steam\steamapps\workshop\content\400750" `
  --source codex="E:\Steam\steamapps\common\Call to Arms - Gates of Hell\mods\Codex"
```

The `GOH_WORKSHOP_ROOT` environment variable may be used instead of `--workshop-root`.

## Private collision review bundle

After intake succeeds, export a private review ZIP from the exact files represented by the manifests:

```powershell
python tools/export_collision_review_bundle.py `
  --intake-report .audit/sources/intake-report.json `
  --collisions .audit/sources/collisions.json `
  --triage-json .audit/sources/collision-triage.json `
  --triage-markdown .audit/sources/collision-triage.md `
  --output .audit/sources/collision-review-bundle.zip
```

The bundle is intended for private compatibility review or upload to the active development conversation. It:

- includes every colliding text-file version up to 2 MB by default;
- includes each dependency's `mod.info`, manifests, collision report, and triage output;
- excludes binary assets;
- strips the local Workshop root and individual `source_root` paths;
- verifies each included file still matches the manifest SHA-256;
- uses deterministic ZIP metadata so identical sources produce identical bundle bytes.

Use `--max-file-bytes` to change the per-file text limit. The ZIP remains beneath ignored `.audit/` and must not be committed. It may contain copyrighted parent-mod text and should not be published or attached to a public GitHub issue.

## Manual source layout fallback

Copy or extract the active mods into this ignored local layout only when the installed Workshop folders cannot be read directly:

```text
source-mods/
  01-west81/
  02-codex/
  03-sc-platform/
  04-last-victim-40k/
```

Then generate manifests manually:

```bash
python tools/build_manifest.py source-mods/01-west81 --name west81 --output .audit/sources/01-west81.json
python tools/build_manifest.py source-mods/02-codex --name codex --output .audit/sources/02-codex.json
python tools/build_manifest.py source-mods/03-sc-platform --name sc-platform --output .audit/sources/03-sc-platform.json
python tools/build_manifest.py source-mods/04-last-victim-40k --name last-victim-40k --output .audit/sources/04-last-victim-40k.json
python tools/compare_mod_stacks.py \
  --manifest .audit/sources/01-west81.json \
  --manifest .audit/sources/02-codex.json \
  --manifest .audit/sources/03-sc-platform.json \
  --manifest .audit/sources/04-last-victim-40k.json \
  --output .audit/sources/collisions.json
python tools/triage_collisions.py \
  --input .audit/sources/collisions.json \
  --output-json .audit/sources/collision-triage.json \
  --output-markdown .audit/sources/collision-triage.md
```

The automated intake report is still required by the review-bundle exporter. When using manual source folders, run `intake_workshop_sources.py` with four `--source KEY=PATH` overrides so the report records those verified roots.

## Snapshot acceptance checks

A source snapshot is accepted only when:

1. Its root contains the expected `mod.info`.
2. Its displayed name and version match the active launcher entry.
3. The manifest records every file beneath the root.
4. The folder has not been edited for compatibility work.
5. The game launches with that dependency stack before mod #5 is activated.
6. The generated intake report and manifests have been reviewed.
7. The private collision review bundle is generated from unchanged source hashes.

The automated tool verifies filesystem identity and produces evidence, but it does not mark `docs/source-status.json` as `ready`. Readiness remains a reviewed decision after launcher and baseline game checks.

The manifests may be committed after review. The parent assets and complete source folders must not be committed.

## Review order

Collision review proceeds in this order:

1. Multiplayer armies, alliances, presets, and roster entry points.
2. Human properties, skin inheritance, skeletons, and animation sets.
3. Battle Zones mode initialization and AI purchase dispatch.
4. Shared global properties, ballistics, accuracy, vehicles, and inventories.
5. Localization and interface assets.
6. Additional modes after the Battle Zones vertical slice passes.
