/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef XETRA_XETRAENLIGHTDEALRESPONSE_PACKET_H
#define XETRA_XETRAENLIGHTDEALRESPONSE_PACKET_H

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

class xetraXetraEnLightDealResponsePacket
{
    public:
        // no value constants
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const uint64_t QUOTE_ID_MIN;
        static const uint64_t QUOTE_ID_MAX;
        static const uint64_t QUOTE_ID_NO_VALUE;
        static const uint32_t NEGOTIATION_ID_MIN;
        static const uint32_t NEGOTIATION_ID_MAX;
        static const uint32_t NEGOTIATION_ID_NO_VALUE;
        static const uint32_t TRADE_ID_MIN;
        static const uint32_t TRADE_ID_MAX;
        static const uint32_t TRADE_ID_NO_VALUE;
        static const uint32_t SECONDARY_TRADE_ID_MIN;
        static const uint32_t SECONDARY_TRADE_ID_MAX;
        static const uint32_t SECONDARY_TRADE_ID_NO_VALUE;
        static const char FIRM_TRADE_ID_NO_VALUE[20];
        static const size_t FIRM_TRADE_ID_MAX_LENGTH;
        static const char FIRM_NEGOTIATION_ID_NO_VALUE[20];
        static const size_t FIRM_NEGOTIATION_ID_MAX_LENGTH;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraResponseHeaderCompPacket mResponseHeader;
        int64_t mSecurityID;
        uint64_t mQuoteID;
        uint32_t mNegotiationID;
        uint32_t mTradeID;
        uint32_t mSecondaryTradeID;
        char mFirmTradeID[20];
        char mFirmNegotiationID[20];
        char mPad4[4];

        // constructor
        xetraXetraEnLightDealResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10805;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mQuoteID = QUOTE_ID_NO_VALUE;
            mNegotiationID = NEGOTIATION_ID_NO_VALUE;
            mTradeID = TRADE_ID_NO_VALUE;
            mSecondaryTradeID = SECONDARY_TRADE_ID_NO_VALUE;
            memcpy(mFirmTradeID, FIRM_TRADE_ID_NO_VALUE, sizeof (mFirmTradeID));
            memcpy(mFirmNegotiationID, FIRM_NEGOTIATION_ID_NO_VALUE, sizeof (mFirmNegotiationID));
            memcpy(mPad4, PAD4_NO_VALUE, sizeof (mPad4));
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

        const xetraResponseHeaderCompPacket& getResponseHeader () const
        {
            return mResponseHeader;
        }

        bool setResponseHeader (const xetraResponseHeaderCompPacket& v)
        {
            mResponseHeader = v;
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

        uint64_t getQuoteID () const
        {
            return mQuoteID;
        }

        bool setQuoteID (uint64_t v)
        {
            mQuoteID = v;
            return ((QUOTE_ID_MIN <= mQuoteID && mQuoteID <= QUOTE_ID_MAX) || mQuoteID == QUOTE_ID_NO_VALUE);
        }

        bool isQuoteIDValid () const
        {
            return (mQuoteID != QUOTE_ID_NO_VALUE);
        }

        void resetQuoteID ()
        {
            mQuoteID = QUOTE_ID_NO_VALUE;
        }

        uint32_t getNegotiationID () const
        {
            return mNegotiationID;
        }

        bool setNegotiationID (uint32_t v)
        {
            mNegotiationID = v;
            return ((NEGOTIATION_ID_MIN <= mNegotiationID && mNegotiationID <= NEGOTIATION_ID_MAX) || mNegotiationID == NEGOTIATION_ID_NO_VALUE);
        }

        bool isNegotiationIDValid () const
        {
            return (mNegotiationID != NEGOTIATION_ID_NO_VALUE);
        }

        void resetNegotiationID ()
        {
            mNegotiationID = NEGOTIATION_ID_NO_VALUE;
        }

        uint32_t getTradeID () const
        {
            return mTradeID;
        }

        bool setTradeID (uint32_t v)
        {
            mTradeID = v;
            return ((TRADE_ID_MIN <= mTradeID && mTradeID <= TRADE_ID_MAX) || mTradeID == TRADE_ID_NO_VALUE);
        }

        bool isTradeIDValid () const
        {
            return (mTradeID != TRADE_ID_NO_VALUE);
        }

        void resetTradeID ()
        {
            mTradeID = TRADE_ID_NO_VALUE;
        }

        uint32_t getSecondaryTradeID () const
        {
            return mSecondaryTradeID;
        }

        bool setSecondaryTradeID (uint32_t v)
        {
            mSecondaryTradeID = v;
            return ((SECONDARY_TRADE_ID_MIN <= mSecondaryTradeID && mSecondaryTradeID <= SECONDARY_TRADE_ID_MAX) || mSecondaryTradeID == SECONDARY_TRADE_ID_NO_VALUE);
        }

        bool isSecondaryTradeIDValid () const
        {
            return (mSecondaryTradeID != SECONDARY_TRADE_ID_NO_VALUE);
        }

        void resetSecondaryTradeID ()
        {
            mSecondaryTradeID = SECONDARY_TRADE_ID_NO_VALUE;
        }

        string getFirmTradeID () const
        {
            return string (mFirmTradeID, FIRM_TRADE_ID_MAX_LENGTH);
        }

        bool setFirmTradeID (const string& v)
        {
            memset (mFirmTradeID, '\0', sizeof (mFirmTradeID));
            size_t size = min ((size_t) v.size (), (size_t) FIRM_TRADE_ID_MAX_LENGTH);
            strncpy (mFirmTradeID, v.c_str (), size);
            return (v.size () <= FIRM_TRADE_ID_MAX_LENGTH);
        }

        bool isFirmTradeIDValid () const
        {
            return (memcmp (mFirmTradeID, FIRM_TRADE_ID_NO_VALUE, sizeof (mFirmTradeID)) != 0);
        }

        void resetFirmTradeID ()
        {
            memcpy (mFirmTradeID, FIRM_TRADE_ID_NO_VALUE, sizeof (mFirmTradeID));
        }

        string getFirmNegotiationID () const
        {
            return string (mFirmNegotiationID, FIRM_NEGOTIATION_ID_MAX_LENGTH);
        }

        bool setFirmNegotiationID (const string& v)
        {
            memset (mFirmNegotiationID, '\0', sizeof (mFirmNegotiationID));
            size_t size = min ((size_t) v.size (), (size_t) FIRM_NEGOTIATION_ID_MAX_LENGTH);
            strncpy (mFirmNegotiationID, v.c_str (), size);
            return (v.size () <= FIRM_NEGOTIATION_ID_MAX_LENGTH);
        }

        bool isFirmNegotiationIDValid () const
        {
            return (memcmp (mFirmNegotiationID, FIRM_NEGOTIATION_ID_NO_VALUE, sizeof (mFirmNegotiationID)) != 0);
        }

        void resetFirmNegotiationID ()
        {
            memcpy (mFirmNegotiationID, FIRM_NEGOTIATION_ID_NO_VALUE, sizeof (mFirmNegotiationID));
        }

        string getPad4 () const
        {
            return string (mPad4, PAD4_MAX_LENGTH);
        }

        bool setPad4 (const string& v)
        {
            memset (mPad4, '\0', sizeof (mPad4));
            size_t size = min ((size_t) v.size (), (size_t) PAD4_MAX_LENGTH);
            strncpy (mPad4, v.c_str (), size);
            return (v.size () <= PAD4_MAX_LENGTH);
        }

        bool isPad4Valid () const
        {
            return (memcmp (mPad4, PAD4_NO_VALUE, sizeof (mPad4)) != 0);
        }

        void resetPad4 ()
        {
            memcpy (mPad4, PAD4_NO_VALUE, sizeof (mPad4));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mResponseHeader.getRawSize()
                + sizeof (mSecurityID)
                + sizeof (mQuoteID)
                + sizeof (mNegotiationID)
                + sizeof (mTradeID)
                + sizeof (mSecondaryTradeID)
                + sizeof (mFirmTradeID)
                + sizeof (mFirmNegotiationID)
                + sizeof (mPad4);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mResponseHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mQuoteID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSecondaryTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFirmTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFirmNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = mMessageHeaderOut.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mResponseHeader.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mQuoteID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSecondaryTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFirmTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFirmNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "XetraEnLightDealResponse::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[ResponseHeader=" << mResponseHeader.toString () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[QuoteID=" << getQuoteID () << "],"
                << "[NegotiationID=" << getNegotiationID () << "],"
                << "[TradeID=" << getTradeID () << "],"
                << "[SecondaryTradeID=" << getSecondaryTradeID () << "],"
                << "[FirmTradeID=" << getFirmTradeID () << "],"
                << "[FirmNegotiationID=" << getFirmNegotiationID () << "],"
                << "[Pad4=" << getPad4 () << "]";
            return sss.str();
        }
};

const int64_t xetraXetraEnLightDealResponsePacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraXetraEnLightDealResponsePacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraXetraEnLightDealResponsePacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const uint64_t xetraXetraEnLightDealResponsePacket::QUOTE_ID_MIN = 0UL;
const uint64_t xetraXetraEnLightDealResponsePacket::QUOTE_ID_MAX = 18446744073709551614UL;
const uint64_t xetraXetraEnLightDealResponsePacket::QUOTE_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint32_t xetraXetraEnLightDealResponsePacket::NEGOTIATION_ID_MIN = 0;
const uint32_t xetraXetraEnLightDealResponsePacket::NEGOTIATION_ID_MAX = 4294967294;
const uint32_t xetraXetraEnLightDealResponsePacket::NEGOTIATION_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraXetraEnLightDealResponsePacket::TRADE_ID_MIN = 0;
const uint32_t xetraXetraEnLightDealResponsePacket::TRADE_ID_MAX = 4294967294;
const uint32_t xetraXetraEnLightDealResponsePacket::TRADE_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraXetraEnLightDealResponsePacket::SECONDARY_TRADE_ID_MIN = 0;
const uint32_t xetraXetraEnLightDealResponsePacket::SECONDARY_TRADE_ID_MAX = 4294967294;
const uint32_t xetraXetraEnLightDealResponsePacket::SECONDARY_TRADE_ID_NO_VALUE = 0xFFFFFFFF;
const char xetraXetraEnLightDealResponsePacket::FIRM_TRADE_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightDealResponsePacket::FIRM_TRADE_ID_MAX_LENGTH = 20;
const char xetraXetraEnLightDealResponsePacket::FIRM_NEGOTIATION_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightDealResponsePacket::FIRM_NEGOTIATION_ID_MAX_LENGTH = 20;
const char xetraXetraEnLightDealResponsePacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightDealResponsePacket::PAD4_MAX_LENGTH = 4;


} // namespace neueda

#endif // XETRA_XETRAENLIGHTDEALRESPONSE_PACKET_H
