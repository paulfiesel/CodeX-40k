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

## Human rigs

Code-X humans retain the Code-X skeleton, animation sets, attachments, hitboxes, and vehicle poses.

Last Victim humans retain the SC family rooted in `_staging_sc_h_skin_test`, unless source inspection identifies a newer authoritative base.

A global replacement of `human.ext` is prohibited unless a narrower compatibility layer is proven impossible. Models, skeletons, animations, weapon bones, equipment slots, ragdolls, and vehicle poses must remain within their intended family.

## Multiplayer foundation

The first supported mode is Battle Zones. The first playable target is one modern faction versus one 40K faction on one known-compatible map. Additional factions and modes are added only after that complete path works from lobby through match completion.

## Naming

New compatibility-only identifiers use the `cx40k_` prefix. Existing parent identifiers are preserved unless they collide.
