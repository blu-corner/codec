/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef XETRA_XETRAENLIGHTOPENNEGOTIATIONREQUEST_PACKET_H
#define XETRA_XETRAENLIGHTOPENNEGOTIATIONREQUEST_PACKET_H

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

class xetraXetraEnLightOpenNegotiationRequestPacket
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
        static const uint64_t VALID_UNTIL_TIME_MIN;
        static const uint64_t VALID_UNTIL_TIME_MAX;
        static const uint64_t VALID_UNTIL_TIME_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
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
        static const int8_t VALUE_CHECK_TYPE_VALUE_MIN;
        static const int8_t VALUE_CHECK_TYPE_VALUE_MAX;
        static const int8_t VALUE_CHECK_TYPE_VALUE_NO_VALUE;
        static const int8_t VALUE_CHECK_TYPE_QUANTITY_MIN;
        static const int8_t VALUE_CHECK_TYPE_QUANTITY_MAX;
        static const int8_t VALUE_CHECK_TYPE_QUANTITY_NO_VALUE;
        static const int8_t RESPONDENT_TYPE_MIN;
        static const int8_t RESPONDENT_TYPE_MAX;
        static const int8_t RESPONDENT_TYPE_NO_VALUE;
        static const char PARTY_EXECUTING_FIRM_NO_VALUE[5];
        static const size_t PARTY_EXECUTING_FIRM_MAX_LENGTH;
        static const char PARTY_EXECUTING_TRADER_NO_VALUE[6];
        static const size_t PARTY_EXECUTING_TRADER_MAX_LENGTH;
        static const char FREE_TEXT5_NO_VALUE[132];
        static const size_t FREE_TEXT5_MAX_LENGTH;
        static const char QUOTE_REQ_ID_NO_VALUE[20];
        static const size_t QUOTE_REQ_ID_MAX_LENGTH;
        static const char PAD7_NO_VALUE[7];
        static const size_t PAD7_MAX_LENGTH;
        static const size_t XETRA_EN_LIGHT_TARGET_PARTIES_MIN;
        static const size_t XETRA_EN_LIGHT_TARGET_PARTIES_MAX;

        // fields (use with care)
        xetraMessageHeaderInCompPacket mMessageHeaderIn;
        xetraRequestHeaderCompPacket mRequestHeader;
        int64_t mSecurityID;
        int64_t mBidPx;
        int64_t mOfferPx;
        int64_t mOrderQty;
        uint64_t mValidUntilTime;
        int32_t mMarketSegmentID;
        int32_t mSettlDate;
        int8_t mNoTargetPartyIDs;
        int8_t mNumberOfRespDisclosureInstruction;
        int8_t mSide;
        int8_t mValueCheckTypeValue;
        int8_t mValueCheckTypeQuantity;
        int8_t mRespondentType;
        char mPartyExecutingFirm[5];
        char mPartyExecutingTrader[6];
        char mFreeText5[132];
        char mQuoteReqID[20];
        char mPad7[7];
        vector<xetraXetraEnLightTargetPartiesCompPacket> mXetraEnLightTargetParties;

        // constructor
        xetraXetraEnLightOpenNegotiationRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10800;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mBidPx = BID_PX_NO_VALUE;
            mOfferPx = OFFER_PX_NO_VALUE;
            mOrderQty = ORDER_QTY_NO_VALUE;
            mValidUntilTime = VALID_UNTIL_TIME_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mSettlDate = SETTL_DATE_NO_VALUE;
            mNoTargetPartyIDs = NO_TARGET_PARTY_IDS_NO_VALUE;
            mNumberOfRespDisclosureInstruction = NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            mValueCheckTypeValue = VALUE_CHECK_TYPE_VALUE_NO_VALUE;
            mValueCheckTypeQuantity = VALUE_CHECK_TYPE_QUANTITY_NO_VALUE;
            mRespondentType = RESPONDENT_TYPE_NO_VALUE;
            memcpy(mPartyExecutingFirm, PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mPartyExecutingFirm));
            memcpy(mPartyExecutingTrader, PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mPartyExecutingTrader));
            memcpy(mFreeText5, FREE_TEXT5_NO_VALUE, sizeof (mFreeText5));
            memcpy(mQuoteReqID, QUOTE_REQ_ID_NO_VALUE, sizeof (mQuoteReqID));
            memcpy(mPad7, PAD7_NO_VALUE, sizeof (mPad7));
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

        uint64_t getValidUntilTime () const
        {
            return mValidUntilTime;
        }

        bool setValidUntilTime (uint64_t v)
        {
            mValidUntilTime = v;
            return ((VALID_UNTIL_TIME_MIN <= mValidUntilTime && mValidUntilTime <= VALID_UNTIL_TIME_MAX) || mValidUntilTime == VALID_UNTIL_TIME_NO_VALUE);
        }

        bool isValidUntilTimeValid () const
        {
            return (mValidUntilTime != VALID_UNTIL_TIME_NO_VALUE);
        }

        void resetValidUntilTime ()
        {
            mValidUntilTime = VALID_UNTIL_TIME_NO_VALUE;
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

        int8_t getValueCheckTypeValue () const
        {
            return mValueCheckTypeValue;
        }

        bool setValueCheckTypeValue (int8_t v)
        {
            mValueCheckTypeValue = v;
            return ((VALUE_CHECK_TYPE_VALUE_MIN <= mValueCheckTypeValue && mValueCheckTypeValue <= VALUE_CHECK_TYPE_VALUE_MAX) || mValueCheckTypeValue == VALUE_CHECK_TYPE_VALUE_NO_VALUE);
        }

        bool isValueCheckTypeValueValid () const
        {
            return (mValueCheckTypeValue != VALUE_CHECK_TYPE_VALUE_NO_VALUE);
        }

        void resetValueCheckTypeValue ()
        {
            mValueCheckTypeValue = VALUE_CHECK_TYPE_VALUE_NO_VALUE;
        }

        int8_t getValueCheckTypeQuantity () const
        {
            return mValueCheckTypeQuantity;
        }

        bool setValueCheckTypeQuantity (int8_t v)
        {
            mValueCheckTypeQuantity = v;
            return ((VALUE_CHECK_TYPE_QUANTITY_MIN <= mValueCheckTypeQuantity && mValueCheckTypeQuantity <= VALUE_CHECK_TYPE_QUANTITY_MAX) || mValueCheckTypeQuantity == VALUE_CHECK_TYPE_QUANTITY_NO_VALUE);
        }

        bool isValueCheckTypeQuantityValid () const
        {
            return (mValueCheckTypeQuantity != VALUE_CHECK_TYPE_QUANTITY_NO_VALUE);
        }

        void resetValueCheckTypeQuantity ()
        {
            mValueCheckTypeQuantity = VALUE_CHECK_TYPE_QUANTITY_NO_VALUE;
        }

        int8_t getRespondentType () const
        {
            return mRespondentType;
        }

        bool setRespondentType (int8_t v)
        {
            mRespondentType = v;
            return ((RESPONDENT_TYPE_MIN <= mRespondentType && mRespondentType <= RESPONDENT_TYPE_MAX) || mRespondentType == RESPONDENT_TYPE_NO_VALUE);
        }

        bool isRespondentTypeValid () const
        {
            return (mRespondentType != RESPONDENT_TYPE_NO_VALUE);
        }

        void resetRespondentType ()
        {
            mRespondentType = RESPONDENT_TYPE_NO_VALUE;
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
                + sizeof (mSecurityID)
                + sizeof (mBidPx)
                + sizeof (mOfferPx)
                + sizeof (mOrderQty)
                + sizeof (mValidUntilTime)
                + sizeof (mMarketSegmentID)
                + sizeof (mSettlDate)
                + sizeof (mNoTargetPartyIDs)
                + sizeof (mNumberOfRespDisclosureInstruction)
                + sizeof (mSide)
                + sizeof (mValueCheckTypeValue)
                + sizeof (mValueCheckTypeQuantity)
                + sizeof (mRespondentType)
                + sizeof (mPartyExecutingFirm)
                + sizeof (mPartyExecutingTrader)
                + sizeof (mFreeText5)
                + sizeof (mQuoteReqID)
                + sizeof (mPad7)
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
            state = eti::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mBidPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOfferPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrderQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mValidUntilTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSettlDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoTargetPartyIDs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNumberOfRespDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mValueCheckTypeValue, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mValueCheckTypeQuantity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRespondentType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText5, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mQuoteReqID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad7, buf, len, used);
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
            state = eti::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mBidPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOfferPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrderQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mValidUntilTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSettlDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoTargetPartyIDs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNumberOfRespDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mValueCheckTypeValue, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mValueCheckTypeQuantity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRespondentType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText5, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mQuoteReqID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad7, buf, len, used);
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
            sss << "XetraEnLightOpenNegotiationRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[BidPx=" << getBidPx () << "],"
                << "[OfferPx=" << getOfferPx () << "],"
                << "[OrderQty=" << getOrderQty () << "],"
                << "[ValidUntilTime=" << getValidUntilTime () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[SettlDate=" << getSettlDate () << "],"
                << "[NoTargetPartyIDs=" << getNoTargetPartyIDs () << "],"
                << "[NumberOfRespDisclosureInstruction=" << getNumberOfRespDisclosureInstruction () << "],"
                << "[Side=" << getSide () << "],"
                << "[ValueCheckTypeValue=" << getValueCheckTypeValue () << "],"
                << "[ValueCheckTypeQuantity=" << getValueCheckTypeQuantity () << "],"
                << "[RespondentType=" << getRespondentType () << "],"
                << "[PartyExecutingFirm=" << getPartyExecutingFirm () << "],"
                << "[PartyExecutingTrader=" << getPartyExecutingTrader () << "],"
                << "[FreeText5=" << getFreeText5 () << "],"
                << "[QuoteReqID=" << getQuoteReqID () << "],"
                << "[Pad7=" << getPad7 () << "],"
                << "[XetraEnLightTargetParties=" << eti::toString (getXetraEnLightTargetParties ()) << "]";
            return sss.str();
        }
};

const int64_t xetraXetraEnLightOpenNegotiationRequestPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraXetraEnLightOpenNegotiationRequestPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraXetraEnLightOpenNegotiationRequestPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double xetraXetraEnLightOpenNegotiationRequestPacket::BID_PX_MIN = -92233720368.54775807;
const double xetraXetraEnLightOpenNegotiationRequestPacket::BID_PX_MAX = 92233720368.54775807;
const int64_t xetraXetraEnLightOpenNegotiationRequestPacket::BID_PX_NO_VALUE = 0x8000000000000000;
const double xetraXetraEnLightOpenNegotiationRequestPacket::OFFER_PX_MIN = -92233720368.54775807;
const double xetraXetraEnLightOpenNegotiationRequestPacket::OFFER_PX_MAX = 92233720368.54775807;
const int64_t xetraXetraEnLightOpenNegotiationRequestPacket::OFFER_PX_NO_VALUE = 0x8000000000000000;
const double xetraXetraEnLightOpenNegotiationRequestPacket::ORDER_QTY_MIN = -922337203685477.5807;
const double xetraXetraEnLightOpenNegotiationRequestPacket::ORDER_QTY_MAX = 922337203685477.5807;
const int64_t xetraXetraEnLightOpenNegotiationRequestPacket::ORDER_QTY_NO_VALUE = 0x8000000000000000;
const uint64_t xetraXetraEnLightOpenNegotiationRequestPacket::VALID_UNTIL_TIME_MIN = 0UL;
const uint64_t xetraXetraEnLightOpenNegotiationRequestPacket::VALID_UNTIL_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraXetraEnLightOpenNegotiationRequestPacket::VALID_UNTIL_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int32_t xetraXetraEnLightOpenNegotiationRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraXetraEnLightOpenNegotiationRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraXetraEnLightOpenNegotiationRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int32_t xetraXetraEnLightOpenNegotiationRequestPacket::SETTL_DATE_MIN = 0;
const int32_t xetraXetraEnLightOpenNegotiationRequestPacket::SETTL_DATE_MAX = 99991231;
const int32_t xetraXetraEnLightOpenNegotiationRequestPacket::SETTL_DATE_NO_VALUE = 0xFFFFFFFF;
const int8_t xetraXetraEnLightOpenNegotiationRequestPacket::NO_TARGET_PARTY_IDS_MIN = 0;
const int8_t xetraXetraEnLightOpenNegotiationRequestPacket::NO_TARGET_PARTY_IDS_MAX = 50;
const int8_t xetraXetraEnLightOpenNegotiationRequestPacket::NO_TARGET_PARTY_IDS_NO_VALUE = 0xFF;
const int8_t xetraXetraEnLightOpenNegotiationRequestPacket::NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_MIN = 0;
const int8_t xetraXetraEnLightOpenNegotiationRequestPacket::NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_MAX = 1;
const int8_t xetraXetraEnLightOpenNegotiationRequestPacket::NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_NO_VALUE = 0xFF;
const int8_t xetraXetraEnLightOpenNegotiationRequestPacket::SIDE_MIN = 1;
const int8_t xetraXetraEnLightOpenNegotiationRequestPacket::SIDE_MAX = 2;
const int8_t xetraXetraEnLightOpenNegotiationRequestPacket::SIDE_NO_VALUE = 0xFF;
const int8_t xetraXetraEnLightOpenNegotiationRequestPacket::VALUE_CHECK_TYPE_VALUE_MIN = 0;
const int8_t xetraXetraEnLightOpenNegotiationRequestPacket::VALUE_CHECK_TYPE_VALUE_MAX = 1;
const int8_t xetraXetraEnLightOpenNegotiationRequestPacket::VALUE_CHECK_TYPE_VALUE_NO_VALUE = 0xFF;
const int8_t xetraXetraEnLightOpenNegotiationRequestPacket::VALUE_CHECK_TYPE_QUANTITY_MIN = 0;
const int8_t xetraXetraEnLightOpenNegotiationRequestPacket::VALUE_CHECK_TYPE_QUANTITY_MAX = 1;
const int8_t xetraXetraEnLightOpenNegotiationRequestPacket::VALUE_CHECK_TYPE_QUANTITY_NO_VALUE = 0xFF;
const int8_t xetraXetraEnLightOpenNegotiationRequestPacket::RESPONDENT_TYPE_MIN = 2;
const int8_t xetraXetraEnLightOpenNegotiationRequestPacket::RESPONDENT_TYPE_MAX = 101;
const int8_t xetraXetraEnLightOpenNegotiationRequestPacket::RESPONDENT_TYPE_NO_VALUE = 0xFF;
const char xetraXetraEnLightOpenNegotiationRequestPacket::PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightOpenNegotiationRequestPacket::PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char xetraXetraEnLightOpenNegotiationRequestPacket::PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightOpenNegotiationRequestPacket::PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const char xetraXetraEnLightOpenNegotiationRequestPacket::FREE_TEXT5_NO_VALUE[132] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightOpenNegotiationRequestPacket::FREE_TEXT5_MAX_LENGTH = 132;
const char xetraXetraEnLightOpenNegotiationRequestPacket::QUOTE_REQ_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightOpenNegotiationRequestPacket::QUOTE_REQ_ID_MAX_LENGTH = 20;
const char xetraXetraEnLightOpenNegotiationRequestPacket::PAD7_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightOpenNegotiationRequestPacket::PAD7_MAX_LENGTH = 7;
const size_t xetraXetraEnLightOpenNegotiationRequestPacket::XETRA_EN_LIGHT_TARGET_PARTIES_MIN = 0;
const size_t xetraXetraEnLightOpenNegotiationRequestPacket::XETRA_EN_LIGHT_TARGET_PARTIES_MAX = 50;


} // namespace neueda

#endif // XETRA_XETRAENLIGHTOPENNEGOTIATIONREQUEST_PACKET_H
