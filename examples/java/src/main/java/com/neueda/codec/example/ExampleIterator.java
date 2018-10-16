/*
 * Copyright 2014-2018 Neueda
 */
package com.neueda.codec.example;

import java.lang.*;
import java.util.*;
import java.io.*;
import com.neueda.cdr.Cdr;
import com.neueda.codec.Codec;
import com.neueda.codec.CodecFactory;
import com.neueda.codec.DecodeResults;
import java.nio.file.Files;

class CodecReader implements Iterable<Cdr> {

    private InputStream istream;
    private Codec codec;
    private byte[] readBuffer;
    private int bufferIndex = 0;
    private int bufferLimit = 0;
    private byte[] continuationBuffer;
    private int continuationLen = 0;
    private boolean hasNext = false;
    private Cdr initialCdr;

    public CodecReader(String fileName, String codec)
            throws IOException, FileNotFoundException {

        this.istream = new FileInputStream(new File(fileName));
        this.codec = new CodecFactory().getCodec(codec);

        if (this.codec == null) {
            throw new IllegalArgumentException("Invalid codec name");
        }

        this.readBuffer = new byte[10 * 1024];
        this.continuationBuffer = new byte[10 * 1024];
        this.getFirstCdr();
    }

    private byte[] sliceAndStitchBytes() {
        byte[] bytes = new byte[continuationLen + bufferLimit - bufferIndex];
        for (int i = 0; i < continuationLen; i++) {
            bytes[i] = continuationBuffer[i];
        }
        for (int i = bufferIndex; i < bufferLimit; i++) {
            bytes[continuationLen + i - bufferIndex] = readBuffer[i];
        }
        return bytes;
    }

    private void getFirstCdr() throws IOException, FileNotFoundException {
        while ((bufferLimit = istream.read(readBuffer)) != -1) {
            while (true) {
                DecodeResults res = getResultFromBuffer();
                if (res != null) {
                    this.initialCdr = res.getCdr();
                    this.bufferIndex = res.getUsed();
                    this.hasNext = true;
                    return;
                } else {
                    this.copyToContinuationBuffer();
                    break;
                }
            }
        }
    }

    private void copyToContinuationBuffer() {
        System.arraycopy(readBuffer, bufferIndex, continuationBuffer, 0, bufferLimit - bufferIndex);
        continuationLen = bufferLimit - bufferIndex;
    }

    private DecodeResults getResultFromBuffer() {
        try {
            byte[] slice = sliceAndStitchBytes();
            return codec.decode(slice);
        } catch (Exception e) {
            if ("codec-error: ".equals(e.getMessage())) {
                return null;
            } else {
                throw e;
            }
        }
    }

    private void cleanup() throws IOException {
        if (istream != null) {
            istream.close();
            istream = null;
        }
    }

    @Override
    public Iterator<Cdr> iterator() {
        return new Iterator<Cdr>() {

            private boolean _hasNext = CodecReader.this.hasNext;
            private Cdr _nextCdr = CodecReader.this.initialCdr;

            @Override
            public boolean hasNext() {
                return this._hasNext;
            }

            @Override
            public Cdr next() {
                Cdr cdr = this._nextCdr;
                try {
                    this.generateNextCdr();
                } catch (IOException e) {
                    _hasNext = false;
                }
                return cdr;
            }

            @Override
            public void remove() {
                throw new UnsupportedOperationException();
            }


            private void generateNextCdr()
                    throws IOException, FileNotFoundException {
                DecodeResults res = getResultFromBuffer();
                if (res != null) {
                    bufferIndex += res.getUsed();
                    _nextCdr = res.getCdr();
                    return;
                }
                // res == null => short of data
                while (true) {
                    copyToContinuationBuffer();
                    bufferLimit = istream.read(readBuffer);
                    bufferIndex = 0;
                    // Check if all data has been read
                    if (bufferLimit == -1) {
                        _hasNext = false;
                        cleanup();
                        return;
                    }
                    // Else try to get a result
                    DecodeResults nextRes = getResultFromBuffer();
                    if (nextRes != null) {
                        bufferIndex += nextRes.getUsed() - continuationLen;
                        _nextCdr = nextRes.getCdr();
                        continuationLen = 0;
                        return;
                    }
                }
            }

        };
    }
}

public class ExampleIterator {

    private static String getArgAfter(String[] args, String search) {
        for (int i = 0; i < args.length - 1; i++) {
            if (search.equals(args[i])) {
                return args[i + 1];
            }
        }
        return null;
    }

    private static String getFileNameArg(String[] args) {
        return getArgAfter(args, "-f");
    }

    private static String getCodecArg(String[] args) {
        return getArgAfter(args, "-v");
    }

    public static void main(String[] args)
            throws IOException, FileNotFoundException {

        String helpMessage = String.format("%s\n%s\n%s",
                "No file name or codec specified.",
                "Usage: -f <filename> -v <codec>",
                "Valid codecs are: 'lse', 'xetra', 'swx', 'optiq'");

        if (args.length == 0) {
            System.out.println(helpMessage);
            return;
        }

        String fileName = getFileNameArg(args);
        String codecName = getCodecArg(args);

        if (fileName == null || fileName.length() == 0) {
            System.out.println("No file name specified");
            return;
        }

        if (codecName == null || codecName.length() == 0) {
            System.out.println("No codec specified");
            return;
        }

        CodecReader reader = new CodecReader(fileName, codecName);
        for (Cdr cdr : reader) {
            System.out.println(cdr.toString());
        }

    }

}

