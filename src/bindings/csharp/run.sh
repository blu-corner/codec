#
# Copyright 2014-2018 Neueda Ltd.
#
#!/usr/bin/env bash
set -e

LD_LIBRARY_PATH=`pwd`/../:$LD_LIBRARY_PATH ./test.exe
