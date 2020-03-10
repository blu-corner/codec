/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 08/03/2020
 */
#ifndef XETRA_MODIFYORDERRESPONSE_PACKET_H
#define XETRA_MODIFYORDERRESPONSE_PACKET_H

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

class xetraModifyOrderResponsePacket
{
    public:
        // no value constants
        static const uint64_t ORDER_ID_MIN;
        static const uint64_t ORDER_ID_MAX;
        static const uint64_t ORDER_ID_NO_VALUE;
        static const uint64_t CL_ORD_ID_MIN;
        static const uint64_t CL_ORD_ID_MAX;
        static const uint64_t CL_ORD_ID_NO_VALUE;
        static const uint64_t ORIG_CL_ORD_ID_MIN;
        static const uint64_t ORIG_CL_ORD_ID_MAX;
        static const uint64_t ORIG_CL_ORD_ID_NO_VALUE;
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const uint64_t EXEC_ID_MIN;
        static const uint64_t EXEC_ID_MAX;
        static const uint64_t EXEC_ID_NO_VALUE;
        static const double STOP_PX_MIN;
        static const double STOP_PX_MAX;
        static const int64_t STOP_PX_NO_VALUE;
        static const double LEAVES_QTY_MIN;
        static const double LEAVES_QTY_MAX;
        static const int64_t LEAVES_QTY_NO_VALUE;
        static const double CUM_QTY_MIN;
        static const double CUM_QTY_MAX;
        static const int64_t CUM_QTY_NO_VALUE;
        static const double CXL_QTY_MIN;
        static const double CXL_QTY_MAX;
        static const int64_t CXL_QTY_NO_VALUE;
        static const double DISPLAY_QTY_MIN;
        static const double DISPLAY_QTY_MAX;
        static const int64_t DISPLAY_QTY_NO_VALUE;
        static const uint64_t TRD_REG_TSTIME_PRIORITY_MIN;
        static const uint64_t TRD_REG_TSTIME_PRIORITY_MAX;
        static const uint64_t TRD_REG_TSTIME_PRIORITY_NO_VALUE;
        static const uint32_t ORDER_IDSFX_MIN;
        static const uint32_t ORDER_IDSFX_MAX;
        static const uint32_t ORDER_IDSFX_NO_VALUE;
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
        static const int8_t TRIGGERED_MIN;
        static const int8_t TRIGGERED_MAX;
        static const int8_t TRIGGERED_NO_VALUE;
        static const int8_t TRANSACTION_DELAY_INDICATOR_MIN;
        static const int8_t TRANSACTION_DELAY_INDICATOR_MAX;
        static const int8_t TRANSACTION_DELAY_INDICATOR_NO_VALUE;
        static const char PAD5_NO_VALUE[5];
        static const size_t PAD5_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraResponseHeaderMECompPacket mResponseHeaderME;
        uint64_t mOrderID;
        uint64_t mClOrdID;
        uint64_t mOrigClOrdID;
        int64_t mSecurityID;
        uint64_t mExecID;
        int64_t mStopPx;
        int64_t mLeavesQty;
        int64_t mCumQty;
        int64_t mCxlQty;
        int64_t mDisplayQty;
        uint64_t mTrdRegTSTimePriority;
        uint32_t mOrderIDSfx;
        char mOrdStatus[1];
        char mExecType[1];
        int16_t mExecRestatementReason;
        int8_t mCrossedIndicator;
        int8_t mTriggered;
        int8_t mTransactionDelayIndicator;
        char mPad5[5];

        // constructor
        xetraModifyOrderResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10107;
            mOrderID = ORDER_ID_NO_VALUE;
            mClOrdID = CL_ORD_ID_NO_VALUE;
            mOrigClOrdID = ORIG_CL_ORD_ID_NO_VALUE;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mExecID = EXEC_ID_NO_VALUE;
            mStopPx = STOP_PX_NO_VALUE;
            mLeavesQty = LEAVES_QTY_NO_VALUE;
            mCumQty = CUM_QTY_NO_VALUE;
            mCxlQty = CXL_QTY_NO_VALUE;
            mDisplayQty = DISPLAY_QTY_NO_VALUE;
            mTrdRegTSTimePriority = TRD_REG_TSTIME_PRIORITY_NO_VALUE;
            mOrderIDSfx = ORDER_IDSFX_NO_VALUE;
            memcpy(mOrdStatus, ORD_STATUS_NO_VALUE, sizeof (mOrdStatus));
            memcpy(mExecType, EXEC_TYPE_NO_VALUE, sizeof (mExecType));
            mExecRestatementReason = EXEC_RESTATEMENT_REASON_NO_VALUE;
            mCrossedIndicator = CROSSED_INDICATOR_NO_VALUE;
            mTriggered = TRIGGERED_NO_VALUE;
            mTransactionDelayIndicator = TRANSACTION_DELAY_INDICATOR_NO_VALUE;
            memcpy(mPad5, PAD5_NO_VALUE, sizeof (mPad5));
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

        const xetraResponseHeaderMECompPacket& getResponseHeaderME () const
        {
            return mResponseHeaderME;
        }

        bool setResponseHeaderME (const xetraResponseHeaderMECompPacket& v)
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

        uint64_t getOrigClOrdID () const
        {
            return mOrigClOrdID;
        }

        bool setOrigClOrdID (uint64_t v)
        {
            mOrigClOrdID = v;
            return ((ORIG_CL_ORD_ID_MIN <= mOrigClOrdID && mOrigClOrdID <= ORIG_CL_ORD_ID_MAX) || mOrigClOrdID == ORIG_CL_ORD_ID_NO_VALUE);
        }

        bool isOrigClOrdIDValid () const
        {
            return (mOrigClOrdID != ORIG_CL_ORD_ID_NO_VALUE);
        }

        void resetOrigClOrdID ()
        {
            mOrigClOrdID = ORIG_CL_ORD_ID_NO_VALUE;
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

        double getStopPx () const
        {
            return mStopPx / 100000000.0;
        }

        bool setStopPx (double v)
        {
            mStopPx = v * 100000000.0;
            return ((STOP_PX_MIN <= v && v <= STOP_PX_MAX) || mStopPx == STOP_PX_NO_VALUE);
        }

        bool isStopPxValid () const
        {
            return (mStopPx != STOP_PX_NO_VALUE);
        }

        void resetStopPx ()
        {
            mStopPx = STOP_PX_NO_VALUE;
        }

        double getLeavesQty () const
        {
            return mLeavesQty / 10000.0;
        }

        bool setLeavesQty (double v)
        {
            mLeavesQty = v * 10000.0;
            return ((LEAVES_QTY_MIN <= v && v <= LEAVES_QTY_MAX) || mLeavesQty == LEAVES_QTY_NO_VALUE);
        }

        bool isLeavesQtyValid () const
        {
            return (mLeavesQty != LEAVES_QTY_NO_VALUE);
        }

        void resetLeavesQty ()
        {
            mLeavesQty = LEAVES_QTY_NO_VALUE;
        }

        double getCumQty () const
        {
            return mCumQty / 10000.0;
        }

        bool setCumQty (double v)
        {
            mCumQty = v * 10000.0;
            return ((CUM_QTY_MIN <= v && v <= CUM_QTY_MAX) || mCumQty == CUM_QTY_NO_VALUE);
        }

        bool isCumQtyValid () const
        {
            return (mCumQty != CUM_QTY_NO_VALUE);
        }

        void resetCumQty ()
        {
            mCumQty = CUM_QTY_NO_VALUE;
        }

        double getCxlQty () const
        {
            return mCxlQty / 10000.0;
        }

        bool setCxlQty (double v)
        {
            mCxlQty = v * 10000.0;
            return ((CXL_QTY_MIN <= v && v <= CXL_QTY_MAX) || mCxlQty == CXL_QTY_NO_VALUE);
        }

        bool isCxlQtyValid () const
        {
            return (mCxlQty != CXL_QTY_NO_VALUE);
        }

        void resetCxlQty ()
        {
            mCxlQty = CXL_QTY_NO_VALUE;
        }

        double getDisplayQty () const
        {
            return mDisplayQty / 10000.0;
        }

        bool setDisplayQty (double v)
        {
            mDisplayQty = v * 10000.0;
            return ((DISPLAY_QTY_MIN <= v && v <= DISPLAY_QTY_MAX) || mDisplayQty == DISPLAY_QTY_NO_VALUE);
        }

        bool isDisplayQtyValid () const
        {
            return (mDisplayQty != DISPLAY_QTY_NO_VALUE);
        }

        void resetDisplayQty ()
        {
            mDisplayQty = DISPLAY_QTY_NO_VALUE;
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

        uint32_t getOrderIDSfx () const
        {
            return mOrderIDSfx;
        }

        bool setOrderIDSfx (uint32_t v)
        {
            mOrderIDSfx = v;
            return ((ORDER_IDSFX_MIN <= mOrderIDSfx && mOrderIDSfx <= ORDER_IDSFX_MAX) || mOrderIDSfx == ORDER_IDSFX_NO_VALUE);
        }

        bool isOrderIDSfxValid () const
        {
            return (mOrderIDSfx != ORDER_IDSFX_NO_VALUE);
        }

        void resetOrderIDSfx ()
        {
            mOrderIDSfx = ORDER_IDSFX_NO_VALUE;
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

        string getPad5 () const
        {
            return string (mPad5, PAD5_MAX_LENGTH);
        }

        bool setPad5 (const string& v)
        {
            memset (mPad5, '\0', sizeof (mPad5));
            size_t size = min ((size_t) v.size (), (size_t) PAD5_MAX_LENGTH);
            strncpy (mPad5, v.c_str (), size);
            return (v.size () <= PAD5_MAX_LENGTH);
        }

        bool isPad5Valid () const
        {
            return (memcmp (mPad5, PAD5_NO_VALUE, sizeof (mPad5)) != 0);
        }

        void resetPad5 ()
        {
            memcpy (mPad5, PAD5_NO_VALUE, sizeof (mPad5));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mResponseHeaderME.getRawSize()
                + sizeof (mOrderID)
                + sizeof (mClOrdID)
                + sizeof (mOrigClOrdID)
                + sizeof (mSecurityID)
                + sizeof (mExecID)
                + sizeof (mStopPx)
                + sizeof (mLeavesQty)
                + sizeof (mCumQty)
                + sizeof (mCxlQty)
                + sizeof (mDisplayQty)
                + sizeof (mTrdRegTSTimePriority)
                + sizeof (mOrderIDSfx)
                + sizeof (mOrdStatus)
                + sizeof (mExecType)
                + sizeof (mExecRestatementReason)
                + sizeof (mCrossedIndicator)
                + sizeof (mTriggered)
                + sizeof (mTransactionDelayIndicator)
                + sizeof (mPad5);
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
            state = eti::serialize (mOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrigClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mStopPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mLeavesQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mCumQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mCxlQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mDisplayQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTrdRegTSTimePriority, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrderIDSfx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrdStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecRestatementReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mCrossedIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTriggered, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTransactionDelayIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad5, buf, len, used);
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
            state = eti::deserialize (mOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrigClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mStopPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mLeavesQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mCumQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mCxlQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mDisplayQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTrdRegTSTimePriority, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrderIDSfx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrdStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecRestatementReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mCrossedIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTriggered, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTransactionDelayIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad5, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "ModifyOrderResponse::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[ResponseHeaderME=" << mResponseHeaderME.toString () << "],"
                << "[OrderID=" << getOrderID () << "],"
                << "[ClOrdID=" << getClOrdID () << "],"
                << "[OrigClOrdID=" << getOrigClOrdID () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[ExecID=" << getExecID () << "],"
                << "[StopPx=" << getStopPx () << "],"
                << "[LeavesQty=" << getLeavesQty () << "],"
                << "[CumQty=" << getCumQty () << "],"
                << "[CxlQty=" << getCxlQty () << "],"
                << "[DisplayQty=" << getDisplayQty () << "],"
                << "[TrdRegTSTimePriority=" << getTrdRegTSTimePriority () << "],"
                << "[OrderIDSfx=" << getOrderIDSfx () << "],"
                << "[OrdStatus=" << getOrdStatus () << "],"
                << "[ExecType=" << getExecType () << "],"
                << "[ExecRestatementReason=" << getExecRestatementReason () << "],"
                << "[CrossedIndicator=" << getCrossedIndicator () << "],"
                << "[Triggered=" << getTriggered () << "],"
                << "[TransactionDelayIndicator=" << getTransactionDelayIndicator () << "],"
                << "[Pad5=" << getPad5 () << "]";
            return sss.str();
        }
};

const uint64_t xetraModifyOrderResponsePacket::ORDER_ID_MIN = 0UL;
const uint64_t xetraModifyOrderResponsePacket::ORDER_ID_MAX = 18446744073709551614UL;
const uint64_t xetraModifyOrderResponsePacket::ORDER_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraModifyOrderResponsePacket::CL_ORD_ID_MIN = 0UL;
const uint64_t xetraModifyOrderResponsePacket::CL_ORD_ID_MAX = 18446744073709551614UL;
const uint64_t xetraModifyOrderResponsePacket::CL_ORD_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraModifyOrderResponsePacket::ORIG_CL_ORD_ID_MIN = 0UL;
const uint64_t xetraModifyOrderResponsePacket::ORIG_CL_ORD_ID_MAX = 18446744073709551614UL;
const uint64_t xetraModifyOrderResponsePacket::ORIG_CL_ORD_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int64_t xetraModifyOrderResponsePacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraModifyOrderResponsePacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraModifyOrderResponsePacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const uint64_t xetraModifyOrderResponsePacket::EXEC_ID_MIN = 0UL;
const uint64_t xetraModifyOrderResponsePacket::EXEC_ID_MAX = 18446744073709551614UL;
const uint64_t xetraModifyOrderResponsePacket::EXEC_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const double xetraModifyOrderResponsePacket::STOP_PX_MIN = -92233720368.54775807;
const double xetraModifyOrderResponsePacket::STOP_PX_MAX = 92233720368.54775807;
const int64_t xetraModifyOrderResponsePacket::STOP_PX_NO_VALUE = 0x8000000000000000;
const double xetraModifyOrderResponsePacket::LEAVES_QTY_MIN = -922337203685477.5807;
const double xetraModifyOrderResponsePacket::LEAVES_QTY_MAX = 922337203685477.5807;
const int64_t xetraModifyOrderResponsePacket::LEAVES_QTY_NO_VALUE = 0x8000000000000000;
const double xetraModifyOrderResponsePacket::CUM_QTY_MIN = -922337203685477.5807;
const double xetraModifyOrderResponsePacket::CUM_QTY_MAX = 922337203685477.5807;
const int64_t xetraModifyOrderResponsePacket::CUM_QTY_NO_VALUE = 0x8000000000000000;
const double xetraModifyOrderResponsePacket::CXL_QTY_MIN = -922337203685477.5807;
const double xetraModifyOrderResponsePacket::CXL_QTY_MAX = 922337203685477.5807;
const int64_t xetraModifyOrderResponsePacket::CXL_QTY_NO_VALUE = 0x8000000000000000;
const double xetraModifyOrderResponsePacket::DISPLAY_QTY_MIN = -922337203685477.5807;
const double xetraModifyOrderResponsePacket::DISPLAY_QTY_MAX = 922337203685477.5807;
const int64_t xetraModifyOrderResponsePacket::DISPLAY_QTY_NO_VALUE = 0x8000000000000000;
const uint64_t xetraModifyOrderResponsePacket::TRD_REG_TSTIME_PRIORITY_MIN = 0UL;
const uint64_t xetraModifyOrderResponsePacket::TRD_REG_TSTIME_PRIORITY_MAX = 18446744073709551614UL;
const uint64_t xetraModifyOrderResponsePacket::TRD_REG_TSTIME_PRIORITY_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint32_t xetraModifyOrderResponsePacket::ORDER_IDSFX_MIN = 0;
const uint32_t xetraModifyOrderResponsePacket::ORDER_IDSFX_MAX = 4294967294;
const uint32_t xetraModifyOrderResponsePacket::ORDER_IDSFX_NO_VALUE = 0xFFFFFFFF;
const char xetraModifyOrderResponsePacket::ORD_STATUS_NO_VALUE[1] = {0x00};
const size_t xetraModifyOrderResponsePacket::ORD_STATUS_MAX_LENGTH = 1;
const char xetraModifyOrderResponsePacket::EXEC_TYPE_NO_VALUE[1] = {0x00};
const size_t xetraModifyOrderResponsePacket::EXEC_TYPE_MAX_LENGTH = 1;
const int16_t xetraModifyOrderResponsePacket::EXEC_RESTATEMENT_REASON_MIN = 0;
const int16_t xetraModifyOrderResponsePacket::EXEC_RESTATEMENT_REASON_MAX = 344;
const int16_t xetraModifyOrderResponsePacket::EXEC_RESTATEMENT_REASON_NO_VALUE = 0xFFFF;
const int8_t xetraModifyOrderResponsePacket::CROSSED_INDICATOR_MIN = 0;
const int8_t xetraModifyOrderResponsePacket::CROSSED_INDICATOR_MAX = 1;
const int8_t xetraModifyOrderResponsePacket::CROSSED_INDICATOR_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderResponsePacket::TRIGGERED_MIN = 0;
const int8_t xetraModifyOrderResponsePacket::TRIGGERED_MAX = 2;
const int8_t xetraModifyOrderResponsePacket::TRIGGERED_NO_VALUE = 0xFF;
const int8_t xetraModifyOrderResponsePacket::TRANSACTION_DELAY_INDICATOR_MIN = 0;
const int8_t xetraModifyOrderResponsePacket::TRANSACTION_DELAY_INDICATOR_MAX = 1;
const int8_t xetraModifyOrderResponsePacket::TRANSACTION_DELAY_INDICATOR_NO_VALUE = 0xFF;
const char xetraModifyOrderResponsePacket::PAD5_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraModifyOrderResponsePacket::PAD5_MAX_LENGTH = 5;


} // namespace neueda

#endif // XETRA_MODIFYORDERRESPONSE_PACKET_H
