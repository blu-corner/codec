/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef XETRA_RETRANSMITRESPONSE_PACKET_H
#define XETRA_RETRANSMITRESPONSE_PACKET_H

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

class xetraRetransmitResponsePacket
{
    public:
        // no value constants
        static const uint64_t APPL_END_SEQ_NUM_MIN;
        static const uint64_t APPL_END_SEQ_NUM_MAX;
        static const uint64_t APPL_END_SEQ_NUM_NO_VALUE;
        static const uint64_t REF_APPL_LAST_SEQ_NUM_MIN;
        static const uint64_t REF_APPL_LAST_SEQ_NUM_MAX;
        static const uint64_t REF_APPL_LAST_SEQ_NUM_NO_VALUE;
        static const uint16_t APPL_TOTAL_MESSAGE_COUNT_MIN;
        static const uint16_t APPL_TOTAL_MESSAGE_COUNT_MAX;
        static const uint16_t APPL_TOTAL_MESSAGE_COUNT_NO_VALUE;
        static const char PAD6_NO_VALUE[6];
        static const size_t PAD6_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraResponseHeaderCompPacket mResponseHeader;
        uint64_t mApplEndSeqNum;
        uint64_t mRefApplLastSeqNum;
        uint16_t mApplTotalMessageCount;
        char mPad6[6];

        // constructor
        xetraRetransmitResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10009;
            mApplEndSeqNum = APPL_END_SEQ_NUM_NO_VALUE;
            mRefApplLastSeqNum = REF_APPL_LAST_SEQ_NUM_NO_VALUE;
            mApplTotalMessageCount = APPL_TOTAL_MESSAGE_COUNT_NO_VALUE;
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

        uint64_t getApplEndSeqNum () const
        {
            return mApplEndSeqNum;
        }

        bool setApplEndSeqNum (uint64_t v)
        {
            mApplEndSeqNum = v;
            return ((APPL_END_SEQ_NUM_MIN <= mApplEndSeqNum && mApplEndSeqNum <= APPL_END_SEQ_NUM_MAX) || mApplEndSeqNum == APPL_END_SEQ_NUM_NO_VALUE);
        }

        bool isApplEndSeqNumValid () const
        {
            return (mApplEndSeqNum != APPL_END_SEQ_NUM_NO_VALUE);
        }

        void resetApplEndSeqNum ()
        {
            mApplEndSeqNum = APPL_END_SEQ_NUM_NO_VALUE;
        }

        uint64_t getRefApplLastSeqNum () const
        {
            return mRefApplLastSeqNum;
        }

        bool setRefApplLastSeqNum (uint64_t v)
        {
            mRefApplLastSeqNum = v;
            return ((REF_APPL_LAST_SEQ_NUM_MIN <= mRefApplLastSeqNum && mRefApplLastSeqNum <= REF_APPL_LAST_SEQ_NUM_MAX) || mRefApplLastSeqNum == REF_APPL_LAST_SEQ_NUM_NO_VALUE);
        }

        bool isRefApplLastSeqNumValid () const
        {
            return (mRefApplLastSeqNum != REF_APPL_LAST_SEQ_NUM_NO_VALUE);
        }

        void resetRefApplLastSeqNum ()
        {
            mRefApplLastSeqNum = REF_APPL_LAST_SEQ_NUM_NO_VALUE;
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
                + sizeof (mApplEndSeqNum)
                + sizeof (mRefApplLastSeqNum)
                + sizeof (mApplTotalMessageCount)
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
            state = xetra::serialize (mApplEndSeqNum, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRefApplLastSeqNum, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mApplTotalMessageCount, buf, len, used);
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
            state = xetra::deserialize (mApplEndSeqNum, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRefApplLastSeqNum, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mApplTotalMessageCount, buf, len, used);
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
            sss << "RetransmitResponse::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[ResponseHeader=" << mResponseHeader.toString () << "],"
                << "[ApplEndSeqNum=" << getApplEndSeqNum () << "],"
                << "[RefApplLastSeqNum=" << getRefApplLastSeqNum () << "],"
                << "[ApplTotalMessageCount=" << getApplTotalMessageCount () << "],"
                << "[Pad6=" << getPad6 () << "]";
            return sss.str();
        }
};

const uint64_t xetraRetransmitResponsePacket::APPL_END_SEQ_NUM_MIN = 0UL;
const uint64_t xetraRetransmitResponsePacket::APPL_END_SEQ_NUM_MAX = 18446744073709551614UL;
const uint64_t xetraRetransmitResponsePacket::APPL_END_SEQ_NUM_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraRetransmitResponsePacket::REF_APPL_LAST_SEQ_NUM_MIN = 0UL;
const uint64_t xetraRetransmitResponsePacket::REF_APPL_LAST_SEQ_NUM_MAX = 18446744073709551614UL;
const uint64_t xetraRetransmitResponsePacket::REF_APPL_LAST_SEQ_NUM_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint16_t xetraRetransmitResponsePacket::APPL_TOTAL_MESSAGE_COUNT_MIN = 0;
const uint16_t xetraRetransmitResponsePacket::APPL_TOTAL_MESSAGE_COUNT_MAX = 65534;
const uint16_t xetraRetransmitResponsePacket::APPL_TOTAL_MESSAGE_COUNT_NO_VALUE = 0xFFFF;
const char xetraRetransmitResponsePacket::PAD6_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraRetransmitResponsePacket::PAD6_MAX_LENGTH = 6;


} // namespace neueda

#endif // XETRA_RETRANSMITRESPONSE_PACKET_H
