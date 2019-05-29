/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_SRQSOPENNEGOTIATIONREQUEST_PACKET_H
#define EUREX_SRQSOPENNEGOTIATIONREQUEST_PACKET_H

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

class eurexSRQSOpenNegotiationRequestPacket
{
    public:
        // no value constants
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const double BID_PX_MIN;
        static const double BID_PX_MAX;
        static const int64_t BID_PX_NO_VALUE;
        static const double OFFER_PX_MIN;
        static const double OFFER_PX_MAX;
        static const int64_t OFFER_PX_NO_VALUE;
        static const double ORDER_QTY_MIN;
        static const double ORDER_QTY_MAX;
        static const int64_t ORDER_QTY_NO_VALUE;
        static const double QUOTE_REF_PRICE_MIN;
        static const double QUOTE_REF_PRICE_MAX;
        static const int64_t QUOTE_REF_PRICE_NO_VALUE;
        static const double UNDERLYING_DELTA_PERCENTAGE_MIN;
        static const double UNDERLYING_DELTA_PERCENTAGE_MAX;
        static const int64_t UNDERLYING_DELTA_PERCENTAGE_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int32_t SECURITY_SUB_TYPE_MIN;
        static const int32_t SECURITY_SUB_TYPE_MAX;
        static const int32_t SECURITY_SUB_TYPE_NO_VALUE;
        static const int8_t QUOTE_TYPE_MIN;
        static const int8_t QUOTE_TYPE_MAX;
        static const int8_t QUOTE_TYPE_NO_VALUE;
        static const int8_t QUOTE_SUB_TYPE_MIN;
        static const int8_t QUOTE_SUB_TYPE_MAX;
        static const int8_t QUOTE_SUB_TYPE_NO_VALUE;
        static const int8_t NO_LEGS_MIN;
        static const int8_t NO_LEGS_MAX;
        static const int8_t NO_LEGS_NO_VALUE;
        static const int8_t NO_TARGET_PARTY_IDS_MIN;
        static const int8_t NO_TARGET_PARTY_IDS_MAX;
        static const int8_t NO_TARGET_PARTY_IDS_NO_VALUE;
        static const int8_t NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_MIN;
        static const int8_t NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_MAX;
        static const int8_t NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_NO_VALUE;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const int8_t QUOTE_REF_PRICE_SOURCE_MIN;
        static const int8_t QUOTE_REF_PRICE_SOURCE_MAX;
        static const int8_t QUOTE_REF_PRICE_SOURCE_NO_VALUE;
        static const int8_t TRADE_UNDERLYING_MIN;
        static const int8_t TRADE_UNDERLYING_MAX;
        static const int8_t TRADE_UNDERLYING_NO_VALUE;
        static const int8_t NEGOTIATE_UNDERLYING_MIN;
        static const int8_t NEGOTIATE_UNDERLYING_MAX;
        static const int8_t NEGOTIATE_UNDERLYING_NO_VALUE;
        static const int8_t PRODUCT_COMPLEX_MIN;
        static const int8_t PRODUCT_COMPLEX_MAX;
        static const int8_t PRODUCT_COMPLEX_NO_VALUE;
        static const char PARTY_EXECUTING_FIRM_NO_VALUE[5];
        static const size_t PARTY_EXECUTING_FIRM_MAX_LENGTH;
        static const char PARTY_EXECUTING_TRADER_NO_VALUE[6];
        static const size_t PARTY_EXECUTING_TRADER_MAX_LENGTH;
        static const char FREE_TEXT5_NO_VALUE[132];
        static const size_t FREE_TEXT5_MAX_LENGTH;
        static const char QUOTE_REQ_ID_NO_VALUE[20];
        static const size_t QUOTE_REQ_ID_MAX_LENGTH;
        static const char PAD3_NO_VALUE[3];
        static const size_t PAD3_MAX_LENGTH;
        static const size_t QUOT_REQ_LEGS_GRP_MIN;
        static const size_t QUOT_REQ_LEGS_GRP_MAX;
        static const size_t TARGET_PARTIES_MIN;
        static const size_t TARGET_PARTIES_MAX;

        // fields (use with care)
        eurexMessageHeaderInCompPacket mMessageHeaderIn;
        eurexRequestHeaderCompPacket mRequestHeader;
        int64_t mSecurityID;
        int64_t mBidPx;
        int64_t mOfferPx;
        int64_t mOrderQty;
        int64_t mQuoteRefPrice;
        int64_t mUnderlyingDeltaPercentage;
        int32_t mMarketSegmentID;
        int32_t mSecuritySubType;
        int8_t mQuoteType;
        int8_t mQuoteSubType;
        int8_t mNoLegs;
        int8_t mNoTargetPartyIDs;
        int8_t mNumberOfRespDisclosureInstruction;
        int8_t mSide;
        int8_t mQuoteRefPriceSource;
        int8_t mTradeUnderlying;
        int8_t mNegotiateUnderlying;
        int8_t mProductComplex;
        char mPartyExecutingFirm[5];
        char mPartyExecutingTrader[6];
        char mFreeText5[132];
        char mQuoteReqID[20];
        char mPad3[3];
        vector<eurexQuotReqLegsGrpCompPacket> mQuotReqLegsGrp;
        vector<eurexTargetPartiesCompPacket> mTargetParties;

        // constructor
        eurexSRQSOpenNegotiationRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10700;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mBidPx = BID_PX_NO_VALUE;
            mOfferPx = OFFER_PX_NO_VALUE;
            mOrderQty = ORDER_QTY_NO_VALUE;
            mQuoteRefPrice = QUOTE_REF_PRICE_NO_VALUE;
            mUnderlyingDeltaPercentage = UNDERLYING_DELTA_PERCENTAGE_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mSecuritySubType = SECURITY_SUB_TYPE_NO_VALUE;
            mQuoteType = QUOTE_TYPE_NO_VALUE;
            mQuoteSubType = QUOTE_SUB_TYPE_NO_VALUE;
            mNoLegs = NO_LEGS_NO_VALUE;
            mNoTargetPartyIDs = NO_TARGET_PARTY_IDS_NO_VALUE;
            mNumberOfRespDisclosureInstruction = NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            mQuoteRefPriceSource = QUOTE_REF_PRICE_SOURCE_NO_VALUE;
            mTradeUnderlying = TRADE_UNDERLYING_NO_VALUE;
            mNegotiateUnderlying = NEGOTIATE_UNDERLYING_NO_VALUE;
            mProductComplex = PRODUCT_COMPLEX_NO_VALUE;
            memcpy(mPartyExecutingFirm, PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mPartyExecutingFirm));
            memcpy(mPartyExecutingTrader, PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mPartyExecutingTrader));
            memcpy(mFreeText5, FREE_TEXT5_NO_VALUE, sizeof (mFreeText5));
            memcpy(mQuoteReqID, QUOTE_REQ_ID_NO_VALUE, sizeof (mQuoteReqID));
            memcpy(mPad3, PAD3_NO_VALUE, sizeof (mPad3));
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

        int32_t getSecuritySubType () const
        {
            return mSecuritySubType;
        }

        bool setSecuritySubType (int32_t v)
        {
            mSecuritySubType = v;
            return ((SECURITY_SUB_TYPE_MIN <= mSecuritySubType && mSecuritySubType <= SECURITY_SUB_TYPE_MAX) || mSecuritySubType == SECURITY_SUB_TYPE_NO_VALUE);
        }

        bool isSecuritySubTypeValid () const
        {
            return (mSecuritySubType != SECURITY_SUB_TYPE_NO_VALUE);
        }

        void resetSecuritySubType ()
        {
            mSecuritySubType = SECURITY_SUB_TYPE_NO_VALUE;
        }

        int8_t getQuoteType () const
        {
            return mQuoteType;
        }

        bool setQuoteType (int8_t v)
        {
            mQuoteType = v;
            return ((QUOTE_TYPE_MIN <= mQuoteType && mQuoteType <= QUOTE_TYPE_MAX) || mQuoteType == QUOTE_TYPE_NO_VALUE);
        }

        bool isQuoteTypeValid () const
        {
            return (mQuoteType != QUOTE_TYPE_NO_VALUE);
        }

        void resetQuoteType ()
        {
            mQuoteType = QUOTE_TYPE_NO_VALUE;
        }

        int8_t getQuoteSubType () const
        {
            return mQuoteSubType;
        }

        bool setQuoteSubType (int8_t v)
        {
            mQuoteSubType = v;
            return ((QUOTE_SUB_TYPE_MIN <= mQuoteSubType && mQuoteSubType <= QUOTE_SUB_TYPE_MAX) || mQuoteSubType == QUOTE_SUB_TYPE_NO_VALUE);
        }

        bool isQuoteSubTypeValid () const
        {
            return (mQuoteSubType != QUOTE_SUB_TYPE_NO_VALUE);
        }

        void resetQuoteSubType ()
        {
            mQuoteSubType = QUOTE_SUB_TYPE_NO_VALUE;
        }

        int8_t getNoLegs () const
        {
            return mNoLegs;
        }

        bool setNoLegs (int8_t v)
        {
            mNoLegs = v;
            return ((NO_LEGS_MIN <= mNoLegs && mNoLegs <= NO_LEGS_MAX) || mNoLegs == NO_LEGS_NO_VALUE);
        }

        bool isNoLegsValid () const
        {
            return (mNoLegs != NO_LEGS_NO_VALUE);
        }

        void resetNoLegs ()
        {
            mNoLegs = NO_LEGS_NO_VALUE;
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

        int8_t getTradeUnderlying () const
        {
            return mTradeUnderlying;
        }

        bool setTradeUnderlying (int8_t v)
        {
            mTradeUnderlying = v;
            return ((TRADE_UNDERLYING_MIN <= mTradeUnderlying && mTradeUnderlying <= TRADE_UNDERLYING_MAX) || mTradeUnderlying == TRADE_UNDERLYING_NO_VALUE);
        }

        bool isTradeUnderlyingValid () const
        {
            return (mTradeUnderlying != TRADE_UNDERLYING_NO_VALUE);
        }

        void resetTradeUnderlying ()
        {
            mTradeUnderlying = TRADE_UNDERLYING_NO_VALUE;
        }

        int8_t getNegotiateUnderlying () const
        {
            return mNegotiateUnderlying;
        }

        bool setNegotiateUnderlying (int8_t v)
        {
            mNegotiateUnderlying = v;
            return ((NEGOTIATE_UNDERLYING_MIN <= mNegotiateUnderlying && mNegotiateUnderlying <= NEGOTIATE_UNDERLYING_MAX) || mNegotiateUnderlying == NEGOTIATE_UNDERLYING_NO_VALUE);
        }

        bool isNegotiateUnderlyingValid () const
        {
            return (mNegotiateUnderlying != NEGOTIATE_UNDERLYING_NO_VALUE);
        }

        void resetNegotiateUnderlying ()
        {
            mNegotiateUnderlying = NEGOTIATE_UNDERLYING_NO_VALUE;
        }

        int8_t getProductComplex () const
        {
            return mProductComplex;
        }

        bool setProductComplex (int8_t v)
        {
            mProductComplex = v;
            return ((PRODUCT_COMPLEX_MIN <= mProductComplex && mProductComplex <= PRODUCT_COMPLEX_MAX) || mProductComplex == PRODUCT_COMPLEX_NO_VALUE);
        }

        bool isProductComplexValid () const
        {
            return (mProductComplex != PRODUCT_COMPLEX_NO_VALUE);
        }

        void resetProductComplex ()
        {
            mProductComplex = PRODUCT_COMPLEX_NO_VALUE;
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

        string getQuoteReqID () const
        {
            return string (mQuoteReqID, QUOTE_REQ_ID_MAX_LENGTH);
        }

        bool setQuoteReqID (const string& v)
        {
            memset (mQuoteReqID, '\0', sizeof (mQuoteReqID));
            size_t size = min ((size_t) v.size (), (size_t) QUOTE_REQ_ID_MAX_LENGTH);
            strncpy (mQuoteReqID, v.c_str (), size);
            return (v.size () <= QUOTE_REQ_ID_MAX_LENGTH);
        }

        bool isQuoteReqIDValid () const
        {
            return (memcmp (mQuoteReqID, QUOTE_REQ_ID_NO_VALUE, sizeof (mQuoteReqID)) != 0);
        }

        void resetQuoteReqID ()
        {
            memcpy (mQuoteReqID, QUOTE_REQ_ID_NO_VALUE, sizeof (mQuoteReqID));
        }

        string getPad3 () const
        {
            return string (mPad3, PAD3_MAX_LENGTH);
        }

        bool setPad3 (const string& v)
        {
            memset (mPad3, '\0', sizeof (mPad3));
            size_t size = min ((size_t) v.size (), (size_t) PAD3_MAX_LENGTH);
            strncpy (mPad3, v.c_str (), size);
            return (v.size () <= PAD3_MAX_LENGTH);
        }

        bool isPad3Valid () const
        {
            return (memcmp (mPad3, PAD3_NO_VALUE, sizeof (mPad3)) != 0);
        }

        void resetPad3 ()
        {
            memcpy (mPad3, PAD3_NO_VALUE, sizeof (mPad3));
        }

        const vector<eurexQuotReqLegsGrpCompPacket>& getQuotReqLegsGrp () const
        {
            return mQuotReqLegsGrp;
        }

        bool setQuotReqLegsGrp (const vector<eurexQuotReqLegsGrpCompPacket>& v)
        {
            mQuotReqLegsGrp = v;
            mNoLegs = v.size ();
            return (QUOT_REQ_LEGS_GRP_MIN <= v.size () && v.size () <= QUOT_REQ_LEGS_GRP_MAX);
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
                + sizeof (mSecurityID)
                + sizeof (mBidPx)
                + sizeof (mOfferPx)
                + sizeof (mOrderQty)
                + sizeof (mQuoteRefPrice)
                + sizeof (mUnderlyingDeltaPercentage)
                + sizeof (mMarketSegmentID)
                + sizeof (mSecuritySubType)
                + sizeof (mQuoteType)
                + sizeof (mQuoteSubType)
                + sizeof (mNoLegs)
                + sizeof (mNoTargetPartyIDs)
                + sizeof (mNumberOfRespDisclosureInstruction)
                + sizeof (mSide)
                + sizeof (mQuoteRefPriceSource)
                + sizeof (mTradeUnderlying)
                + sizeof (mNegotiateUnderlying)
                + sizeof (mProductComplex)
                + sizeof (mPartyExecutingFirm)
                + sizeof (mPartyExecutingTrader)
                + sizeof (mFreeText5)
                + sizeof (mQuoteReqID)
                + sizeof (mPad3)
                + eti::getRawSize (mQuotReqLegsGrp)
                + eti::getRawSize (mTargetParties);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoLegs = mQuotReqLegsGrp.size ();
            mNoTargetPartyIDs = mTargetParties.size ();
            mMessageHeaderIn.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderIn.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mBidPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOfferPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrderQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mQuoteRefPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mUnderlyingDeltaPercentage, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSecuritySubType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mQuoteType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mQuoteSubType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoLegs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoTargetPartyIDs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNumberOfRespDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mQuoteRefPriceSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradeUnderlying, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNegotiateUnderlying, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText5, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mQuoteReqID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mQuotReqLegsGrp.size (); i++)
            {
                state = mQuotReqLegsGrp[i].serialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
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
            state = eti::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mBidPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOfferPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrderQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mQuoteRefPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mUnderlyingDeltaPercentage, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSecuritySubType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mQuoteType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mQuoteSubType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoLegs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoTargetPartyIDs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNumberOfRespDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mQuoteRefPriceSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradeUnderlying, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNegotiateUnderlying, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText5, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mQuoteReqID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mQuotReqLegsGrp.resize (mNoLegs);
            for (vector<eurexQuotReqLegsGrpCompPacket>::iterator it = mQuotReqLegsGrp.begin (); it != mQuotReqLegsGrp.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
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
            sss << "SRQSOpenNegotiationRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[BidPx=" << getBidPx () << "],"
                << "[OfferPx=" << getOfferPx () << "],"
                << "[OrderQty=" << getOrderQty () << "],"
                << "[QuoteRefPrice=" << getQuoteRefPrice () << "],"
                << "[UnderlyingDeltaPercentage=" << getUnderlyingDeltaPercentage () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[SecuritySubType=" << getSecuritySubType () << "],"
                << "[QuoteType=" << getQuoteType () << "],"
                << "[QuoteSubType=" << getQuoteSubType () << "],"
                << "[NoLegs=" << getNoLegs () << "],"
                << "[NoTargetPartyIDs=" << getNoTargetPartyIDs () << "],"
                << "[NumberOfRespDisclosureInstruction=" << getNumberOfRespDisclosureInstruction () << "],"
                << "[Side=" << getSide () << "],"
                << "[QuoteRefPriceSource=" << getQuoteRefPriceSource () << "],"
                << "[TradeUnderlying=" << getTradeUnderlying () << "],"
                << "[NegotiateUnderlying=" << getNegotiateUnderlying () << "],"
                << "[ProductComplex=" << getProductComplex () << "],"
                << "[PartyExecutingFirm=" << getPartyExecutingFirm () << "],"
                << "[PartyExecutingTrader=" << getPartyExecutingTrader () << "],"
                << "[FreeText5=" << getFreeText5 () << "],"
                << "[QuoteReqID=" << getQuoteReqID () << "],"
                << "[Pad3=" << getPad3 () << "],"
                << "[QuotReqLegsGrp=" << eti::toString (getQuotReqLegsGrp ()) << "],"
                << "[TargetParties=" << eti::toString (getTargetParties ()) << "]";
            return sss.str();
        }
};

const int64_t eurexSRQSOpenNegotiationRequestPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t eurexSRQSOpenNegotiationRequestPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t eurexSRQSOpenNegotiationRequestPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double eurexSRQSOpenNegotiationRequestPacket::BID_PX_MIN = -92233720368.54775807;
const double eurexSRQSOpenNegotiationRequestPacket::BID_PX_MAX = 92233720368.54775807;
const int64_t eurexSRQSOpenNegotiationRequestPacket::BID_PX_NO_VALUE = 0x8000000000000000;
const double eurexSRQSOpenNegotiationRequestPacket::OFFER_PX_MIN = -92233720368.54775807;
const double eurexSRQSOpenNegotiationRequestPacket::OFFER_PX_MAX = 92233720368.54775807;
const int64_t eurexSRQSOpenNegotiationRequestPacket::OFFER_PX_NO_VALUE = 0x8000000000000000;
const double eurexSRQSOpenNegotiationRequestPacket::ORDER_QTY_MIN = -922337203685477.5807;
const double eurexSRQSOpenNegotiationRequestPacket::ORDER_QTY_MAX = 922337203685477.5807;
const int64_t eurexSRQSOpenNegotiationRequestPacket::ORDER_QTY_NO_VALUE = 0x8000000000000000;
const double eurexSRQSOpenNegotiationRequestPacket::QUOTE_REF_PRICE_MIN = -92233720368.54775807;
const double eurexSRQSOpenNegotiationRequestPacket::QUOTE_REF_PRICE_MAX = 92233720368.54775807;
const int64_t eurexSRQSOpenNegotiationRequestPacket::QUOTE_REF_PRICE_NO_VALUE = 0x8000000000000000;
const double eurexSRQSOpenNegotiationRequestPacket::UNDERLYING_DELTA_PERCENTAGE_MIN = -922337203685477.5807;
const double eurexSRQSOpenNegotiationRequestPacket::UNDERLYING_DELTA_PERCENTAGE_MAX = 922337203685477.5807;
const int64_t eurexSRQSOpenNegotiationRequestPacket::UNDERLYING_DELTA_PERCENTAGE_NO_VALUE = 0x8000000000000000;
const int32_t eurexSRQSOpenNegotiationRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexSRQSOpenNegotiationRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexSRQSOpenNegotiationRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int32_t eurexSRQSOpenNegotiationRequestPacket::SECURITY_SUB_TYPE_MIN = -2147483647;
const int32_t eurexSRQSOpenNegotiationRequestPacket::SECURITY_SUB_TYPE_MAX = 2147483647;
const int32_t eurexSRQSOpenNegotiationRequestPacket::SECURITY_SUB_TYPE_NO_VALUE = 0x80000000;
const int8_t eurexSRQSOpenNegotiationRequestPacket::QUOTE_TYPE_MIN = 0;
const int8_t eurexSRQSOpenNegotiationRequestPacket::QUOTE_TYPE_MAX = 102;
const int8_t eurexSRQSOpenNegotiationRequestPacket::QUOTE_TYPE_NO_VALUE = 0xFF;
const int8_t eurexSRQSOpenNegotiationRequestPacket::QUOTE_SUB_TYPE_MIN = 1;
const int8_t eurexSRQSOpenNegotiationRequestPacket::QUOTE_SUB_TYPE_MAX = 1;
const int8_t eurexSRQSOpenNegotiationRequestPacket::QUOTE_SUB_TYPE_NO_VALUE = 0xFF;
const int8_t eurexSRQSOpenNegotiationRequestPacket::NO_LEGS_MIN = 0;
const int8_t eurexSRQSOpenNegotiationRequestPacket::NO_LEGS_MAX = 20;
const int8_t eurexSRQSOpenNegotiationRequestPacket::NO_LEGS_NO_VALUE = 0xFF;
const int8_t eurexSRQSOpenNegotiationRequestPacket::NO_TARGET_PARTY_IDS_MIN = 0;
const int8_t eurexSRQSOpenNegotiationRequestPacket::NO_TARGET_PARTY_IDS_MAX = 50;
const int8_t eurexSRQSOpenNegotiationRequestPacket::NO_TARGET_PARTY_IDS_NO_VALUE = 0xFF;
const int8_t eurexSRQSOpenNegotiationRequestPacket::NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_MIN = 0;
const int8_t eurexSRQSOpenNegotiationRequestPacket::NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_MAX = 1;
const int8_t eurexSRQSOpenNegotiationRequestPacket::NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_NO_VALUE = 0xFF;
const int8_t eurexSRQSOpenNegotiationRequestPacket::SIDE_MIN = 1;
const int8_t eurexSRQSOpenNegotiationRequestPacket::SIDE_MAX = 2;
const int8_t eurexSRQSOpenNegotiationRequestPacket::SIDE_NO_VALUE = 0xFF;
const int8_t eurexSRQSOpenNegotiationRequestPacket::QUOTE_REF_PRICE_SOURCE_MIN = 1;
const int8_t eurexSRQSOpenNegotiationRequestPacket::QUOTE_REF_PRICE_SOURCE_MAX = 2;
const int8_t eurexSRQSOpenNegotiationRequestPacket::QUOTE_REF_PRICE_SOURCE_NO_VALUE = 0xFF;
const int8_t eurexSRQSOpenNegotiationRequestPacket::TRADE_UNDERLYING_MIN = 1;
const int8_t eurexSRQSOpenNegotiationRequestPacket::TRADE_UNDERLYING_MAX = 2;
const int8_t eurexSRQSOpenNegotiationRequestPacket::TRADE_UNDERLYING_NO_VALUE = 0xFF;
const int8_t eurexSRQSOpenNegotiationRequestPacket::NEGOTIATE_UNDERLYING_MIN = 0;
const int8_t eurexSRQSOpenNegotiationRequestPacket::NEGOTIATE_UNDERLYING_MAX = 1;
const int8_t eurexSRQSOpenNegotiationRequestPacket::NEGOTIATE_UNDERLYING_NO_VALUE = 0xFF;
const int8_t eurexSRQSOpenNegotiationRequestPacket::PRODUCT_COMPLEX_MIN = 1;
const int8_t eurexSRQSOpenNegotiationRequestPacket::PRODUCT_COMPLEX_MAX = 10;
const int8_t eurexSRQSOpenNegotiationRequestPacket::PRODUCT_COMPLEX_NO_VALUE = 0xFF;
const char eurexSRQSOpenNegotiationRequestPacket::PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSOpenNegotiationRequestPacket::PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char eurexSRQSOpenNegotiationRequestPacket::PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSOpenNegotiationRequestPacket::PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const char eurexSRQSOpenNegotiationRequestPacket::FREE_TEXT5_NO_VALUE[132] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSOpenNegotiationRequestPacket::FREE_TEXT5_MAX_LENGTH = 132;
const char eurexSRQSOpenNegotiationRequestPacket::QUOTE_REQ_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSOpenNegotiationRequestPacket::QUOTE_REQ_ID_MAX_LENGTH = 20;
const char eurexSRQSOpenNegotiationRequestPacket::PAD3_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t eurexSRQSOpenNegotiationRequestPacket::PAD3_MAX_LENGTH = 3;
const size_t eurexSRQSOpenNegotiationRequestPacket::QUOT_REQ_LEGS_GRP_MIN = 0;
const size_t eurexSRQSOpenNegotiationRequestPacket::QUOT_REQ_LEGS_GRP_MAX = 20;
const size_t eurexSRQSOpenNegotiationRequestPacket::TARGET_PARTIES_MIN = 0;
const size_t eurexSRQSOpenNegotiationRequestPacket::TARGET_PARTIES_MAX = 50;


} // namespace neueda

#endif // EUREX_SRQSOPENNEGOTIATIONREQUEST_PACKET_H
