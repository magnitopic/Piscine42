#!bin/sh
find . -type f -iname "*.sh" -execdir sh -c 'printf "%s\n" "${0%.*}"' {} ';'
