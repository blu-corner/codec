/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_SUBSCRIBERESPONSE_PACKET_H
#define EUREX_SUBSCRIBERESPONSE_PACKET_H

#include <string>
#include <vector>
#include <sstream>
#include <cstddef>
#include <stdint.h>
#include "eurexPackets.h"
#include "EtiPacketUtils.h"

namespace neueda
{

using namespace std;

class eurexSubscribeResponsePacket
{
    public:
        // no value constants
        static const uint32_t APPL_SUB_ID_MIN;
        static const uint32_t APPL_SUB_ID_MAX;
        static const uint32_t APPL_SUB_ID_NO_VALUE;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexResponseHeaderCompPacket mResponseHeader;
        uint32_t mApplSubID;
        char mPad4[4];

        // constructor
        eurexSubscribeResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10005;
            mApplSubID = APPL_SUB_ID_NO_VALUE;
            memcpy(mPad4, PAD4_NO_VALUE, sizeof (mPad4));
        }

        // getters & setters
        const eurexMessageHeaderOutCompPacket& getMessageHeaderOut () const
        {
            return mMessageHeaderOut;
        }

        bool setMessageHeaderOut (const eurexMessageHeaderOutCompPacket& v)
        {
            mMessageHeaderOut = v;
            return true;
        }

        const eurexResponseHeaderCompPacket& getResponseHeader () const
        {
            return mResponseHeader;
        }

        bool setResponseHeader (const eurexResponseHeaderCompPacket& v)
        {
            mResponseHeader = v;
            return true;
        }

        uint32_t getApplSubID () const
        {
            return mApplSubID;
        }

        bool setApplSubID (uint32_t v)
        {
            mApplSubID = v;
            return ((APPL_SUB_ID_MIN <= mApplSubID && mApplSubID <= APPL_SUB_ID_MAX) || mApplSubID == APPL_SUB_ID_NO_VALUE);
        }

        bool isApplSubIDValid () const
        {
            return (mApplSubID != APPL_SUB_ID_NO_VALUE);
        }

        void resetApplSubID ()
        {
            mApplSubID = APPL_SUB_ID_NO_VALUE;
        }

        string getPad4 () const
        {
            return string (mPad4, PAD4_MAX_LENGTH);
        }

        bool setPad4 (const string& v)
        {
            memset (mPad4, '\0', sizeof (mPad4));
            size_t size = min ((size_t) v.size (), (size_t) PAD4_MAX_LENGTH);
            strncpy (mPad4, v.c_str (), size);
            return (v.size () <= PAD4_MAX_LENGTH);
        }

        bool isPad4Valid () const
        {
            return (memcmp (mPad4, PAD4_NO_VALUE, sizeof (mPad4)) != 0);
        }

        void resetPad4 ()
        {
            memcpy (mPad4, PAD4_NO_VALUE, sizeof (mPad4));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mResponseHeader.getRawSize()
                + sizeof (mApplSubID)
                + sizeof (mPad4);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mResponseHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mApplSubID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = mMessageHeaderOut.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mResponseHeader.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mApplSubID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "SubscribeResponse::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[ResponseHeader=" << mResponseHeader.toString () << "],"
                << "[ApplSubID=" << getApplSubID () << "],"
                << "[Pad4=" << getPad4 () << "]";
            return sss.str();
        }
};

const uint32_t eurexSubscribeResponsePacket::APPL_SUB_ID_MIN = 0;
const uint32_t eurexSubscribeResponsePacket::APPL_SUB_ID_MAX = 4294967294;
const uint32_t eurexSubscribeResponsePacket::APPL_SUB_ID_NO_VALUE = 0xFFFFFFFF;
const char eurexSubscribeResponsePacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t eurexSubscribeResponsePacket::PAD4_MAX_LENGTH = 4;


} // namespace neueda

#endif // EUREX_SUBSCRIBERESPONSE_PACKET_H
