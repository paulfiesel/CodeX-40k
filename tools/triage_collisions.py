#!/usr/bin/env python3
from __future__ import annotations

import argparse
import json
from collections import Counter
from pathlib import Path

PRIORITY_ORDER = {"critical": 0, "high": 1, "medium": 2, "review": 3}


def classify_path(path: str) -> dict[str, str]:
    normalized = path.casefold().replace("\\", "/")

    if normalized.endswith("resource/properties/human.ext") or "_staging_sc_h_skin_test" in normalized:
        return {
            "area": "human-rig",
            "priority": "critical",
            "recommended_action": "preserve separate inheritance families and hand-review every dependent reference",
        }
    if normalized.startswith("resource/set/multiplayer/"):
        return {
            "area": "multiplayer-registry",
            "priority": "critical",
            "recommended_action": "classify as registry, roster, preset, alliance, doctrine, or unit-mode merge",
        }
    if normalized.startswith("resource/script/multiplayer/"):
        return {
            "area": "multiplayer-script",
            "priority": "high",
            "recommended_action": "preserve both initialization chains and add compatibility dispatch last",
        }
    if normalized.startswith("resource/properties/") or normalized in {
        "resource/set/ballistics.set",
        "resource/set/big.firearms.accuracy",
        "resource/set/blast.inc",
    }:
        return {
            "area": "global-runtime-tuning",
            "priority": "high",
            "recommended_action": "hand-review semantics and avoid copying a parent winner without proof",
        }
    if normalized.startswith("localizations/"):
        return {
            "area": "localization",
            "priority": "medium",
            "recommended_action": "deduplicate keys and preserve the intended effective text",
        }
    if normalized.startswith("resource/map/"):
        return {
            "area": "map-trigger",
            "priority": "medium",
            "recommended_action": "verify mode trigger compatibility on each supported map",
        }
    return {
        "area": "unclassified",
        "priority": "review",
        "recommended_action": "manual classification required",
    }


def triage_report(report: dict) -> dict:
    triaged = []
    for collision in report.get("collisions", []):
        enriched = dict(collision)
        enriched["triage"] = classify_path(str(collision.get("normalized_path", "")))
        triaged.append(enriched)

    triaged.sort(
        key=lambda item: (
            PRIORITY_ORDER[item["triage"]["priority"]],
            item.get("normalized_path", ""),
        )
    )
    counts = Counter(item["triage"]["priority"] for item in triaged)
    return {
        "load_order": report.get("load_order", []),
        "collision_count": len(triaged),
        "priority_counts": dict(sorted(counts.items(), key=lambda item: PRIORITY_ORDER[item[0]])),
        "collisions": triaged,
    }


def render_markdown(report: dict) -> str:
    lines = ["# Collision triage", ""]
    lines.append(f"Total colliding paths: **{report.get('collision_count', 0)}**")
    lines.append("")
    lines.append("## Priority counts")
    lines.append("")
    for priority in ("critical", "high", "medium", "review"):
        lines.append(f"- {priority}: {report.get('priority_counts', {}).get(priority, 0)}")
    lines.append("")
    lines.append("## Ordered review queue")
    lines.append("")
    lines.append("| Priority | Area | Path | Effective winner | Recommended action |")
    lines.append("|---|---|---|---|---|")
    for collision in report.get("collisions", []):
        triage = collision["triage"]
        lines.append(
            "| {priority} | {area} | `{path}` | {winner} | {action} |".format(
                priority=triage["priority"],
                area=triage["area"],
                path=collision.get("normalized_path", ""),
                winner=collision.get("effective_winner", ""),
                action=triage["recommended_action"],
            )
        )
    lines.append("")
    return "\n".join(lines)


def main() -> int:
    parser = argparse.ArgumentParser(description="Prioritize an ordered mod collision report.")
    parser.add_argument("--input", type=Path, required=True)
    parser.add_argument("--output-json", type=Path, required=True)
    parser.add_argument("--output-markdown", type=Path, required=True)
    args = parser.parse_args()

    report = json.loads(args.input.read_text(encoding="utf-8"))
    triaged = triage_report(report)
    args.output_json.parent.mkdir(parents=True, exist_ok=True)
    args.output_markdown.parent.mkdir(parents=True, exist_ok=True)
    args.output_json.write_text(json.dumps(triaged, indent=2, sort_keys=True) + "\n", encoding="utf-8")
    args.output_markdown.write_text(render_markdown(triaged), encoding="utf-8")
    print(f"triaged {triaged['collision_count']} colliding paths")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
