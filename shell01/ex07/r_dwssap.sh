#!/bin/sh
cat /etc/passwd | tail -n+11 | awk 'NR % 2 == 0' | rev |sort -r | cut -d ":" -f 7