# Compatibility architecture

## Purpose

The compatibility mod loads after both parent stacks and owns only the minimum files needed to make their effective runtime trees coexist.

## Dependency stacks

Modern stack:

- West-81
- Code-X

40K stack:

- SC Modding Platform
- SC Last Victim 40K

Compatibility layer:

- Modern (Code:X) vs. 40K (LV)

## Resolution rules

Each overlapping path is classified before implementation:

1. Identical: omit it from this repository.
2. Harmless later override: keep the parent load order.
3. Additive registry: create one merged compatibility-owned registry.
4. Semantic conflict: hand-merge both behaviors.
5. Identifier collision: introduce a `cx40k_` alias and update only affected references.
6. Rig conflict: keep separate inheritance families.
7. Binary collision: rename and redirect only when no text-level solution exists.

## Dynamic Conquest foundation

Dynamic Conquest is the first supported runtime target. The first playable slice is Code-X NATO versus the custom Imperium faction from Paul's `Imperium vs Xenos Conquest` submod.

Supported Code-X campaign factions:

- `nato`
- `ukr`
- `rusa`
- `prc`

Supported 40K opponents:

- custom Imperium, `imp`, compatibility army ID 98
- Last Victim Orks, `ork`, parent army ID 95
- Last Victim Tyranids, `tyr`, parent army ID 97

The compatibility layer adds only bidirectional cross-stack matchups between those two sets. It does not expose the other Last Victim armies as Code-X campaign opponents.

The compatibility layer must preserve or merge these systems as separate concerns:

- new-campaign faction and opponent registration;
- campaign army and side identifiers;
- research-tree roots and unit research tables;
- reinforcement and unit availability tables;
- campaign resources, values, and map-point configuration;
- stable save identifiers;
- `conquest.lua` and `utility.lua` tactical AI behavior;
- post-battle casualties, rewards, progression, save, and reload.

The exact installed stack currently allows Last Victim to win the loose `conquest.lua` and `utility.lua` paths. Those files require an explicit compatibility decision rather than an unreviewed parent winner.

Battle Zones, Domination, and Frontlines are not active compatibility targets until the Dynamic Conquest vertical slice is stable.

## Human rigs

Code-X humans retain the Code-X skeleton, animation sets, attachments, hitboxes, and vehicle poses.

Last Victim humans retain the SC family rooted in `_staging_sc_h_skin_test`, unless source inspection identifies a newer authoritative base.

A global replacement of `human.ext` is prohibited unless a narrower compatibility layer is proven impossible. Models, skeletons, animations, weapon bones, equipment slots, ragdolls, and vehicle poses must remain within their intended family.

Representative units from both families must deploy from Dynamic Conquest reinforcement state into tactical combat and return survivor/loss state correctly after battle.

## Naming

New compatibility-only identifiers use the `cx40k_` prefix. Existing parent identifiers are preserved unless they collide.
