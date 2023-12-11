#!/bin/bash
wget -p ..  https://raw.githubusercontent.com/Chad96/alx-low_level_programming/master/0x18-dynamic_libraries/libtesting.so
export LD_PRELOAD="$PWD/../libtesting.so"
