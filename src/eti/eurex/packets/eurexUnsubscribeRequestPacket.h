/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_UNSUBSCRIBEREQUEST_PACKET_H
#define EUREX_UNSUBSCRIBEREQUEST_PACKET_H

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

class eurexUnsubscribeRequestPacket
{
    public:
        // no value constants
        static const uint32_t REF_APPL_SUB_ID_MIN;
        static const uint32_t REF_APPL_SUB_ID_MAX;
        static const uint32_t REF_APPL_SUB_ID_NO_VALUE;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;

        // fields (use with care)
        eurexMessageHeaderInCompPacket mMessageHeaderIn;
        eurexRequestHeaderCompPacket mRequestHeader;
        uint32_t mRefApplSubID;
        char mPad4[4];

        // constructor
        eurexUnsubscribeRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10006;
            mRefApplSubID = REF_APPL_SUB_ID_NO_VALUE;
            memcpy(mPad4, PAD4_NO_VALUE, sizeof (mPad4));
        }

        // getters & setters
        const eurexMessageHeaderInCompPacket& getMessageHeaderIn () const
        {
            return mMessageHeaderIn;
        }

        bool setMessageHeaderIn (const eurexMessageHeaderInCompPacket& v)
        {
            mMessageHeaderIn = v;
            return true;
        }

        const eurexRequestHeaderCompPacket& getRequestHeader () const
        {
            return mRequestHeader;
        }

        bool setRequestHeader (const eurexRequestHeaderCompPacket& v)
        {
            mRequestHeader = v;
            return true;
        }

        uint32_t getRefApplSubID () const
        {
            return mRefApplSubID;
        }

        bool setRefApplSubID (uint32_t v)
        {
            mRefApplSubID = v;
            return ((REF_APPL_SUB_ID_MIN <= mRefApplSubID && mRefApplSubID <= REF_APPL_SUB_ID_MAX) || mRefApplSubID == REF_APPL_SUB_ID_NO_VALUE);
        }

        bool isRefApplSubIDValid () const
        {
            return (mRefApplSubID != REF_APPL_SUB_ID_NO_VALUE);
        }

        void resetRefApplSubID ()
        {
            mRefApplSubID = REF_APPL_SUB_ID_NO_VALUE;
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
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mRefApplSubID)
                + sizeof (mPad4);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mMessageHeaderIn.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderIn.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRefApplSubID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = mMessageHeaderIn.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRefApplSubID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "UnsubscribeRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[RefApplSubID=" << getRefApplSubID () << "],"
                << "[Pad4=" << getPad4 () << "]";
            return sss.str();
        }
};

const uint32_t eurexUnsubscribeRequestPacket::REF_APPL_SUB_ID_MIN = 0;
const uint32_t eurexUnsubscribeRequestPacket::REF_APPL_SUB_ID_MAX = 4294967294;
const uint32_t eurexUnsubscribeRequestPacket::REF_APPL_SUB_ID_NO_VALUE = 0xFFFFFFFF;
const char eurexUnsubscribeRequestPacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t eurexUnsubscribeRequestPacket::PAD4_MAX_LENGTH = 4;


} // namespace neueda

#endif // EUREX_UNSUBSCRIBEREQUEST_PACKET_H
