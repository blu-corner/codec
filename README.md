# codec [![Build Status](https://travis-ci.com/blu-corner/codec.svg?branch=master)](https://travis-ci.com/blu-corner/codec) [![Quality Gate Status](https://sonarcloud.io/api/project_badges/measure?project=blu-corner_codec&metric=alert_status)](https://sonarcloud.io/dashboard?id=blu-corner_codec)

- [Overview](#overview)
    - [Getting Started](#getting-started)
    - [Dependencies](#dependencies)
    - [Example Usage](#example-usage)
    - [Running the Tests](#running-the-tests)
- [Architecture](#architecture)
    - [cdr Interface](#cdr-interface)
    - [Packets Interface](#packets-interface)
    - [Interface Code Comparison](#interface-code-comparison)
    - [High Level Languages](#high-level-languages)
- [Examples](#examples)
    - [pcapReader](#pcapreader)
    - [fileReader](#filereader)
- [Implementation Notes](#implementation-notes)

# Overview

codec is an encode/decode library for order entry messaging protocols, that
allows CDRs to be encoded into raw buffers, and a raw buffer to be decoded into
a CDR. Additionally for fixed binary protocols a 'packets' interface is offered for
optimum performance, which allows values to be written/read directly to/from a 
struct which can be serialized onto the wire.

For all supported exchanges, there is no normalization provided. The fields that
must be populated into the cdr will match the name provided in the exchange 
specification with spaces removed. This is a design decision to avoid the need
to maintain/document normalization rules and should assist end users in
determining how to map fields.

The following codecs are currently provided:

- Millennium
    * LSE
    * OSLO
    * JSE
    * Borsa Italiana
    * Turquoise
- SWX OTI
- Xetra

Bindings for Java and Python are provided via swig.

## Getting Started

```bash
$ git submodule update --init --recursive
$ mkdir build
$ cd build
$ cmake -DTESTS=ON ../
$ make
$ make install
```

Language bindings can be enabled by passing -DJAVA=on, -DCSHARP=on, -DPYTHON=on
to CMake. It is possible to build all bindings in the same language.

## Dependencies

The only external dependency is SWIG, and is only required when building the
Java, C# or Python bindings. For information on installing SWIG please visit the
[SWIG website](http://www.swig.org). All other dependencies are managed through 
git submodules.

## Example Usage

A basic C++ example that retrieves the LSE codec, passes a CDR to the codec for
encoding, and then subsequently decodes the resulting buffer back into a CDR can
be found [here](examples/cpp/simple/simple.cpp)

To build and run the example from within the installation folder:

```bash
$ cd examples/codec/cpp/simple
$ make
$ ./simple
```

## Running the Tests

To run the unit tests:

```bash
$ make test
```

# Architecture

codec has 2 interfaces used for encoding/decoding as explained in the following
sections.

## cdr Interface

This interface is designed for programmability over performance, and to support 
variable length protocols such as FIX. 

All venues will have a cdr interface that will receive a cdr and encode
this into an exchange formatted buffer. During the encoding phase the codec will
validate that all mandatory fields are present within the CDR and populated. An
error will be returned should a field be ommitted. As a result of this
additional validation there is a small performance penalty to be paid.

Raw buffers passed to the decode will return a cdr object with all fields stored
with appropriate data types, inline with the exchange specification.

### codecState

encode/decode will return one of the following statuses:

```cpp
enum codecState
{
    GW_CODEC_SUCCESS,
    GW_CODEC_ERROR,
    GW_CODEC_ABORT,
    GW_CODEC_SHORT
};
```

For encode:

* GW_CODEC_SUCCESS - encode was successful, and the used value is updated to
    display amount of buffer used
* GW_CODEC_ERROR - could not construct a message
* GW_CDOEC_SHORT - buffer is too short

For decode:

* GW_CODEC_SUCCESS - target filled in and used set to the amount of data 
    consumed
* GW_CODEC_ERROR - potentially recoverable error: used is set to the
    size of the bad message
* GW_CODEC_ABORT - unrecoverable error: used is invalid
* GW_CODEC_SHORT - more data needed, used set to zero

## packets Interface

The packets interface exposes the underlying fixed binary structure as closely as
possible and where possible is a packed, serializable object. In this
interface there is no validation whatsoever, so if not careful a user can create
a buffer with uninitialized/garbage data within it. It is quicker than the cdr
interface but requires a little more care and attention. 

The packet will provide setters and getters for all fields, and the field name
will match that specified in the exchange specification with spaces removed. The
packet will concatenate the venue with the message name and finish with
Packet.h e.g. LseNewOrderPacket.h.

**NOTE:** This interface can vary depending on the underlying message protocol so please
review the venue implementation notes prior to development.

## Interface Code Comparison

The following sample shows the difference between the use of both interfaces for
the creation of an Lse Logon message.

```cpp
#include <stdint.h>
#include <err.h>
#include <iostream>
#include "lseCodec.h"
#include "codec.h"
#include "codecFactory.h"
#include "cdr.h"
#include "fields.h"

void cdrInterface (codec* lse)
{
    /* cdr interface */
    cdr d;
    d.setString(MessageType, "A");
    d.setString(UserName, "username");
    d.setString(Password, "password");
    d.setString(NewPassword, "password1");
    d.setInteger(MessageVersion, 0);

    char buf[1024];
    size_t used = 0;
    codecState state;
    
    state = lse->encode (d, buf, sizeof (buf), used);
    if (state != GW_CODEC_SUCCESS)
        errx (1, "encode error: %s", lse->getLastError ().c_str ());

    cdr r;
    used = 0;
    state = lse->decode (r, buf, sizeof (buf), used);
    if (state != GW_CODEC_SUCCESS)
        errx (1, "decode error: %s", lse->getLastError ().c_str ());
}

void packetsInterface (codec* lse)
{
    /* packets interface */
    LseLogon logon;
    logon.setUsername ("username");
    logon.setPassword ("password");
    logon.setNewPassword ("password1");
    logon.setMessageVersion (0);

    cdr rawResult;
    used = 0;
    state = lse->decode (rawResult, &logon, sizeof (logon), used);
    if (state != GW_CODEC_SUCCESS)
        errx (1, "decode error: %s", lse->getLastError ().c_str ());
}

int main ()
{

    string err;
    codec* lse;
    codecFactory cf;
    if (!cf.get ("lse", lse, err))
        errx (1, "failed to retrieve lse codec %s", err.c_str ());

    cdrInterface (lse);

    packetsInterface (lse);
}
```

## High Level Languages

Since higher level languages do not provide access to underlying memory
blocks/permit memory management interface classes **Buffer** and
**DecodeResults** have been created to marshall data through the bindings. As
such, the decode function takes a Buffer object and returns a DecodeResults
object. encode will return a Buffer.

Both interfaces can be viewed [here](src/bindings/codecBuffer.h), with example
usage:

* [Java](examples/java/src/main/java/com/neueda/codec/example)
* [Python](examples/python/basic/example.py)

# Examples

There are 2 larger examples provided to show a real world use of the codec.

## pcapReader

Source: [pcapReader.cpp](examples/cpp/pcapReader/pcapReader.cpp)

Usage: ./pcapReader -v *codec* -f *pcapFile*

Description: Takes a pcap file and parses it to produce a decoded stream of
messages.

## fileReader

Source: [fileReader.cpp](examples/cpp/fileReader/fileReader.cpp)

Usage: ./fileReader -v *codec* -f *binaryFile*

Description: Takes a binary file and parses it to produce a decoded stream of
messages. It is assumed that the file only contains the encoded binary messages
and no additional data.

# Implementation Notes

- [fix](docs/venue_fix.md#fixcodec)
