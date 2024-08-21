#!/usr/bin/env bash

input=$(./simple-readline 1> $(tty))
echo "${input}-variable"
