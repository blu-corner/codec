/*
 * Copyright 2014-2018 Neueda
 */
%module(directors="1", thread="1") codecBinding

%rename(Cdr) neueda::cdr;
%rename(Codec) neueda::codec;
%rename(CodecFactory) neueda::codecFactory;

%{
#include <fields.h>
#include <codecFactory.h>
#include <codec.h>
#include <codecBuffer.h>

#include <stdexcept>
#include <sstream>
#include <string>

#include <lseCodec.h>
#include <LsePackets.h>

#include <osloCodec.h>
#include <OsloPackets.h>

#include <turquoiseCodec.h>
#include <TurquoisePackets.h>

#include <jseCodec.h>
#include <JsePackets.h>

#include <borsaitalianaCodec.h>
#include <BorsaItalianaPackets.h>

#include <swxCodec.h>
#include <swxPackets.h>

%}

%include "std_string.i"
%include "stdint.i"
%include "std_vector.i"
%include "cdata.i"
%include "typemaps.i"

// macros
%define __attribute__(x)
%enddef
%define PACKED(x)
x
%enddef

%import(module="properties") "properties.h"
%import(module="logger") "logger.h"
%import(module="cdr") "cdr.h"

%ignore neueda::codecFactory::get;

%extend neueda::codecFactory {
    neueda::codec* getCodec(std::string name) {
        codec* c = NULL;
        std::string error;

        if (!self->get(name.c_str(), c, error))
            return NULL;

        return c;
    }
}

// extend codec base type to get interface
%extend neueda::codec {
    
    neueda::Buffer* encode(const cdr* source) {
         void* buffer = (void*) malloc(1024);
         if (buffer == NULL)
             throw std::runtime_error ("failed to allocate buffer");

         size_t used = 0;
         codecState state = self->encode (*source, buffer, 1024, used);
         bool ok = state == GW_CODEC_SUCCESS;
         if (not ok)
             throw std::runtime_error (self->getLastError ());

         return new neueda::Buffer(buffer, used, true);
    }

    neueda::DecodeResults* decode(const char* buffer, size_t length) {
         cdr* target = new cdr();
         size_t used = 0;
         codecState state = self->decode(*target, (const void*)buffer, length, used);

         bool ok = state == GW_CODEC_SUCCESS;
         if (not ok) {
             delete target;
             throw std::runtime_error (self->getLastError ());
         }

         DecodeResults* res = new DecodeResults (target, used, true);

         return res;
    }

    neueda::DecodeResults* decodeBuffer(const neueda::Buffer* buffer) {
         cdr* target = new cdr();
         size_t used = 0;
         codecState state = self->decode(*target,
                                         buffer->getPointer (),
                                         buffer->getLength (),
                                         used);

         bool ok = state == GW_CODEC_SUCCESS;
         if (not ok) {
             delete target;
             throw std::runtime_error (self->getLastError ());
         }

         DecodeResults* res = new DecodeResults (target, used, true);

         return res;
    }
}

// allocs
%newobject neueda::codec::encode;
%newobject neueda::codec::decode;
%newobject neueda::codec::decodeBuffer;
%newobject neueda::codecFactory::getCodec;

// common
%include "fields.h"

// custom buffer for swigs
%include "codecBuffer.h"

// codec base-class
%include "codec.h"

// codecFactory
%include "codecFactory.h"

// lse
%include "Lse.i"

// Oslo
%include "Oslo.i"

// Jse
%include "Jse.i"

// Turquoise
%include "Turquoise.i"

// Borsa
%include "BorsaItaliana.i"

// swx
%include "swx.i"

