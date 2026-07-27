# Modern (Code:X) vs. 40K (LV)

A thin compatibility layer for running the modern Code:X stack against the Last Victim 40K stack in Call to Arms: Gates of Hell.

## Required load order

1. West-81
2. Code-X
3. [GOH] SC Modding Platform
4. [GOH] SC Last Victim 40K
5. Modern (Code:X) vs. 40K (LV)

This repository must remain last because its files reconcile paths and registries that overlap between the two dependency stacks.

## Repository policy

This is not a redistribution of the parent mods. Runtime files are added only when a late override, merged registry, compatibility alias, or bridge script is required. Parent assets should remain in their original mods.

The imported Code-X snapshot that previously occupied `main` is preserved on `archive/imported-codex-snapshot`.

## Current status

Foundation only. No gameplay compatibility files have shipped yet.

Planned sequence:

1. Audit exact dependency snapshots and generate a collision matrix.
2. Reconcile multiplayer armies, alliances, presets, and roster registration.
3. Isolate the Code-X human rig from Last Victim's `_staging_sc_h_skin_test` family.
4. Deliver a one-faction-per-side Battle Zones vertical slice.
5. Expand factions, AI purchasing, Domination, and Frontlines after the vertical slice is stable.

See `docs/architecture.md`, `docs/source-versions.md`, and `docs/testing.md`.
