#!/usr/bin/env python

# import CommonDataRepresentation as Cdr
import Codecs as Codec
import os
import sys
import mmap

def getDecodedMessage(filename, codec):
    idx = 0

    with open(sys.argv[1], 'rb') as f:
        while(True):
            data = f.read()

            try:
                res = codec.decode(data)
                idx+=res.getUsed()
                f.seek(idx)
                yield res.getCdr()
            except:
                return

def main():
    codec = Codec.lseCodec.get()
    for msg in getDecodedMessage(sys.argv[1], codec):
        print msg.toString()

if __name__ == '__main__':
    main()
