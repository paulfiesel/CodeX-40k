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

The imported Code-X snapshot that previously occupied `main` is preserved on `archive/codex-reference-2026-07-27` at commit `d9d2880d21ff38d2c63c06dbe79b870a6e4e437a`.

## Current status

Exact installed-source intake and the complete Dynamic Conquest/entity-runtime audit are complete. The four active dependencies contain 59,348 files and 1,020 colliding paths. The first faction pair is Code-X NATO versus Last Victim Space Marines. No gameplay compatibility files have shipped yet.

Planned sequence:

1. Confirm the four-parent launcher stack reaches the main menu without mod #5 and promote the source gate.
2. Reconcile NATO and Space Marine campaign setup, research, rosters, and tactical AI in a draft runtime PR.
3. Preserve the Code-X human rig and the Last Victim/SC rig families during conquest deployment and combat.
4. Deliver one complete Dynamic Conquest cycle through research, purchase, deployment, tactical battle, post-battle progression, save, and reload.
5. Expand additional conquest factions only after the first campaign slice is stable.
6. Consider Battle Zones, Domination, and Frontlines later as separate checkpoints.

See `docs/architecture.md`, `docs/exact-dynamic-conquest-runtime-source-audit.md`, `docs/source-versions.md`, and `docs/testing.md`.
