#!/bin/bash
wget -P /tmp https://github.com/mohamedessamx/alx-low_level_programming/raw/master/0x18-dynmaic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
