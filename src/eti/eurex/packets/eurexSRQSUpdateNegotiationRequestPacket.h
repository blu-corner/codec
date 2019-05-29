/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_SRQSUPDATENEGOTIATIONREQUEST_PACKET_H
#define EUREX_SRQSUPDATENEGOTIATIONREQUEST_PACKET_H

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

class eurexSRQSUpdateNegotiationRequestPacket
{
    public:
        // no value constants
        static const double QUOTE_REF_PRICE_MIN;
        static const double QUOTE_REF_PRICE_MAX;
        static const int64_t QUOTE_REF_PRICE_NO_VALUE;
        static const double UNDERLYING_DELTA_PERCENTAGE_MIN;
        static const double UNDERLYING_DELTA_PERCENTAGE_MAX;
        static const int64_t UNDERLYING_DELTA_PERCENTAGE_NO_VALUE;
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
        static const int8_t QUOTE_REF_PRICE_SOURCE_MIN;
        static const int8_t QUOTE_REF_PRICE_SOURCE_MAX;
        static const int8_t QUOTE_REF_PRICE_SOURCE_NO_VALUE;
        static const char PARTY_EXECUTING_FIRM_NO_VALUE[5];
        static const size_t PARTY_EXECUTING_FIRM_MAX_LENGTH;
        static const char PARTY_EXECUTING_TRADER_NO_VALUE[6];
        static const size_t PARTY_EXECUTING_TRADER_MAX_LENGTH;
        static const char FREE_TEXT5_NO_VALUE[132];
        static const size_t FREE_TEXT5_MAX_LENGTH;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;
        static const size_t TARGET_PARTIES_MIN;
        static const size_t TARGET_PARTIES_MAX;

        // fields (use with care)
        eurexMessageHeaderInCompPacket mMessageHeaderIn;
        eurexRequestHeaderCompPacket mRequestHeader;
        int64_t mQuoteRefPrice;
        int64_t mUnderlyingDeltaPercentage;
        int64_t mBidPx;
        int64_t mOfferPx;
        int64_t mOrderQty;
        int32_t mMarketSegmentID;
        uint32_t mNegotiationID;
        int8_t mNoTargetPartyIDs;
        int8_t mNumberOfRespDisclosureInstruction;
        int8_t mSide;
        int8_t mQuoteCancelType;
        int8_t mQuoteRefPriceSource;
        char mPartyExecutingFirm[5];
        char mPartyExecutingTrader[6];
        char mFreeText5[132];
        char mPad4[4];
        vector<eurexTargetPartiesCompPacket> mTargetParties;

        // constructor
        eurexSRQSUpdateNegotiationRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10701;
            mQuoteRefPrice = QUOTE_REF_PRICE_NO_VALUE;
            mUnderlyingDeltaPercentage = UNDERLYING_DELTA_PERCENTAGE_NO_VALUE;
            mBidPx = BID_PX_NO_VALUE;
            mOfferPx = OFFER_PX_NO_VALUE;
            mOrderQty = ORDER_QTY_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mNegotiationID = NEGOTIATION_ID_NO_VALUE;
            mNoTargetPartyIDs = NO_TARGET_PARTY_IDS_NO_VALUE;
            mNumberOfRespDisclosureInstruction = NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            mQuoteCancelType = QUOTE_CANCEL_TYPE_NO_VALUE;
            mQuoteRefPriceSource = QUOTE_REF_PRICE_SOURCE_NO_VALUE;
            memcpy(mPartyExecutingFirm, PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mPartyExecutingFirm));
            memcpy(mPartyExecutingTrader, PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mPartyExecutingTrader));
            memcpy(mFreeText5, FREE_TEXT5_NO_VALUE, sizeof (mFreeText5));
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

        double getQuoteRefPrice () const
        {
            return mQuoteRefPrice / 100000000.0;
        }

        bool setQuoteRefPrice (double v)
        {
            mQuoteRefPrice = v * 100000000.0;
            return ((QUOTE_REF_PRICE_MIN <= v && v <= QUOTE_REF_PRICE_MAX) || mQuoteRefPrice == QUOTE_REF_PRICE_NO_VALUE);
        }

        bool isQuoteRefPriceValid () const
        {
            return (mQuoteRefPrice != QUOTE_REF_PRICE_NO_VALUE);
        }

        void resetQuoteRefPrice ()
        {
            mQuoteRefPrice = QUOTE_REF_PRICE_NO_VALUE;
        }

        double getUnderlyingDeltaPercentage () const
        {
            return mUnderlyingDeltaPercentage / 10000.0;
        }

        bool setUnderlyingDeltaPercentage (double v)
        {
            mUnderlyingDeltaPercentage = v * 10000.0;
            return ((UNDERLYING_DELTA_PERCENTAGE_MIN <= v && v <= UNDERLYING_DELTA_PERCENTAGE_MAX) || mUnderlyingDeltaPercentage == UNDERLYING_DELTA_PERCENTAGE_NO_VALUE);
        }

        bool isUnderlyingDeltaPercentageValid () const
        {
            return (mUnderlyingDeltaPercentage != UNDERLYING_DELTA_PERCENTAGE_NO_VALUE);
        }

        void resetUnderlyingDeltaPercentage ()
        {
            mUnderlyingDeltaPercentage = UNDERLYING_DELTA_PERCENTAGE_NO_VALUE;
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

        int8_t getQuoteRefPriceSource () const
        {
            return mQuoteRefPriceSource;
        }

        bool setQuoteRefPriceSource (int8_t v)
        {
            mQuoteRefPriceSource = v;
            return ((QUOTE_REF_PRICE_SOURCE_MIN <= mQuoteRefPriceSource && mQuoteRefPriceSource <= QUOTE_REF_PRICE_SOURCE_MAX) || mQuoteRefPriceSource == QUOTE_REF_PRICE_SOURCE_NO_VALUE);
        }

        bool isQuoteRefPriceSourceValid () const
        {
            return (mQuoteRefPriceSource != QUOTE_REF_PRICE_SOURCE_NO_VALUE);
        }

        void resetQuoteRefPriceSource ()
        {
            mQuoteRefPriceSource = QUOTE_REF_PRICE_SOURCE_NO_VALUE;
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

        const vector<eurexTargetPartiesCompPacket>& getTargetParties () const
        {
            return mTargetParties;
        }

        bool setTargetParties (const vector<eurexTargetPartiesCompPacket>& v)
        {
            mTargetParties = v;
            mNoTargetPartyIDs = v.size ();
            return (TARGET_PARTIES_MIN <= v.size () && v.size () <= TARGET_PARTIES_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mQuoteRefPrice)
                + sizeof (mUnderlyingDeltaPercentage)
                + sizeof (mBidPx)
                + sizeof (mOfferPx)
                + sizeof (mOrderQty)
                + sizeof (mMarketSegmentID)
                + sizeof (mNegotiationID)
                + sizeof (mNoTargetPartyIDs)
                + sizeof (mNumberOfRespDisclosureInstruction)
                + sizeof (mSide)
                + sizeof (mQuoteCancelType)
                + sizeof (mQuoteRefPriceSource)
                + sizeof (mPartyExecutingFirm)
                + sizeof (mPartyExecutingTrader)
                + sizeof (mFreeText5)
                + sizeof (mPad4)
                + eti::getRawSize (mTargetParties);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoTargetPartyIDs = mTargetParties.size ();
            mMessageHeaderIn.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderIn.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mQuoteRefPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mUnderlyingDeltaPercentage, buf, len, used);
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
            state = eti::serialize (mNoTargetPartyIDs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNumberOfRespDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mQuoteCancelType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mQuoteRefPriceSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText5, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mTargetParties.size (); i++)
            {
                state = mTargetParties[i].serialize (buf, len, used);
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
            state = eti::deserialize (mQuoteRefPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mUnderlyingDeltaPercentage, buf, len, used);
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
            state = eti::deserialize (mNoTargetPartyIDs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNumberOfRespDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mQuoteCancelType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mQuoteRefPriceSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText5, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mTargetParties.resize (mNoTargetPartyIDs);
            for (vector<eurexTargetPartiesCompPacket>::iterator it = mTargetParties.begin (); it != mTargetParties.end (); ++it)
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
            sss << "SRQSUpdateNegotiationRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[QuoteRefPrice=" << getQuoteRefPrice () << "],"
                << "[UnderlyingDeltaPercentage=" << getUnderlyingDeltaPercentage () << "],"
                << "[BidPx=" << getBidPx () << "],"
                << "[OfferPx=" << getOfferPx () << "],"
                << "[OrderQty=" << getOrderQty () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[NegotiationID=" << getNegotiationID () << "],"
                << "[NoTargetPartyIDs=" << getNoTargetPartyIDs () << "],"
                << "[NumberOfRespDisclosureInstruction=" << getNumberOfRespDisclosureInstruction () << "],"
                << "[Side=" << getSide () << "],"
                << "[QuoteCancelType=" << getQuoteCancelType () << "],"
                << "[QuoteRefPriceSource=" << getQuoteRefPriceSource () << "],"
                << "[PartyExecutingFirm=" << getPartyExecutingFirm () << "],"
                << "[PartyExecutingTrader=" << getPartyExecutingTrader () << "],"
                << "[FreeText5=" << getFreeText5 () << "],"
                << "[Pad4=" << getPad4 () << "],"
                << "[TargetParties=" << eti::toString (getTargetParties ()) << "]";
            return sss.str();
        }
};

const double eurexSRQSUpdateNegotiationRequestPacket::QUOTE_REF_PRICE_MIN = -92233720368.54775807;
const double eurexSRQSUpdateNegotiationRequestPacket::QUOTE_REF_PRICE_MAX = 92233720368.54775807;
const int64_t eurexSRQSUpdateNegotiationRequestPacket::QUOTE_REF_PRICE_NO_VALUE = 0x8000000000000000;
const double eurexSRQSUpdateNegotiationRequestPacket::UNDERLYING_DELTA_PERCENTAGE_MIN = -922337203685477.5807;
const double eurexSRQSUpdateNegotiationRequestPacket::UNDERLYING_DELTA_PERCENTAGE_MAX = 922337203685477.5807;
const int64_t eurexSRQSUpdateNegotiationRequestPacket::UNDERLYING_DELTA_PERCENTAGE_NO_VALUE = 0x8000000000000000;
const double eurexSRQSUpdateNegotiationRequestPacket::BID_PX_MIN = -92233720368.54775807;
const double eurexSRQSUpdateNegotiationRequestPacket::BID_PX_MAX = 92233720368.54775807;
const int64_t eurexSRQSUpdateNegotiationRequestPacket::BID_PX_NO_VALUE = 0x8000000000000000;
const double eurexSRQSUpdateNegotiationRequestPacket::OFFER_PX_MIN = -92233720368.54775807;
const double eurexSRQSUpdateNegotiationRequestPacket::OFFER_PX_MAX = 92233720368.54775807;
const int64_t eurexSRQSUpdateNegotiationRequestPacket::OFFER_PX_NO_VALUE = 0x8000000000000000;
const double eurexSRQSUpdateNegotiationRequestPacket::ORDER_QTY_MIN = -922337203685477.5807;
const double eurexSRQSUpdateNegotiationRequestPacket::ORDER_QTY_MAX = 922337203685477.5807;
const int64_t eurexSRQSUpdateNegotiationRequestPacket::ORDER_QTY_NO_VALUE = 0x8000000000000000;
const int32_t eurexSRQSUpdateNegotiationRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexSRQSUpdateNegotiationRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexSRQSUpdateNegotiationRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t eurexSRQSUpdateNegotiationRequestPacket::NEGOTIATION_ID_MIN = 0;
const uint32_t eurexSRQSUpdateNegotiationRequestPacket::NEGOTIATION_ID_MAX = 4294967294;
const uint32_t eurexSRQSUpdateNegotiationRequestPacket::NEGOTIATION_ID_NO_VALUE = 0xFFFFFFFF;
const int8_t eurexSRQSUpdateNegotiationRequestPacket::NO_TARGET_PARTY_IDS_MIN = 0;
const int8_t eurexSRQSUpdateNegotiationRequestPacket::NO_TARGET_PARTY_IDS_MAX = 50;
const int8_t eurexSRQSUpdateNegotiationRequestPacket::NO_TARGET_PARTY_IDS_NO_VALUE = 0xFF;
const int8_t eurexSRQSUpdateNegotiationRequestPacket::NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_MIN = 0;
const int8_t eurexSRQSUpdateNegotiationRequestPacket::NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_MAX = 1;
const int8_t eurexSRQSUpdateNegotiationRequestPacket::NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_NO_VALUE = 0xFF;
const int8_t eurexSRQSUpdateNegotiationRequestPacket::SIDE_MIN = 1;
const int8_t eurexSRQSUpdateNegotiationRequestPacket::SIDE_MAX = 2;
const int8_t eurexSRQSUpdateNegotiationRequestPacket::SIDE_NO_VALUE = 0xFF;
const int8_t eurexSRQSUpdateNegotiationRequestPacket::QUOTE_CANCEL_TYPE_MIN = 4;
const int8_t eurexSRQSUpdateNegotiationRequestPacket::QUOTE_CANCEL_TYPE_MAX = 4;
const int8_t eurexSRQSUpdateNegotiationRequestPacket::QUOTE_CANCEL_TYPE_NO_VALUE = 0xFF;
const int8_t eurexSRQSUpdateNegotiationRequestPacket::QUOTE_REF_PRICE_SOURCE_MIN = 1;
const int8_t eurexSRQSUpdateNegotiationRequestPacket::QUOTE_REF_PRICE_SOURCE_MAX = 2;
const int8_t eurexSRQSUpdateNegotiationRequestPacket::QUOTE_REF_PRICE_SOURCE_NO_VALUE = 0xFF;
const char eurexSRQSUpdateNegotiationRequestPacket::PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSUpdateNegotiationRequestPacket::PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char eurexSRQSUpdateNegotiationRequestPacket::PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSUpdateNegotiationRequestPacket::PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const char eurexSRQSUpdateNegotiationRequestPacket::FREE_TEXT5_NO_VALUE[132] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSUpdateNegotiationRequestPacket::FREE_TEXT5_MAX_LENGTH = 132;
const char eurexSRQSUpdateNegotiationRequestPacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSUpdateNegotiationRequestPacket::PAD4_MAX_LENGTH = 4;
const size_t eurexSRQSUpdateNegotiationRequestPacket::TARGET_PARTIES_MIN = 0;
const size_t eurexSRQSUpdateNegotiationRequestPacket::TARGET_PARTIES_MAX = 50;


} // namespace neueda

#endif // EUREX_SRQSUPDATENEGOTIATIONREQUEST_PACKET_H
