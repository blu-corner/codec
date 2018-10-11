/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef XETRA_MESSAGEHEADERINCOMP_PACKET_H
#define XETRA_MESSAGEHEADERINCOMP_PACKET_H

#include <string>
#include <vector>
#include <sstream>
#include <cstddef>
#include <stdint.h>
#include "xetraPackets.h"
#include "xetraPacketUtils.h"

namespace neueda
{

using namespace std;

class xetraMessageHeaderInCompPacket
{
    public:
        // no value constants
        static const uint32_t BODY_LEN_MIN;
        static const uint32_t BODY_LEN_MAX;
        static const uint32_t BODY_LEN_NO_VALUE;
        static const uint16_t TEMPLATE_ID_MIN;
        static const uint16_t TEMPLATE_ID_MAX;
        static const uint16_t TEMPLATE_ID_NO_VALUE;
        static const char NETWORK_MSG_ID_NO_VALUE[8];
        static const size_t NETWORK_MSG_ID_MAX_LENGTH;
        static const char PAD2_NO_VALUE[2];
        static const size_t PAD2_MAX_LENGTH;

        // fields (use with care)
        uint32_t mBodyLen;
        uint16_t mTemplateID;
        char mNetworkMsgID[8];
        char mPad2[2];

        // constructor
        xetraMessageHeaderInCompPacket ()
        {
            mBodyLen = BODY_LEN_NO_VALUE;
            mTemplateID = TEMPLATE_ID_NO_VALUE;
            memcpy(mNetworkMsgID, NETWORK_MSG_ID_NO_VALUE, sizeof (mNetworkMsgID));
            memcpy(mPad2, PAD2_NO_VALUE, sizeof (mPad2));
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

        string getNetworkMsgID () const
        {
            return string (mNetworkMsgID, NETWORK_MSG_ID_MAX_LENGTH);
        }

        bool setNetworkMsgID (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) NETWORK_MSG_ID_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mNetworkMsgID[i] = v[i];
            memset (&mNetworkMsgID[size], '\0', NETWORK_MSG_ID_MAX_LENGTH-size);
            return (v.size () <= NETWORK_MSG_ID_MAX_LENGTH);
        }

        bool isNetworkMsgIDValid () const
        {
            return (memcmp (mNetworkMsgID, NETWORK_MSG_ID_NO_VALUE, sizeof (mNetworkMsgID)) != 0);
        }

        void resetNetworkMsgID ()
        {
            memcpy (mNetworkMsgID, NETWORK_MSG_ID_NO_VALUE, sizeof (mNetworkMsgID));
        }

        string getPad2 () const
        {
            return string (mPad2, PAD2_MAX_LENGTH);
        }

        bool setPad2 (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) PAD2_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mPad2[i] = v[i];
            memset (&mPad2[size], '\0', PAD2_MAX_LENGTH-size);
            return (v.size () <= PAD2_MAX_LENGTH);
        }

        bool isPad2Valid () const
        {
            return (memcmp (mPad2, PAD2_NO_VALUE, sizeof (mPad2)) != 0);
        }

        void resetPad2 ()
        {
            memcpy (mPad2, PAD2_NO_VALUE, sizeof (mPad2));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = sizeof (mBodyLen)
                + sizeof (mTemplateID)
                + sizeof (mNetworkMsgID)
                + sizeof (mPad2);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::serialize (mBodyLen, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTemplateID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mNetworkMsgID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::deserialize (mBodyLen, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTemplateID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mNetworkMsgID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "MessageHeaderInComp::"
                << "[BodyLen=" << getBodyLen () << "],"
                << "[TemplateID=" << getTemplateID () << "],"
                << "[NetworkMsgID=" << getNetworkMsgID () << "],"
                << "[Pad2=" << getPad2 () << "]";
            return sss.str();
        }
};

const uint32_t xetraMessageHeaderInCompPacket::BODY_LEN_MIN = 0;
const uint32_t xetraMessageHeaderInCompPacket::BODY_LEN_MAX = 4294967294;
const uint32_t xetraMessageHeaderInCompPacket::BODY_LEN_NO_VALUE = 0xFFFFFFFF;
const uint16_t xetraMessageHeaderInCompPacket::TEMPLATE_ID_MIN = 0;
const uint16_t xetraMessageHeaderInCompPacket::TEMPLATE_ID_MAX = 65534;
const uint16_t xetraMessageHeaderInCompPacket::TEMPLATE_ID_NO_VALUE = 0xFFFF;
const char xetraMessageHeaderInCompPacket::NETWORK_MSG_ID_NO_VALUE[8] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraMessageHeaderInCompPacket::NETWORK_MSG_ID_MAX_LENGTH = 8;
const char xetraMessageHeaderInCompPacket::PAD2_NO_VALUE[2] = {0x00, 0x00};
const size_t xetraMessageHeaderInCompPacket::PAD2_MAX_LENGTH = 2;


} // namespace neueda

#endif // XETRA_MESSAGEHEADERINCOMP_PACKET_H
