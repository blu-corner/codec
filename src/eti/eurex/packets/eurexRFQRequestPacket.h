/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_RFQREQUEST_PACKET_H
#define EUREX_RFQREQUEST_PACKET_H

#include <string>
#include <vector>
#include <sstream>
#include <cstddef>
#include <stdint.h>
#include "eurexPackets.h"
#include "EtiPacketUtils.h"

namespace neueda
{

using namespace std;

class eurexRFQRequestPacket
{
    public:
        // no value constants
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const double ORDER_QTY_MIN;
        static const double ORDER_QTY_MAX;
        static const int64_t ORDER_QTY_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const char COMPLIANCE_TEXT_NO_VALUE[20];
        static const size_t COMPLIANCE_TEXT_MAX_LENGTH;
        static const char PAD7_NO_VALUE[7];
        static const size_t PAD7_MAX_LENGTH;

        // fields (use with care)
        eurexMessageHeaderInCompPacket mMessageHeaderIn;
        eurexRequestHeaderCompPacket mRequestHeader;
        int64_t mSecurityID;
        int64_t mOrderQty;
        int32_t mMarketSegmentID;
        int8_t mSide;
        char mComplianceText[20];
        char mPad7[7];

        // constructor
        eurexRFQRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10401;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mOrderQty = ORDER_QTY_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            memcpy(mComplianceText, COMPLIANCE_TEXT_NO_VALUE, sizeof (mComplianceText));
            memcpy(mPad7, PAD7_NO_VALUE, sizeof (mPad7));
        }

        // getters & setters
        const eurexMessageHeaderInCompPacket& getMessageHeaderIn () const
        {
            return mMessageHeaderIn;
        }

        bool setMessageHeaderIn (const eurexMessageHeaderInCompPacket& v)
        {
            mMessageHeaderIn = v;
            return true;
        }

        const eurexRequestHeaderCompPacket& getRequestHeader () const
        {
            return mRequestHeader;
        }

        bool setRequestHeader (const eurexRequestHeaderCompPacket& v)
        {
            mRequestHeader = v;
            return true;
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

        string getComplianceText () const
        {
            return string (mComplianceText, COMPLIANCE_TEXT_MAX_LENGTH);
        }

        bool setComplianceText (const string& v)
        {
            memset (mComplianceText, '\0', sizeof (mComplianceText));
            size_t size = min ((size_t) v.size (), (size_t) COMPLIANCE_TEXT_MAX_LENGTH);
            strncpy (mComplianceText, v.c_str (), size);
            return (v.size () <= COMPLIANCE_TEXT_MAX_LENGTH);
        }

        bool isComplianceTextValid () const
        {
            return (memcmp (mComplianceText, COMPLIANCE_TEXT_NO_VALUE, sizeof (mComplianceText)) != 0);
        }

        void resetComplianceText ()
        {
            memcpy (mComplianceText, COMPLIANCE_TEXT_NO_VALUE, sizeof (mComplianceText));
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
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mSecurityID)
                + sizeof (mOrderQty)
                + sizeof (mMarketSegmentID)
                + sizeof (mSide)
                + sizeof (mComplianceText)
                + sizeof (mPad7);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mMessageHeaderIn.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderIn.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrderQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mComplianceText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = mMessageHeaderIn.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrderQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mComplianceText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "RFQRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[OrderQty=" << getOrderQty () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[Side=" << getSide () << "],"
                << "[ComplianceText=" << getComplianceText () << "],"
                << "[Pad7=" << getPad7 () << "]";
            return sss.str();
        }
};

const int64_t eurexRFQRequestPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t eurexRFQRequestPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t eurexRFQRequestPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double eurexRFQRequestPacket::ORDER_QTY_MIN = -922337203685477.5807;
const double eurexRFQRequestPacket::ORDER_QTY_MAX = 922337203685477.5807;
const int64_t eurexRFQRequestPacket::ORDER_QTY_NO_VALUE = 0x8000000000000000;
const int32_t eurexRFQRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexRFQRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexRFQRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int8_t eurexRFQRequestPacket::SIDE_MIN = 1;
const int8_t eurexRFQRequestPacket::SIDE_MAX = 2;
const int8_t eurexRFQRequestPacket::SIDE_NO_VALUE = 0xFF;
const char eurexRFQRequestPacket::COMPLIANCE_TEXT_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexRFQRequestPacket::COMPLIANCE_TEXT_MAX_LENGTH = 20;
const char eurexRFQRequestPacket::PAD7_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexRFQRequestPacket::PAD7_MAX_LENGTH = 7;


} // namespace neueda

#endif // EUREX_RFQREQUEST_PACKET_H
