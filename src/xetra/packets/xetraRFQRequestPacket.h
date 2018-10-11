/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef XETRA_RFQREQUEST_PACKET_H
#define XETRA_RFQREQUEST_PACKET_H

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

class xetraRFQRequestPacket
{
    public:
        // no value constants
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int32_t ORDER_QTY_MIN;
        static const int32_t ORDER_QTY_MAX;
        static const int32_t ORDER_QTY_NO_VALUE;
        static const int8_t RFQPUBLISH_INDICATOR_MIN;
        static const int8_t RFQPUBLISH_INDICATOR_MAX;
        static const int8_t RFQPUBLISH_INDICATOR_NO_VALUE;
        static const int8_t RFQREQUESTER_DISCLOSURE_INSTRUCTION_MIN;
        static const int8_t RFQREQUESTER_DISCLOSURE_INSTRUCTION_MAX;
        static const int8_t RFQREQUESTER_DISCLOSURE_INSTRUCTION_NO_VALUE;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const char PAD5_NO_VALUE[5];
        static const size_t PAD5_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderInCompPacket mMessageHeaderIn;
        xetraRequestHeaderCompPacket mRequestHeader;
        int64_t mSecurityID;
        int32_t mMarketSegmentID;
        int32_t mOrderQty;
        int8_t mRFQPublishIndicator;
        int8_t mRFQRequesterDisclosureInstruction;
        int8_t mSide;
        char mPad5[5];

        // constructor
        xetraRFQRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10401;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mOrderQty = ORDER_QTY_NO_VALUE;
            mRFQPublishIndicator = RFQPUBLISH_INDICATOR_NO_VALUE;
            mRFQRequesterDisclosureInstruction = RFQREQUESTER_DISCLOSURE_INSTRUCTION_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            memcpy(mPad5, PAD5_NO_VALUE, sizeof (mPad5));
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

        int32_t getOrderQty () const
        {
            return mOrderQty;
        }

        bool setOrderQty (int32_t v)
        {
            mOrderQty = v;
            return ((ORDER_QTY_MIN <= mOrderQty && mOrderQty <= ORDER_QTY_MAX) || mOrderQty == ORDER_QTY_NO_VALUE);
        }

        bool isOrderQtyValid () const
        {
            return (mOrderQty != ORDER_QTY_NO_VALUE);
        }

        void resetOrderQty ()
        {
            mOrderQty = ORDER_QTY_NO_VALUE;
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

        string getPad5 () const
        {
            return string (mPad5, PAD5_MAX_LENGTH);
        }

        bool setPad5 (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) PAD5_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mPad5[i] = v[i];
            memset (&mPad5[size], '\0', PAD5_MAX_LENGTH-size);
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
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mSecurityID)
                + sizeof (mMarketSegmentID)
                + sizeof (mOrderQty)
                + sizeof (mRFQPublishIndicator)
                + sizeof (mRFQRequesterDisclosureInstruction)
                + sizeof (mSide)
                + sizeof (mPad5);
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
            state = xetra::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOrderQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRFQPublishIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRFQRequesterDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad5, buf, len, used);
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
            state = xetra::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOrderQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRFQPublishIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRFQRequesterDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad5, buf, len, used);
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
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[OrderQty=" << getOrderQty () << "],"
                << "[RFQPublishIndicator=" << getRFQPublishIndicator () << "],"
                << "[RFQRequesterDisclosureInstruction=" << getRFQRequesterDisclosureInstruction () << "],"
                << "[Side=" << getSide () << "],"
                << "[Pad5=" << getPad5 () << "]";
            return sss.str();
        }
};

const int64_t xetraRFQRequestPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraRFQRequestPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraRFQRequestPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const int32_t xetraRFQRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraRFQRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraRFQRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int32_t xetraRFQRequestPacket::ORDER_QTY_MIN = -2147483647;
const int32_t xetraRFQRequestPacket::ORDER_QTY_MAX = 2147483647;
const int32_t xetraRFQRequestPacket::ORDER_QTY_NO_VALUE = 0x80000000;
const int8_t xetraRFQRequestPacket::RFQPUBLISH_INDICATOR_MIN = 1;
const int8_t xetraRFQRequestPacket::RFQPUBLISH_INDICATOR_MAX = 5;
const int8_t xetraRFQRequestPacket::RFQPUBLISH_INDICATOR_NO_VALUE = 0xFF;
const int8_t xetraRFQRequestPacket::RFQREQUESTER_DISCLOSURE_INSTRUCTION_MIN = 0;
const int8_t xetraRFQRequestPacket::RFQREQUESTER_DISCLOSURE_INSTRUCTION_MAX = 1;
const int8_t xetraRFQRequestPacket::RFQREQUESTER_DISCLOSURE_INSTRUCTION_NO_VALUE = 0xFF;
const int8_t xetraRFQRequestPacket::SIDE_MIN = 1;
const int8_t xetraRFQRequestPacket::SIDE_MAX = 2;
const int8_t xetraRFQRequestPacket::SIDE_NO_VALUE = 0xFF;
const char xetraRFQRequestPacket::PAD5_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraRFQRequestPacket::PAD5_MAX_LENGTH = 5;


} // namespace neueda

#endif // XETRA_RFQREQUEST_PACKET_H
