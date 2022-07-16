#!/bin/sh
cat /etc/passwd | grep -v '#' | awk 'NR%2==0'| awk -F ":" '{print " ,"$1}' | rev | sort -r | awk 'NR>7{print $0}' | awk 'NR<15{print $0}' | tr -d '\n' | sed "s/, *$/./"