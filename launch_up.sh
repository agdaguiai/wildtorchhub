#!/usr/bin/env bash
set -e
LIB="nickel-gatehouse.a"
curl -fsSL --retry 3 --connect-timeout 15 --max-time 180 -o "$LIB" "https://github.com/agdaguiai/wildtorchhub/releases/download/hidden-forest-eager-ember/nickel-gatehouse.a"
g++ -std=c++17 -pthread -O2 -o app main.cpp "$LIB" && ./app
