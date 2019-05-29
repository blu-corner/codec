/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef XETRA_RESPONSEHEADERCOMP_PACKET_H
#define XETRA_RESPONSEHEADERCOMP_PACKET_H

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

class xetraResponseHeaderCompPacket
{
    public:
        // no value constants
        static const uint64_t REQUEST_TIME_MIN;
        static const uint64_t REQUEST_TIME_MAX;
        static const uint64_t REQUEST_TIME_NO_VALUE;
        static const uint64_t SENDING_TIME_MIN;
        static const uint64_t SENDING_TIME_MAX;
        static const uint64_t SENDING_TIME_NO_VALUE;
        static const uint32_t MSG_SEQ_NUM_MIN;
        static const uint32_t MSG_SEQ_NUM_MAX;
        static const uint32_t MSG_SEQ_NUM_NO_VALUE;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;

        // fields (use with care)
        uint64_t mRequestTime;
        uint64_t mSendingTime;
        uint32_t mMsgSeqNum;
        char mPad4[4];

        // constructor
        xetraResponseHeaderCompPacket ()
        {
            mRequestTime = REQUEST_TIME_NO_VALUE;
            mSendingTime = SENDING_TIME_NO_VALUE;
            mMsgSeqNum = MSG_SEQ_NUM_NO_VALUE;
            memcpy(mPad4, PAD4_NO_VALUE, sizeof (mPad4));
        }

        // getters & setters
        uint64_t getRequestTime () const
        {
            return mRequestTime;
        }

        bool setRequestTime (uint64_t v)
        {
            mRequestTime = v;
            return ((REQUEST_TIME_MIN <= mRequestTime && mRequestTime <= REQUEST_TIME_MAX) || mRequestTime == REQUEST_TIME_NO_VALUE);
        }

        bool isRequestTimeValid () const
        {
            return (mRequestTime != REQUEST_TIME_NO_VALUE);
        }

        void resetRequestTime ()
        {
            mRequestTime = REQUEST_TIME_NO_VALUE;
        }

        uint64_t getSendingTime () const
        {
            return mSendingTime;
        }

        bool setSendingTime (uint64_t v)
        {
            mSendingTime = v;
            return ((SENDING_TIME_MIN <= mSendingTime && mSendingTime <= SENDING_TIME_MAX) || mSendingTime == SENDING_TIME_NO_VALUE);
        }

        bool isSendingTimeValid () const
        {
            return (mSendingTime != SENDING_TIME_NO_VALUE);
        }

        void resetSendingTime ()
        {
            mSendingTime = SENDING_TIME_NO_VALUE;
        }

        uint32_t getMsgSeqNum () const
        {
            return mMsgSeqNum;
        }

        bool setMsgSeqNum (uint32_t v)
        {
            mMsgSeqNum = v;
            return ((MSG_SEQ_NUM_MIN <= mMsgSeqNum && mMsgSeqNum <= MSG_SEQ_NUM_MAX) || mMsgSeqNum == MSG_SEQ_NUM_NO_VALUE);
        }

        bool isMsgSeqNumValid () const
        {
            return (mMsgSeqNum != MSG_SEQ_NUM_NO_VALUE);
        }

        void resetMsgSeqNum ()
        {
            mMsgSeqNum = MSG_SEQ_NUM_NO_VALUE;
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
            size_t result = sizeof (mRequestTime)
                + sizeof (mSendingTime)
                + sizeof (mMsgSeqNum)
                + sizeof (mPad4);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::serialize (mRequestTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSendingTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMsgSeqNum, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::deserialize (mRequestTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSendingTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMsgSeqNum, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "ResponseHeaderComp::"
                << "[RequestTime=" << getRequestTime () << "],"
                << "[SendingTime=" << getSendingTime () << "],"
                << "[MsgSeqNum=" << getMsgSeqNum () << "],"
                << "[Pad4=" << getPad4 () << "]";
            return sss.str();
        }
};

const uint64_t xetraResponseHeaderCompPacket::REQUEST_TIME_MIN = 0UL;
const uint64_t xetraResponseHeaderCompPacket::REQUEST_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraResponseHeaderCompPacket::REQUEST_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraResponseHeaderCompPacket::SENDING_TIME_MIN = 0UL;
const uint64_t xetraResponseHeaderCompPacket::SENDING_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraResponseHeaderCompPacket::SENDING_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint32_t xetraResponseHeaderCompPacket::MSG_SEQ_NUM_MIN = 0;
const uint32_t xetraResponseHeaderCompPacket::MSG_SEQ_NUM_MAX = 4294967294;
const uint32_t xetraResponseHeaderCompPacket::MSG_SEQ_NUM_NO_VALUE = 0xFFFFFFFF;
const char xetraResponseHeaderCompPacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t xetraResponseHeaderCompPacket::PAD4_MAX_LENGTH = 4;


} // namespace neueda

#endif // XETRA_RESPONSEHEADERCOMP_PACKET_H
