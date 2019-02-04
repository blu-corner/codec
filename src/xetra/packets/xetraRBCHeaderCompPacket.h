/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 04/02/2019
 */
#ifndef XETRA_RBCHEADERCOMP_PACKET_H
#define XETRA_RBCHEADERCOMP_PACKET_H

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

class xetraRBCHeaderCompPacket
{
    public:
        // no value constants
        static const uint64_t SENDING_TIME_MIN;
        static const uint64_t SENDING_TIME_MAX;
        static const uint64_t SENDING_TIME_NO_VALUE;
        static const uint64_t APPL_SEQ_NUM_MIN;
        static const uint64_t APPL_SEQ_NUM_MAX;
        static const uint64_t APPL_SEQ_NUM_NO_VALUE;
        static const uint32_t APPL_SUB_ID_MIN;
        static const uint32_t APPL_SUB_ID_MAX;
        static const uint32_t APPL_SUB_ID_NO_VALUE;
        static const uint16_t PARTITION_ID_MIN;
        static const uint16_t PARTITION_ID_MAX;
        static const uint16_t PARTITION_ID_NO_VALUE;
        static const int8_t APPL_RESEND_FLAG_MIN;
        static const int8_t APPL_RESEND_FLAG_MAX;
        static const int8_t APPL_RESEND_FLAG_NO_VALUE;
        static const int8_t APPL_ID_MIN;
        static const int8_t APPL_ID_MAX;
        static const int8_t APPL_ID_NO_VALUE;
        static const int8_t LAST_FRAGMENT_MIN;
        static const int8_t LAST_FRAGMENT_MAX;
        static const int8_t LAST_FRAGMENT_NO_VALUE;
        static const char PAD7_NO_VALUE[7];
        static const size_t PAD7_MAX_LENGTH;

        // fields (use with care)
        uint64_t mSendingTime;
        uint64_t mApplSeqNum;
        uint32_t mApplSubID;
        uint16_t mPartitionID;
        int8_t mApplResendFlag;
        int8_t mApplID;
        int8_t mLastFragment;
        char mPad7[7];

        // constructor
        xetraRBCHeaderCompPacket ()
        {
            mSendingTime = SENDING_TIME_NO_VALUE;
            mApplSeqNum = APPL_SEQ_NUM_NO_VALUE;
            mApplSubID = APPL_SUB_ID_NO_VALUE;
            mPartitionID = PARTITION_ID_NO_VALUE;
            mApplResendFlag = APPL_RESEND_FLAG_NO_VALUE;
            mApplID = APPL_ID_NO_VALUE;
            mLastFragment = LAST_FRAGMENT_NO_VALUE;
            memcpy(mPad7, PAD7_NO_VALUE, sizeof (mPad7));
        }

        // getters & setters
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

        uint64_t getApplSeqNum () const
        {
            return mApplSeqNum;
        }

        bool setApplSeqNum (uint64_t v)
        {
            mApplSeqNum = v;
            return ((APPL_SEQ_NUM_MIN <= mApplSeqNum && mApplSeqNum <= APPL_SEQ_NUM_MAX) || mApplSeqNum == APPL_SEQ_NUM_NO_VALUE);
        }

        bool isApplSeqNumValid () const
        {
            return (mApplSeqNum != APPL_SEQ_NUM_NO_VALUE);
        }

        void resetApplSeqNum ()
        {
            mApplSeqNum = APPL_SEQ_NUM_NO_VALUE;
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

        int8_t getApplResendFlag () const
        {
            return mApplResendFlag;
        }

        bool setApplResendFlag (int8_t v)
        {
            mApplResendFlag = v;
            return ((APPL_RESEND_FLAG_MIN <= mApplResendFlag && mApplResendFlag <= APPL_RESEND_FLAG_MAX) || mApplResendFlag == APPL_RESEND_FLAG_NO_VALUE);
        }

        bool isApplResendFlagValid () const
        {
            return (mApplResendFlag != APPL_RESEND_FLAG_NO_VALUE);
        }

        void resetApplResendFlag ()
        {
            mApplResendFlag = APPL_RESEND_FLAG_NO_VALUE;
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

        string getPad7 () const
        {
            return string (mPad7, PAD7_MAX_LENGTH);
        }

        bool setPad7 (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) PAD7_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mPad7[i] = v[i];
            memset (&mPad7[size], '\0', PAD7_MAX_LENGTH-size);
            return (v.size () <= PAD7_MAX_LENGTH);
        }

        bool isPad7Valid () const
        {
            return (memcmp (mPad7, PAD7_NO_VALUE, sizeof (mPad7)) != 0);
        }

        void resetPad7 ()
        {
            memcpy (mPad7, PAD7_NO_VALUE, sizeof (mPad7));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = sizeof (mSendingTime)
                + sizeof (mApplSeqNum)
                + sizeof (mApplSubID)
                + sizeof (mPartitionID)
                + sizeof (mApplResendFlag)
                + sizeof (mApplID)
                + sizeof (mLastFragment)
                + sizeof (mPad7);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::serialize (mSendingTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mApplSeqNum, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mApplSubID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartitionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mApplResendFlag, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mApplID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mLastFragment, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::deserialize (mSendingTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mApplSeqNum, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mApplSubID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartitionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mApplResendFlag, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mApplID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mLastFragment, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "RBCHeaderComp::"
                << "[SendingTime=" << getSendingTime () << "],"
                << "[ApplSeqNum=" << getApplSeqNum () << "],"
                << "[ApplSubID=" << getApplSubID () << "],"
                << "[PartitionID=" << getPartitionID () << "],"
                << "[ApplResendFlag=" << getApplResendFlag () << "],"
                << "[ApplID=" << getApplID () << "],"
                << "[LastFragment=" << getLastFragment () << "],"
                << "[Pad7=" << getPad7 () << "]";
            return sss.str();
        }
};

const uint64_t xetraRBCHeaderCompPacket::SENDING_TIME_MIN = 0UL;
const uint64_t xetraRBCHeaderCompPacket::SENDING_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraRBCHeaderCompPacket::SENDING_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraRBCHeaderCompPacket::APPL_SEQ_NUM_MIN = 0UL;
const uint64_t xetraRBCHeaderCompPacket::APPL_SEQ_NUM_MAX = 18446744073709551614UL;
const uint64_t xetraRBCHeaderCompPacket::APPL_SEQ_NUM_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint32_t xetraRBCHeaderCompPacket::APPL_SUB_ID_MIN = 0;
const uint32_t xetraRBCHeaderCompPacket::APPL_SUB_ID_MAX = 4294967294;
const uint32_t xetraRBCHeaderCompPacket::APPL_SUB_ID_NO_VALUE = 0xFFFFFFFF;
const uint16_t xetraRBCHeaderCompPacket::PARTITION_ID_MIN = 0;
const uint16_t xetraRBCHeaderCompPacket::PARTITION_ID_MAX = 65534;
const uint16_t xetraRBCHeaderCompPacket::PARTITION_ID_NO_VALUE = 0xFFFF;
const int8_t xetraRBCHeaderCompPacket::APPL_RESEND_FLAG_MIN = 0;
const int8_t xetraRBCHeaderCompPacket::APPL_RESEND_FLAG_MAX = 1;
const int8_t xetraRBCHeaderCompPacket::APPL_RESEND_FLAG_NO_VALUE = 0xFF;
const int8_t xetraRBCHeaderCompPacket::APPL_ID_MIN = 0;
const int8_t xetraRBCHeaderCompPacket::APPL_ID_MAX = 10;
const int8_t xetraRBCHeaderCompPacket::APPL_ID_NO_VALUE = 0xFF;
const int8_t xetraRBCHeaderCompPacket::LAST_FRAGMENT_MIN = 0;
const int8_t xetraRBCHeaderCompPacket::LAST_FRAGMENT_MAX = 1;
const int8_t xetraRBCHeaderCompPacket::LAST_FRAGMENT_NO_VALUE = 0xFF;
const char xetraRBCHeaderCompPacket::PAD7_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraRBCHeaderCompPacket::PAD7_MAX_LENGTH = 7;


} // namespace neueda

#endif // XETRA_RBCHEADERCOMP_PACKET_H
