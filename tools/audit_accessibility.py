#!/usr/bin/env python3
"""Validate the live AT-SPI tree exported by Roland Capture Control."""

import sys
import time

import pyatspi


def children(node):
    try:
        return [node.getChildAtIndex(index) for index in range(node.childCount)]
    except Exception:
        return []


def walk(root, limit=5000):
    pending = [root]
    seen = []
    while pending and len(seen) < limit:
        node = pending.pop()
        seen.append(node)
        pending.extend(reversed(children(node)))
    return seen


deadline = time.monotonic() + 10
application = None
while time.monotonic() < deadline:
    desktop = pyatspi.Registry.getDesktop(0)
    for candidate in children(desktop):
        try:
            if candidate.name in {"octa-control", "Roland Capture Control"}:
                application = candidate
                break
        except Exception:
            continue
    if application is not None:
        break
    time.sleep(0.25)

if application is None:
    sys.exit("Roland Capture Control did not register an AT-SPI application tree")

nodes = walk(application)
records = []
for node in nodes:
    try:
        name = node.name.strip()
        role = node.getRoleName()
    except Exception:
        continue
    if name:
        records.append((role, name))

names = {name for _, name in records}
required = {
    "Roland Capture Control",
    "Status",
    "Inputs",
    "Direct Mix",
    "Patch Bay",
    "Outputs",
    "Presets",
    "Diagnostics",
    "Device",
}
missing = sorted(required - names)
if missing:
    for role, name in records:
        print(f"{role}\t{name}")
    sys.exit(f"AT-SPI tree is missing required names: {', '.join(missing)}")

interactive_roles = {
    "push button",
    "check box",
    "combo box",
    "page tab",
    "radio button",
    "slider",
}
unnamed_interactive = []
for node in nodes:
    try:
        role = node.getRoleName()
        name = node.name.strip()
    except Exception:
        continue
    if role in interactive_roles and not name:
        unnamed_interactive.append(role)
if unnamed_interactive:
    sys.exit(
        "AT-SPI tree contains unnamed interactive controls: "
        + ", ".join(sorted(unnamed_interactive))
    )

print(
    f"PASS: AT-SPI exported {len(nodes)} nodes, {len(records)} named nodes, "
    "all navigation labels, and no unnamed interactive control on the Status page."
)
