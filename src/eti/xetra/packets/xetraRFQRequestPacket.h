/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef XETRA_RFQREQUEST_PACKET_H
#define XETRA_RFQREQUEST_PACKET_H

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

class xetraRFQRequestPacket
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
        static const int8_t RFQPUBLISH_INDICATOR_MIN;
        static const int8_t RFQPUBLISH_INDICATOR_MAX;
        static const int8_t RFQPUBLISH_INDICATOR_NO_VALUE;
        static const int8_t RFQREQUESTER_DISCLOSURE_INSTRUCTION_MIN;
        static const int8_t RFQREQUESTER_DISCLOSURE_INSTRUCTION_MAX;
        static const int8_t RFQREQUESTER_DISCLOSURE_INSTRUCTION_NO_VALUE;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const char PAD1_NO_VALUE[1];
        static const size_t PAD1_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderInCompPacket mMessageHeaderIn;
        xetraRequestHeaderCompPacket mRequestHeader;
        int64_t mSecurityID;
        int64_t mOrderQty;
        int32_t mMarketSegmentID;
        int8_t mRFQPublishIndicator;
        int8_t mRFQRequesterDisclosureInstruction;
        int8_t mSide;
        char mPad1[1];

        // constructor
        xetraRFQRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10401;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mOrderQty = ORDER_QTY_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mRFQPublishIndicator = RFQPUBLISH_INDICATOR_NO_VALUE;
            mRFQRequesterDisclosureInstruction = RFQREQUESTER_DISCLOSURE_INSTRUCTION_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            memcpy(mPad1, PAD1_NO_VALUE, sizeof (mPad1));
        }

        // getters & setters
        const xetraMessageHeaderInCompPacket& getMessageHeaderIn () const
        {
            return mMessageHeaderIn;
        }

        bool setMessageHeaderIn (const xetraMessageHeaderInCompPacket& v)
        {
            mMessageHeaderIn = v;
            return true;
        }

        const xetraRequestHeaderCompPacket& getRequestHeader () const
        {
            return mRequestHeader;
        }

        bool setRequestHeader (const xetraRequestHeaderCompPacket& v)
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

        int8_t getRFQPublishIndicator () const
        {
            return mRFQPublishIndicator;
        }

        bool setRFQPublishIndicator (int8_t v)
        {
            mRFQPublishIndicator = v;
            return ((RFQPUBLISH_INDICATOR_MIN <= mRFQPublishIndicator && mRFQPublishIndicator <= RFQPUBLISH_INDICATOR_MAX) || mRFQPublishIndicator == RFQPUBLISH_INDICATOR_NO_VALUE);
        }

        bool isRFQPublishIndicatorValid () const
        {
            return (mRFQPublishIndicator != RFQPUBLISH_INDICATOR_NO_VALUE);
        }

        void resetRFQPublishIndicator ()
        {
            mRFQPublishIndicator = RFQPUBLISH_INDICATOR_NO_VALUE;
        }

        int8_t getRFQRequesterDisclosureInstruction () const
        {
            return mRFQRequesterDisclosureInstruction;
        }

        bool setRFQRequesterDisclosureInstruction (int8_t v)
        {
            mRFQRequesterDisclosureInstruction = v;
            return ((RFQREQUESTER_DISCLOSURE_INSTRUCTION_MIN <= mRFQRequesterDisclosureInstruction && mRFQRequesterDisclosureInstruction <= RFQREQUESTER_DISCLOSURE_INSTRUCTION_MAX) || mRFQRequesterDisclosureInstruction == RFQREQUESTER_DISCLOSURE_INSTRUCTION_NO_VALUE);
        }

        bool isRFQRequesterDisclosureInstructionValid () const
        {
            return (mRFQRequesterDisclosureInstruction != RFQREQUESTER_DISCLOSURE_INSTRUCTION_NO_VALUE);
        }

        void resetRFQRequesterDisclosureInstruction ()
        {
            mRFQRequesterDisclosureInstruction = RFQREQUESTER_DISCLOSURE_INSTRUCTION_NO_VALUE;
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

        string getPad1 () const
        {
            return string (mPad1, PAD1_MAX_LENGTH);
        }

        bool setPad1 (const string& v)
        {
            memset (mPad1, '\0', sizeof (mPad1));
            size_t size = min ((size_t) v.size (), (size_t) PAD1_MAX_LENGTH);
            strncpy (mPad1, v.c_str (), size);
            return (v.size () <= PAD1_MAX_LENGTH);
        }

        bool isPad1Valid () const
        {
            return (memcmp (mPad1, PAD1_NO_VALUE, sizeof (mPad1)) != 0);
        }

        void resetPad1 ()
        {
            memcpy (mPad1, PAD1_NO_VALUE, sizeof (mPad1));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mSecurityID)
                + sizeof (mOrderQty)
                + sizeof (mMarketSegmentID)
                + sizeof (mRFQPublishIndicator)
                + sizeof (mRFQRequesterDisclosureInstruction)
                + sizeof (mSide)
                + sizeof (mPad1);
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
            state = eti::serialize (mRFQPublishIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRFQRequesterDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad1, buf, len, used);
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
            state = eti::deserialize (mRFQPublishIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRFQRequesterDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad1, buf, len, used);
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
                << "[RFQPublishIndicator=" << getRFQPublishIndicator () << "],"
                << "[RFQRequesterDisclosureInstruction=" << getRFQRequesterDisclosureInstruction () << "],"
                << "[Side=" << getSide () << "],"
                << "[Pad1=" << getPad1 () << "]";
            return sss.str();
        }
};

const int64_t xetraRFQRequestPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraRFQRequestPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraRFQRequestPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double xetraRFQRequestPacket::ORDER_QTY_MIN = -922337203685477.5807;
const double xetraRFQRequestPacket::ORDER_QTY_MAX = 922337203685477.5807;
const int64_t xetraRFQRequestPacket::ORDER_QTY_NO_VALUE = 0x8000000000000000;
const int32_t xetraRFQRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraRFQRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraRFQRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int8_t xetraRFQRequestPacket::RFQPUBLISH_INDICATOR_MIN = 1;
const int8_t xetraRFQRequestPacket::RFQPUBLISH_INDICATOR_MAX = 5;
const int8_t xetraRFQRequestPacket::RFQPUBLISH_INDICATOR_NO_VALUE = 0xFF;
const int8_t xetraRFQRequestPacket::RFQREQUESTER_DISCLOSURE_INSTRUCTION_MIN = 0;
const int8_t xetraRFQRequestPacket::RFQREQUESTER_DISCLOSURE_INSTRUCTION_MAX = 1;
const int8_t xetraRFQRequestPacket::RFQREQUESTER_DISCLOSURE_INSTRUCTION_NO_VALUE = 0xFF;
const int8_t xetraRFQRequestPacket::SIDE_MIN = 1;
const int8_t xetraRFQRequestPacket::SIDE_MAX = 2;
const int8_t xetraRFQRequestPacket::SIDE_NO_VALUE = 0xFF;
const char xetraRFQRequestPacket::PAD1_NO_VALUE[1] = {0x00};
const size_t xetraRFQRequestPacket::PAD1_MAX_LENGTH = 1;


} // namespace neueda

#endif // XETRA_RFQREQUEST_PACKET_H
