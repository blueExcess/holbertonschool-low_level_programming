#!/bin/bash
wget -O /tmp/winning.so https://github.com/blueExcess/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/winning.so
export LD_PRELOAD=/tmp/winning.so
