/*
 * Copyright 2014-2018 Neueda
 */
package com.neueda.codec.example;

import java.util.*;
import com.neueda.cdr.Cdr;
import com.neueda.codec.Codec;
import com.neueda.codec.CodecFactory;
import com.neueda.codec.DecodeResults;
import com.neueda.codec.Fields;
import com.neueda.codec.lseCodec;
import com.neueda.codec.Buffer;
import com.neueda.logger.Logger;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.nio.MappedByteBuffer;
import java.nio.channels.FileChannel;
import java.io.*;

public class FileReader {

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

    // Returns a new byte array containing all bytes in continuationBuffer (up
    // to continuationLen) concatenated with bytes in readBuffer from "start"
    // to "end"
    private static byte[] sliceAndStitchBytes(byte[] continuationBuffer,
            int continuationLen, byte[] readBuffer, int start, int end) {
        byte[] bytes = new byte[continuationLen + end - start];
        for (int i = 0; i < continuationLen; i++) {
            bytes[i] = continuationBuffer[i];
        }
        for (int i = start; i < end; i++) {
            bytes[continuationLen + i - start] = readBuffer[i];
        }
        return bytes;
    }

    private static void streamRead(String fileName, Codec codec) 
            throws IOException, FileNotFoundException {
        InputStream istream = null;
        try {
            //Codec lse = lseCodec.get();
            int bufferSize = 10 * 1024;
            // File stream reads into readBuffer
            byte[] readBuffer = new byte[bufferSize];
            // Any bytes remaining in readBuffer (but which don't constitute
            // an entire CDR) are copied into here
            byte[] continuationBuffer = new byte[bufferSize];
            int continuationLen = 0;
            istream = new FileInputStream(new File(fileName));
            int read = 0;
            // Read 10 KB at a time
            while ((read = istream.read(readBuffer)) != -1) {
                int current = 0;
                while (true) {
                    try {
                        byte[] slice = sliceAndStitchBytes(
                                continuationBuffer,
                                continuationLen,
                                readBuffer,
                                current,
                                read);
                        DecodeResults result = codec.decode(slice);
                        current += result.getUsed() - continuationLen;
                        continuationLen = 0; // reset
                        Cdr cdr = result.getCdr();
                        // Do something with CDR
                        System.out.println(cdr.toString());
                    } catch (Exception e) {
                        // Empty message (all messages have 'codec-error: '
                        // prefixed) implies buffer is short and needs more data
                        if ("codec-error: ".equals(e.getMessage())) {
                            // Copy the remaining bytes into the continuation
                            // buffer, and set continuationLen
                            System.arraycopy(readBuffer, current,
                                    continuationBuffer, 0, read - current);
                            continuationLen = read - current;
                            break;
                        } else {
                            throw e;
                        }
                    }
                }
            }
        } finally {
            try {
                if (istream != null) istream.close();
            } catch (IOException _e) {}
        }
    }

    private static byte[] sliceArray(byte[] arr, int start, int end) {
        byte[] res = new byte[end - start];
        System.arraycopy(arr, start, res, 0, end - start);
        return res;
    }

    private static void memoryMappedRead(String fileName, Codec codec)
            throws IOException, FileNotFoundException {

        FileChannel fc = null;

        try {

            fc =
                new RandomAccessFile(new File(fileName), "r").getChannel();
            long fileSize = fc.size();

            MappedByteBuffer buffer =
                fc.map(FileChannel.MapMode.READ_ONLY, 0, fc.size());

            int bufferSize = 10 * 1024;
            byte[] continuationBuffer = new byte[bufferSize];
            int continuationLen = 0;
            int offset = 0;

            while (offset < fileSize) {
                // bSize will be either bufferSize + continuationLen or (if that
                // is too large) it will be fileSize - offset + continuationLen
                // (which then gets incremented by bufferSize + cLen amounts)
                // Doing it this way allows bSize to grow (in case there are any
                // CDRs which are > bufferSize
                // This can work just once (up to 2 * bufferSize) because the
                // continuationBuffer is fixed in size
                int bSize = offset + bufferSize + continuationLen > fileSize ?
                     (Math.toIntExact(fileSize) - offset + continuationLen) :
                     bufferSize + continuationLen;
                offset += (bufferSize + continuationLen);
                byte[] readBuffer = new byte[bSize];
                // Fill the read buffer
                if (continuationLen == 0) {
                    buffer.get(readBuffer);
                } else {
                    System.arraycopy(continuationBuffer, 0,
                            readBuffer, 0, continuationLen);
                    buffer.get(readBuffer, continuationLen,
                            bSize - continuationLen);
                }
                continuationLen = 0; // reset it
                // Now pull CDRs out of readBuffer until done
                int current = 0;
                while (true) {
                    try {
                        System.out.println(bSize - current);
                        byte[] slice = sliceArray(readBuffer, current, bSize);
                        DecodeResults result = codec.decode(slice);
                        current += result.getUsed();
                        Cdr cdr = result.getCdr();
                        // Do something with the CDR
                        System.out.println(cdr.toString());
                    } catch (Exception e) {
                        // Implies we're short
                        if ("codec-error: ".equals(e.getMessage())) {
                            continuationLen = bSize - current;
                            System.arraycopy(readBuffer, current,
                                    continuationBuffer, 0, continuationLen);
                            break;
                        } else {
                            throw e;
                        }
                    }
                }
            }

        } finally {
            try {
                if (fc != null) fc.close();
            } catch (IOException _e) {}
        }

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

        CodecFactory factory = new CodecFactory();
        Codec codec = factory.getCodec(codecName);

        if (codec == null) {
            System.out.println("Invalid codec name supplied");
            return;
        }

        //streamRead(fileName, codec);
        memoryMappedRead(fileName, codec);

    }

}

