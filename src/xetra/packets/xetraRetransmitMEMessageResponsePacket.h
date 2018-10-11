/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef XETRA_RETRANSMITMEMESSAGERESPONSE_PACKET_H
#define XETRA_RETRANSMITMEMESSAGERESPONSE_PACKET_H

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

class xetraRetransmitMEMessageResponsePacket
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
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraResponseHeaderCompPacket mResponseHeader;
        uint16_t mApplTotalMessageCount;
        char mApplEndMsgID[16];
        char mRefApplLastMsgID[16];
        char mPad6[6];

        // constructor
        xetraRetransmitMEMessageResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10027;
            mApplTotalMessageCount = APPL_TOTAL_MESSAGE_COUNT_NO_VALUE;
            memcpy(mApplEndMsgID, APPL_END_MSG_ID_NO_VALUE, sizeof (mApplEndMsgID));
            memcpy(mRefApplLastMsgID, REF_APPL_LAST_MSG_ID_NO_VALUE, sizeof (mRefApplLastMsgID));
            memcpy(mPad6, PAD6_NO_VALUE, sizeof (mPad6));
        }

        // getters & setters
        const xetraMessageHeaderOutCompPacket& getMessageHeaderOut () const
        {
            return mMessageHeaderOut;
        }

        bool setMessageHeaderOut (const xetraMessageHeaderOutCompPacket& v)
        {
            mMessageHeaderOut = v;
            return true;
        }

        const xetraResponseHeaderCompPacket& getResponseHeader () const
        {
            return mResponseHeader;
        }

        bool setResponseHeader (const xetraResponseHeaderCompPacket& v)
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
            size_t size = min ((size_t) v.size (), (size_t) APPL_END_MSG_ID_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mApplEndMsgID[i] = v[i];
            memset (&mApplEndMsgID[size], '\0', APPL_END_MSG_ID_MAX_LENGTH-size);
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
            size_t size = min ((size_t) v.size (), (size_t) REF_APPL_LAST_MSG_ID_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mRefApplLastMsgID[i] = v[i];
            memset (&mRefApplLastMsgID[size], '\0', REF_APPL_LAST_MSG_ID_MAX_LENGTH-size);
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
            size_t size = min ((size_t) v.size (), (size_t) PAD6_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mPad6[i] = v[i];
            memset (&mPad6[size], '\0', PAD6_MAX_LENGTH-size);
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
            state = xetra::serialize (mApplTotalMessageCount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mApplEndMsgID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRefApplLastMsgID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad6, buf, len, used);
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
            state = xetra::deserialize (mApplTotalMessageCount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mApplEndMsgID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRefApplLastMsgID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad6, buf, len, used);
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

const uint16_t xetraRetransmitMEMessageResponsePacket::APPL_TOTAL_MESSAGE_COUNT_MIN = 0;
const uint16_t xetraRetransmitMEMessageResponsePacket::APPL_TOTAL_MESSAGE_COUNT_MAX = 65534;
const uint16_t xetraRetransmitMEMessageResponsePacket::APPL_TOTAL_MESSAGE_COUNT_NO_VALUE = 0xFFFF;
const char xetraRetransmitMEMessageResponsePacket::APPL_END_MSG_ID_NO_VALUE[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraRetransmitMEMessageResponsePacket::APPL_END_MSG_ID_MAX_LENGTH = 16;
const char xetraRetransmitMEMessageResponsePacket::REF_APPL_LAST_MSG_ID_NO_VALUE[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraRetransmitMEMessageResponsePacket::REF_APPL_LAST_MSG_ID_MAX_LENGTH = 16;
const char xetraRetransmitMEMessageResponsePacket::PAD6_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraRetransmitMEMessageResponsePacket::PAD6_MAX_LENGTH = 6;


} // namespace neueda

#endif // XETRA_RETRANSMITMEMESSAGERESPONSE_PACKET_H
