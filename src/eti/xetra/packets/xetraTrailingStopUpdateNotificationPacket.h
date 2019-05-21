/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef XETRA_TRAILINGSTOPUPDATENOTIFICATION_PACKET_H
#define XETRA_TRAILINGSTOPUPDATENOTIFICATION_PACKET_H

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

class xetraTrailingStopUpdateNotificationPacket
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
        static const double ORDER_QTY_MIN;
        static const double ORDER_QTY_MAX;
        static const int64_t ORDER_QTY_NO_VALUE;
        static const uint32_t ORDER_IDSFX_MIN;
        static const uint32_t ORDER_IDSFX_MAX;
        static const uint32_t ORDER_IDSFX_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int16_t EXEC_RESTATEMENT_REASON_MIN;
        static const int16_t EXEC_RESTATEMENT_REASON_MAX;
        static const int16_t EXEC_RESTATEMENT_REASON_NO_VALUE;
        static const char ORD_STATUS_NO_VALUE[1];
        static const size_t ORD_STATUS_MAX_LENGTH;
        static const char EXEC_TYPE_NO_VALUE[1];
        static const size_t EXEC_TYPE_MAX_LENGTH;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const char FIXCL_ORD_ID_NO_VALUE[20];
        static const size_t FIXCL_ORD_ID_MAX_LENGTH;
        static const char PAD7_NO_VALUE[7];
        static const size_t PAD7_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraRBCHeaderMECompPacket mRBCHeaderME;
        uint64_t mOrderID;
        uint64_t mClOrdID;
        uint64_t mOrigClOrdID;
        int64_t mSecurityID;
        uint64_t mExecID;
        int64_t mStopPx;
        int64_t mOrderQty;
        uint32_t mOrderIDSfx;
        int32_t mMarketSegmentID;
        int16_t mExecRestatementReason;
        char mOrdStatus[1];
        char mExecType[1];
        int8_t mSide;
        char mFIXClOrdID[20];
        char mPad7[7];

        // constructor
        xetraTrailingStopUpdateNotificationPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10127;
            mOrderID = ORDER_ID_NO_VALUE;
            mClOrdID = CL_ORD_ID_NO_VALUE;
            mOrigClOrdID = ORIG_CL_ORD_ID_NO_VALUE;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mExecID = EXEC_ID_NO_VALUE;
            mStopPx = STOP_PX_NO_VALUE;
            mOrderQty = ORDER_QTY_NO_VALUE;
            mOrderIDSfx = ORDER_IDSFX_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mExecRestatementReason = EXEC_RESTATEMENT_REASON_NO_VALUE;
            memcpy(mOrdStatus, ORD_STATUS_NO_VALUE, sizeof (mOrdStatus));
            memcpy(mExecType, EXEC_TYPE_NO_VALUE, sizeof (mExecType));
            mSide = SIDE_NO_VALUE;
            memcpy(mFIXClOrdID, FIXCL_ORD_ID_NO_VALUE, sizeof (mFIXClOrdID));
            memcpy(mPad7, PAD7_NO_VALUE, sizeof (mPad7));
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

        const xetraRBCHeaderMECompPacket& getRBCHeaderME () const
        {
            return mRBCHeaderME;
        }

        bool setRBCHeaderME (const xetraRBCHeaderMECompPacket& v)
        {
            mRBCHeaderME = v;
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

        double getOrderQty () const
        {
            return mOrderQty / 10000.0;
        }

        bool setOrderQty (double v)
        {
            mOrderQty = v * 10000.0;
            return ((ORDER_QTY_MIN <= v && v <= ORDER_QTY_MAX) || mOrderQty == ORDER_QTY_NO_VALUE);
        }

        bool isOrderQtyValid () const
        {
            return (mOrderQty != ORDER_QTY_NO_VALUE);
        }

        void resetOrderQty ()
        {
            mOrderQty = ORDER_QTY_NO_VALUE;
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

        int32_t getMarketSegmentID () const
        {
            return mMarketSegmentID;
        }

        bool setMarketSegmentID (int32_t v)
        {
            mMarketSegmentID = v;
            return ((MARKET_SEGMENT_ID_MIN <= mMarketSegmentID && mMarketSegmentID <= MARKET_SEGMENT_ID_MAX) || mMarketSegmentID == MARKET_SEGMENT_ID_NO_VALUE);
        }

        bool isMarketSegmentIDValid () const
        {
            return (mMarketSegmentID != MARKET_SEGMENT_ID_NO_VALUE);
        }

        void resetMarketSegmentID ()
        {
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
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

        int8_t getSide () const
        {
            return mSide;
        }

        bool setSide (int8_t v)
        {
            mSide = v;
            return ((SIDE_MIN <= mSide && mSide <= SIDE_MAX) || mSide == SIDE_NO_VALUE);
        }

        bool isSideValid () const
        {
            return (mSide != SIDE_NO_VALUE);
        }

        void resetSide ()
        {
            mSide = SIDE_NO_VALUE;
        }

        string getFIXClOrdID () const
        {
            return string (mFIXClOrdID, FIXCL_ORD_ID_MAX_LENGTH);
        }

        bool setFIXClOrdID (const string& v)
        {
            memset (mFIXClOrdID, '\0', sizeof (mFIXClOrdID));
            size_t size = min ((size_t) v.size (), (size_t) FIXCL_ORD_ID_MAX_LENGTH);
            strncpy (mFIXClOrdID, v.c_str (), size);
            return (v.size () <= FIXCL_ORD_ID_MAX_LENGTH);
        }

        bool isFIXClOrdIDValid () const
        {
            return (memcmp (mFIXClOrdID, FIXCL_ORD_ID_NO_VALUE, sizeof (mFIXClOrdID)) != 0);
        }

        void resetFIXClOrdID ()
        {
            memcpy (mFIXClOrdID, FIXCL_ORD_ID_NO_VALUE, sizeof (mFIXClOrdID));
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
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeaderME.getRawSize()
                + sizeof (mOrderID)
                + sizeof (mClOrdID)
                + sizeof (mOrigClOrdID)
                + sizeof (mSecurityID)
                + sizeof (mExecID)
                + sizeof (mStopPx)
                + sizeof (mOrderQty)
                + sizeof (mOrderIDSfx)
                + sizeof (mMarketSegmentID)
                + sizeof (mExecRestatementReason)
                + sizeof (mOrdStatus)
                + sizeof (mExecType)
                + sizeof (mSide)
                + sizeof (mFIXClOrdID)
                + sizeof (mPad7);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeaderME.serialize (buf, len, used);
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
            state = eti::serialize (mOrderQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrderIDSfx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecRestatementReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrdStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFIXClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = mMessageHeaderOut.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeaderME.deserialize (buf, len, used);
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
            state = eti::deserialize (mOrderQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrderIDSfx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecRestatementReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrdStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFIXClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "TrailingStopUpdateNotification::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeaderME=" << mRBCHeaderME.toString () << "],"
                << "[OrderID=" << getOrderID () << "],"
                << "[ClOrdID=" << getClOrdID () << "],"
                << "[OrigClOrdID=" << getOrigClOrdID () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[ExecID=" << getExecID () << "],"
                << "[StopPx=" << getStopPx () << "],"
                << "[OrderQty=" << getOrderQty () << "],"
                << "[OrderIDSfx=" << getOrderIDSfx () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[ExecRestatementReason=" << getExecRestatementReason () << "],"
                << "[OrdStatus=" << getOrdStatus () << "],"
                << "[ExecType=" << getExecType () << "],"
                << "[Side=" << getSide () << "],"
                << "[FIXClOrdID=" << getFIXClOrdID () << "],"
                << "[Pad7=" << getPad7 () << "]";
            return sss.str();
        }
};

const uint64_t xetraTrailingStopUpdateNotificationPacket::ORDER_ID_MIN = 0UL;
const uint64_t xetraTrailingStopUpdateNotificationPacket::ORDER_ID_MAX = 18446744073709551614UL;
const uint64_t xetraTrailingStopUpdateNotificationPacket::ORDER_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraTrailingStopUpdateNotificationPacket::CL_ORD_ID_MIN = 0UL;
const uint64_t xetraTrailingStopUpdateNotificationPacket::CL_ORD_ID_MAX = 18446744073709551614UL;
const uint64_t xetraTrailingStopUpdateNotificationPacket::CL_ORD_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraTrailingStopUpdateNotificationPacket::ORIG_CL_ORD_ID_MIN = 0UL;
const uint64_t xetraTrailingStopUpdateNotificationPacket::ORIG_CL_ORD_ID_MAX = 18446744073709551614UL;
const uint64_t xetraTrailingStopUpdateNotificationPacket::ORIG_CL_ORD_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int64_t xetraTrailingStopUpdateNotificationPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraTrailingStopUpdateNotificationPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraTrailingStopUpdateNotificationPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const uint64_t xetraTrailingStopUpdateNotificationPacket::EXEC_ID_MIN = 0UL;
const uint64_t xetraTrailingStopUpdateNotificationPacket::EXEC_ID_MAX = 18446744073709551614UL;
const uint64_t xetraTrailingStopUpdateNotificationPacket::EXEC_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const double xetraTrailingStopUpdateNotificationPacket::STOP_PX_MIN = -92233720368.54775807;
const double xetraTrailingStopUpdateNotificationPacket::STOP_PX_MAX = 92233720368.54775807;
const int64_t xetraTrailingStopUpdateNotificationPacket::STOP_PX_NO_VALUE = 0x8000000000000000;
const double xetraTrailingStopUpdateNotificationPacket::ORDER_QTY_MIN = -922337203685477.5807;
const double xetraTrailingStopUpdateNotificationPacket::ORDER_QTY_MAX = 922337203685477.5807;
const int64_t xetraTrailingStopUpdateNotificationPacket::ORDER_QTY_NO_VALUE = 0x8000000000000000;
const uint32_t xetraTrailingStopUpdateNotificationPacket::ORDER_IDSFX_MIN = 0;
const uint32_t xetraTrailingStopUpdateNotificationPacket::ORDER_IDSFX_MAX = 4294967294;
const uint32_t xetraTrailingStopUpdateNotificationPacket::ORDER_IDSFX_NO_VALUE = 0xFFFFFFFF;
const int32_t xetraTrailingStopUpdateNotificationPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraTrailingStopUpdateNotificationPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraTrailingStopUpdateNotificationPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int16_t xetraTrailingStopUpdateNotificationPacket::EXEC_RESTATEMENT_REASON_MIN = 0;
const int16_t xetraTrailingStopUpdateNotificationPacket::EXEC_RESTATEMENT_REASON_MAX = 344;
const int16_t xetraTrailingStopUpdateNotificationPacket::EXEC_RESTATEMENT_REASON_NO_VALUE = 0xFFFF;
const char xetraTrailingStopUpdateNotificationPacket::ORD_STATUS_NO_VALUE[1] = {0x00};
const size_t xetraTrailingStopUpdateNotificationPacket::ORD_STATUS_MAX_LENGTH = 1;
const char xetraTrailingStopUpdateNotificationPacket::EXEC_TYPE_NO_VALUE[1] = {0x00};
const size_t xetraTrailingStopUpdateNotificationPacket::EXEC_TYPE_MAX_LENGTH = 1;
const int8_t xetraTrailingStopUpdateNotificationPacket::SIDE_MIN = 1;
const int8_t xetraTrailingStopUpdateNotificationPacket::SIDE_MAX = 2;
const int8_t xetraTrailingStopUpdateNotificationPacket::SIDE_NO_VALUE = 0xFF;
const char xetraTrailingStopUpdateNotificationPacket::FIXCL_ORD_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTrailingStopUpdateNotificationPacket::FIXCL_ORD_ID_MAX_LENGTH = 20;
const char xetraTrailingStopUpdateNotificationPacket::PAD7_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTrailingStopUpdateNotificationPacket::PAD7_MAX_LENGTH = 7;


} // namespace neueda

#endif // XETRA_TRAILINGSTOPUPDATENOTIFICATION_PACKET_H
