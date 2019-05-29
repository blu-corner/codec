/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef XETRA_XETRAENLIGHTUPDATENEGOTIATIONREQUEST_PACKET_H
#define XETRA_XETRAENLIGHTUPDATENEGOTIATIONREQUEST_PACKET_H

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

class xetraXetraEnLightUpdateNegotiationRequestPacket
{
    public:
        // no value constants
        static const double BID_PX_MIN;
        static const double BID_PX_MAX;
        static const int64_t BID_PX_NO_VALUE;
        static const double OFFER_PX_MIN;
        static const double OFFER_PX_MAX;
        static const int64_t OFFER_PX_NO_VALUE;
        static const double ORDER_QTY_MIN;
        static const double ORDER_QTY_MAX;
        static const int64_t ORDER_QTY_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const uint32_t NEGOTIATION_ID_MIN;
        static const uint32_t NEGOTIATION_ID_MAX;
        static const uint32_t NEGOTIATION_ID_NO_VALUE;
        static const int32_t SETTL_DATE_MIN;
        static const int32_t SETTL_DATE_MAX;
        static const int32_t SETTL_DATE_NO_VALUE;
        static const int8_t NO_TARGET_PARTY_IDS_MIN;
        static const int8_t NO_TARGET_PARTY_IDS_MAX;
        static const int8_t NO_TARGET_PARTY_IDS_NO_VALUE;
        static const int8_t NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_MIN;
        static const int8_t NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_MAX;
        static const int8_t NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_NO_VALUE;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const int8_t QUOTE_CANCEL_TYPE_MIN;
        static const int8_t QUOTE_CANCEL_TYPE_MAX;
        static const int8_t QUOTE_CANCEL_TYPE_NO_VALUE;
        static const char PARTY_EXECUTING_FIRM_NO_VALUE[5];
        static const size_t PARTY_EXECUTING_FIRM_MAX_LENGTH;
        static const char PARTY_EXECUTING_TRADER_NO_VALUE[6];
        static const size_t PARTY_EXECUTING_TRADER_MAX_LENGTH;
        static const char FREE_TEXT5_NO_VALUE[132];
        static const size_t FREE_TEXT5_MAX_LENGTH;
        static const char PAD1_NO_VALUE[1];
        static const size_t PAD1_MAX_LENGTH;
        static const size_t XETRA_EN_LIGHT_TARGET_PARTIES_MIN;
        static const size_t XETRA_EN_LIGHT_TARGET_PARTIES_MAX;

        // fields (use with care)
        xetraMessageHeaderInCompPacket mMessageHeaderIn;
        xetraRequestHeaderCompPacket mRequestHeader;
        int64_t mBidPx;
        int64_t mOfferPx;
        int64_t mOrderQty;
        int32_t mMarketSegmentID;
        uint32_t mNegotiationID;
        int32_t mSettlDate;
        int8_t mNoTargetPartyIDs;
        int8_t mNumberOfRespDisclosureInstruction;
        int8_t mSide;
        int8_t mQuoteCancelType;
        char mPartyExecutingFirm[5];
        char mPartyExecutingTrader[6];
        char mFreeText5[132];
        char mPad1[1];
        vector<xetraXetraEnLightTargetPartiesCompPacket> mXetraEnLightTargetParties;

        // constructor
        xetraXetraEnLightUpdateNegotiationRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10801;
            mBidPx = BID_PX_NO_VALUE;
            mOfferPx = OFFER_PX_NO_VALUE;
            mOrderQty = ORDER_QTY_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mNegotiationID = NEGOTIATION_ID_NO_VALUE;
            mSettlDate = SETTL_DATE_NO_VALUE;
            mNoTargetPartyIDs = NO_TARGET_PARTY_IDS_NO_VALUE;
            mNumberOfRespDisclosureInstruction = NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            mQuoteCancelType = QUOTE_CANCEL_TYPE_NO_VALUE;
            memcpy(mPartyExecutingFirm, PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mPartyExecutingFirm));
            memcpy(mPartyExecutingTrader, PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mPartyExecutingTrader));
            memcpy(mFreeText5, FREE_TEXT5_NO_VALUE, sizeof (mFreeText5));
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

        double getBidPx () const
        {
            return mBidPx / 100000000.0;
        }

        bool setBidPx (double v)
        {
            mBidPx = v * 100000000.0;
            return ((BID_PX_MIN <= v && v <= BID_PX_MAX) || mBidPx == BID_PX_NO_VALUE);
        }

        bool isBidPxValid () const
        {
            return (mBidPx != BID_PX_NO_VALUE);
        }

        void resetBidPx ()
        {
            mBidPx = BID_PX_NO_VALUE;
        }

        double getOfferPx () const
        {
            return mOfferPx / 100000000.0;
        }

        bool setOfferPx (double v)
        {
            mOfferPx = v * 100000000.0;
            return ((OFFER_PX_MIN <= v && v <= OFFER_PX_MAX) || mOfferPx == OFFER_PX_NO_VALUE);
        }

        bool isOfferPxValid () const
        {
            return (mOfferPx != OFFER_PX_NO_VALUE);
        }

        void resetOfferPx ()
        {
            mOfferPx = OFFER_PX_NO_VALUE;
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

        int32_t getSettlDate () const
        {
            return mSettlDate;
        }

        bool setSettlDate (int32_t v)
        {
            mSettlDate = v;
            return ((SETTL_DATE_MIN <= mSettlDate && mSettlDate <= SETTL_DATE_MAX) || mSettlDate == SETTL_DATE_NO_VALUE);
        }

        bool isSettlDateValid () const
        {
            return (mSettlDate != SETTL_DATE_NO_VALUE);
        }

        void resetSettlDate ()
        {
            mSettlDate = SETTL_DATE_NO_VALUE;
        }

        int8_t getNoTargetPartyIDs () const
        {
            return mNoTargetPartyIDs;
        }

        bool setNoTargetPartyIDs (int8_t v)
        {
            mNoTargetPartyIDs = v;
            return ((NO_TARGET_PARTY_IDS_MIN <= mNoTargetPartyIDs && mNoTargetPartyIDs <= NO_TARGET_PARTY_IDS_MAX) || mNoTargetPartyIDs == NO_TARGET_PARTY_IDS_NO_VALUE);
        }

        bool isNoTargetPartyIDsValid () const
        {
            return (mNoTargetPartyIDs != NO_TARGET_PARTY_IDS_NO_VALUE);
        }

        void resetNoTargetPartyIDs ()
        {
            mNoTargetPartyIDs = NO_TARGET_PARTY_IDS_NO_VALUE;
        }

        int8_t getNumberOfRespDisclosureInstruction () const
        {
            return mNumberOfRespDisclosureInstruction;
        }

        bool setNumberOfRespDisclosureInstruction (int8_t v)
        {
            mNumberOfRespDisclosureInstruction = v;
            return ((NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_MIN <= mNumberOfRespDisclosureInstruction && mNumberOfRespDisclosureInstruction <= NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_MAX) || mNumberOfRespDisclosureInstruction == NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_NO_VALUE);
        }

        bool isNumberOfRespDisclosureInstructionValid () const
        {
            return (mNumberOfRespDisclosureInstruction != NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_NO_VALUE);
        }

        void resetNumberOfRespDisclosureInstruction ()
        {
            mNumberOfRespDisclosureInstruction = NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_NO_VALUE;
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

        int8_t getQuoteCancelType () const
        {
            return mQuoteCancelType;
        }

        bool setQuoteCancelType (int8_t v)
        {
            mQuoteCancelType = v;
            return ((QUOTE_CANCEL_TYPE_MIN <= mQuoteCancelType && mQuoteCancelType <= QUOTE_CANCEL_TYPE_MAX) || mQuoteCancelType == QUOTE_CANCEL_TYPE_NO_VALUE);
        }

        bool isQuoteCancelTypeValid () const
        {
            return (mQuoteCancelType != QUOTE_CANCEL_TYPE_NO_VALUE);
        }

        void resetQuoteCancelType ()
        {
            mQuoteCancelType = QUOTE_CANCEL_TYPE_NO_VALUE;
        }

        string getPartyExecutingFirm () const
        {
            return string (mPartyExecutingFirm, PARTY_EXECUTING_FIRM_MAX_LENGTH);
        }

        bool setPartyExecutingFirm (const string& v)
        {
            memset (mPartyExecutingFirm, '\0', sizeof (mPartyExecutingFirm));
            size_t size = min ((size_t) v.size (), (size_t) PARTY_EXECUTING_FIRM_MAX_LENGTH);
            strncpy (mPartyExecutingFirm, v.c_str (), size);
            return (v.size () <= PARTY_EXECUTING_FIRM_MAX_LENGTH);
        }

        bool isPartyExecutingFirmValid () const
        {
            return (memcmp (mPartyExecutingFirm, PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mPartyExecutingFirm)) != 0);
        }

        void resetPartyExecutingFirm ()
        {
            memcpy (mPartyExecutingFirm, PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mPartyExecutingFirm));
        }

        string getPartyExecutingTrader () const
        {
            return string (mPartyExecutingTrader, PARTY_EXECUTING_TRADER_MAX_LENGTH);
        }

        bool setPartyExecutingTrader (const string& v)
        {
            memset (mPartyExecutingTrader, '\0', sizeof (mPartyExecutingTrader));
            size_t size = min ((size_t) v.size (), (size_t) PARTY_EXECUTING_TRADER_MAX_LENGTH);
            strncpy (mPartyExecutingTrader, v.c_str (), size);
            return (v.size () <= PARTY_EXECUTING_TRADER_MAX_LENGTH);
        }

        bool isPartyExecutingTraderValid () const
        {
            return (memcmp (mPartyExecutingTrader, PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mPartyExecutingTrader)) != 0);
        }

        void resetPartyExecutingTrader ()
        {
            memcpy (mPartyExecutingTrader, PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mPartyExecutingTrader));
        }

        string getFreeText5 () const
        {
            return string (mFreeText5, FREE_TEXT5_MAX_LENGTH);
        }

        bool setFreeText5 (const string& v)
        {
            memset (mFreeText5, '\0', sizeof (mFreeText5));
            size_t size = min ((size_t) v.size (), (size_t) FREE_TEXT5_MAX_LENGTH);
            strncpy (mFreeText5, v.c_str (), size);
            return (v.size () <= FREE_TEXT5_MAX_LENGTH);
        }

        bool isFreeText5Valid () const
        {
            return (memcmp (mFreeText5, FREE_TEXT5_NO_VALUE, sizeof (mFreeText5)) != 0);
        }

        void resetFreeText5 ()
        {
            memcpy (mFreeText5, FREE_TEXT5_NO_VALUE, sizeof (mFreeText5));
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

        const vector<xetraXetraEnLightTargetPartiesCompPacket>& getXetraEnLightTargetParties () const
        {
            return mXetraEnLightTargetParties;
        }

        bool setXetraEnLightTargetParties (const vector<xetraXetraEnLightTargetPartiesCompPacket>& v)
        {
            mXetraEnLightTargetParties = v;
            mNoTargetPartyIDs = v.size ();
            return (XETRA_EN_LIGHT_TARGET_PARTIES_MIN <= v.size () && v.size () <= XETRA_EN_LIGHT_TARGET_PARTIES_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mBidPx)
                + sizeof (mOfferPx)
                + sizeof (mOrderQty)
                + sizeof (mMarketSegmentID)
                + sizeof (mNegotiationID)
                + sizeof (mSettlDate)
                + sizeof (mNoTargetPartyIDs)
                + sizeof (mNumberOfRespDisclosureInstruction)
                + sizeof (mSide)
                + sizeof (mQuoteCancelType)
                + sizeof (mPartyExecutingFirm)
                + sizeof (mPartyExecutingTrader)
                + sizeof (mFreeText5)
                + sizeof (mPad1)
                + eti::getRawSize (mXetraEnLightTargetParties);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoTargetPartyIDs = mXetraEnLightTargetParties.size ();
            mMessageHeaderIn.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderIn.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mBidPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOfferPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrderQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSettlDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoTargetPartyIDs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNumberOfRespDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mQuoteCancelType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText5, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mXetraEnLightTargetParties.size (); i++)
            {
                state = mXetraEnLightTargetParties[i].serialize (buf, len, used);
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
            state = eti::deserialize (mBidPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOfferPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrderQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSettlDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoTargetPartyIDs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNumberOfRespDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mQuoteCancelType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText5, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mXetraEnLightTargetParties.resize (mNoTargetPartyIDs);
            for (vector<xetraXetraEnLightTargetPartiesCompPacket>::iterator it = mXetraEnLightTargetParties.begin (); it != mXetraEnLightTargetParties.end (); ++it)
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
            sss << "XetraEnLightUpdateNegotiationRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[BidPx=" << getBidPx () << "],"
                << "[OfferPx=" << getOfferPx () << "],"
                << "[OrderQty=" << getOrderQty () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[NegotiationID=" << getNegotiationID () << "],"
                << "[SettlDate=" << getSettlDate () << "],"
                << "[NoTargetPartyIDs=" << getNoTargetPartyIDs () << "],"
                << "[NumberOfRespDisclosureInstruction=" << getNumberOfRespDisclosureInstruction () << "],"
                << "[Side=" << getSide () << "],"
                << "[QuoteCancelType=" << getQuoteCancelType () << "],"
                << "[PartyExecutingFirm=" << getPartyExecutingFirm () << "],"
                << "[PartyExecutingTrader=" << getPartyExecutingTrader () << "],"
                << "[FreeText5=" << getFreeText5 () << "],"
                << "[Pad1=" << getPad1 () << "],"
                << "[XetraEnLightTargetParties=" << eti::toString (getXetraEnLightTargetParties ()) << "]";
            return sss.str();
        }
};

const double xetraXetraEnLightUpdateNegotiationRequestPacket::BID_PX_MIN = -92233720368.54775807;
const double xetraXetraEnLightUpdateNegotiationRequestPacket::BID_PX_MAX = 92233720368.54775807;
const int64_t xetraXetraEnLightUpdateNegotiationRequestPacket::BID_PX_NO_VALUE = 0x8000000000000000;
const double xetraXetraEnLightUpdateNegotiationRequestPacket::OFFER_PX_MIN = -92233720368.54775807;
const double xetraXetraEnLightUpdateNegotiationRequestPacket::OFFER_PX_MAX = 92233720368.54775807;
const int64_t xetraXetraEnLightUpdateNegotiationRequestPacket::OFFER_PX_NO_VALUE = 0x8000000000000000;
const double xetraXetraEnLightUpdateNegotiationRequestPacket::ORDER_QTY_MIN = -922337203685477.5807;
const double xetraXetraEnLightUpdateNegotiationRequestPacket::ORDER_QTY_MAX = 922337203685477.5807;
const int64_t xetraXetraEnLightUpdateNegotiationRequestPacket::ORDER_QTY_NO_VALUE = 0x8000000000000000;
const int32_t xetraXetraEnLightUpdateNegotiationRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraXetraEnLightUpdateNegotiationRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraXetraEnLightUpdateNegotiationRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t xetraXetraEnLightUpdateNegotiationRequestPacket::NEGOTIATION_ID_MIN = 0;
const uint32_t xetraXetraEnLightUpdateNegotiationRequestPacket::NEGOTIATION_ID_MAX = 4294967294;
const uint32_t xetraXetraEnLightUpdateNegotiationRequestPacket::NEGOTIATION_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t xetraXetraEnLightUpdateNegotiationRequestPacket::SETTL_DATE_MIN = 0;
const int32_t xetraXetraEnLightUpdateNegotiationRequestPacket::SETTL_DATE_MAX = 99991231;
const int32_t xetraXetraEnLightUpdateNegotiationRequestPacket::SETTL_DATE_NO_VALUE = 0xFFFFFFFF;
const int8_t xetraXetraEnLightUpdateNegotiationRequestPacket::NO_TARGET_PARTY_IDS_MIN = 0;
const int8_t xetraXetraEnLightUpdateNegotiationRequestPacket::NO_TARGET_PARTY_IDS_MAX = 50;
const int8_t xetraXetraEnLightUpdateNegotiationRequestPacket::NO_TARGET_PARTY_IDS_NO_VALUE = 0xFF;
const int8_t xetraXetraEnLightUpdateNegotiationRequestPacket::NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_MIN = 0;
const int8_t xetraXetraEnLightUpdateNegotiationRequestPacket::NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_MAX = 1;
const int8_t xetraXetraEnLightUpdateNegotiationRequestPacket::NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_NO_VALUE = 0xFF;
const int8_t xetraXetraEnLightUpdateNegotiationRequestPacket::SIDE_MIN = 1;
const int8_t xetraXetraEnLightUpdateNegotiationRequestPacket::SIDE_MAX = 2;
const int8_t xetraXetraEnLightUpdateNegotiationRequestPacket::SIDE_NO_VALUE = 0xFF;
const int8_t xetraXetraEnLightUpdateNegotiationRequestPacket::QUOTE_CANCEL_TYPE_MIN = 4;
const int8_t xetraXetraEnLightUpdateNegotiationRequestPacket::QUOTE_CANCEL_TYPE_MAX = 4;
const int8_t xetraXetraEnLightUpdateNegotiationRequestPacket::QUOTE_CANCEL_TYPE_NO_VALUE = 0xFF;
const char xetraXetraEnLightUpdateNegotiationRequestPacket::PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightUpdateNegotiationRequestPacket::PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char xetraXetraEnLightUpdateNegotiationRequestPacket::PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightUpdateNegotiationRequestPacket::PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const char xetraXetraEnLightUpdateNegotiationRequestPacket::FREE_TEXT5_NO_VALUE[132] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightUpdateNegotiationRequestPacket::FREE_TEXT5_MAX_LENGTH = 132;
const char xetraXetraEnLightUpdateNegotiationRequestPacket::PAD1_NO_VALUE[1] = {0x00};
const size_t xetraXetraEnLightUpdateNegotiationRequestPacket::PAD1_MAX_LENGTH = 1;
const size_t xetraXetraEnLightUpdateNegotiationRequestPacket::XETRA_EN_LIGHT_TARGET_PARTIES_MIN = 0;
const size_t xetraXetraEnLightUpdateNegotiationRequestPacket::XETRA_EN_LIGHT_TARGET_PARTIES_MAX = 50;


} // namespace neueda

#endif // XETRA_XETRAENLIGHTUPDATENEGOTIATIONREQUEST_PACKET_H
