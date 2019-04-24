/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_NEWORDERRESPONSE_PACKET_H
#define EUREX_NEWORDERRESPONSE_PACKET_H

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

class eurexNewOrderResponsePacket
{
    public:
        // no value constants
        static const uint64_t ORDER_ID_MIN;
        static const uint64_t ORDER_ID_MAX;
        static const uint64_t ORDER_ID_NO_VALUE;
        static const uint64_t CL_ORD_ID_MIN;
        static const uint64_t CL_ORD_ID_MAX;
        static const uint64_t CL_ORD_ID_NO_VALUE;
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const uint64_t EXEC_ID_MIN;
        static const uint64_t EXEC_ID_MAX;
        static const uint64_t EXEC_ID_NO_VALUE;
        static const uint64_t TRD_REG_TSENTRY_TIME_MIN;
        static const uint64_t TRD_REG_TSENTRY_TIME_MAX;
        static const uint64_t TRD_REG_TSENTRY_TIME_NO_VALUE;
        static const uint64_t TRD_REG_TSTIME_PRIORITY_MIN;
        static const uint64_t TRD_REG_TSTIME_PRIORITY_MAX;
        static const uint64_t TRD_REG_TSTIME_PRIORITY_NO_VALUE;
        static const char ORD_STATUS_NO_VALUE[1];
        static const size_t ORD_STATUS_MAX_LENGTH;
        static const char EXEC_TYPE_NO_VALUE[1];
        static const size_t EXEC_TYPE_MAX_LENGTH;
        static const int16_t EXEC_RESTATEMENT_REASON_MIN;
        static const int16_t EXEC_RESTATEMENT_REASON_MAX;
        static const int16_t EXEC_RESTATEMENT_REASON_NO_VALUE;
        static const int8_t CROSSED_INDICATOR_MIN;
        static const int8_t CROSSED_INDICATOR_MAX;
        static const int8_t CROSSED_INDICATOR_NO_VALUE;
        static const int8_t PRODUCT_COMPLEX_MIN;
        static const int8_t PRODUCT_COMPLEX_MAX;
        static const int8_t PRODUCT_COMPLEX_NO_VALUE;
        static const int8_t TRIGGERED_MIN;
        static const int8_t TRIGGERED_MAX;
        static const int8_t TRIGGERED_NO_VALUE;
        static const int8_t TRANSACTION_DELAY_INDICATOR_MIN;
        static const int8_t TRANSACTION_DELAY_INDICATOR_MAX;
        static const int8_t TRANSACTION_DELAY_INDICATOR_NO_VALUE;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexResponseHeaderMECompPacket mResponseHeaderME;
        uint64_t mOrderID;
        uint64_t mClOrdID;
        int64_t mSecurityID;
        uint64_t mExecID;
        uint64_t mTrdRegTSEntryTime;
        uint64_t mTrdRegTSTimePriority;
        char mOrdStatus[1];
        char mExecType[1];
        int16_t mExecRestatementReason;
        int8_t mCrossedIndicator;
        int8_t mProductComplex;
        int8_t mTriggered;
        int8_t mTransactionDelayIndicator;

        // constructor
        eurexNewOrderResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10101;
            mOrderID = ORDER_ID_NO_VALUE;
            mClOrdID = CL_ORD_ID_NO_VALUE;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mExecID = EXEC_ID_NO_VALUE;
            mTrdRegTSEntryTime = TRD_REG_TSENTRY_TIME_NO_VALUE;
            mTrdRegTSTimePriority = TRD_REG_TSTIME_PRIORITY_NO_VALUE;
            memcpy(mOrdStatus, ORD_STATUS_NO_VALUE, sizeof (mOrdStatus));
            memcpy(mExecType, EXEC_TYPE_NO_VALUE, sizeof (mExecType));
            mExecRestatementReason = EXEC_RESTATEMENT_REASON_NO_VALUE;
            mCrossedIndicator = CROSSED_INDICATOR_NO_VALUE;
            mProductComplex = PRODUCT_COMPLEX_NO_VALUE;
            mTriggered = TRIGGERED_NO_VALUE;
            mTransactionDelayIndicator = TRANSACTION_DELAY_INDICATOR_NO_VALUE;
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

        const eurexResponseHeaderMECompPacket& getResponseHeaderME () const
        {
            return mResponseHeaderME;
        }

        bool setResponseHeaderME (const eurexResponseHeaderMECompPacket& v)
        {
            mResponseHeaderME = v;
            return true;
        }

        uint64_t getOrderID () const
        {
            return mOrderID;
        }

        bool setOrderID (uint64_t v)
        {
            mOrderID = v;
            return ((ORDER_ID_MIN <= mOrderID && mOrderID <= ORDER_ID_MAX) || mOrderID == ORDER_ID_NO_VALUE);
        }

        bool isOrderIDValid () const
        {
            return (mOrderID != ORDER_ID_NO_VALUE);
        }

        void resetOrderID ()
        {
            mOrderID = ORDER_ID_NO_VALUE;
        }

        uint64_t getClOrdID () const
        {
            return mClOrdID;
        }

        bool setClOrdID (uint64_t v)
        {
            mClOrdID = v;
            return ((CL_ORD_ID_MIN <= mClOrdID && mClOrdID <= CL_ORD_ID_MAX) || mClOrdID == CL_ORD_ID_NO_VALUE);
        }

        bool isClOrdIDValid () const
        {
            return (mClOrdID != CL_ORD_ID_NO_VALUE);
        }

        void resetClOrdID ()
        {
            mClOrdID = CL_ORD_ID_NO_VALUE;
        }

        int64_t getSecurityID () const
        {
            return mSecurityID;
        }

        bool setSecurityID (int64_t v)
        {
            mSecurityID = v;
            return ((SECURITY_ID_MIN <= mSecurityID && mSecurityID <= SECURITY_ID_MAX) || mSecurityID == SECURITY_ID_NO_VALUE);
        }

        bool isSecurityIDValid () const
        {
            return (mSecurityID != SECURITY_ID_NO_VALUE);
        }

        void resetSecurityID ()
        {
            mSecurityID = SECURITY_ID_NO_VALUE;
        }

        uint64_t getExecID () const
        {
            return mExecID;
        }

        bool setExecID (uint64_t v)
        {
            mExecID = v;
            return ((EXEC_ID_MIN <= mExecID && mExecID <= EXEC_ID_MAX) || mExecID == EXEC_ID_NO_VALUE);
        }

        bool isExecIDValid () const
        {
            return (mExecID != EXEC_ID_NO_VALUE);
        }

        void resetExecID ()
        {
            mExecID = EXEC_ID_NO_VALUE;
        }

        uint64_t getTrdRegTSEntryTime () const
        {
            return mTrdRegTSEntryTime;
        }

        bool setTrdRegTSEntryTime (uint64_t v)
        {
            mTrdRegTSEntryTime = v;
            return ((TRD_REG_TSENTRY_TIME_MIN <= mTrdRegTSEntryTime && mTrdRegTSEntryTime <= TRD_REG_TSENTRY_TIME_MAX) || mTrdRegTSEntryTime == TRD_REG_TSENTRY_TIME_NO_VALUE);
        }

        bool isTrdRegTSEntryTimeValid () const
        {
            return (mTrdRegTSEntryTime != TRD_REG_TSENTRY_TIME_NO_VALUE);
        }

        void resetTrdRegTSEntryTime ()
        {
            mTrdRegTSEntryTime = TRD_REG_TSENTRY_TIME_NO_VALUE;
        }

        uint64_t getTrdRegTSTimePriority () const
        {
            return mTrdRegTSTimePriority;
        }

        bool setTrdRegTSTimePriority (uint64_t v)
        {
            mTrdRegTSTimePriority = v;
            return ((TRD_REG_TSTIME_PRIORITY_MIN <= mTrdRegTSTimePriority && mTrdRegTSTimePriority <= TRD_REG_TSTIME_PRIORITY_MAX) || mTrdRegTSTimePriority == TRD_REG_TSTIME_PRIORITY_NO_VALUE);
        }

        bool isTrdRegTSTimePriorityValid () const
        {
            return (mTrdRegTSTimePriority != TRD_REG_TSTIME_PRIORITY_NO_VALUE);
        }

        void resetTrdRegTSTimePriority ()
        {
            mTrdRegTSTimePriority = TRD_REG_TSTIME_PRIORITY_NO_VALUE;
        }

        string getOrdStatus () const
        {
            return string (mOrdStatus, ORD_STATUS_MAX_LENGTH);
        }

        bool setOrdStatus (const string& v)
        {
            memset (mOrdStatus, '\0', sizeof (mOrdStatus));
            size_t size = min ((size_t) v.size (), (size_t) ORD_STATUS_MAX_LENGTH);
            strncpy (mOrdStatus, v.c_str (), size);
            return (v.size () <= ORD_STATUS_MAX_LENGTH);
        }

        bool isOrdStatusValid () const
        {
            return (memcmp (mOrdStatus, ORD_STATUS_NO_VALUE, sizeof (mOrdStatus)) != 0);
        }

        void resetOrdStatus ()
        {
            memcpy (mOrdStatus, ORD_STATUS_NO_VALUE, sizeof (mOrdStatus));
        }

        string getExecType () const
        {
            return string (mExecType, EXEC_TYPE_MAX_LENGTH);
        }

        bool setExecType (const string& v)
        {
            memset (mExecType, '\0', sizeof (mExecType));
            size_t size = min ((size_t) v.size (), (size_t) EXEC_TYPE_MAX_LENGTH);
            strncpy (mExecType, v.c_str (), size);
            return (v.size () <= EXEC_TYPE_MAX_LENGTH);
        }

        bool isExecTypeValid () const
        {
            return (memcmp (mExecType, EXEC_TYPE_NO_VALUE, sizeof (mExecType)) != 0);
        }

        void resetExecType ()
        {
            memcpy (mExecType, EXEC_TYPE_NO_VALUE, sizeof (mExecType));
        }

        int16_t getExecRestatementReason () const
        {
            return mExecRestatementReason;
        }

        bool setExecRestatementReason (int16_t v)
        {
            mExecRestatementReason = v;
            return ((EXEC_RESTATEMENT_REASON_MIN <= mExecRestatementReason && mExecRestatementReason <= EXEC_RESTATEMENT_REASON_MAX) || mExecRestatementReason == EXEC_RESTATEMENT_REASON_NO_VALUE);
        }

        bool isExecRestatementReasonValid () const
        {
            return (mExecRestatementReason != EXEC_RESTATEMENT_REASON_NO_VALUE);
        }

        void resetExecRestatementReason ()
        {
            mExecRestatementReason = EXEC_RESTATEMENT_REASON_NO_VALUE;
        }

        int8_t getCrossedIndicator () const
        {
            return mCrossedIndicator;
        }

        bool setCrossedIndicator (int8_t v)
        {
            mCrossedIndicator = v;
            return ((CROSSED_INDICATOR_MIN <= mCrossedIndicator && mCrossedIndicator <= CROSSED_INDICATOR_MAX) || mCrossedIndicator == CROSSED_INDICATOR_NO_VALUE);
        }

        bool isCrossedIndicatorValid () const
        {
            return (mCrossedIndicator != CROSSED_INDICATOR_NO_VALUE);
        }

        void resetCrossedIndicator ()
        {
            mCrossedIndicator = CROSSED_INDICATOR_NO_VALUE;
        }

        int8_t getProductComplex () const
        {
            return mProductComplex;
        }

        bool setProductComplex (int8_t v)
        {
            mProductComplex = v;
            return ((PRODUCT_COMPLEX_MIN <= mProductComplex && mProductComplex <= PRODUCT_COMPLEX_MAX) || mProductComplex == PRODUCT_COMPLEX_NO_VALUE);
        }

        bool isProductComplexValid () const
        {
            return (mProductComplex != PRODUCT_COMPLEX_NO_VALUE);
        }

        void resetProductComplex ()
        {
            mProductComplex = PRODUCT_COMPLEX_NO_VALUE;
        }

        int8_t getTriggered () const
        {
            return mTriggered;
        }

        bool setTriggered (int8_t v)
        {
            mTriggered = v;
            return ((TRIGGERED_MIN <= mTriggered && mTriggered <= TRIGGERED_MAX) || mTriggered == TRIGGERED_NO_VALUE);
        }

        bool isTriggeredValid () const
        {
            return (mTriggered != TRIGGERED_NO_VALUE);
        }

        void resetTriggered ()
        {
            mTriggered = TRIGGERED_NO_VALUE;
        }

        int8_t getTransactionDelayIndicator () const
        {
            return mTransactionDelayIndicator;
        }

        bool setTransactionDelayIndicator (int8_t v)
        {
            mTransactionDelayIndicator = v;
            return ((TRANSACTION_DELAY_INDICATOR_MIN <= mTransactionDelayIndicator && mTransactionDelayIndicator <= TRANSACTION_DELAY_INDICATOR_MAX) || mTransactionDelayIndicator == TRANSACTION_DELAY_INDICATOR_NO_VALUE);
        }

        bool isTransactionDelayIndicatorValid () const
        {
            return (mTransactionDelayIndicator != TRANSACTION_DELAY_INDICATOR_NO_VALUE);
        }

        void resetTransactionDelayIndicator ()
        {
            mTransactionDelayIndicator = TRANSACTION_DELAY_INDICATOR_NO_VALUE;
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mResponseHeaderME.getRawSize()
                + sizeof (mOrderID)
                + sizeof (mClOrdID)
                + sizeof (mSecurityID)
                + sizeof (mExecID)
                + sizeof (mTrdRegTSEntryTime)
                + sizeof (mTrdRegTSTimePriority)
                + sizeof (mOrdStatus)
                + sizeof (mExecType)
                + sizeof (mExecRestatementReason)
                + sizeof (mCrossedIndicator)
                + sizeof (mProductComplex)
                + sizeof (mTriggered)
                + sizeof (mTransactionDelayIndicator);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mResponseHeaderME.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTrdRegTSEntryTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTrdRegTSTimePriority, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mOrdStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mExecType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mExecRestatementReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mCrossedIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTriggered, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTransactionDelayIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = mMessageHeaderOut.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mResponseHeaderME.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTrdRegTSEntryTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTrdRegTSTimePriority, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mOrdStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mExecType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mExecRestatementReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mCrossedIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTriggered, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTransactionDelayIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "NewOrderResponse::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[ResponseHeaderME=" << mResponseHeaderME.toString () << "],"
                << "[OrderID=" << getOrderID () << "],"
                << "[ClOrdID=" << getClOrdID () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[ExecID=" << getExecID () << "],"
                << "[TrdRegTSEntryTime=" << getTrdRegTSEntryTime () << "],"
                << "[TrdRegTSTimePriority=" << getTrdRegTSTimePriority () << "],"
                << "[OrdStatus=" << getOrdStatus () << "],"
                << "[ExecType=" << getExecType () << "],"
                << "[ExecRestatementReason=" << getExecRestatementReason () << "],"
                << "[CrossedIndicator=" << getCrossedIndicator () << "],"
                << "[ProductComplex=" << getProductComplex () << "],"
                << "[Triggered=" << getTriggered () << "],"
                << "[TransactionDelayIndicator=" << getTransactionDelayIndicator () << "]";
            return sss.str();
        }
};

const uint64_t eurexNewOrderResponsePacket::ORDER_ID_MIN = 0UL;
const uint64_t eurexNewOrderResponsePacket::ORDER_ID_MAX = 18446744073709551614UL;
const uint64_t eurexNewOrderResponsePacket::ORDER_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexNewOrderResponsePacket::CL_ORD_ID_MIN = 0UL;
const uint64_t eurexNewOrderResponsePacket::CL_ORD_ID_MAX = 18446744073709551614UL;
const uint64_t eurexNewOrderResponsePacket::CL_ORD_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int64_t eurexNewOrderResponsePacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t eurexNewOrderResponsePacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t eurexNewOrderResponsePacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const uint64_t eurexNewOrderResponsePacket::EXEC_ID_MIN = 0UL;
const uint64_t eurexNewOrderResponsePacket::EXEC_ID_MAX = 18446744073709551614UL;
const uint64_t eurexNewOrderResponsePacket::EXEC_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexNewOrderResponsePacket::TRD_REG_TSENTRY_TIME_MIN = 0UL;
const uint64_t eurexNewOrderResponsePacket::TRD_REG_TSENTRY_TIME_MAX = 18446744073709551614UL;
const uint64_t eurexNewOrderResponsePacket::TRD_REG_TSENTRY_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexNewOrderResponsePacket::TRD_REG_TSTIME_PRIORITY_MIN = 0UL;
const uint64_t eurexNewOrderResponsePacket::TRD_REG_TSTIME_PRIORITY_MAX = 18446744073709551614UL;
const uint64_t eurexNewOrderResponsePacket::TRD_REG_TSTIME_PRIORITY_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const char eurexNewOrderResponsePacket::ORD_STATUS_NO_VALUE[1] = {0x00};
const size_t eurexNewOrderResponsePacket::ORD_STATUS_MAX_LENGTH = 1;
const char eurexNewOrderResponsePacket::EXEC_TYPE_NO_VALUE[1] = {0x00};
const size_t eurexNewOrderResponsePacket::EXEC_TYPE_MAX_LENGTH = 1;
const int16_t eurexNewOrderResponsePacket::EXEC_RESTATEMENT_REASON_MIN = 0;
const int16_t eurexNewOrderResponsePacket::EXEC_RESTATEMENT_REASON_MAX = 344;
const int16_t eurexNewOrderResponsePacket::EXEC_RESTATEMENT_REASON_NO_VALUE = 0xFFFF;
const int8_t eurexNewOrderResponsePacket::CROSSED_INDICATOR_MIN = 0;
const int8_t eurexNewOrderResponsePacket::CROSSED_INDICATOR_MAX = 1;
const int8_t eurexNewOrderResponsePacket::CROSSED_INDICATOR_NO_VALUE = 0xFF;
const int8_t eurexNewOrderResponsePacket::PRODUCT_COMPLEX_MIN = 1;
const int8_t eurexNewOrderResponsePacket::PRODUCT_COMPLEX_MAX = 10;
const int8_t eurexNewOrderResponsePacket::PRODUCT_COMPLEX_NO_VALUE = 0xFF;
const int8_t eurexNewOrderResponsePacket::TRIGGERED_MIN = 0;
const int8_t eurexNewOrderResponsePacket::TRIGGERED_MAX = 2;
const int8_t eurexNewOrderResponsePacket::TRIGGERED_NO_VALUE = 0xFF;
const int8_t eurexNewOrderResponsePacket::TRANSACTION_DELAY_INDICATOR_MIN = 0;
const int8_t eurexNewOrderResponsePacket::TRANSACTION_DELAY_INDICATOR_MAX = 1;
const int8_t eurexNewOrderResponsePacket::TRANSACTION_DELAY_INDICATOR_NO_VALUE = 0xFF;


} // namespace neueda

#endif // EUREX_NEWORDERRESPONSE_PACKET_H
