#!/bin/sh
git log -n 5 --pretty=oneline|cut -d " " -f 1
