# Runtime PR and merge policy

Documentation and audit tooling may merge after static CI because they cannot change the active game payload. Runtime compatibility files use a stricter checkpoint policy.

## Runtime change definition

A PR is a runtime PR when it adds or changes content beneath either of these top-level directories:

- `resource/`
- `localizations/`

`mod.info` changes are also runtime-visible and require an explicit launcher smoke test, although the dependency source gate does not block the existing foundation file.

## Required sequence

1. Start from the latest merged `main` checkpoint.
2. Keep one compatibility concern per PR.
3. Record every parent-path collision and why mod #5 must own the final file.
4. Pass static CI.
5. Keep the PR draft until its required manual game tests pass.
6. Attach the exact load order, source versions, test map, factions, steps, result, and relevant log excerpt.
7. Rebase or rebuild from current `main` after any earlier stacked PR is squash-merged.
8. Merge only the smallest tested runtime slice.

## Merge boundaries

The preferred runtime checkpoints are:

1. Multiplayer lobby registration for one faction per side.
2. Human rig isolation for representative units.
3. First playable Battle Zones vertical slice.
4. AI purchasing and endurance.
5. Remaining factions and content in bounded groups.
6. Domination.
7. Frontlines.

A later checkpoint must not be merged merely because its parent checkpoint passed. Each runtime checkpoint gets its own game test.

## Crash handling

When a crash appears:

1. Stop merging later runtime PRs.
2. Confirm the last known-good merged checkpoint.
3. Retest with the exact five-mod load order.
4. Collect the game log and reproduction steps.
5. Revert the smallest suspect checkpoint or fix it in a new PR based on the preceding known-good commit.

Do not bundle unrelated cleanup into a crash fix. The purpose of the checkpoint history is to keep the suspect range small.

## Stacked PR rule

Stacked branches are useful while work is in review, but this repository uses squash merges. After an earlier stacked PR is squash-merged, each child must be rebased or rebuilt from the new `main` before merge. Retargeting an unsquashed child without rebuilding can retain duplicate history even when file contents match.
