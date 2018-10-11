/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef XETRA_RESPONSEHEADERMECOMP_PACKET_H
#define XETRA_RESPONSEHEADERMECOMP_PACKET_H

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

class xetraResponseHeaderMECompPacket
{
    public:
        // no value constants
        static const uint64_t REQUEST_TIME_MIN;
        static const uint64_t REQUEST_TIME_MAX;
        static const uint64_t REQUEST_TIME_NO_VALUE;
        static const uint64_t REQUEST_OUT_MIN;
        static const uint64_t REQUEST_OUT_MAX;
        static const uint64_t REQUEST_OUT_NO_VALUE;
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
        static const uint16_t PARTITION_ID_MIN;
        static const uint16_t PARTITION_ID_MAX;
        static const uint16_t PARTITION_ID_NO_VALUE;
        static const int8_t APPL_ID_MIN;
        static const int8_t APPL_ID_MAX;
        static const int8_t APPL_ID_NO_VALUE;
        static const char APPL_MSG_ID_NO_VALUE[16];
        static const size_t APPL_MSG_ID_MAX_LENGTH;
        static const int8_t LAST_FRAGMENT_MIN;
        static const int8_t LAST_FRAGMENT_MAX;
        static const int8_t LAST_FRAGMENT_NO_VALUE;

        // fields (use with care)
        uint64_t mRequestTime;
        uint64_t mRequestOut;
        uint64_t mTrdRegTSTimeIn;
        uint64_t mTrdRegTSTimeOut;
        uint64_t mResponseIn;
        uint64_t mSendingTime;
        uint32_t mMsgSeqNum;
        uint16_t mPartitionID;
        int8_t mApplID;
        char mApplMsgID[16];
        int8_t mLastFragment;

        // constructor
        xetraResponseHeaderMECompPacket ()
        {
            mRequestTime = REQUEST_TIME_NO_VALUE;
            mRequestOut = REQUEST_OUT_NO_VALUE;
            mTrdRegTSTimeIn = TRD_REG_TSTIME_IN_NO_VALUE;
            mTrdRegTSTimeOut = TRD_REG_TSTIME_OUT_NO_VALUE;
            mResponseIn = RESPONSE_IN_NO_VALUE;
            mSendingTime = SENDING_TIME_NO_VALUE;
            mMsgSeqNum = MSG_SEQ_NUM_NO_VALUE;
            mPartitionID = PARTITION_ID_NO_VALUE;
            mApplID = APPL_ID_NO_VALUE;
            memcpy(mApplMsgID, APPL_MSG_ID_NO_VALUE, sizeof (mApplMsgID));
            mLastFragment = LAST_FRAGMENT_NO_VALUE;
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

        uint64_t getRequestOut () const
        {
            return mRequestOut;
        }

        bool setRequestOut (uint64_t v)
        {
            mRequestOut = v;
            return ((REQUEST_OUT_MIN <= mRequestOut && mRequestOut <= REQUEST_OUT_MAX) || mRequestOut == REQUEST_OUT_NO_VALUE);
        }

        bool isRequestOutValid () const
        {
            return (mRequestOut != REQUEST_OUT_NO_VALUE);
        }

        void resetRequestOut ()
        {
            mRequestOut = REQUEST_OUT_NO_VALUE;
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

        uint16_t getPartitionID () const
        {
            return mPartitionID;
        }

        bool setPartitionID (uint16_t v)
        {
            mPartitionID = v;
            return ((PARTITION_ID_MIN <= mPartitionID && mPartitionID <= PARTITION_ID_MAX) || mPartitionID == PARTITION_ID_NO_VALUE);
        }

        bool isPartitionIDValid () const
        {
            return (mPartitionID != PARTITION_ID_NO_VALUE);
        }

        void resetPartitionID ()
        {
            mPartitionID = PARTITION_ID_NO_VALUE;
        }

        int8_t getApplID () const
        {
            return mApplID;
        }

        bool setApplID (int8_t v)
        {
            mApplID = v;
            return ((APPL_ID_MIN <= mApplID && mApplID <= APPL_ID_MAX) || mApplID == APPL_ID_NO_VALUE);
        }

        bool isApplIDValid () const
        {
            return (mApplID != APPL_ID_NO_VALUE);
        }

        void resetApplID ()
        {
            mApplID = APPL_ID_NO_VALUE;
        }

        string getApplMsgID () const
        {
            return string (mApplMsgID, APPL_MSG_ID_MAX_LENGTH);
        }

        bool setApplMsgID (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) APPL_MSG_ID_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mApplMsgID[i] = v[i];
            memset (&mApplMsgID[size], '\0', APPL_MSG_ID_MAX_LENGTH-size);
            return (v.size () <= APPL_MSG_ID_MAX_LENGTH);
        }

        bool isApplMsgIDValid () const
        {
            return (memcmp (mApplMsgID, APPL_MSG_ID_NO_VALUE, sizeof (mApplMsgID)) != 0);
        }

        void resetApplMsgID ()
        {
            memcpy (mApplMsgID, APPL_MSG_ID_NO_VALUE, sizeof (mApplMsgID));
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


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = sizeof (mRequestTime)
                + sizeof (mRequestOut)
                + sizeof (mTrdRegTSTimeIn)
                + sizeof (mTrdRegTSTimeOut)
                + sizeof (mResponseIn)
                + sizeof (mSendingTime)
                + sizeof (mMsgSeqNum)
                + sizeof (mPartitionID)
                + sizeof (mApplID)
                + sizeof (mApplMsgID)
                + sizeof (mLastFragment);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::serialize (mRequestTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRequestOut, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTrdRegTSTimeIn, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTrdRegTSTimeOut, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mResponseIn, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSendingTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMsgSeqNum, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartitionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mApplID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mApplMsgID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mLastFragment, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::deserialize (mRequestTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRequestOut, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTrdRegTSTimeIn, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTrdRegTSTimeOut, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mResponseIn, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSendingTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMsgSeqNum, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartitionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mApplID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mApplMsgID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mLastFragment, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "ResponseHeaderMEComp::"
                << "[RequestTime=" << getRequestTime () << "],"
                << "[RequestOut=" << getRequestOut () << "],"
                << "[TrdRegTSTimeIn=" << getTrdRegTSTimeIn () << "],"
                << "[TrdRegTSTimeOut=" << getTrdRegTSTimeOut () << "],"
                << "[ResponseIn=" << getResponseIn () << "],"
                << "[SendingTime=" << getSendingTime () << "],"
                << "[MsgSeqNum=" << getMsgSeqNum () << "],"
                << "[PartitionID=" << getPartitionID () << "],"
                << "[ApplID=" << getApplID () << "],"
                << "[ApplMsgID=" << getApplMsgID () << "],"
                << "[LastFragment=" << getLastFragment () << "]";
            return sss.str();
        }
};

const uint64_t xetraResponseHeaderMECompPacket::REQUEST_TIME_MIN = 0UL;
const uint64_t xetraResponseHeaderMECompPacket::REQUEST_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraResponseHeaderMECompPacket::REQUEST_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraResponseHeaderMECompPacket::REQUEST_OUT_MIN = 0UL;
const uint64_t xetraResponseHeaderMECompPacket::REQUEST_OUT_MAX = 18446744073709551614UL;
const uint64_t xetraResponseHeaderMECompPacket::REQUEST_OUT_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraResponseHeaderMECompPacket::TRD_REG_TSTIME_IN_MIN = 0UL;
const uint64_t xetraResponseHeaderMECompPacket::TRD_REG_TSTIME_IN_MAX = 18446744073709551614UL;
const uint64_t xetraResponseHeaderMECompPacket::TRD_REG_TSTIME_IN_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraResponseHeaderMECompPacket::TRD_REG_TSTIME_OUT_MIN = 0UL;
const uint64_t xetraResponseHeaderMECompPacket::TRD_REG_TSTIME_OUT_MAX = 18446744073709551614UL;
const uint64_t xetraResponseHeaderMECompPacket::TRD_REG_TSTIME_OUT_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraResponseHeaderMECompPacket::RESPONSE_IN_MIN = 0UL;
const uint64_t xetraResponseHeaderMECompPacket::RESPONSE_IN_MAX = 18446744073709551614UL;
const uint64_t xetraResponseHeaderMECompPacket::RESPONSE_IN_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraResponseHeaderMECompPacket::SENDING_TIME_MIN = 0UL;
const uint64_t xetraResponseHeaderMECompPacket::SENDING_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraResponseHeaderMECompPacket::SENDING_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint32_t xetraResponseHeaderMECompPacket::MSG_SEQ_NUM_MIN = 0;
const uint32_t xetraResponseHeaderMECompPacket::MSG_SEQ_NUM_MAX = 4294967294;
const uint32_t xetraResponseHeaderMECompPacket::MSG_SEQ_NUM_NO_VALUE = 0xFFFFFFFF;
const uint16_t xetraResponseHeaderMECompPacket::PARTITION_ID_MIN = 0;
const uint16_t xetraResponseHeaderMECompPacket::PARTITION_ID_MAX = 65534;
const uint16_t xetraResponseHeaderMECompPacket::PARTITION_ID_NO_VALUE = 0xFFFF;
const int8_t xetraResponseHeaderMECompPacket::APPL_ID_MIN = 0;
const int8_t xetraResponseHeaderMECompPacket::APPL_ID_MAX = 10;
const int8_t xetraResponseHeaderMECompPacket::APPL_ID_NO_VALUE = 0xFF;
const char xetraResponseHeaderMECompPacket::APPL_MSG_ID_NO_VALUE[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraResponseHeaderMECompPacket::APPL_MSG_ID_MAX_LENGTH = 16;
const int8_t xetraResponseHeaderMECompPacket::LAST_FRAGMENT_MIN = 0;
const int8_t xetraResponseHeaderMECompPacket::LAST_FRAGMENT_MAX = 1;
const int8_t xetraResponseHeaderMECompPacket::LAST_FRAGMENT_NO_VALUE = 0xFF;


} // namespace neueda

#endif // XETRA_RESPONSEHEADERMECOMP_PACKET_H
