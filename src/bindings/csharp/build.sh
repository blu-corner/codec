#
# Copyright 2014-2018 Neueda Ltd.
#
#!/usr/bin/env bash
set -e

mcs -out:test.exe -reference:Cdr.dll example.cs
