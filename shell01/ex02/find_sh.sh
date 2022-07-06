#!/usr/bin/env zsh
find . -type f -name "*.sh" | xargs basename -s .sh
