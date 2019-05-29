/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_DELETEORDERCOMPLEXREQUEST_PACKET_H
#define EUREX_DELETEORDERCOMPLEXREQUEST_PACKET_H

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

class eurexDeleteOrderComplexRequestPacket
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
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_MIN;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_MAX;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE;
        static const uint64_t EXECUTING_TRADER_MIN;
        static const uint64_t EXECUTING_TRADER_MAX;
        static const uint64_t EXECUTING_TRADER_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const uint32_t TARGET_PARTY_IDSESSION_ID_MIN;
        static const uint32_t TARGET_PARTY_IDSESSION_ID_MAX;
        static const uint32_t TARGET_PARTY_IDSESSION_ID_NO_VALUE;
        static const int8_t PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MIN;
        static const int8_t PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MAX;
        static const int8_t PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE;
        static const int8_t EXECUTING_TRADER_QUALIFIER_MIN;
        static const int8_t EXECUTING_TRADER_QUALIFIER_MAX;
        static const int8_t EXECUTING_TRADER_QUALIFIER_NO_VALUE;
        static const char FIXCL_ORD_ID_NO_VALUE[20];
        static const size_t FIXCL_ORD_ID_MAX_LENGTH;
        static const char PAD2_NO_VALUE[2];
        static const size_t PAD2_MAX_LENGTH;

        // fields (use with care)
        eurexMessageHeaderInCompPacket mMessageHeaderIn;
        eurexRequestHeaderCompPacket mRequestHeader;
        uint64_t mOrderID;
        uint64_t mClOrdID;
        uint64_t mOrigClOrdID;
        int64_t mSecurityID;
        uint64_t mPartyIdInvestmentDecisionMaker;
        uint64_t mExecutingTrader;
        int32_t mMarketSegmentID;
        uint32_t mTargetPartyIDSessionID;
        int8_t mPartyIdInvestmentDecisionMakerQualifier;
        int8_t mExecutingTraderQualifier;
        char mFIXClOrdID[20];
        char mPad2[2];

        // constructor
        eurexDeleteOrderComplexRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10123;
            mOrderID = ORDER_ID_NO_VALUE;
            mClOrdID = CL_ORD_ID_NO_VALUE;
            mOrigClOrdID = ORIG_CL_ORD_ID_NO_VALUE;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mPartyIdInvestmentDecisionMaker = PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE;
            mExecutingTrader = EXECUTING_TRADER_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mTargetPartyIDSessionID = TARGET_PARTY_IDSESSION_ID_NO_VALUE;
            mPartyIdInvestmentDecisionMakerQualifier = PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE;
            mExecutingTraderQualifier = EXECUTING_TRADER_QUALIFIER_NO_VALUE;
            memcpy(mFIXClOrdID, FIXCL_ORD_ID_NO_VALUE, sizeof (mFIXClOrdID));
            memcpy(mPad2, PAD2_NO_VALUE, sizeof (mPad2));
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

        uint64_t getPartyIdInvestmentDecisionMaker () const
        {
            return mPartyIdInvestmentDecisionMaker;
        }

        bool setPartyIdInvestmentDecisionMaker (uint64_t v)
        {
            mPartyIdInvestmentDecisionMaker = v;
            return ((PARTY_ID_INVESTMENT_DECISION_MAKER_MIN <= mPartyIdInvestmentDecisionMaker && mPartyIdInvestmentDecisionMaker <= PARTY_ID_INVESTMENT_DECISION_MAKER_MAX) || mPartyIdInvestmentDecisionMaker == PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE);
        }

        bool isPartyIdInvestmentDecisionMakerValid () const
        {
            return (mPartyIdInvestmentDecisionMaker != PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE);
        }

        void resetPartyIdInvestmentDecisionMaker ()
        {
            mPartyIdInvestmentDecisionMaker = PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE;
        }

        uint64_t getExecutingTrader () const
        {
            return mExecutingTrader;
        }

        bool setExecutingTrader (uint64_t v)
        {
            mExecutingTrader = v;
            return ((EXECUTING_TRADER_MIN <= mExecutingTrader && mExecutingTrader <= EXECUTING_TRADER_MAX) || mExecutingTrader == EXECUTING_TRADER_NO_VALUE);
        }

        bool isExecutingTraderValid () const
        {
            return (mExecutingTrader != EXECUTING_TRADER_NO_VALUE);
        }

        void resetExecutingTrader ()
        {
            mExecutingTrader = EXECUTING_TRADER_NO_VALUE;
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

        uint32_t getTargetPartyIDSessionID () const
        {
            return mTargetPartyIDSessionID;
        }

        bool setTargetPartyIDSessionID (uint32_t v)
        {
            mTargetPartyIDSessionID = v;
            return ((TARGET_PARTY_IDSESSION_ID_MIN <= mTargetPartyIDSessionID && mTargetPartyIDSessionID <= TARGET_PARTY_IDSESSION_ID_MAX) || mTargetPartyIDSessionID == TARGET_PARTY_IDSESSION_ID_NO_VALUE);
        }

        bool isTargetPartyIDSessionIDValid () const
        {
            return (mTargetPartyIDSessionID != TARGET_PARTY_IDSESSION_ID_NO_VALUE);
        }

        void resetTargetPartyIDSessionID ()
        {
            mTargetPartyIDSessionID = TARGET_PARTY_IDSESSION_ID_NO_VALUE;
        }

        int8_t getPartyIdInvestmentDecisionMakerQualifier () const
        {
            return mPartyIdInvestmentDecisionMakerQualifier;
        }

        bool setPartyIdInvestmentDecisionMakerQualifier (int8_t v)
        {
            mPartyIdInvestmentDecisionMakerQualifier = v;
            return ((PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MIN <= mPartyIdInvestmentDecisionMakerQualifier && mPartyIdInvestmentDecisionMakerQualifier <= PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MAX) || mPartyIdInvestmentDecisionMakerQualifier == PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE);
        }

        bool isPartyIdInvestmentDecisionMakerQualifierValid () const
        {
            return (mPartyIdInvestmentDecisionMakerQualifier != PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE);
        }

        void resetPartyIdInvestmentDecisionMakerQualifier ()
        {
            mPartyIdInvestmentDecisionMakerQualifier = PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE;
        }

        int8_t getExecutingTraderQualifier () const
        {
            return mExecutingTraderQualifier;
        }

        bool setExecutingTraderQualifier (int8_t v)
        {
            mExecutingTraderQualifier = v;
            return ((EXECUTING_TRADER_QUALIFIER_MIN <= mExecutingTraderQualifier && mExecutingTraderQualifier <= EXECUTING_TRADER_QUALIFIER_MAX) || mExecutingTraderQualifier == EXECUTING_TRADER_QUALIFIER_NO_VALUE);
        }

        bool isExecutingTraderQualifierValid () const
        {
            return (mExecutingTraderQualifier != EXECUTING_TRADER_QUALIFIER_NO_VALUE);
        }

        void resetExecutingTraderQualifier ()
        {
            mExecutingTraderQualifier = EXECUTING_TRADER_QUALIFIER_NO_VALUE;
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

        string getPad2 () const
        {
            return string (mPad2, PAD2_MAX_LENGTH);
        }

        bool setPad2 (const string& v)
        {
            memset (mPad2, '\0', sizeof (mPad2));
            size_t size = min ((size_t) v.size (), (size_t) PAD2_MAX_LENGTH);
            strncpy (mPad2, v.c_str (), size);
            return (v.size () <= PAD2_MAX_LENGTH);
        }

        bool isPad2Valid () const
        {
            return (memcmp (mPad2, PAD2_NO_VALUE, sizeof (mPad2)) != 0);
        }

        void resetPad2 ()
        {
            memcpy (mPad2, PAD2_NO_VALUE, sizeof (mPad2));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mOrderID)
                + sizeof (mClOrdID)
                + sizeof (mOrigClOrdID)
                + sizeof (mSecurityID)
                + sizeof (mPartyIdInvestmentDecisionMaker)
                + sizeof (mExecutingTrader)
                + sizeof (mMarketSegmentID)
                + sizeof (mTargetPartyIDSessionID)
                + sizeof (mPartyIdInvestmentDecisionMakerQualifier)
                + sizeof (mExecutingTraderQualifier)
                + sizeof (mFIXClOrdID)
                + sizeof (mPad2);
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
            state = eti::serialize (mOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrigClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIdInvestmentDecisionMaker, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTargetPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIdInvestmentDecisionMakerQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecutingTraderQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFIXClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad2, buf, len, used);
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
            state = eti::deserialize (mOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrigClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIdInvestmentDecisionMaker, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTargetPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIdInvestmentDecisionMakerQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecutingTraderQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFIXClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "DeleteOrderComplexRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[OrderID=" << getOrderID () << "],"
                << "[ClOrdID=" << getClOrdID () << "],"
                << "[OrigClOrdID=" << getOrigClOrdID () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[PartyIdInvestmentDecisionMaker=" << getPartyIdInvestmentDecisionMaker () << "],"
                << "[ExecutingTrader=" << getExecutingTrader () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[TargetPartyIDSessionID=" << getTargetPartyIDSessionID () << "],"
                << "[PartyIdInvestmentDecisionMakerQualifier=" << getPartyIdInvestmentDecisionMakerQualifier () << "],"
                << "[ExecutingTraderQualifier=" << getExecutingTraderQualifier () << "],"
                << "[FIXClOrdID=" << getFIXClOrdID () << "],"
                << "[Pad2=" << getPad2 () << "]";
            return sss.str();
        }
};

const uint64_t eurexDeleteOrderComplexRequestPacket::ORDER_ID_MIN = 0UL;
const uint64_t eurexDeleteOrderComplexRequestPacket::ORDER_ID_MAX = 18446744073709551614UL;
const uint64_t eurexDeleteOrderComplexRequestPacket::ORDER_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexDeleteOrderComplexRequestPacket::CL_ORD_ID_MIN = 0UL;
const uint64_t eurexDeleteOrderComplexRequestPacket::CL_ORD_ID_MAX = 18446744073709551614UL;
const uint64_t eurexDeleteOrderComplexRequestPacket::CL_ORD_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexDeleteOrderComplexRequestPacket::ORIG_CL_ORD_ID_MIN = 0UL;
const uint64_t eurexDeleteOrderComplexRequestPacket::ORIG_CL_ORD_ID_MAX = 18446744073709551614UL;
const uint64_t eurexDeleteOrderComplexRequestPacket::ORIG_CL_ORD_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int64_t eurexDeleteOrderComplexRequestPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t eurexDeleteOrderComplexRequestPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t eurexDeleteOrderComplexRequestPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const uint64_t eurexDeleteOrderComplexRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_MIN = 0UL;
const uint64_t eurexDeleteOrderComplexRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_MAX = 18446744073709551614UL;
const uint64_t eurexDeleteOrderComplexRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexDeleteOrderComplexRequestPacket::EXECUTING_TRADER_MIN = 0UL;
const uint64_t eurexDeleteOrderComplexRequestPacket::EXECUTING_TRADER_MAX = 18446744073709551614UL;
const uint64_t eurexDeleteOrderComplexRequestPacket::EXECUTING_TRADER_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int32_t eurexDeleteOrderComplexRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexDeleteOrderComplexRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexDeleteOrderComplexRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t eurexDeleteOrderComplexRequestPacket::TARGET_PARTY_IDSESSION_ID_MIN = 0;
const uint32_t eurexDeleteOrderComplexRequestPacket::TARGET_PARTY_IDSESSION_ID_MAX = 4294967294;
const uint32_t eurexDeleteOrderComplexRequestPacket::TARGET_PARTY_IDSESSION_ID_NO_VALUE = 0xFFFFFFFF;
const int8_t eurexDeleteOrderComplexRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MIN = 22;
const int8_t eurexDeleteOrderComplexRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MAX = 24;
const int8_t eurexDeleteOrderComplexRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE = 0xFF;
const int8_t eurexDeleteOrderComplexRequestPacket::EXECUTING_TRADER_QUALIFIER_MIN = 22;
const int8_t eurexDeleteOrderComplexRequestPacket::EXECUTING_TRADER_QUALIFIER_MAX = 24;
const int8_t eurexDeleteOrderComplexRequestPacket::EXECUTING_TRADER_QUALIFIER_NO_VALUE = 0xFF;
const char eurexDeleteOrderComplexRequestPacket::FIXCL_ORD_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexDeleteOrderComplexRequestPacket::FIXCL_ORD_ID_MAX_LENGTH = 20;
const char eurexDeleteOrderComplexRequestPacket::PAD2_NO_VALUE[2] = {0x00, 0x00};
const size_t eurexDeleteOrderComplexRequestPacket::PAD2_MAX_LENGTH = 2;


} // namespace neueda

#endif // EUREX_DELETEORDERCOMPLEXREQUEST_PACKET_H
