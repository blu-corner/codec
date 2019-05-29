/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_SRQSNEGOTIATIONNOTIFICATION_PACKET_H
#define EUREX_SRQSNEGOTIATIONNOTIFICATION_PACKET_H

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

class eurexSRQSNegotiationNotificationPacket
{
    public:
        // no value constants
        static const uint64_t TRANSACT_TIME_MIN;
        static const uint64_t TRANSACT_TIME_MAX;
        static const uint64_t TRANSACT_TIME_NO_VALUE;
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
        static const double LAST_PX_MIN;
        static const double LAST_PX_MAX;
        static const int64_t LAST_PX_NO_VALUE;
        static const double LEAVES_QTY_MIN;
        static const double LEAVES_QTY_MAX;
        static const int64_t LEAVES_QTY_NO_VALUE;
        static const double LAST_QTY_MIN;
        static const double LAST_QTY_MAX;
        static const int64_t LAST_QTY_NO_VALUE;
        static const uint32_t NEGOTIATION_ID_MIN;
        static const uint32_t NEGOTIATION_ID_MAX;
        static const uint32_t NEGOTIATION_ID_NO_VALUE;
        static const uint32_t NUMBER_OF_RESPONDENTS_MIN;
        static const uint32_t NUMBER_OF_RESPONDENTS_MAX;
        static const uint32_t NUMBER_OF_RESPONDENTS_NO_VALUE;
        static const int8_t QUOTE_TYPE_MIN;
        static const int8_t QUOTE_TYPE_MAX;
        static const int8_t QUOTE_TYPE_NO_VALUE;
        static const int8_t QUOTE_SUB_TYPE_MIN;
        static const int8_t QUOTE_SUB_TYPE_MAX;
        static const int8_t QUOTE_SUB_TYPE_NO_VALUE;
        static const int8_t QUOTE_STATUS_MIN;
        static const int8_t QUOTE_STATUS_MAX;
        static const int8_t QUOTE_STATUS_NO_VALUE;
        static const int8_t QUOTE_INSTRUCTION_MIN;
        static const int8_t QUOTE_INSTRUCTION_MAX;
        static const int8_t QUOTE_INSTRUCTION_NO_VALUE;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const int8_t QUOTE_REF_PRICE_SOURCE_MIN;
        static const int8_t QUOTE_REF_PRICE_SOURCE_MAX;
        static const int8_t QUOTE_REF_PRICE_SOURCE_NO_VALUE;
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
        static const char PAD6_NO_VALUE[6];
        static const size_t PAD6_MAX_LENGTH;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexRBCHeaderCompPacket mRBCHeader;
        uint64_t mTransactTime;
        int64_t mQuoteRefPrice;
        int64_t mUnderlyingDeltaPercentage;
        int64_t mBidPx;
        int64_t mOfferPx;
        int64_t mLastPx;
        int64_t mLeavesQty;
        int64_t mLastQty;
        uint32_t mNegotiationID;
        uint32_t mNumberOfRespondents;
        int8_t mQuoteType;
        int8_t mQuoteSubType;
        int8_t mQuoteStatus;
        int8_t mQuoteInstruction;
        int8_t mSide;
        int8_t mQuoteRefPriceSource;
        char mPartyExecutingFirm[5];
        char mPartyExecutingTrader[6];
        char mPartyEnteringTrader[6];
        char mTargetPartyExecutingFirm[5];
        char mTargetPartyExecutingTrader[6];
        char mFirmNegotiationID[20];
        char mFreeText5[132];
        char mPad6[6];

        // constructor
        eurexSRQSNegotiationNotificationPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10713;
            mTransactTime = TRANSACT_TIME_NO_VALUE;
            mQuoteRefPrice = QUOTE_REF_PRICE_NO_VALUE;
            mUnderlyingDeltaPercentage = UNDERLYING_DELTA_PERCENTAGE_NO_VALUE;
            mBidPx = BID_PX_NO_VALUE;
            mOfferPx = OFFER_PX_NO_VALUE;
            mLastPx = LAST_PX_NO_VALUE;
            mLeavesQty = LEAVES_QTY_NO_VALUE;
            mLastQty = LAST_QTY_NO_VALUE;
            mNegotiationID = NEGOTIATION_ID_NO_VALUE;
            mNumberOfRespondents = NUMBER_OF_RESPONDENTS_NO_VALUE;
            mQuoteType = QUOTE_TYPE_NO_VALUE;
            mQuoteSubType = QUOTE_SUB_TYPE_NO_VALUE;
            mQuoteStatus = QUOTE_STATUS_NO_VALUE;
            mQuoteInstruction = QUOTE_INSTRUCTION_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            mQuoteRefPriceSource = QUOTE_REF_PRICE_SOURCE_NO_VALUE;
            memcpy(mPartyExecutingFirm, PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mPartyExecutingFirm));
            memcpy(mPartyExecutingTrader, PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mPartyExecutingTrader));
            memcpy(mPartyEnteringTrader, PARTY_ENTERING_TRADER_NO_VALUE, sizeof (mPartyEnteringTrader));
            memcpy(mTargetPartyExecutingFirm, TARGET_PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mTargetPartyExecutingFirm));
            memcpy(mTargetPartyExecutingTrader, TARGET_PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mTargetPartyExecutingTrader));
            memcpy(mFirmNegotiationID, FIRM_NEGOTIATION_ID_NO_VALUE, sizeof (mFirmNegotiationID));
            memcpy(mFreeText5, FREE_TEXT5_NO_VALUE, sizeof (mFreeText5));
            memcpy(mPad6, PAD6_NO_VALUE, sizeof (mPad6));
        }

        // getters & setters
        const eurexMessageHeaderOutCompPacket& getMessageHeaderOut () const
        {
            return mMessageHeaderOut;
        }

        bool setMessageHeaderOut (const eurexMessageHeaderOutCompPacket& v)
        {
            mMessageHeaderOut = v;
            return true;
        }

        const eurexRBCHeaderCompPacket& getRBCHeader () const
        {
            return mRBCHeader;
        }

        bool setRBCHeader (const eurexRBCHeaderCompPacket& v)
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

        double getLastPx () const
        {
            return mLastPx / 100000000.0;
        }

        bool setLastPx (double v)
        {
            mLastPx = v * 100000000.0;
            return ((LAST_PX_MIN <= v && v <= LAST_PX_MAX) || mLastPx == LAST_PX_NO_VALUE);
        }

        bool isLastPxValid () const
        {
            return (mLastPx != LAST_PX_NO_VALUE);
        }

        void resetLastPx ()
        {
            mLastPx = LAST_PX_NO_VALUE;
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

        double getLastQty () const
        {
            return mLastQty / 10000.0;
        }

        bool setLastQty (double v)
        {
            mLastQty = v * 10000.0;
            return ((LAST_QTY_MIN <= v && v <= LAST_QTY_MAX) || mLastQty == LAST_QTY_NO_VALUE);
        }

        bool isLastQtyValid () const
        {
            return (mLastQty != LAST_QTY_NO_VALUE);
        }

        void resetLastQty ()
        {
            mLastQty = LAST_QTY_NO_VALUE;
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

        int8_t getQuoteInstruction () const
        {
            return mQuoteInstruction;
        }

        bool setQuoteInstruction (int8_t v)
        {
            mQuoteInstruction = v;
            return ((QUOTE_INSTRUCTION_MIN <= mQuoteInstruction && mQuoteInstruction <= QUOTE_INSTRUCTION_MAX) || mQuoteInstruction == QUOTE_INSTRUCTION_NO_VALUE);
        }

        bool isQuoteInstructionValid () const
        {
            return (mQuoteInstruction != QUOTE_INSTRUCTION_NO_VALUE);
        }

        void resetQuoteInstruction ()
        {
            mQuoteInstruction = QUOTE_INSTRUCTION_NO_VALUE;
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

        string getPad6 () const
        {
            return string (mPad6, PAD6_MAX_LENGTH);
        }

        bool setPad6 (const string& v)
        {
            memset (mPad6, '\0', sizeof (mPad6));
            size_t size = min ((size_t) v.size (), (size_t) PAD6_MAX_LENGTH);
            strncpy (mPad6, v.c_str (), size);
            return (v.size () <= PAD6_MAX_LENGTH);
        }

        bool isPad6Valid () const
        {
            return (memcmp (mPad6, PAD6_NO_VALUE, sizeof (mPad6)) != 0);
        }

        void resetPad6 ()
        {
            memcpy (mPad6, PAD6_NO_VALUE, sizeof (mPad6));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeader.getRawSize()
                + sizeof (mTransactTime)
                + sizeof (mQuoteRefPrice)
                + sizeof (mUnderlyingDeltaPercentage)
                + sizeof (mBidPx)
                + sizeof (mOfferPx)
                + sizeof (mLastPx)
                + sizeof (mLeavesQty)
                + sizeof (mLastQty)
                + sizeof (mNegotiationID)
                + sizeof (mNumberOfRespondents)
                + sizeof (mQuoteType)
                + sizeof (mQuoteSubType)
                + sizeof (mQuoteStatus)
                + sizeof (mQuoteInstruction)
                + sizeof (mSide)
                + sizeof (mQuoteRefPriceSource)
                + sizeof (mPartyExecutingFirm)
                + sizeof (mPartyExecutingTrader)
                + sizeof (mPartyEnteringTrader)
                + sizeof (mTargetPartyExecutingFirm)
                + sizeof (mTargetPartyExecutingTrader)
                + sizeof (mFirmNegotiationID)
                + sizeof (mFreeText5)
                + sizeof (mPad6);
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
            state = eti::serialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mQuoteRefPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mUnderlyingDeltaPercentage, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mBidPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOfferPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mLeavesQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mLastQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNumberOfRespondents, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mQuoteType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mQuoteSubType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mQuoteStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mQuoteInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mQuoteRefPriceSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTargetPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTargetPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFirmNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText5, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad6, buf, len, used);
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
            state = eti::deserialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mQuoteRefPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mUnderlyingDeltaPercentage, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mBidPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOfferPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mLeavesQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mLastQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNumberOfRespondents, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mQuoteType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mQuoteSubType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mQuoteStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mQuoteInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mQuoteRefPriceSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTargetPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTargetPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFirmNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText5, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "SRQSNegotiationNotification::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeader=" << mRBCHeader.toString () << "],"
                << "[TransactTime=" << getTransactTime () << "],"
                << "[QuoteRefPrice=" << getQuoteRefPrice () << "],"
                << "[UnderlyingDeltaPercentage=" << getUnderlyingDeltaPercentage () << "],"
                << "[BidPx=" << getBidPx () << "],"
                << "[OfferPx=" << getOfferPx () << "],"
                << "[LastPx=" << getLastPx () << "],"
                << "[LeavesQty=" << getLeavesQty () << "],"
                << "[LastQty=" << getLastQty () << "],"
                << "[NegotiationID=" << getNegotiationID () << "],"
                << "[NumberOfRespondents=" << getNumberOfRespondents () << "],"
                << "[QuoteType=" << getQuoteType () << "],"
                << "[QuoteSubType=" << getQuoteSubType () << "],"
                << "[QuoteStatus=" << getQuoteStatus () << "],"
                << "[QuoteInstruction=" << getQuoteInstruction () << "],"
                << "[Side=" << getSide () << "],"
                << "[QuoteRefPriceSource=" << getQuoteRefPriceSource () << "],"
                << "[PartyExecutingFirm=" << getPartyExecutingFirm () << "],"
                << "[PartyExecutingTrader=" << getPartyExecutingTrader () << "],"
                << "[PartyEnteringTrader=" << getPartyEnteringTrader () << "],"
                << "[TargetPartyExecutingFirm=" << getTargetPartyExecutingFirm () << "],"
                << "[TargetPartyExecutingTrader=" << getTargetPartyExecutingTrader () << "],"
                << "[FirmNegotiationID=" << getFirmNegotiationID () << "],"
                << "[FreeText5=" << getFreeText5 () << "],"
                << "[Pad6=" << getPad6 () << "]";
            return sss.str();
        }
};

const uint64_t eurexSRQSNegotiationNotificationPacket::TRANSACT_TIME_MIN = 0UL;
const uint64_t eurexSRQSNegotiationNotificationPacket::TRANSACT_TIME_MAX = 18446744073709551614UL;
const uint64_t eurexSRQSNegotiationNotificationPacket::TRANSACT_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const double eurexSRQSNegotiationNotificationPacket::QUOTE_REF_PRICE_MIN = -92233720368.54775807;
const double eurexSRQSNegotiationNotificationPacket::QUOTE_REF_PRICE_MAX = 92233720368.54775807;
const int64_t eurexSRQSNegotiationNotificationPacket::QUOTE_REF_PRICE_NO_VALUE = 0x8000000000000000;
const double eurexSRQSNegotiationNotificationPacket::UNDERLYING_DELTA_PERCENTAGE_MIN = -922337203685477.5807;
const double eurexSRQSNegotiationNotificationPacket::UNDERLYING_DELTA_PERCENTAGE_MAX = 922337203685477.5807;
const int64_t eurexSRQSNegotiationNotificationPacket::UNDERLYING_DELTA_PERCENTAGE_NO_VALUE = 0x8000000000000000;
const double eurexSRQSNegotiationNotificationPacket::BID_PX_MIN = -92233720368.54775807;
const double eurexSRQSNegotiationNotificationPacket::BID_PX_MAX = 92233720368.54775807;
const int64_t eurexSRQSNegotiationNotificationPacket::BID_PX_NO_VALUE = 0x8000000000000000;
const double eurexSRQSNegotiationNotificationPacket::OFFER_PX_MIN = -92233720368.54775807;
const double eurexSRQSNegotiationNotificationPacket::OFFER_PX_MAX = 92233720368.54775807;
const int64_t eurexSRQSNegotiationNotificationPacket::OFFER_PX_NO_VALUE = 0x8000000000000000;
const double eurexSRQSNegotiationNotificationPacket::LAST_PX_MIN = -92233720368.54775807;
const double eurexSRQSNegotiationNotificationPacket::LAST_PX_MAX = 92233720368.54775807;
const int64_t eurexSRQSNegotiationNotificationPacket::LAST_PX_NO_VALUE = 0x8000000000000000;
const double eurexSRQSNegotiationNotificationPacket::LEAVES_QTY_MIN = -922337203685477.5807;
const double eurexSRQSNegotiationNotificationPacket::LEAVES_QTY_MAX = 922337203685477.5807;
const int64_t eurexSRQSNegotiationNotificationPacket::LEAVES_QTY_NO_VALUE = 0x8000000000000000;
const double eurexSRQSNegotiationNotificationPacket::LAST_QTY_MIN = -922337203685477.5807;
const double eurexSRQSNegotiationNotificationPacket::LAST_QTY_MAX = 922337203685477.5807;
const int64_t eurexSRQSNegotiationNotificationPacket::LAST_QTY_NO_VALUE = 0x8000000000000000;
const uint32_t eurexSRQSNegotiationNotificationPacket::NEGOTIATION_ID_MIN = 0;
const uint32_t eurexSRQSNegotiationNotificationPacket::NEGOTIATION_ID_MAX = 4294967294;
const uint32_t eurexSRQSNegotiationNotificationPacket::NEGOTIATION_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexSRQSNegotiationNotificationPacket::NUMBER_OF_RESPONDENTS_MIN = 0;
const uint32_t eurexSRQSNegotiationNotificationPacket::NUMBER_OF_RESPONDENTS_MAX = 4294967294;
const uint32_t eurexSRQSNegotiationNotificationPacket::NUMBER_OF_RESPONDENTS_NO_VALUE = 0xFFFFFFFF;
const int8_t eurexSRQSNegotiationNotificationPacket::QUOTE_TYPE_MIN = 0;
const int8_t eurexSRQSNegotiationNotificationPacket::QUOTE_TYPE_MAX = 102;
const int8_t eurexSRQSNegotiationNotificationPacket::QUOTE_TYPE_NO_VALUE = 0xFF;
const int8_t eurexSRQSNegotiationNotificationPacket::QUOTE_SUB_TYPE_MIN = 1;
const int8_t eurexSRQSNegotiationNotificationPacket::QUOTE_SUB_TYPE_MAX = 1;
const int8_t eurexSRQSNegotiationNotificationPacket::QUOTE_SUB_TYPE_NO_VALUE = 0xFF;
const int8_t eurexSRQSNegotiationNotificationPacket::QUOTE_STATUS_MIN = 6;
const int8_t eurexSRQSNegotiationNotificationPacket::QUOTE_STATUS_MAX = 17;
const int8_t eurexSRQSNegotiationNotificationPacket::QUOTE_STATUS_NO_VALUE = 0xFF;
const int8_t eurexSRQSNegotiationNotificationPacket::QUOTE_INSTRUCTION_MIN = 0;
const int8_t eurexSRQSNegotiationNotificationPacket::QUOTE_INSTRUCTION_MAX = 1;
const int8_t eurexSRQSNegotiationNotificationPacket::QUOTE_INSTRUCTION_NO_VALUE = 0xFF;
const int8_t eurexSRQSNegotiationNotificationPacket::SIDE_MIN = 1;
const int8_t eurexSRQSNegotiationNotificationPacket::SIDE_MAX = 2;
const int8_t eurexSRQSNegotiationNotificationPacket::SIDE_NO_VALUE = 0xFF;
const int8_t eurexSRQSNegotiationNotificationPacket::QUOTE_REF_PRICE_SOURCE_MIN = 1;
const int8_t eurexSRQSNegotiationNotificationPacket::QUOTE_REF_PRICE_SOURCE_MAX = 2;
const int8_t eurexSRQSNegotiationNotificationPacket::QUOTE_REF_PRICE_SOURCE_NO_VALUE = 0xFF;
const char eurexSRQSNegotiationNotificationPacket::PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSNegotiationNotificationPacket::PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char eurexSRQSNegotiationNotificationPacket::PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSNegotiationNotificationPacket::PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const char eurexSRQSNegotiationNotificationPacket::PARTY_ENTERING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSNegotiationNotificationPacket::PARTY_ENTERING_TRADER_MAX_LENGTH = 6;
const char eurexSRQSNegotiationNotificationPacket::TARGET_PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSNegotiationNotificationPacket::TARGET_PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char eurexSRQSNegotiationNotificationPacket::TARGET_PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSNegotiationNotificationPacket::TARGET_PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const char eurexSRQSNegotiationNotificationPacket::FIRM_NEGOTIATION_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSNegotiationNotificationPacket::FIRM_NEGOTIATION_ID_MAX_LENGTH = 20;
const char eurexSRQSNegotiationNotificationPacket::FREE_TEXT5_NO_VALUE[132] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSNegotiationNotificationPacket::FREE_TEXT5_MAX_LENGTH = 132;
const char eurexSRQSNegotiationNotificationPacket::PAD6_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSNegotiationNotificationPacket::PAD6_MAX_LENGTH = 6;


} // namespace neueda

#endif // EUREX_SRQSNEGOTIATIONNOTIFICATION_PACKET_H
