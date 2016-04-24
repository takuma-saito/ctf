#!/bin/bash

rm -f pip
mkfifo pip
(while cat pip; do : Nothing; done &)
gcc exploit.c -o exploit && ./exploit
# rm -f pip exploit
