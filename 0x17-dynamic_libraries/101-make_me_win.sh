#!/bin/bash
wget https://github.com/blueExcess/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/winning.so
export LD_PRELOAD=$PWD/winning.so
