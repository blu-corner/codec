#
# Copyright 2014-2018 Neueda Ltd.
#
#!/usr/bin/env bash
set -e

javac -cp `pwd`/CdrJNI.jar:`pwd`/CodecsJNI.jar example.java
