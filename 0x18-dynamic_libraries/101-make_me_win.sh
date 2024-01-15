#!/bin/bash
wget -P .. https://raw.githubusercontent.com/thisislaait/alx-low_level_programming/main/0x18-dynamic_libraries/libgigamillions.so
export LD_PRELOAD="$PWD/../libgigamillions.so"
