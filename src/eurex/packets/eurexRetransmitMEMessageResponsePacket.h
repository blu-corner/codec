/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_RETRANSMITMEMESSAGERESPONSE_PACKET_H
#define EUREX_RETRANSMITMEMESSAGERESPONSE_PACKET_H

#include <string>
#include <vector>
#include <sstream>
#include <cstddef>
#include <stdint.h>
#include "eurexPackets.h"
#include "eurexPacketUtils.h"

namespace neueda
{

using namespace std;

class eurexRetransmitMEMessageResponsePacket
{
    public:
        // no value constants
        static const uint16_t APPL_TOTAL_MESSAGE_COUNT_MIN;
        static const uint16_t APPL_TOTAL_MESSAGE_COUNT_MAX;
        static const uint16_t APPL_TOTAL_MESSAGE_COUNT_NO_VALUE;
        static const char APPL_END_MSG_ID_NO_VALUE[16];
        static const size_t APPL_END_MSG_ID_MAX_LENGTH;
        static const char REF_APPL_LAST_MSG_ID_NO_VALUE[16];
        static const size_t REF_APPL_LAST_MSG_ID_MAX_LENGTH;
        static const char PAD6_NO_VALUE[6];
        static const size_t PAD6_MAX_LENGTH;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexResponseHeaderCompPacket mResponseHeader;
        uint16_t mApplTotalMessageCount;
        char mApplEndMsgID[16];
        char mRefApplLastMsgID[16];
        char mPad6[6];

        // constructor
        eurexRetransmitMEMessageResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10027;
            mApplTotalMessageCount = APPL_TOTAL_MESSAGE_COUNT_NO_VALUE;
            memcpy(mApplEndMsgID, APPL_END_MSG_ID_NO_VALUE, sizeof (mApplEndMsgID));
            memcpy(mRefApplLastMsgID, REF_APPL_LAST_MSG_ID_NO_VALUE, sizeof (mRefApplLastMsgID));
            memcpy(mPad6, PAD6_NO_VALUE, sizeof (mPad6));
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

        uint16_t getApplTotalMessageCount () const
        {
            return mApplTotalMessageCount;
        }

        bool setApplTotalMessageCount (uint16_t v)
        {
            mApplTotalMessageCount = v;
            return ((APPL_TOTAL_MESSAGE_COUNT_MIN <= mApplTotalMessageCount && mApplTotalMessageCount <= APPL_TOTAL_MESSAGE_COUNT_MAX) || mApplTotalMessageCount == APPL_TOTAL_MESSAGE_COUNT_NO_VALUE);
        }

        bool isApplTotalMessageCountValid () const
        {
            return (mApplTotalMessageCount != APPL_TOTAL_MESSAGE_COUNT_NO_VALUE);
        }

        void resetApplTotalMessageCount ()
        {
            mApplTotalMessageCount = APPL_TOTAL_MESSAGE_COUNT_NO_VALUE;
        }

        string getApplEndMsgID () const
        {
            return string (mApplEndMsgID, APPL_END_MSG_ID_MAX_LENGTH);
        }

        bool setApplEndMsgID (const string& v)
        {
            memset (mApplEndMsgID, '\0', sizeof (mApplEndMsgID));
            size_t size = min ((size_t) v.size (), (size_t) APPL_END_MSG_ID_MAX_LENGTH);
            strncpy (mApplEndMsgID, v.c_str (), size);
            return (v.size () <= APPL_END_MSG_ID_MAX_LENGTH);
        }

        bool isApplEndMsgIDValid () const
        {
            return (memcmp (mApplEndMsgID, APPL_END_MSG_ID_NO_VALUE, sizeof (mApplEndMsgID)) != 0);
        }

        void resetApplEndMsgID ()
        {
            memcpy (mApplEndMsgID, APPL_END_MSG_ID_NO_VALUE, sizeof (mApplEndMsgID));
        }

        string getRefApplLastMsgID () const
        {
            return string (mRefApplLastMsgID, REF_APPL_LAST_MSG_ID_MAX_LENGTH);
        }

        bool setRefApplLastMsgID (const string& v)
        {
            memset (mRefApplLastMsgID, '\0', sizeof (mRefApplLastMsgID));
            size_t size = min ((size_t) v.size (), (size_t) REF_APPL_LAST_MSG_ID_MAX_LENGTH);
            strncpy (mRefApplLastMsgID, v.c_str (), size);
            return (v.size () <= REF_APPL_LAST_MSG_ID_MAX_LENGTH);
        }

        bool isRefApplLastMsgIDValid () const
        {
            return (memcmp (mRefApplLastMsgID, REF_APPL_LAST_MSG_ID_NO_VALUE, sizeof (mRefApplLastMsgID)) != 0);
        }

        void resetRefApplLastMsgID ()
        {
            memcpy (mRefApplLastMsgID, REF_APPL_LAST_MSG_ID_NO_VALUE, sizeof (mRefApplLastMsgID));
        }

        string getPad6 () const
        {
            return string (mPad6, PAD6_MAX_LENGTH);
        }

        bool setPad6 (const string& v)
        {
            memset (mPad6, '\0', sizeof (mPad6));
            size_t size = min ((size_t) v.size (), (size_t) PAD6_MAX_LENGTH);
            strncpy (mPad6, v.c_str (), size);
            return (v.size () <= PAD6_MAX_LENGTH);
        }

        bool isPad6Valid () const
        {
            return (memcmp (mPad6, PAD6_NO_VALUE, sizeof (mPad6)) != 0);
        }

        void resetPad6 ()
        {
            memcpy (mPad6, PAD6_NO_VALUE, sizeof (mPad6));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mResponseHeader.getRawSize()
                + sizeof (mApplTotalMessageCount)
                + sizeof (mApplEndMsgID)
                + sizeof (mRefApplLastMsgID)
                + sizeof (mPad6);
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
            state = eurex::serialize (mApplTotalMessageCount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mApplEndMsgID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRefApplLastMsgID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPad6, buf, len, used);
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
            state = eurex::deserialize (mApplTotalMessageCount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mApplEndMsgID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRefApplLastMsgID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "RetransmitMEMessageResponse::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[ResponseHeader=" << mResponseHeader.toString () << "],"
                << "[ApplTotalMessageCount=" << getApplTotalMessageCount () << "],"
                << "[ApplEndMsgID=" << getApplEndMsgID () << "],"
                << "[RefApplLastMsgID=" << getRefApplLastMsgID () << "],"
                << "[Pad6=" << getPad6 () << "]";
            return sss.str();
        }
};

const uint16_t eurexRetransmitMEMessageResponsePacket::APPL_TOTAL_MESSAGE_COUNT_MIN = 0;
const uint16_t eurexRetransmitMEMessageResponsePacket::APPL_TOTAL_MESSAGE_COUNT_MAX = 65534;
const uint16_t eurexRetransmitMEMessageResponsePacket::APPL_TOTAL_MESSAGE_COUNT_NO_VALUE = 0xFFFF;
const char eurexRetransmitMEMessageResponsePacket::APPL_END_MSG_ID_NO_VALUE[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexRetransmitMEMessageResponsePacket::APPL_END_MSG_ID_MAX_LENGTH = 16;
const char eurexRetransmitMEMessageResponsePacket::REF_APPL_LAST_MSG_ID_NO_VALUE[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexRetransmitMEMessageResponsePacket::REF_APPL_LAST_MSG_ID_MAX_LENGTH = 16;
const char eurexRetransmitMEMessageResponsePacket::PAD6_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexRetransmitMEMessageResponsePacket::PAD6_MAX_LENGTH = 6;


} // namespace neueda

#endif // EUREX_RETRANSMITMEMESSAGERESPONSE_PACKET_H
