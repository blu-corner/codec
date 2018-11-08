#
# Copyright 2014-2018 Neueda Ltd.
#
#!/usr/bin/env bash
set -e

cp ../../../lib/csharp/*.dll .
LD_LIBRARY_PATH=`pwd`/../../../lib/csharp:`pwd`/../../../lib:$LD_LIBRARY_PATH ./test.exe
