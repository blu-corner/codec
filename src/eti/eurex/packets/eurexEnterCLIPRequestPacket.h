/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_ENTERCLIPREQUEST_PACKET_H
#define EUREX_ENTERCLIPREQUEST_PACKET_H

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

class eurexEnterCLIPRequestPacket
{
    public:
        // no value constants
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const double PRICE_MIN;
        static const double PRICE_MAX;
        static const int64_t PRICE_NO_VALUE;
        static const double ORDER_QTY_MIN;
        static const double ORDER_QTY_MAX;
        static const int64_t ORDER_QTY_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int32_t CROSS_ID_MIN;
        static const int32_t CROSS_ID_MAX;
        static const int32_t CROSS_ID_NO_VALUE;
        static const int32_t CROSS_REQUEST_ID_MIN;
        static const int32_t CROSS_REQUEST_ID_MAX;
        static const int32_t CROSS_REQUEST_ID_NO_VALUE;
        static const int8_t NO_SIDES_MIN;
        static const int8_t NO_SIDES_MAX;
        static const int8_t NO_SIDES_NO_VALUE;
        static const int8_t NO_CROSS_LEGS_MIN;
        static const int8_t NO_CROSS_LEGS_MAX;
        static const int8_t NO_CROSS_LEGS_NO_VALUE;
        static const int8_t SIDE_DISCLOSURE_INSTRUCTION_MIN;
        static const int8_t SIDE_DISCLOSURE_INSTRUCTION_MAX;
        static const int8_t SIDE_DISCLOSURE_INSTRUCTION_NO_VALUE;
        static const int8_t PRICE_DISCLOSURE_INSTRUCTION_MIN;
        static const int8_t PRICE_DISCLOSURE_INSTRUCTION_MAX;
        static const int8_t PRICE_DISCLOSURE_INSTRUCTION_NO_VALUE;
        static const int8_t ORDER_QTY_DISCLOSURE_INSTRUCTION_MIN;
        static const int8_t ORDER_QTY_DISCLOSURE_INSTRUCTION_MAX;
        static const int8_t ORDER_QTY_DISCLOSURE_INSTRUCTION_NO_VALUE;
        static const char ROOT_PARTY_CONTRA_FIRM_NO_VALUE[5];
        static const size_t ROOT_PARTY_CONTRA_FIRM_MAX_LENGTH;
        static const char ROOT_PARTY_CONTRA_TRADER_NO_VALUE[6];
        static const size_t ROOT_PARTY_CONTRA_TRADER_MAX_LENGTH;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;
        static const size_t CROSS_REQUEST_SIDE_GRP_MIN;
        static const size_t CROSS_REQUEST_SIDE_GRP_MAX;
        static const size_t SIDE_CROSS_LEG_GRP_MIN;
        static const size_t SIDE_CROSS_LEG_GRP_MAX;

        // fields (use with care)
        eurexMessageHeaderInCompPacket mMessageHeaderIn;
        eurexRequestHeaderCompPacket mRequestHeader;
        int64_t mSecurityID;
        int64_t mPrice;
        int64_t mOrderQty;
        int32_t mMarketSegmentID;
        int32_t mCrossID;
        int32_t mCrossRequestID;
        int8_t mNoSides;
        int8_t mNoCrossLegs;
        int8_t mSideDisclosureInstruction;
        int8_t mPriceDisclosureInstruction;
        int8_t mOrderQtyDisclosureInstruction;
        char mRootPartyContraFirm[5];
        char mRootPartyContraTrader[6];
        char mPad4[4];
        vector<eurexCrossRequestSideGrpCompPacket> mCrossRequestSideGrp;
        vector<eurexSideCrossLegGrpCompPacket> mSideCrossLegGrp;

        // constructor
        eurexEnterCLIPRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10131;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mPrice = PRICE_NO_VALUE;
            mOrderQty = ORDER_QTY_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mCrossID = CROSS_ID_NO_VALUE;
            mCrossRequestID = CROSS_REQUEST_ID_NO_VALUE;
            mNoSides = NO_SIDES_NO_VALUE;
            mNoCrossLegs = NO_CROSS_LEGS_NO_VALUE;
            mSideDisclosureInstruction = SIDE_DISCLOSURE_INSTRUCTION_NO_VALUE;
            mPriceDisclosureInstruction = PRICE_DISCLOSURE_INSTRUCTION_NO_VALUE;
            mOrderQtyDisclosureInstruction = ORDER_QTY_DISCLOSURE_INSTRUCTION_NO_VALUE;
            memcpy(mRootPartyContraFirm, ROOT_PARTY_CONTRA_FIRM_NO_VALUE, sizeof (mRootPartyContraFirm));
            memcpy(mRootPartyContraTrader, ROOT_PARTY_CONTRA_TRADER_NO_VALUE, sizeof (mRootPartyContraTrader));
            memcpy(mPad4, PAD4_NO_VALUE, sizeof (mPad4));
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

        double getPrice () const
        {
            return mPrice / 100000000.0;
        }

        bool setPrice (double v)
        {
            mPrice = v * 100000000.0;
            return ((PRICE_MIN <= v && v <= PRICE_MAX) || mPrice == PRICE_NO_VALUE);
        }

        bool isPriceValid () const
        {
            return (mPrice != PRICE_NO_VALUE);
        }

        void resetPrice ()
        {
            mPrice = PRICE_NO_VALUE;
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

        int32_t getCrossID () const
        {
            return mCrossID;
        }

        bool setCrossID (int32_t v)
        {
            mCrossID = v;
            return ((CROSS_ID_MIN <= mCrossID && mCrossID <= CROSS_ID_MAX) || mCrossID == CROSS_ID_NO_VALUE);
        }

        bool isCrossIDValid () const
        {
            return (mCrossID != CROSS_ID_NO_VALUE);
        }

        void resetCrossID ()
        {
            mCrossID = CROSS_ID_NO_VALUE;
        }

        int32_t getCrossRequestID () const
        {
            return mCrossRequestID;
        }

        bool setCrossRequestID (int32_t v)
        {
            mCrossRequestID = v;
            return ((CROSS_REQUEST_ID_MIN <= mCrossRequestID && mCrossRequestID <= CROSS_REQUEST_ID_MAX) || mCrossRequestID == CROSS_REQUEST_ID_NO_VALUE);
        }

        bool isCrossRequestIDValid () const
        {
            return (mCrossRequestID != CROSS_REQUEST_ID_NO_VALUE);
        }

        void resetCrossRequestID ()
        {
            mCrossRequestID = CROSS_REQUEST_ID_NO_VALUE;
        }

        int8_t getNoSides () const
        {
            return mNoSides;
        }

        bool setNoSides (int8_t v)
        {
            mNoSides = v;
            return ((NO_SIDES_MIN <= mNoSides && mNoSides <= NO_SIDES_MAX) || mNoSides == NO_SIDES_NO_VALUE);
        }

        bool isNoSidesValid () const
        {
            return (mNoSides != NO_SIDES_NO_VALUE);
        }

        void resetNoSides ()
        {
            mNoSides = NO_SIDES_NO_VALUE;
        }

        int8_t getNoCrossLegs () const
        {
            return mNoCrossLegs;
        }

        bool setNoCrossLegs (int8_t v)
        {
            mNoCrossLegs = v;
            return ((NO_CROSS_LEGS_MIN <= mNoCrossLegs && mNoCrossLegs <= NO_CROSS_LEGS_MAX) || mNoCrossLegs == NO_CROSS_LEGS_NO_VALUE);
        }

        bool isNoCrossLegsValid () const
        {
            return (mNoCrossLegs != NO_CROSS_LEGS_NO_VALUE);
        }

        void resetNoCrossLegs ()
        {
            mNoCrossLegs = NO_CROSS_LEGS_NO_VALUE;
        }

        int8_t getSideDisclosureInstruction () const
        {
            return mSideDisclosureInstruction;
        }

        bool setSideDisclosureInstruction (int8_t v)
        {
            mSideDisclosureInstruction = v;
            return ((SIDE_DISCLOSURE_INSTRUCTION_MIN <= mSideDisclosureInstruction && mSideDisclosureInstruction <= SIDE_DISCLOSURE_INSTRUCTION_MAX) || mSideDisclosureInstruction == SIDE_DISCLOSURE_INSTRUCTION_NO_VALUE);
        }

        bool isSideDisclosureInstructionValid () const
        {
            return (mSideDisclosureInstruction != SIDE_DISCLOSURE_INSTRUCTION_NO_VALUE);
        }

        void resetSideDisclosureInstruction ()
        {
            mSideDisclosureInstruction = SIDE_DISCLOSURE_INSTRUCTION_NO_VALUE;
        }

        int8_t getPriceDisclosureInstruction () const
        {
            return mPriceDisclosureInstruction;
        }

        bool setPriceDisclosureInstruction (int8_t v)
        {
            mPriceDisclosureInstruction = v;
            return ((PRICE_DISCLOSURE_INSTRUCTION_MIN <= mPriceDisclosureInstruction && mPriceDisclosureInstruction <= PRICE_DISCLOSURE_INSTRUCTION_MAX) || mPriceDisclosureInstruction == PRICE_DISCLOSURE_INSTRUCTION_NO_VALUE);
        }

        bool isPriceDisclosureInstructionValid () const
        {
            return (mPriceDisclosureInstruction != PRICE_DISCLOSURE_INSTRUCTION_NO_VALUE);
        }

        void resetPriceDisclosureInstruction ()
        {
            mPriceDisclosureInstruction = PRICE_DISCLOSURE_INSTRUCTION_NO_VALUE;
        }

        int8_t getOrderQtyDisclosureInstruction () const
        {
            return mOrderQtyDisclosureInstruction;
        }

        bool setOrderQtyDisclosureInstruction (int8_t v)
        {
            mOrderQtyDisclosureInstruction = v;
            return ((ORDER_QTY_DISCLOSURE_INSTRUCTION_MIN <= mOrderQtyDisclosureInstruction && mOrderQtyDisclosureInstruction <= ORDER_QTY_DISCLOSURE_INSTRUCTION_MAX) || mOrderQtyDisclosureInstruction == ORDER_QTY_DISCLOSURE_INSTRUCTION_NO_VALUE);
        }

        bool isOrderQtyDisclosureInstructionValid () const
        {
            return (mOrderQtyDisclosureInstruction != ORDER_QTY_DISCLOSURE_INSTRUCTION_NO_VALUE);
        }

        void resetOrderQtyDisclosureInstruction ()
        {
            mOrderQtyDisclosureInstruction = ORDER_QTY_DISCLOSURE_INSTRUCTION_NO_VALUE;
        }

        string getRootPartyContraFirm () const
        {
            return string (mRootPartyContraFirm, ROOT_PARTY_CONTRA_FIRM_MAX_LENGTH);
        }

        bool setRootPartyContraFirm (const string& v)
        {
            memset (mRootPartyContraFirm, '\0', sizeof (mRootPartyContraFirm));
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_CONTRA_FIRM_MAX_LENGTH);
            strncpy (mRootPartyContraFirm, v.c_str (), size);
            return (v.size () <= ROOT_PARTY_CONTRA_FIRM_MAX_LENGTH);
        }

        bool isRootPartyContraFirmValid () const
        {
            return (memcmp (mRootPartyContraFirm, ROOT_PARTY_CONTRA_FIRM_NO_VALUE, sizeof (mRootPartyContraFirm)) != 0);
        }

        void resetRootPartyContraFirm ()
        {
            memcpy (mRootPartyContraFirm, ROOT_PARTY_CONTRA_FIRM_NO_VALUE, sizeof (mRootPartyContraFirm));
        }

        string getRootPartyContraTrader () const
        {
            return string (mRootPartyContraTrader, ROOT_PARTY_CONTRA_TRADER_MAX_LENGTH);
        }

        bool setRootPartyContraTrader (const string& v)
        {
            memset (mRootPartyContraTrader, '\0', sizeof (mRootPartyContraTrader));
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_CONTRA_TRADER_MAX_LENGTH);
            strncpy (mRootPartyContraTrader, v.c_str (), size);
            return (v.size () <= ROOT_PARTY_CONTRA_TRADER_MAX_LENGTH);
        }

        bool isRootPartyContraTraderValid () const
        {
            return (memcmp (mRootPartyContraTrader, ROOT_PARTY_CONTRA_TRADER_NO_VALUE, sizeof (mRootPartyContraTrader)) != 0);
        }

        void resetRootPartyContraTrader ()
        {
            memcpy (mRootPartyContraTrader, ROOT_PARTY_CONTRA_TRADER_NO_VALUE, sizeof (mRootPartyContraTrader));
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

        const vector<eurexCrossRequestSideGrpCompPacket>& getCrossRequestSideGrp () const
        {
            return mCrossRequestSideGrp;
        }

        bool setCrossRequestSideGrp (const vector<eurexCrossRequestSideGrpCompPacket>& v)
        {
            mCrossRequestSideGrp = v;
            mNoSides = v.size ();
            return (CROSS_REQUEST_SIDE_GRP_MIN <= v.size () && v.size () <= CROSS_REQUEST_SIDE_GRP_MAX);
        }

        const vector<eurexSideCrossLegGrpCompPacket>& getSideCrossLegGrp () const
        {
            return mSideCrossLegGrp;
        }

        bool setSideCrossLegGrp (const vector<eurexSideCrossLegGrpCompPacket>& v)
        {
            mSideCrossLegGrp = v;
            mNoCrossLegs = v.size ();
            return (SIDE_CROSS_LEG_GRP_MIN <= v.size () && v.size () <= SIDE_CROSS_LEG_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mSecurityID)
                + sizeof (mPrice)
                + sizeof (mOrderQty)
                + sizeof (mMarketSegmentID)
                + sizeof (mCrossID)
                + sizeof (mCrossRequestID)
                + sizeof (mNoSides)
                + sizeof (mNoCrossLegs)
                + sizeof (mSideDisclosureInstruction)
                + sizeof (mPriceDisclosureInstruction)
                + sizeof (mOrderQtyDisclosureInstruction)
                + sizeof (mRootPartyContraFirm)
                + sizeof (mRootPartyContraTrader)
                + sizeof (mPad4)
                + eti::getRawSize (mCrossRequestSideGrp)
                + eti::getRawSize (mSideCrossLegGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoSides = mCrossRequestSideGrp.size ();
            mNoCrossLegs = mSideCrossLegGrp.size ();
            mMessageHeaderIn.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderIn.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrderQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mCrossID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mCrossRequestID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoSides, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoCrossLegs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSideDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPriceDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrderQtyDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRootPartyContraFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRootPartyContraTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mCrossRequestSideGrp.size (); i++)
            {
                state = mCrossRequestSideGrp[i].serialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            for (size_t i = 0; i < mSideCrossLegGrp.size (); i++)
            {
                state = mSideCrossLegGrp[i].serialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
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
            state = eti::deserialize (mPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrderQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mCrossID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mCrossRequestID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoSides, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoCrossLegs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSideDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPriceDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrderQtyDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRootPartyContraFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRootPartyContraTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mCrossRequestSideGrp.resize (mNoSides);
            for (vector<eurexCrossRequestSideGrpCompPacket>::iterator it = mCrossRequestSideGrp.begin (); it != mCrossRequestSideGrp.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            mSideCrossLegGrp.resize (mNoCrossLegs);
            for (vector<eurexSideCrossLegGrpCompPacket>::iterator it = mSideCrossLegGrp.begin (); it != mSideCrossLegGrp.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "EnterCLIPRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[Price=" << getPrice () << "],"
                << "[OrderQty=" << getOrderQty () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[CrossID=" << getCrossID () << "],"
                << "[CrossRequestID=" << getCrossRequestID () << "],"
                << "[NoSides=" << getNoSides () << "],"
                << "[NoCrossLegs=" << getNoCrossLegs () << "],"
                << "[SideDisclosureInstruction=" << getSideDisclosureInstruction () << "],"
                << "[PriceDisclosureInstruction=" << getPriceDisclosureInstruction () << "],"
                << "[OrderQtyDisclosureInstruction=" << getOrderQtyDisclosureInstruction () << "],"
                << "[RootPartyContraFirm=" << getRootPartyContraFirm () << "],"
                << "[RootPartyContraTrader=" << getRootPartyContraTrader () << "],"
                << "[Pad4=" << getPad4 () << "],"
                << "[CrossRequestSideGrp=" << eti::toString (getCrossRequestSideGrp ()) << "],"
                << "[SideCrossLegGrp=" << eti::toString (getSideCrossLegGrp ()) << "]";
            return sss.str();
        }
};

const int64_t eurexEnterCLIPRequestPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t eurexEnterCLIPRequestPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t eurexEnterCLIPRequestPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double eurexEnterCLIPRequestPacket::PRICE_MIN = -92233720368.54775807;
const double eurexEnterCLIPRequestPacket::PRICE_MAX = 92233720368.54775807;
const int64_t eurexEnterCLIPRequestPacket::PRICE_NO_VALUE = 0x8000000000000000;
const double eurexEnterCLIPRequestPacket::ORDER_QTY_MIN = -922337203685477.5807;
const double eurexEnterCLIPRequestPacket::ORDER_QTY_MAX = 922337203685477.5807;
const int64_t eurexEnterCLIPRequestPacket::ORDER_QTY_NO_VALUE = 0x8000000000000000;
const int32_t eurexEnterCLIPRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexEnterCLIPRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexEnterCLIPRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int32_t eurexEnterCLIPRequestPacket::CROSS_ID_MIN = -2147483647;
const int32_t eurexEnterCLIPRequestPacket::CROSS_ID_MAX = 2147483647;
const int32_t eurexEnterCLIPRequestPacket::CROSS_ID_NO_VALUE = 0x80000000;
const int32_t eurexEnterCLIPRequestPacket::CROSS_REQUEST_ID_MIN = -2147483647;
const int32_t eurexEnterCLIPRequestPacket::CROSS_REQUEST_ID_MAX = 2147483647;
const int32_t eurexEnterCLIPRequestPacket::CROSS_REQUEST_ID_NO_VALUE = 0x80000000;
const int8_t eurexEnterCLIPRequestPacket::NO_SIDES_MIN = 1;
const int8_t eurexEnterCLIPRequestPacket::NO_SIDES_MAX = 2;
const int8_t eurexEnterCLIPRequestPacket::NO_SIDES_NO_VALUE = 0xFF;
const int8_t eurexEnterCLIPRequestPacket::NO_CROSS_LEGS_MIN = 0;
const int8_t eurexEnterCLIPRequestPacket::NO_CROSS_LEGS_MAX = 40;
const int8_t eurexEnterCLIPRequestPacket::NO_CROSS_LEGS_NO_VALUE = 0xFF;
const int8_t eurexEnterCLIPRequestPacket::SIDE_DISCLOSURE_INSTRUCTION_MIN = 0;
const int8_t eurexEnterCLIPRequestPacket::SIDE_DISCLOSURE_INSTRUCTION_MAX = 1;
const int8_t eurexEnterCLIPRequestPacket::SIDE_DISCLOSURE_INSTRUCTION_NO_VALUE = 0xFF;
const int8_t eurexEnterCLIPRequestPacket::PRICE_DISCLOSURE_INSTRUCTION_MIN = 0;
const int8_t eurexEnterCLIPRequestPacket::PRICE_DISCLOSURE_INSTRUCTION_MAX = 1;
const int8_t eurexEnterCLIPRequestPacket::PRICE_DISCLOSURE_INSTRUCTION_NO_VALUE = 0xFF;
const int8_t eurexEnterCLIPRequestPacket::ORDER_QTY_DISCLOSURE_INSTRUCTION_MIN = 0;
const int8_t eurexEnterCLIPRequestPacket::ORDER_QTY_DISCLOSURE_INSTRUCTION_MAX = 1;
const int8_t eurexEnterCLIPRequestPacket::ORDER_QTY_DISCLOSURE_INSTRUCTION_NO_VALUE = 0xFF;
const char eurexEnterCLIPRequestPacket::ROOT_PARTY_CONTRA_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexEnterCLIPRequestPacket::ROOT_PARTY_CONTRA_FIRM_MAX_LENGTH = 5;
const char eurexEnterCLIPRequestPacket::ROOT_PARTY_CONTRA_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexEnterCLIPRequestPacket::ROOT_PARTY_CONTRA_TRADER_MAX_LENGTH = 6;
const char eurexEnterCLIPRequestPacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t eurexEnterCLIPRequestPacket::PAD4_MAX_LENGTH = 4;
const size_t eurexEnterCLIPRequestPacket::CROSS_REQUEST_SIDE_GRP_MIN = 1;
const size_t eurexEnterCLIPRequestPacket::CROSS_REQUEST_SIDE_GRP_MAX = 2;
const size_t eurexEnterCLIPRequestPacket::SIDE_CROSS_LEG_GRP_MIN = 0;
const size_t eurexEnterCLIPRequestPacket::SIDE_CROSS_LEG_GRP_MAX = 40;


} // namespace neueda

#endif // EUREX_ENTERCLIPREQUEST_PACKET_H
