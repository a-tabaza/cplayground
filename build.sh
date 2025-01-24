#!/bin/bash
echo "compiling..."
gcc playground.c -o playground
echo "executing binary with args: $@..."
chmod +x ./playground
./playground $@
