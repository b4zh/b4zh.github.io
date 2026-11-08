#!/bin/sh

output=$(curl -sL "https://man.archlinux.org/man/$1" | grep -A1 "Package name" | tail -n1 | tr "<,>" " " | awk '{print $4}')
tool=$(printf "%s" "$output" | cut -d"/" -f2)

test -n "$output" && printf "%s\n" "$output" && (printf "%s\n" "$tool" | xclip -sel clip) || printf "%s not found :(\n" "$1"
