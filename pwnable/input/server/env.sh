#!/bin/bash
BASE_PATH="/tmp/server"

CUR_DIR=$(pwd)
cd $BASE_PATH
rm -f pip
mkfifo pip
cat pip &
gcc exploit.c -o exploit 2>/dev/null && ./exploit $BASE_PATH exploit.sh
# rm -f pip exploit
cd $CUR_DIR
