/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/04/2019
 */
#ifndef XETRA_NEWORDERNRRESPONSE_PACKET_H
#define XETRA_NEWORDERNRRESPONSE_PACKET_H

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

class xetraNewOrderNRResponsePacket
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
        static const char PAD6_NO_VALUE[6];
        static const size_t PAD6_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraNRResponseHeaderMECompPacket mNRResponseHeaderME;
        uint64_t mOrderID;
        uint64_t mClOrdID;
        int64_t mSecurityID;
        uint64_t mExecID;
        uint32_t mOrderIDSfx;
        char mOrdStatus[1];
        char mExecType[1];
        int16_t mExecRestatementReason;
        int8_t mCrossedIndicator;
        int8_t mTriggered;
        char mPad6[6];

        // constructor
        xetraNewOrderNRResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10102;
            mOrderID = ORDER_ID_NO_VALUE;
            mClOrdID = CL_ORD_ID_NO_VALUE;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mExecID = EXEC_ID_NO_VALUE;
            mOrderIDSfx = ORDER_IDSFX_NO_VALUE;
            memcpy(mOrdStatus, ORD_STATUS_NO_VALUE, sizeof (mOrdStatus));
            memcpy(mExecType, EXEC_TYPE_NO_VALUE, sizeof (mExecType));
            mExecRestatementReason = EXEC_RESTATEMENT_REASON_NO_VALUE;
            mCrossedIndicator = CROSSED_INDICATOR_NO_VALUE;
            mTriggered = TRIGGERED_NO_VALUE;
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

        const xetraNRResponseHeaderMECompPacket& getNRResponseHeaderME () const
        {
            return mNRResponseHeaderME;
        }

        bool setNRResponseHeaderME (const xetraNRResponseHeaderMECompPacket& v)
        {
            mNRResponseHeaderME = v;
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

        string getPad6 () const
        {
            return string (mPad6, PAD6_MAX_LENGTH);
        }

        bool setPad6 (const string& v)
        {
            memset (mPad6, '\0', sizeof (mPad6));
            size_t size = min ((size_t) v.size (), (size_t) PAD6_MAX_LENGTH);
            strncpy (mPad6, v.c_str (), size);
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
                + mNRResponseHeaderME.getRawSize()
                + sizeof (mOrderID)
                + sizeof (mClOrdID)
                + sizeof (mSecurityID)
                + sizeof (mExecID)
                + sizeof (mOrderIDSfx)
                + sizeof (mOrdStatus)
                + sizeof (mExecType)
                + sizeof (mExecRestatementReason)
                + sizeof (mCrossedIndicator)
                + sizeof (mTriggered)
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
            state = mNRResponseHeaderME.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOrderIDSfx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOrdStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mExecType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mExecRestatementReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mCrossedIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTriggered, buf, len, used);
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
            state = mNRResponseHeaderME.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOrderIDSfx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOrdStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mExecType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mExecRestatementReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mCrossedIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTriggered, buf, len, used);
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
            sss << "NewOrderNRResponse::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[NRResponseHeaderME=" << mNRResponseHeaderME.toString () << "],"
                << "[OrderID=" << getOrderID () << "],"
                << "[ClOrdID=" << getClOrdID () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[ExecID=" << getExecID () << "],"
                << "[OrderIDSfx=" << getOrderIDSfx () << "],"
                << "[OrdStatus=" << getOrdStatus () << "],"
                << "[ExecType=" << getExecType () << "],"
                << "[ExecRestatementReason=" << getExecRestatementReason () << "],"
                << "[CrossedIndicator=" << getCrossedIndicator () << "],"
                << "[Triggered=" << getTriggered () << "],"
                << "[Pad6=" << getPad6 () << "]";
            return sss.str();
        }
};

const uint64_t xetraNewOrderNRResponsePacket::ORDER_ID_MIN = 0UL;
const uint64_t xetraNewOrderNRResponsePacket::ORDER_ID_MAX = 18446744073709551614UL;
const uint64_t xetraNewOrderNRResponsePacket::ORDER_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraNewOrderNRResponsePacket::CL_ORD_ID_MIN = 0UL;
const uint64_t xetraNewOrderNRResponsePacket::CL_ORD_ID_MAX = 18446744073709551614UL;
const uint64_t xetraNewOrderNRResponsePacket::CL_ORD_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int64_t xetraNewOrderNRResponsePacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraNewOrderNRResponsePacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraNewOrderNRResponsePacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const uint64_t xetraNewOrderNRResponsePacket::EXEC_ID_MIN = 0UL;
const uint64_t xetraNewOrderNRResponsePacket::EXEC_ID_MAX = 18446744073709551614UL;
const uint64_t xetraNewOrderNRResponsePacket::EXEC_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint32_t xetraNewOrderNRResponsePacket::ORDER_IDSFX_MIN = 0;
const uint32_t xetraNewOrderNRResponsePacket::ORDER_IDSFX_MAX = 4294967294;
const uint32_t xetraNewOrderNRResponsePacket::ORDER_IDSFX_NO_VALUE = 0xFFFFFFFF;
const char xetraNewOrderNRResponsePacket::ORD_STATUS_NO_VALUE[1] = {0x00};
const size_t xetraNewOrderNRResponsePacket::ORD_STATUS_MAX_LENGTH = 1;
const char xetraNewOrderNRResponsePacket::EXEC_TYPE_NO_VALUE[1] = {0x00};
const size_t xetraNewOrderNRResponsePacket::EXEC_TYPE_MAX_LENGTH = 1;
const int16_t xetraNewOrderNRResponsePacket::EXEC_RESTATEMENT_REASON_MIN = 0;
const int16_t xetraNewOrderNRResponsePacket::EXEC_RESTATEMENT_REASON_MAX = 344;
const int16_t xetraNewOrderNRResponsePacket::EXEC_RESTATEMENT_REASON_NO_VALUE = 0xFFFF;
const int8_t xetraNewOrderNRResponsePacket::CROSSED_INDICATOR_MIN = 0;
const int8_t xetraNewOrderNRResponsePacket::CROSSED_INDICATOR_MAX = 1;
const int8_t xetraNewOrderNRResponsePacket::CROSSED_INDICATOR_NO_VALUE = 0xFF;
const int8_t xetraNewOrderNRResponsePacket::TRIGGERED_MIN = 0;
const int8_t xetraNewOrderNRResponsePacket::TRIGGERED_MAX = 2;
const int8_t xetraNewOrderNRResponsePacket::TRIGGERED_NO_VALUE = 0xFF;
const char xetraNewOrderNRResponsePacket::PAD6_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraNewOrderNRResponsePacket::PAD6_MAX_LENGTH = 6;


} // namespace neueda

#endif // XETRA_NEWORDERNRRESPONSE_PACKET_H
