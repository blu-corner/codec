/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef XETRA_HEADER_PACKET_H
#define XETRA_HEADER_PACKET_H

#include <string>
#include <vector>
#include <sstream>
#include <cstddef>
#include <stdint.h>
#include "xetraPackets.h"
#include "EtiPacketUtils.h"

namespace neueda
{

using namespace std;

PACKED(class xetraHeaderPacket
{
    public:
        // no value constants
        static const uint32_t BODY_LEN_MIN;
        static const uint32_t BODY_LEN_MAX;
        static const uint32_t BODY_LEN_NO_VALUE;
        static const uint16_t TEMPLATE_ID_MIN;
        static const uint16_t TEMPLATE_ID_MAX;
        static const uint16_t TEMPLATE_ID_NO_VALUE;

        // fields (use with care)
        uint32_t mBodyLen;
        uint16_t mTemplateID;

        // constructor
        xetraHeaderPacket ()
        {
            mBodyLen = BODY_LEN_NO_VALUE;
            mTemplateID = TEMPLATE_ID_NO_VALUE;
        }

        // getters & setters
        uint32_t getBodyLen () const
        {
            return mBodyLen;
        }

        bool setBodyLen (uint32_t v)
        {
            mBodyLen = v;
            return ((BODY_LEN_MIN <= mBodyLen && mBodyLen <= BODY_LEN_MAX) || mBodyLen == BODY_LEN_NO_VALUE);
        }

        bool isBodyLenValid () const
        {
            return (mBodyLen != BODY_LEN_NO_VALUE);
        }

        void resetBodyLen ()
        {
            mBodyLen = BODY_LEN_NO_VALUE;
        }

        uint16_t getTemplateID () const
        {
            return mTemplateID;
        }

        bool setTemplateID (uint16_t v)
        {
            mTemplateID = v;
            return ((TEMPLATE_ID_MIN <= mTemplateID && mTemplateID <= TEMPLATE_ID_MAX) || mTemplateID == TEMPLATE_ID_NO_VALUE);
        }

        bool isTemplateIDValid () const
        {
            return (mTemplateID != TEMPLATE_ID_NO_VALUE);
        }

        void resetTemplateID ()
        {
            mTemplateID = TEMPLATE_ID_NO_VALUE;
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = sizeof (mBodyLen)
                + sizeof (mTemplateID);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::serialize (mBodyLen, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTemplateID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            uint32_t vBodyLen;
            state = eti::deserialize (vBodyLen, buf, len, used);
            mBodyLen = vBodyLen;
            if (state != GW_CODEC_SUCCESS) return state;
            uint16_t vTemplateID;
            state = eti::deserialize (vTemplateID, buf, len, used);
            mTemplateID = vTemplateID;
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "Header::"
                << "[BodyLen=" << getBodyLen () << "],"
                << "[TemplateID=" << getTemplateID () << "]";
            return sss.str();
        }
});

const uint32_t xetraHeaderPacket::BODY_LEN_MIN = 0;
const uint32_t xetraHeaderPacket::BODY_LEN_MAX = 4294967294;
const uint32_t xetraHeaderPacket::BODY_LEN_NO_VALUE = 0xFFFFFFFF;
const uint16_t xetraHeaderPacket::TEMPLATE_ID_MIN = 0;
const uint16_t xetraHeaderPacket::TEMPLATE_ID_MAX = 65534;
const uint16_t xetraHeaderPacket::TEMPLATE_ID_NO_VALUE = 0xFFFF;


} // namespace neueda

#endif // XETRA_HEADER_PACKET_H
