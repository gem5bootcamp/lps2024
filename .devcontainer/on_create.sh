#!/bin/bash

# Update the submodules
git submodule update --init --recursive

# Setups the gem5 source directory
pushd gem5

## We cleanup git's 'blame' feature by ignoring certain commits (typically
## commits that have reformatted files)
git config --global blame.ignoreRevsFile .git-blame-ignore-revs

## `git pull` should rebase by default
git config --global pull.rebase true

./util/pre-commit-install.sh

popd # gem5

# Pre-download the resources we use

gem5 pre-download-resources.py

docker pull ghcr.io/gem5/gcn-gpu:v24-0
