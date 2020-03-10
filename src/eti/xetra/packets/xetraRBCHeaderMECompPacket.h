/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 08/03/2020
 */
#ifndef XETRA_RBCHEADERMECOMP_PACKET_H
#define XETRA_RBCHEADERMECOMP_PACKET_H

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

class xetraRBCHeaderMECompPacket
{
    public:
        // no value constants
        static const uint64_t TRD_REG_TSTIME_OUT_MIN;
        static const uint64_t TRD_REG_TSTIME_OUT_MAX;
        static const uint64_t TRD_REG_TSTIME_OUT_NO_VALUE;
        static const uint64_t NOTIFICATION_IN_MIN;
        static const uint64_t NOTIFICATION_IN_MAX;
        static const uint64_t NOTIFICATION_IN_NO_VALUE;
        static const uint64_t SENDING_TIME_MIN;
        static const uint64_t SENDING_TIME_MAX;
        static const uint64_t SENDING_TIME_NO_VALUE;
        static const uint32_t APPL_SUB_ID_MIN;
        static const uint32_t APPL_SUB_ID_MAX;
        static const uint32_t APPL_SUB_ID_NO_VALUE;
        static const uint16_t PARTITION_ID_MIN;
        static const uint16_t PARTITION_ID_MAX;
        static const uint16_t PARTITION_ID_NO_VALUE;
        static const char APPL_MSG_ID_NO_VALUE[16];
        static const size_t APPL_MSG_ID_MAX_LENGTH;
        static const int8_t APPL_ID_MIN;
        static const int8_t APPL_ID_MAX;
        static const int8_t APPL_ID_NO_VALUE;
        static const int8_t APPL_RESEND_FLAG_MIN;
        static const int8_t APPL_RESEND_FLAG_MAX;
        static const int8_t APPL_RESEND_FLAG_NO_VALUE;
        static const int8_t LAST_FRAGMENT_MIN;
        static const int8_t LAST_FRAGMENT_MAX;
        static const int8_t LAST_FRAGMENT_NO_VALUE;
        static const char PAD7_NO_VALUE[7];
        static const size_t PAD7_MAX_LENGTH;

        // fields (use with care)
        uint64_t mTrdRegTSTimeOut;
        uint64_t mNotificationIn;
        uint64_t mSendingTime;
        uint32_t mApplSubID;
        uint16_t mPartitionID;
        char mApplMsgID[16];
        int8_t mApplID;
        int8_t mApplResendFlag;
        int8_t mLastFragment;
        char mPad7[7];

        // constructor
        xetraRBCHeaderMECompPacket ()
        {
            mTrdRegTSTimeOut = TRD_REG_TSTIME_OUT_NO_VALUE;
            mNotificationIn = NOTIFICATION_IN_NO_VALUE;
            mSendingTime = SENDING_TIME_NO_VALUE;
            mApplSubID = APPL_SUB_ID_NO_VALUE;
            mPartitionID = PARTITION_ID_NO_VALUE;
            memcpy(mApplMsgID, APPL_MSG_ID_NO_VALUE, sizeof (mApplMsgID));
            mApplID = APPL_ID_NO_VALUE;
            mApplResendFlag = APPL_RESEND_FLAG_NO_VALUE;
            mLastFragment = LAST_FRAGMENT_NO_VALUE;
            memcpy(mPad7, PAD7_NO_VALUE, sizeof (mPad7));
        }

        // getters & setters
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

        uint64_t getNotificationIn () const
        {
            return mNotificationIn;
        }

        bool setNotificationIn (uint64_t v)
        {
            mNotificationIn = v;
            return ((NOTIFICATION_IN_MIN <= mNotificationIn && mNotificationIn <= NOTIFICATION_IN_MAX) || mNotificationIn == NOTIFICATION_IN_NO_VALUE);
        }

        bool isNotificationInValid () const
        {
            return (mNotificationIn != NOTIFICATION_IN_NO_VALUE);
        }

        void resetNotificationIn ()
        {
            mNotificationIn = NOTIFICATION_IN_NO_VALUE;
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

        string getApplMsgID () const
        {
            return string (mApplMsgID, APPL_MSG_ID_MAX_LENGTH);
        }

        bool setApplMsgID (const string& v)
        {
            memset (mApplMsgID, '\0', sizeof (mApplMsgID));
            size_t size = min ((size_t) v.size (), (size_t) APPL_MSG_ID_MAX_LENGTH);
            strncpy (mApplMsgID, v.c_str (), size);
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
            memset (mPad7, '\0', sizeof (mPad7));
            size_t size = min ((size_t) v.size (), (size_t) PAD7_MAX_LENGTH);
            strncpy (mPad7, v.c_str (), size);
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
            size_t result = sizeof (mTrdRegTSTimeOut)
                + sizeof (mNotificationIn)
                + sizeof (mSendingTime)
                + sizeof (mApplSubID)
                + sizeof (mPartitionID)
                + sizeof (mApplMsgID)
                + sizeof (mApplID)
                + sizeof (mApplResendFlag)
                + sizeof (mLastFragment)
                + sizeof (mPad7);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::serialize (mTrdRegTSTimeOut, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNotificationIn, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSendingTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mApplSubID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartitionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mApplMsgID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mApplID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mApplResendFlag, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mLastFragment, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::deserialize (mTrdRegTSTimeOut, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNotificationIn, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSendingTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mApplSubID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartitionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mApplMsgID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mApplID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mApplResendFlag, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mLastFragment, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "RBCHeaderMEComp::"
                << "[TrdRegTSTimeOut=" << getTrdRegTSTimeOut () << "],"
                << "[NotificationIn=" << getNotificationIn () << "],"
                << "[SendingTime=" << getSendingTime () << "],"
                << "[ApplSubID=" << getApplSubID () << "],"
                << "[PartitionID=" << getPartitionID () << "],"
                << "[ApplMsgID=" << getApplMsgID () << "],"
                << "[ApplID=" << getApplID () << "],"
                << "[ApplResendFlag=" << getApplResendFlag () << "],"
                << "[LastFragment=" << getLastFragment () << "],"
                << "[Pad7=" << getPad7 () << "]";
            return sss.str();
        }
};

const uint64_t xetraRBCHeaderMECompPacket::TRD_REG_TSTIME_OUT_MIN = 0UL;
const uint64_t xetraRBCHeaderMECompPacket::TRD_REG_TSTIME_OUT_MAX = 18446744073709551614UL;
const uint64_t xetraRBCHeaderMECompPacket::TRD_REG_TSTIME_OUT_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraRBCHeaderMECompPacket::NOTIFICATION_IN_MIN = 0UL;
const uint64_t xetraRBCHeaderMECompPacket::NOTIFICATION_IN_MAX = 18446744073709551614UL;
const uint64_t xetraRBCHeaderMECompPacket::NOTIFICATION_IN_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraRBCHeaderMECompPacket::SENDING_TIME_MIN = 0UL;
const uint64_t xetraRBCHeaderMECompPacket::SENDING_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraRBCHeaderMECompPacket::SENDING_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint32_t xetraRBCHeaderMECompPacket::APPL_SUB_ID_MIN = 0;
const uint32_t xetraRBCHeaderMECompPacket::APPL_SUB_ID_MAX = 4294967294;
const uint32_t xetraRBCHeaderMECompPacket::APPL_SUB_ID_NO_VALUE = 0xFFFFFFFF;
const uint16_t xetraRBCHeaderMECompPacket::PARTITION_ID_MIN = 0;
const uint16_t xetraRBCHeaderMECompPacket::PARTITION_ID_MAX = 65534;
const uint16_t xetraRBCHeaderMECompPacket::PARTITION_ID_NO_VALUE = 0xFFFF;
const char xetraRBCHeaderMECompPacket::APPL_MSG_ID_NO_VALUE[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraRBCHeaderMECompPacket::APPL_MSG_ID_MAX_LENGTH = 16;
const int8_t xetraRBCHeaderMECompPacket::APPL_ID_MIN = 0;
const int8_t xetraRBCHeaderMECompPacket::APPL_ID_MAX = 11;
const int8_t xetraRBCHeaderMECompPacket::APPL_ID_NO_VALUE = 0xFF;
const int8_t xetraRBCHeaderMECompPacket::APPL_RESEND_FLAG_MIN = 0;
const int8_t xetraRBCHeaderMECompPacket::APPL_RESEND_FLAG_MAX = 1;
const int8_t xetraRBCHeaderMECompPacket::APPL_RESEND_FLAG_NO_VALUE = 0xFF;
const int8_t xetraRBCHeaderMECompPacket::LAST_FRAGMENT_MIN = 0;
const int8_t xetraRBCHeaderMECompPacket::LAST_FRAGMENT_MAX = 1;
const int8_t xetraRBCHeaderMECompPacket::LAST_FRAGMENT_NO_VALUE = 0xFF;
const char xetraRBCHeaderMECompPacket::PAD7_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraRBCHeaderMECompPacket::PAD7_MAX_LENGTH = 7;


} // namespace neueda

#endif // XETRA_RBCHEADERMECOMP_PACKET_H
