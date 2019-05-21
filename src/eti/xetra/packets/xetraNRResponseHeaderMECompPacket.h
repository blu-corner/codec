/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef XETRA_NRRESPONSEHEADERMECOMP_PACKET_H
#define XETRA_NRRESPONSEHEADERMECOMP_PACKET_H

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

class xetraNRResponseHeaderMECompPacket
{
    public:
        // no value constants
        static const uint64_t REQUEST_TIME_MIN;
        static const uint64_t REQUEST_TIME_MAX;
        static const uint64_t REQUEST_TIME_NO_VALUE;
        static const uint64_t TRD_REG_TSTIME_IN_MIN;
        static const uint64_t TRD_REG_TSTIME_IN_MAX;
        static const uint64_t TRD_REG_TSTIME_IN_NO_VALUE;
        static const uint64_t TRD_REG_TSTIME_OUT_MIN;
        static const uint64_t TRD_REG_TSTIME_OUT_MAX;
        static const uint64_t TRD_REG_TSTIME_OUT_NO_VALUE;
        static const uint64_t RESPONSE_IN_MIN;
        static const uint64_t RESPONSE_IN_MAX;
        static const uint64_t RESPONSE_IN_NO_VALUE;
        static const uint64_t SENDING_TIME_MIN;
        static const uint64_t SENDING_TIME_MAX;
        static const uint64_t SENDING_TIME_NO_VALUE;
        static const uint32_t MSG_SEQ_NUM_MIN;
        static const uint32_t MSG_SEQ_NUM_MAX;
        static const uint32_t MSG_SEQ_NUM_NO_VALUE;
        static const int8_t LAST_FRAGMENT_MIN;
        static const int8_t LAST_FRAGMENT_MAX;
        static const int8_t LAST_FRAGMENT_NO_VALUE;
        static const char PAD3_NO_VALUE[3];
        static const size_t PAD3_MAX_LENGTH;

        // fields (use with care)
        uint64_t mRequestTime;
        uint64_t mTrdRegTSTimeIn;
        uint64_t mTrdRegTSTimeOut;
        uint64_t mResponseIn;
        uint64_t mSendingTime;
        uint32_t mMsgSeqNum;
        int8_t mLastFragment;
        char mPad3[3];

        // constructor
        xetraNRResponseHeaderMECompPacket ()
        {
            mRequestTime = REQUEST_TIME_NO_VALUE;
            mTrdRegTSTimeIn = TRD_REG_TSTIME_IN_NO_VALUE;
            mTrdRegTSTimeOut = TRD_REG_TSTIME_OUT_NO_VALUE;
            mResponseIn = RESPONSE_IN_NO_VALUE;
            mSendingTime = SENDING_TIME_NO_VALUE;
            mMsgSeqNum = MSG_SEQ_NUM_NO_VALUE;
            mLastFragment = LAST_FRAGMENT_NO_VALUE;
            memcpy(mPad3, PAD3_NO_VALUE, sizeof (mPad3));
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

        uint64_t getTrdRegTSTimeIn () const
        {
            return mTrdRegTSTimeIn;
        }

        bool setTrdRegTSTimeIn (uint64_t v)
        {
            mTrdRegTSTimeIn = v;
            return ((TRD_REG_TSTIME_IN_MIN <= mTrdRegTSTimeIn && mTrdRegTSTimeIn <= TRD_REG_TSTIME_IN_MAX) || mTrdRegTSTimeIn == TRD_REG_TSTIME_IN_NO_VALUE);
        }

        bool isTrdRegTSTimeInValid () const
        {
            return (mTrdRegTSTimeIn != TRD_REG_TSTIME_IN_NO_VALUE);
        }

        void resetTrdRegTSTimeIn ()
        {
            mTrdRegTSTimeIn = TRD_REG_TSTIME_IN_NO_VALUE;
        }

        uint64_t getTrdRegTSTimeOut () const
        {
            return mTrdRegTSTimeOut;
        }

        bool setTrdRegTSTimeOut (uint64_t v)
        {
            mTrdRegTSTimeOut = v;
            return ((TRD_REG_TSTIME_OUT_MIN <= mTrdRegTSTimeOut && mTrdRegTSTimeOut <= TRD_REG_TSTIME_OUT_MAX) || mTrdRegTSTimeOut == TRD_REG_TSTIME_OUT_NO_VALUE);
        }

        bool isTrdRegTSTimeOutValid () const
        {
            return (mTrdRegTSTimeOut != TRD_REG_TSTIME_OUT_NO_VALUE);
        }

        void resetTrdRegTSTimeOut ()
        {
            mTrdRegTSTimeOut = TRD_REG_TSTIME_OUT_NO_VALUE;
        }

        uint64_t getResponseIn () const
        {
            return mResponseIn;
        }

        bool setResponseIn (uint64_t v)
        {
            mResponseIn = v;
            return ((RESPONSE_IN_MIN <= mResponseIn && mResponseIn <= RESPONSE_IN_MAX) || mResponseIn == RESPONSE_IN_NO_VALUE);
        }

        bool isResponseInValid () const
        {
            return (mResponseIn != RESPONSE_IN_NO_VALUE);
        }

        void resetResponseIn ()
        {
            mResponseIn = RESPONSE_IN_NO_VALUE;
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

        int8_t getLastFragment () const
        {
            return mLastFragment;
        }

        bool setLastFragment (int8_t v)
        {
            mLastFragment = v;
            return ((LAST_FRAGMENT_MIN <= mLastFragment && mLastFragment <= LAST_FRAGMENT_MAX) || mLastFragment == LAST_FRAGMENT_NO_VALUE);
        }

        bool isLastFragmentValid () const
        {
            return (mLastFragment != LAST_FRAGMENT_NO_VALUE);
        }

        void resetLastFragment ()
        {
            mLastFragment = LAST_FRAGMENT_NO_VALUE;
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
            size_t result = sizeof (mRequestTime)
                + sizeof (mTrdRegTSTimeIn)
                + sizeof (mTrdRegTSTimeOut)
                + sizeof (mResponseIn)
                + sizeof (mSendingTime)
                + sizeof (mMsgSeqNum)
                + sizeof (mLastFragment)
                + sizeof (mPad3);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::serialize (mRequestTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTrdRegTSTimeIn, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTrdRegTSTimeOut, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mResponseIn, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSendingTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMsgSeqNum, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mLastFragment, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::deserialize (mRequestTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTrdRegTSTimeIn, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTrdRegTSTimeOut, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mResponseIn, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSendingTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMsgSeqNum, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mLastFragment, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "NRResponseHeaderMEComp::"
                << "[RequestTime=" << getRequestTime () << "],"
                << "[TrdRegTSTimeIn=" << getTrdRegTSTimeIn () << "],"
                << "[TrdRegTSTimeOut=" << getTrdRegTSTimeOut () << "],"
                << "[ResponseIn=" << getResponseIn () << "],"
                << "[SendingTime=" << getSendingTime () << "],"
                << "[MsgSeqNum=" << getMsgSeqNum () << "],"
                << "[LastFragment=" << getLastFragment () << "],"
                << "[Pad3=" << getPad3 () << "]";
            return sss.str();
        }
};

const uint64_t xetraNRResponseHeaderMECompPacket::REQUEST_TIME_MIN = 0UL;
const uint64_t xetraNRResponseHeaderMECompPacket::REQUEST_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraNRResponseHeaderMECompPacket::REQUEST_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraNRResponseHeaderMECompPacket::TRD_REG_TSTIME_IN_MIN = 0UL;
const uint64_t xetraNRResponseHeaderMECompPacket::TRD_REG_TSTIME_IN_MAX = 18446744073709551614UL;
const uint64_t xetraNRResponseHeaderMECompPacket::TRD_REG_TSTIME_IN_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraNRResponseHeaderMECompPacket::TRD_REG_TSTIME_OUT_MIN = 0UL;
const uint64_t xetraNRResponseHeaderMECompPacket::TRD_REG_TSTIME_OUT_MAX = 18446744073709551614UL;
const uint64_t xetraNRResponseHeaderMECompPacket::TRD_REG_TSTIME_OUT_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraNRResponseHeaderMECompPacket::RESPONSE_IN_MIN = 0UL;
const uint64_t xetraNRResponseHeaderMECompPacket::RESPONSE_IN_MAX = 18446744073709551614UL;
const uint64_t xetraNRResponseHeaderMECompPacket::RESPONSE_IN_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraNRResponseHeaderMECompPacket::SENDING_TIME_MIN = 0UL;
const uint64_t xetraNRResponseHeaderMECompPacket::SENDING_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraNRResponseHeaderMECompPacket::SENDING_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint32_t xetraNRResponseHeaderMECompPacket::MSG_SEQ_NUM_MIN = 0;
const uint32_t xetraNRResponseHeaderMECompPacket::MSG_SEQ_NUM_MAX = 4294967294;
const uint32_t xetraNRResponseHeaderMECompPacket::MSG_SEQ_NUM_NO_VALUE = 0xFFFFFFFF;
const int8_t xetraNRResponseHeaderMECompPacket::LAST_FRAGMENT_MIN = 0;
const int8_t xetraNRResponseHeaderMECompPacket::LAST_FRAGMENT_MAX = 1;
const int8_t xetraNRResponseHeaderMECompPacket::LAST_FRAGMENT_NO_VALUE = 0xFF;
const char xetraNRResponseHeaderMECompPacket::PAD3_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t xetraNRResponseHeaderMECompPacket::PAD3_MAX_LENGTH = 3;


} // namespace neueda

#endif // XETRA_NRRESPONSEHEADERMECOMP_PACKET_H
