/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 09/05/2019
 */
#ifndef XETRA_SUBSCRIBEREQUEST_PACKET_H
#define XETRA_SUBSCRIBEREQUEST_PACKET_H

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

class xetraSubscribeRequestPacket
{
    public:
        // no value constants
        static const uint32_t SUBSCRIPTION_SCOPE_MIN;
        static const uint32_t SUBSCRIPTION_SCOPE_MAX;
        static const uint32_t SUBSCRIPTION_SCOPE_NO_VALUE;
        static const int8_t REF_APPL_ID_MIN;
        static const int8_t REF_APPL_ID_MAX;
        static const int8_t REF_APPL_ID_NO_VALUE;
        static const char PAD3_NO_VALUE[3];
        static const size_t PAD3_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderInCompPacket mMessageHeaderIn;
        xetraRequestHeaderCompPacket mRequestHeader;
        uint32_t mSubscriptionScope;
        int8_t mRefApplID;
        char mPad3[3];

        // constructor
        xetraSubscribeRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10025;
            mSubscriptionScope = SUBSCRIPTION_SCOPE_NO_VALUE;
            mRefApplID = REF_APPL_ID_NO_VALUE;
            memcpy(mPad3, PAD3_NO_VALUE, sizeof (mPad3));
        }

        // getters & setters
        const xetraMessageHeaderInCompPacket& getMessageHeaderIn () const
        {
            return mMessageHeaderIn;
        }

        bool setMessageHeaderIn (const xetraMessageHeaderInCompPacket& v)
        {
            mMessageHeaderIn = v;
            return true;
        }

        const xetraRequestHeaderCompPacket& getRequestHeader () const
        {
            return mRequestHeader;
        }

        bool setRequestHeader (const xetraRequestHeaderCompPacket& v)
        {
            mRequestHeader = v;
            return true;
        }

        uint32_t getSubscriptionScope () const
        {
            return mSubscriptionScope;
        }

        bool setSubscriptionScope (uint32_t v)
        {
            mSubscriptionScope = v;
            return ((SUBSCRIPTION_SCOPE_MIN <= mSubscriptionScope && mSubscriptionScope <= SUBSCRIPTION_SCOPE_MAX) || mSubscriptionScope == SUBSCRIPTION_SCOPE_NO_VALUE);
        }

        bool isSubscriptionScopeValid () const
        {
            return (mSubscriptionScope != SUBSCRIPTION_SCOPE_NO_VALUE);
        }

        void resetSubscriptionScope ()
        {
            mSubscriptionScope = SUBSCRIPTION_SCOPE_NO_VALUE;
        }

        int8_t getRefApplID () const
        {
            return mRefApplID;
        }

        bool setRefApplID (int8_t v)
        {
            mRefApplID = v;
            return ((REF_APPL_ID_MIN <= mRefApplID && mRefApplID <= REF_APPL_ID_MAX) || mRefApplID == REF_APPL_ID_NO_VALUE);
        }

        bool isRefApplIDValid () const
        {
            return (mRefApplID != REF_APPL_ID_NO_VALUE);
        }

        void resetRefApplID ()
        {
            mRefApplID = REF_APPL_ID_NO_VALUE;
        }

        string getPad3 () const
        {
            return string (mPad3, PAD3_MAX_LENGTH);
        }

        bool setPad3 (const string& v)
        {
            memset (mPad3, '\0', sizeof (mPad3));
            size_t size = min ((size_t) v.size (), (size_t) PAD3_MAX_LENGTH);
            strncpy (mPad3, v.c_str (), size);
            return (v.size () <= PAD3_MAX_LENGTH);
        }

        bool isPad3Valid () const
        {
            return (memcmp (mPad3, PAD3_NO_VALUE, sizeof (mPad3)) != 0);
        }

        void resetPad3 ()
        {
            memcpy (mPad3, PAD3_NO_VALUE, sizeof (mPad3));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mSubscriptionScope)
                + sizeof (mRefApplID)
                + sizeof (mPad3);
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
            state = xetra::serialize (mSubscriptionScope, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRefApplID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad3, buf, len, used);
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
            state = xetra::deserialize (mSubscriptionScope, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRefApplID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "SubscribeRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[SubscriptionScope=" << getSubscriptionScope () << "],"
                << "[RefApplID=" << getRefApplID () << "],"
                << "[Pad3=" << getPad3 () << "]";
            return sss.str();
        }
};

const uint32_t xetraSubscribeRequestPacket::SUBSCRIPTION_SCOPE_MIN = 0;
const uint32_t xetraSubscribeRequestPacket::SUBSCRIPTION_SCOPE_MAX = 4294967294;
const uint32_t xetraSubscribeRequestPacket::SUBSCRIPTION_SCOPE_NO_VALUE = 0xFFFFFFFF;
const int8_t xetraSubscribeRequestPacket::REF_APPL_ID_MIN = 0;
const int8_t xetraSubscribeRequestPacket::REF_APPL_ID_MAX = 10;
const int8_t xetraSubscribeRequestPacket::REF_APPL_ID_NO_VALUE = 0xFF;
const char xetraSubscribeRequestPacket::PAD3_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t xetraSubscribeRequestPacket::PAD3_MAX_LENGTH = 3;


} // namespace neueda

#endif // XETRA_SUBSCRIBEREQUEST_PACKET_H
