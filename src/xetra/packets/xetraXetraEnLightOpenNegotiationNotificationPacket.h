/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 09/05/2019
 */
#ifndef XETRA_XETRAENLIGHTOPENNEGOTIATIONNOTIFICATION_PACKET_H
#define XETRA_XETRAENLIGHTOPENNEGOTIATIONNOTIFICATION_PACKET_H

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

class xetraXetraEnLightOpenNegotiationNotificationPacket
{
    public:
        // no value constants
        static const uint64_t TRANSACT_TIME_MIN;
        static const uint64_t TRANSACT_TIME_MAX;
        static const uint64_t TRANSACT_TIME_NO_VALUE;
        static const uint64_t NEGOTIATION_START_TIME_MIN;
        static const uint64_t NEGOTIATION_START_TIME_MAX;
        static const uint64_t NEGOTIATION_START_TIME_NO_VALUE;
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const double BID_PX_MIN;
        static const double BID_PX_MAX;
        static const int64_t BID_PX_NO_VALUE;
        static const double OFFER_PX_MIN;
        static const double OFFER_PX_MAX;
        static const int64_t OFFER_PX_NO_VALUE;
        static const double LEAVES_QTY_MIN;
        static const double LEAVES_QTY_MAX;
        static const int64_t LEAVES_QTY_NO_VALUE;
        static const uint64_t EXPIRE_TIME_MIN;
        static const uint64_t EXPIRE_TIME_MAX;
        static const uint64_t EXPIRE_TIME_NO_VALUE;
        static const uint32_t NEGOTIATION_ID_MIN;
        static const uint32_t NEGOTIATION_ID_MAX;
        static const uint32_t NEGOTIATION_ID_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const uint32_t NUMBER_OF_RESPONDENTS_MIN;
        static const uint32_t NUMBER_OF_RESPONDENTS_MAX;
        static const uint32_t NUMBER_OF_RESPONDENTS_NO_VALUE;
        static const int32_t SETTL_DATE_MIN;
        static const int32_t SETTL_DATE_MAX;
        static const int32_t SETTL_DATE_NO_VALUE;
        static const int8_t QUOTE_STATUS_MIN;
        static const int8_t QUOTE_STATUS_MAX;
        static const int8_t QUOTE_STATUS_NO_VALUE;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const int8_t RESPONDENT_TYPE_MIN;
        static const int8_t RESPONDENT_TYPE_MAX;
        static const int8_t RESPONDENT_TYPE_NO_VALUE;
        static const char PARTY_EXECUTING_FIRM_NO_VALUE[5];
        static const size_t PARTY_EXECUTING_FIRM_MAX_LENGTH;
        static const char PARTY_EXECUTING_TRADER_NO_VALUE[6];
        static const size_t PARTY_EXECUTING_TRADER_MAX_LENGTH;
        static const char PARTY_ENTERING_TRADER_NO_VALUE[6];
        static const size_t PARTY_ENTERING_TRADER_MAX_LENGTH;
        static const char TARGET_PARTY_EXECUTING_FIRM_NO_VALUE[5];
        static const size_t TARGET_PARTY_EXECUTING_FIRM_MAX_LENGTH;
        static const char TARGET_PARTY_EXECUTING_TRADER_NO_VALUE[6];
        static const size_t TARGET_PARTY_EXECUTING_TRADER_MAX_LENGTH;
        static const char FIRM_NEGOTIATION_ID_NO_VALUE[20];
        static const size_t FIRM_NEGOTIATION_ID_MAX_LENGTH;
        static const char FREE_TEXT5_NO_VALUE[132];
        static const size_t FREE_TEXT5_MAX_LENGTH;
        static const char PAD1_NO_VALUE[1];
        static const size_t PAD1_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraRBCHeaderCompPacket mRBCHeader;
        uint64_t mTransactTime;
        uint64_t mNegotiationStartTime;
        int64_t mSecurityID;
        int64_t mBidPx;
        int64_t mOfferPx;
        int64_t mLeavesQty;
        uint64_t mExpireTime;
        uint32_t mNegotiationID;
        int32_t mMarketSegmentID;
        uint32_t mNumberOfRespondents;
        int32_t mSettlDate;
        int8_t mQuoteStatus;
        int8_t mSide;
        int8_t mRespondentType;
        char mPartyExecutingFirm[5];
        char mPartyExecutingTrader[6];
        char mPartyEnteringTrader[6];
        char mTargetPartyExecutingFirm[5];
        char mTargetPartyExecutingTrader[6];
        char mFirmNegotiationID[20];
        char mFreeText5[132];
        char mPad1[1];

        // constructor
        xetraXetraEnLightOpenNegotiationNotificationPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10811;
            mTransactTime = TRANSACT_TIME_NO_VALUE;
            mNegotiationStartTime = NEGOTIATION_START_TIME_NO_VALUE;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mBidPx = BID_PX_NO_VALUE;
            mOfferPx = OFFER_PX_NO_VALUE;
            mLeavesQty = LEAVES_QTY_NO_VALUE;
            mExpireTime = EXPIRE_TIME_NO_VALUE;
            mNegotiationID = NEGOTIATION_ID_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mNumberOfRespondents = NUMBER_OF_RESPONDENTS_NO_VALUE;
            mSettlDate = SETTL_DATE_NO_VALUE;
            mQuoteStatus = QUOTE_STATUS_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            mRespondentType = RESPONDENT_TYPE_NO_VALUE;
            memcpy(mPartyExecutingFirm, PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mPartyExecutingFirm));
            memcpy(mPartyExecutingTrader, PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mPartyExecutingTrader));
            memcpy(mPartyEnteringTrader, PARTY_ENTERING_TRADER_NO_VALUE, sizeof (mPartyEnteringTrader));
            memcpy(mTargetPartyExecutingFirm, TARGET_PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mTargetPartyExecutingFirm));
            memcpy(mTargetPartyExecutingTrader, TARGET_PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mTargetPartyExecutingTrader));
            memcpy(mFirmNegotiationID, FIRM_NEGOTIATION_ID_NO_VALUE, sizeof (mFirmNegotiationID));
            memcpy(mFreeText5, FREE_TEXT5_NO_VALUE, sizeof (mFreeText5));
            memcpy(mPad1, PAD1_NO_VALUE, sizeof (mPad1));
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

        const xetraRBCHeaderCompPacket& getRBCHeader () const
        {
            return mRBCHeader;
        }

        bool setRBCHeader (const xetraRBCHeaderCompPacket& v)
        {
            mRBCHeader = v;
            return true;
        }

        uint64_t getTransactTime () const
        {
            return mTransactTime;
        }

        bool setTransactTime (uint64_t v)
        {
            mTransactTime = v;
            return ((TRANSACT_TIME_MIN <= mTransactTime && mTransactTime <= TRANSACT_TIME_MAX) || mTransactTime == TRANSACT_TIME_NO_VALUE);
        }

        bool isTransactTimeValid () const
        {
            return (mTransactTime != TRANSACT_TIME_NO_VALUE);
        }

        void resetTransactTime ()
        {
            mTransactTime = TRANSACT_TIME_NO_VALUE;
        }

        uint64_t getNegotiationStartTime () const
        {
            return mNegotiationStartTime;
        }

        bool setNegotiationStartTime (uint64_t v)
        {
            mNegotiationStartTime = v;
            return ((NEGOTIATION_START_TIME_MIN <= mNegotiationStartTime && mNegotiationStartTime <= NEGOTIATION_START_TIME_MAX) || mNegotiationStartTime == NEGOTIATION_START_TIME_NO_VALUE);
        }

        bool isNegotiationStartTimeValid () const
        {
            return (mNegotiationStartTime != NEGOTIATION_START_TIME_NO_VALUE);
        }

        void resetNegotiationStartTime ()
        {
            mNegotiationStartTime = NEGOTIATION_START_TIME_NO_VALUE;
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

        double getLeavesQty () const
        {
            return mLeavesQty / 10000.0;
        }

        bool setLeavesQty (double v)
        {
            mLeavesQty = v * 10000.0;
            return ((LEAVES_QTY_MIN <= v && v <= LEAVES_QTY_MAX) || mLeavesQty == LEAVES_QTY_NO_VALUE);
        }

        bool isLeavesQtyValid () const
        {
            return (mLeavesQty != LEAVES_QTY_NO_VALUE);
        }

        void resetLeavesQty ()
        {
            mLeavesQty = LEAVES_QTY_NO_VALUE;
        }

        uint64_t getExpireTime () const
        {
            return mExpireTime;
        }

        bool setExpireTime (uint64_t v)
        {
            mExpireTime = v;
            return ((EXPIRE_TIME_MIN <= mExpireTime && mExpireTime <= EXPIRE_TIME_MAX) || mExpireTime == EXPIRE_TIME_NO_VALUE);
        }

        bool isExpireTimeValid () const
        {
            return (mExpireTime != EXPIRE_TIME_NO_VALUE);
        }

        void resetExpireTime ()
        {
            mExpireTime = EXPIRE_TIME_NO_VALUE;
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

        uint32_t getNumberOfRespondents () const
        {
            return mNumberOfRespondents;
        }

        bool setNumberOfRespondents (uint32_t v)
        {
            mNumberOfRespondents = v;
            return ((NUMBER_OF_RESPONDENTS_MIN <= mNumberOfRespondents && mNumberOfRespondents <= NUMBER_OF_RESPONDENTS_MAX) || mNumberOfRespondents == NUMBER_OF_RESPONDENTS_NO_VALUE);
        }

        bool isNumberOfRespondentsValid () const
        {
            return (mNumberOfRespondents != NUMBER_OF_RESPONDENTS_NO_VALUE);
        }

        void resetNumberOfRespondents ()
        {
            mNumberOfRespondents = NUMBER_OF_RESPONDENTS_NO_VALUE;
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

        int8_t getQuoteStatus () const
        {
            return mQuoteStatus;
        }

        bool setQuoteStatus (int8_t v)
        {
            mQuoteStatus = v;
            return ((QUOTE_STATUS_MIN <= mQuoteStatus && mQuoteStatus <= QUOTE_STATUS_MAX) || mQuoteStatus == QUOTE_STATUS_NO_VALUE);
        }

        bool isQuoteStatusValid () const
        {
            return (mQuoteStatus != QUOTE_STATUS_NO_VALUE);
        }

        void resetQuoteStatus ()
        {
            mQuoteStatus = QUOTE_STATUS_NO_VALUE;
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

        string getPartyEnteringTrader () const
        {
            return string (mPartyEnteringTrader, PARTY_ENTERING_TRADER_MAX_LENGTH);
        }

        bool setPartyEnteringTrader (const string& v)
        {
            memset (mPartyEnteringTrader, '\0', sizeof (mPartyEnteringTrader));
            size_t size = min ((size_t) v.size (), (size_t) PARTY_ENTERING_TRADER_MAX_LENGTH);
            strncpy (mPartyEnteringTrader, v.c_str (), size);
            return (v.size () <= PARTY_ENTERING_TRADER_MAX_LENGTH);
        }

        bool isPartyEnteringTraderValid () const
        {
            return (memcmp (mPartyEnteringTrader, PARTY_ENTERING_TRADER_NO_VALUE, sizeof (mPartyEnteringTrader)) != 0);
        }

        void resetPartyEnteringTrader ()
        {
            memcpy (mPartyEnteringTrader, PARTY_ENTERING_TRADER_NO_VALUE, sizeof (mPartyEnteringTrader));
        }

        string getTargetPartyExecutingFirm () const
        {
            return string (mTargetPartyExecutingFirm, TARGET_PARTY_EXECUTING_FIRM_MAX_LENGTH);
        }

        bool setTargetPartyExecutingFirm (const string& v)
        {
            memset (mTargetPartyExecutingFirm, '\0', sizeof (mTargetPartyExecutingFirm));
            size_t size = min ((size_t) v.size (), (size_t) TARGET_PARTY_EXECUTING_FIRM_MAX_LENGTH);
            strncpy (mTargetPartyExecutingFirm, v.c_str (), size);
            return (v.size () <= TARGET_PARTY_EXECUTING_FIRM_MAX_LENGTH);
        }

        bool isTargetPartyExecutingFirmValid () const
        {
            return (memcmp (mTargetPartyExecutingFirm, TARGET_PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mTargetPartyExecutingFirm)) != 0);
        }

        void resetTargetPartyExecutingFirm ()
        {
            memcpy (mTargetPartyExecutingFirm, TARGET_PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mTargetPartyExecutingFirm));
        }

        string getTargetPartyExecutingTrader () const
        {
            return string (mTargetPartyExecutingTrader, TARGET_PARTY_EXECUTING_TRADER_MAX_LENGTH);
        }

        bool setTargetPartyExecutingTrader (const string& v)
        {
            memset (mTargetPartyExecutingTrader, '\0', sizeof (mTargetPartyExecutingTrader));
            size_t size = min ((size_t) v.size (), (size_t) TARGET_PARTY_EXECUTING_TRADER_MAX_LENGTH);
            strncpy (mTargetPartyExecutingTrader, v.c_str (), size);
            return (v.size () <= TARGET_PARTY_EXECUTING_TRADER_MAX_LENGTH);
        }

        bool isTargetPartyExecutingTraderValid () const
        {
            return (memcmp (mTargetPartyExecutingTrader, TARGET_PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mTargetPartyExecutingTrader)) != 0);
        }

        void resetTargetPartyExecutingTrader ()
        {
            memcpy (mTargetPartyExecutingTrader, TARGET_PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mTargetPartyExecutingTrader));
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


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeader.getRawSize()
                + sizeof (mTransactTime)
                + sizeof (mNegotiationStartTime)
                + sizeof (mSecurityID)
                + sizeof (mBidPx)
                + sizeof (mOfferPx)
                + sizeof (mLeavesQty)
                + sizeof (mExpireTime)
                + sizeof (mNegotiationID)
                + sizeof (mMarketSegmentID)
                + sizeof (mNumberOfRespondents)
                + sizeof (mSettlDate)
                + sizeof (mQuoteStatus)
                + sizeof (mSide)
                + sizeof (mRespondentType)
                + sizeof (mPartyExecutingFirm)
                + sizeof (mPartyExecutingTrader)
                + sizeof (mPartyEnteringTrader)
                + sizeof (mTargetPartyExecutingFirm)
                + sizeof (mTargetPartyExecutingTrader)
                + sizeof (mFirmNegotiationID)
                + sizeof (mFreeText5)
                + sizeof (mPad1);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mNegotiationStartTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mBidPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOfferPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mLeavesQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mExpireTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mNumberOfRespondents, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSettlDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRespondentType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTargetPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTargetPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFirmNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFreeText5, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = mMessageHeaderOut.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeader.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mNegotiationStartTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mBidPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOfferPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mLeavesQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mExpireTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mNumberOfRespondents, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSettlDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRespondentType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTargetPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTargetPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFirmNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFreeText5, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "XetraEnLightOpenNegotiationNotification::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeader=" << mRBCHeader.toString () << "],"
                << "[TransactTime=" << getTransactTime () << "],"
                << "[NegotiationStartTime=" << getNegotiationStartTime () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[BidPx=" << getBidPx () << "],"
                << "[OfferPx=" << getOfferPx () << "],"
                << "[LeavesQty=" << getLeavesQty () << "],"
                << "[ExpireTime=" << getExpireTime () << "],"
                << "[NegotiationID=" << getNegotiationID () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[NumberOfRespondents=" << getNumberOfRespondents () << "],"
                << "[SettlDate=" << getSettlDate () << "],"
                << "[QuoteStatus=" << getQuoteStatus () << "],"
                << "[Side=" << getSide () << "],"
                << "[RespondentType=" << getRespondentType () << "],"
                << "[PartyExecutingFirm=" << getPartyExecutingFirm () << "],"
                << "[PartyExecutingTrader=" << getPartyExecutingTrader () << "],"
                << "[PartyEnteringTrader=" << getPartyEnteringTrader () << "],"
                << "[TargetPartyExecutingFirm=" << getTargetPartyExecutingFirm () << "],"
                << "[TargetPartyExecutingTrader=" << getTargetPartyExecutingTrader () << "],"
                << "[FirmNegotiationID=" << getFirmNegotiationID () << "],"
                << "[FreeText5=" << getFreeText5 () << "],"
                << "[Pad1=" << getPad1 () << "]";
            return sss.str();
        }
};

const uint64_t xetraXetraEnLightOpenNegotiationNotificationPacket::TRANSACT_TIME_MIN = 0UL;
const uint64_t xetraXetraEnLightOpenNegotiationNotificationPacket::TRANSACT_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraXetraEnLightOpenNegotiationNotificationPacket::TRANSACT_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraXetraEnLightOpenNegotiationNotificationPacket::NEGOTIATION_START_TIME_MIN = 0UL;
const uint64_t xetraXetraEnLightOpenNegotiationNotificationPacket::NEGOTIATION_START_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraXetraEnLightOpenNegotiationNotificationPacket::NEGOTIATION_START_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int64_t xetraXetraEnLightOpenNegotiationNotificationPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraXetraEnLightOpenNegotiationNotificationPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraXetraEnLightOpenNegotiationNotificationPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double xetraXetraEnLightOpenNegotiationNotificationPacket::BID_PX_MIN = -92233720368.54775807;
const double xetraXetraEnLightOpenNegotiationNotificationPacket::BID_PX_MAX = 92233720368.54775807;
const int64_t xetraXetraEnLightOpenNegotiationNotificationPacket::BID_PX_NO_VALUE = 0x8000000000000000;
const double xetraXetraEnLightOpenNegotiationNotificationPacket::OFFER_PX_MIN = -92233720368.54775807;
const double xetraXetraEnLightOpenNegotiationNotificationPacket::OFFER_PX_MAX = 92233720368.54775807;
const int64_t xetraXetraEnLightOpenNegotiationNotificationPacket::OFFER_PX_NO_VALUE = 0x8000000000000000;
const double xetraXetraEnLightOpenNegotiationNotificationPacket::LEAVES_QTY_MIN = -922337203685477.5807;
const double xetraXetraEnLightOpenNegotiationNotificationPacket::LEAVES_QTY_MAX = 922337203685477.5807;
const int64_t xetraXetraEnLightOpenNegotiationNotificationPacket::LEAVES_QTY_NO_VALUE = 0x8000000000000000;
const uint64_t xetraXetraEnLightOpenNegotiationNotificationPacket::EXPIRE_TIME_MIN = 0UL;
const uint64_t xetraXetraEnLightOpenNegotiationNotificationPacket::EXPIRE_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraXetraEnLightOpenNegotiationNotificationPacket::EXPIRE_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint32_t xetraXetraEnLightOpenNegotiationNotificationPacket::NEGOTIATION_ID_MIN = 0;
const uint32_t xetraXetraEnLightOpenNegotiationNotificationPacket::NEGOTIATION_ID_MAX = 4294967294;
const uint32_t xetraXetraEnLightOpenNegotiationNotificationPacket::NEGOTIATION_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t xetraXetraEnLightOpenNegotiationNotificationPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraXetraEnLightOpenNegotiationNotificationPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraXetraEnLightOpenNegotiationNotificationPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t xetraXetraEnLightOpenNegotiationNotificationPacket::NUMBER_OF_RESPONDENTS_MIN = 0;
const uint32_t xetraXetraEnLightOpenNegotiationNotificationPacket::NUMBER_OF_RESPONDENTS_MAX = 4294967294;
const uint32_t xetraXetraEnLightOpenNegotiationNotificationPacket::NUMBER_OF_RESPONDENTS_NO_VALUE = 0xFFFFFFFF;
const int32_t xetraXetraEnLightOpenNegotiationNotificationPacket::SETTL_DATE_MIN = 0;
const int32_t xetraXetraEnLightOpenNegotiationNotificationPacket::SETTL_DATE_MAX = 99991231;
const int32_t xetraXetraEnLightOpenNegotiationNotificationPacket::SETTL_DATE_NO_VALUE = 0xFFFFFFFF;
const int8_t xetraXetraEnLightOpenNegotiationNotificationPacket::QUOTE_STATUS_MIN = 6;
const int8_t xetraXetraEnLightOpenNegotiationNotificationPacket::QUOTE_STATUS_MAX = 17;
const int8_t xetraXetraEnLightOpenNegotiationNotificationPacket::QUOTE_STATUS_NO_VALUE = 0xFF;
const int8_t xetraXetraEnLightOpenNegotiationNotificationPacket::SIDE_MIN = 1;
const int8_t xetraXetraEnLightOpenNegotiationNotificationPacket::SIDE_MAX = 2;
const int8_t xetraXetraEnLightOpenNegotiationNotificationPacket::SIDE_NO_VALUE = 0xFF;
const int8_t xetraXetraEnLightOpenNegotiationNotificationPacket::RESPONDENT_TYPE_MIN = 2;
const int8_t xetraXetraEnLightOpenNegotiationNotificationPacket::RESPONDENT_TYPE_MAX = 101;
const int8_t xetraXetraEnLightOpenNegotiationNotificationPacket::RESPONDENT_TYPE_NO_VALUE = 0xFF;
const char xetraXetraEnLightOpenNegotiationNotificationPacket::PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightOpenNegotiationNotificationPacket::PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char xetraXetraEnLightOpenNegotiationNotificationPacket::PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightOpenNegotiationNotificationPacket::PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const char xetraXetraEnLightOpenNegotiationNotificationPacket::PARTY_ENTERING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightOpenNegotiationNotificationPacket::PARTY_ENTERING_TRADER_MAX_LENGTH = 6;
const char xetraXetraEnLightOpenNegotiationNotificationPacket::TARGET_PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightOpenNegotiationNotificationPacket::TARGET_PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char xetraXetraEnLightOpenNegotiationNotificationPacket::TARGET_PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightOpenNegotiationNotificationPacket::TARGET_PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const char xetraXetraEnLightOpenNegotiationNotificationPacket::FIRM_NEGOTIATION_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightOpenNegotiationNotificationPacket::FIRM_NEGOTIATION_ID_MAX_LENGTH = 20;
const char xetraXetraEnLightOpenNegotiationNotificationPacket::FREE_TEXT5_NO_VALUE[132] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightOpenNegotiationNotificationPacket::FREE_TEXT5_MAX_LENGTH = 132;
const char xetraXetraEnLightOpenNegotiationNotificationPacket::PAD1_NO_VALUE[1] = {0x00};
const size_t xetraXetraEnLightOpenNegotiationNotificationPacket::PAD1_MAX_LENGTH = 1;


} // namespace neueda

#endif // XETRA_XETRAENLIGHTOPENNEGOTIATIONNOTIFICATION_PACKET_H
