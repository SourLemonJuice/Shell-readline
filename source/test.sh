#!/usr/bin/env bash

# BASH 3.5.6 Process Substitution
# https://www.gnu.org/software/bash/manual/html_node/Process-Substitution.html
input=$(./simple-readline 1> $(tty))
echo "${input}-variable"
