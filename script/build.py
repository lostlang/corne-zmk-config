#!/usr/bin/env python3

import argparse
import shlex
import subprocess
import sys
from pathlib import Path

import yaml


def main():
    executables_parser = argparse.ArgumentParser(add_help=False)
    executables_parser.add_argument("--west-executable", required=True)
    parser = argparse.ArgumentParser(parents=[executables_parser])
    parser.add_argument("--input-file", type=Path, required=True)
    parser.add_argument("--config-dir", type=Path, required=True)
    parser.add_argument("--workspace-dir", type=Path, required=True)
    args = parser.parse_args()

    with args.input_file.open(encoding="utf-8") as matrix_file:
        matrix = yaml.safe_load(matrix_file)
    entries = matrix.get("include")

    workspace = args.workspace_dir.resolve()
    config = args.config_dir.resolve()
    west = args.west_executable
    if not (workspace / ".west").is_dir():
        subprocess.run([west, "init", "-l", str(config)], cwd=workspace, check=True)
    ready = workspace / ".west" / "zmk-build-ready"
    if not ready.exists():
        subprocess.run(
            [
                west,
                "update",
                "--narrow",
                "--fetch-opt=--filter=tree:0",
                "--fetch-opt=--depth=1",
            ],
            cwd=workspace,
            check=True,
        )
        ready.touch()

    for index, entry in enumerate(entries, 1):
        board = entry["board"]
        shield = entry.get("shield")
        name = board
        if shield:
            name = shield
        label = f"{index}-{name}".replace("/", "_").replace(" ", "_")
        command = [
            west,
            "build",
            "-p",
            "always",
            "-s",
            str(workspace / "zmk/app"),
            "-d",
            str(workspace / "build" / label),
            "-b",
            board,
        ]
        if entry.get("snippet"):
            command += ["-S", entry["snippet"]]
        command += [
            "--",
            f"-DZephyr_DIR={workspace / 'zephyr/share/zephyr-package/cmake'}",
            f"-DZMK_CONFIG={config}",
        ]
        if shield:
            command.append(f"-DSHIELD={shield}")
        command += shlex.split(entry.get("cmake-args", ""))
        print(f"Building {board} {name} into build/{label}", flush=True)

        subprocess.run(command, cwd=workspace, check=True)


if __name__ == "__main__":
    sys.exit(main())
