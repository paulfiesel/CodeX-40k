# Dependency source readiness policy

## Purpose

Source readiness answers one question: do we have exact, reviewable copies of the installed parent-mod files needed to build the compatibility layer?

It does not assert that the parent mods are already mutually compatible.

## Ready criteria

The four dependency sources are ready when:

1. each configured source root exists and contains its own `mod.info`;
2. the roots appear in the required load order;
3. each source has a complete, non-empty manifest;
4. every recorded file hash matches the installed file used during intake;
5. the collision report uses the same load order and has internally consistent counts;
6. the private Dynamic Conquest, entity-runtime, and human-rig review slice has been inspected and its commit-safe hash and findings are recorded.

## Combined-stack launch behavior

A successful launch of West-81, Code-X, SC Modding Platform, and Last Victim 40K without the compatibility mod is not required.

Those parents are known to overlap in global Conquest scripts, entity packages, properties, rigs, and registries. A parser failure or crash from that unmodified combined stack is the starting incompatibility to fix. Requiring the incompatible stack to launch would make compatibility work impossible by definition.

The useful runtime baseline is instead:

- record the first failure with the compatibility mod disabled when needed for comparison;
- enable the compatibility runtime PR last;
- verify that each compatibility checkpoint moves farther through startup, campaign creation, deployment, combat, progression, save, and reload;
- keep runtime PRs unmerged until their required in-game evidence passes.

## Separation of gates

Source gate:

- protects against building from stale, partial, or unidentified parent files;
- may allow runtime files once exact source evidence is ready.

Runtime gate:

- proves that the reconciled compatibility files actually work in game;
- requires manual evidence for each checkpoint;
- remains unresolved until the complete Dynamic Conquest cycle passes.
