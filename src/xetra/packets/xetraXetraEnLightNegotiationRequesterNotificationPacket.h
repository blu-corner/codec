/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 09/05/2019
 */
#ifndef XETRA_XETRAENLIGHTNEGOTIATIONREQUESTERNOTIFICATION_PACKET_H
#define XETRA_XETRAENLIGHTNEGOTIATIONREQUESTERNOTIFICATION_PACKET_H

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

class xetraXetraEnLightNegotiationRequesterNotificationPacket
{
    public:
        // no value constants
        static const uint64_t TRANSACT_TIME_MIN;
        static const uint64_t TRANSACT_TIME_MAX;
        static const uint64_t TRANSACT_TIME_NO_VALUE;
        static const uint64_t TRD_REG_TSEXECUTION_TIME_MIN;
        static const uint64_t TRD_REG_TSEXECUTION_TIME_MAX;
        static const uint64_t TRD_REG_TSEXECUTION_TIME_NO_VALUE;
        static const double BID_PX_MIN;
        static const double BID_PX_MAX;
        static const int64_t BID_PX_NO_VALUE;
        static const double OFFER_PX_MIN;
        static const double OFFER_PX_MAX;
        static const int64_t OFFER_PX_NO_VALUE;
        static const double ORDER_QTY_MIN;
        static const double ORDER_QTY_MAX;
        static const int64_t ORDER_QTY_NO_VALUE;
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
        static const int32_t SETTL_DATE_MIN;
        static const int32_t SETTL_DATE_MAX;
        static const int32_t SETTL_DATE_NO_VALUE;
        static const int8_t QUOTE_STATUS_MIN;
        static const int8_t QUOTE_STATUS_MAX;
        static const int8_t QUOTE_STATUS_NO_VALUE;
        static const int8_t NO_TARGET_PARTY_IDS_MIN;
        static const int8_t NO_TARGET_PARTY_IDS_MAX;
        static const int8_t NO_TARGET_PARTY_IDS_NO_VALUE;
        static const int8_t NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_MIN;
        static const int8_t NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_MAX;
        static const int8_t NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_NO_VALUE;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const char PARTY_EXECUTING_FIRM_NO_VALUE[5];
        static const size_t PARTY_EXECUTING_FIRM_MAX_LENGTH;
        static const char PARTY_EXECUTING_TRADER_NO_VALUE[6];
        static const size_t PARTY_EXECUTING_TRADER_MAX_LENGTH;
        static const char PARTY_ENTERING_TRADER_NO_VALUE[6];
        static const size_t PARTY_ENTERING_TRADER_MAX_LENGTH;
        static const char FIRM_NEGOTIATION_ID_NO_VALUE[20];
        static const size_t FIRM_NEGOTIATION_ID_MAX_LENGTH;
        static const char FREE_TEXT5_NO_VALUE[132];
        static const size_t FREE_TEXT5_MAX_LENGTH;
        static const char PAD7_NO_VALUE[7];
        static const size_t PAD7_MAX_LENGTH;
        static const size_t XETRA_EN_LIGHT_TARGET_PARTIES_MIN;
        static const size_t XETRA_EN_LIGHT_TARGET_PARTIES_MAX;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraRBCHeaderCompPacket mRBCHeader;
        uint64_t mTransactTime;
        uint64_t mTrdRegTSExecutionTime;
        int64_t mBidPx;
        int64_t mOfferPx;
        int64_t mOrderQty;
        int64_t mLastPx;
        int64_t mLeavesQty;
        int64_t mLastQty;
        uint32_t mNegotiationID;
        uint32_t mNumberOfRespondents;
        int32_t mSettlDate;
        int8_t mQuoteStatus;
        int8_t mNoTargetPartyIDs;
        int8_t mNumberOfRespDisclosureInstruction;
        int8_t mSide;
        char mPartyExecutingFirm[5];
        char mPartyExecutingTrader[6];
        char mPartyEnteringTrader[6];
        char mFirmNegotiationID[20];
        char mFreeText5[132];
        char mPad7[7];
        vector<xetraXetraEnLightTargetPartiesCompPacket> mXetraEnLightTargetParties;

        // constructor
        xetraXetraEnLightNegotiationRequesterNotificationPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10812;
            mTransactTime = TRANSACT_TIME_NO_VALUE;
            mTrdRegTSExecutionTime = TRD_REG_TSEXECUTION_TIME_NO_VALUE;
            mBidPx = BID_PX_NO_VALUE;
            mOfferPx = OFFER_PX_NO_VALUE;
            mOrderQty = ORDER_QTY_NO_VALUE;
            mLastPx = LAST_PX_NO_VALUE;
            mLeavesQty = LEAVES_QTY_NO_VALUE;
            mLastQty = LAST_QTY_NO_VALUE;
            mNegotiationID = NEGOTIATION_ID_NO_VALUE;
            mNumberOfRespondents = NUMBER_OF_RESPONDENTS_NO_VALUE;
            mSettlDate = SETTL_DATE_NO_VALUE;
            mQuoteStatus = QUOTE_STATUS_NO_VALUE;
            mNoTargetPartyIDs = NO_TARGET_PARTY_IDS_NO_VALUE;
            mNumberOfRespDisclosureInstruction = NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            memcpy(mPartyExecutingFirm, PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mPartyExecutingFirm));
            memcpy(mPartyExecutingTrader, PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mPartyExecutingTrader));
            memcpy(mPartyEnteringTrader, PARTY_ENTERING_TRADER_NO_VALUE, sizeof (mPartyEnteringTrader));
            memcpy(mFirmNegotiationID, FIRM_NEGOTIATION_ID_NO_VALUE, sizeof (mFirmNegotiationID));
            memcpy(mFreeText5, FREE_TEXT5_NO_VALUE, sizeof (mFreeText5));
            memcpy(mPad7, PAD7_NO_VALUE, sizeof (mPad7));
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

        uint64_t getTrdRegTSExecutionTime () const
        {
            return mTrdRegTSExecutionTime;
        }

        bool setTrdRegTSExecutionTime (uint64_t v)
        {
            mTrdRegTSExecutionTime = v;
            return ((TRD_REG_TSEXECUTION_TIME_MIN <= mTrdRegTSExecutionTime && mTrdRegTSExecutionTime <= TRD_REG_TSEXECUTION_TIME_MAX) || mTrdRegTSExecutionTime == TRD_REG_TSEXECUTION_TIME_NO_VALUE);
        }

        bool isTrdRegTSExecutionTimeValid () const
        {
            return (mTrdRegTSExecutionTime != TRD_REG_TSEXECUTION_TIME_NO_VALUE);
        }

        void resetTrdRegTSExecutionTime ()
        {
            mTrdRegTSExecutionTime = TRD_REG_TSEXECUTION_TIME_NO_VALUE;
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
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeader.getRawSize()
                + sizeof (mTransactTime)
                + sizeof (mTrdRegTSExecutionTime)
                + sizeof (mBidPx)
                + sizeof (mOfferPx)
                + sizeof (mOrderQty)
                + sizeof (mLastPx)
                + sizeof (mLeavesQty)
                + sizeof (mLastQty)
                + sizeof (mNegotiationID)
                + sizeof (mNumberOfRespondents)
                + sizeof (mSettlDate)
                + sizeof (mQuoteStatus)
                + sizeof (mNoTargetPartyIDs)
                + sizeof (mNumberOfRespDisclosureInstruction)
                + sizeof (mSide)
                + sizeof (mPartyExecutingFirm)
                + sizeof (mPartyExecutingTrader)
                + sizeof (mPartyEnteringTrader)
                + sizeof (mFirmNegotiationID)
                + sizeof (mFreeText5)
                + sizeof (mPad7)
                + xetra::getRawSize (mXetraEnLightTargetParties);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoTargetPartyIDs = mXetraEnLightTargetParties.size ();
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTrdRegTSExecutionTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mBidPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOfferPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOrderQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mLeavesQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mLastQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mNumberOfRespondents, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSettlDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mNoTargetPartyIDs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mNumberOfRespDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFirmNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFreeText5, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad7, buf, len, used);
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
            state = mMessageHeaderOut.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeader.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTrdRegTSExecutionTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mBidPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOfferPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOrderQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mLeavesQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mLastQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mNumberOfRespondents, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSettlDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mNoTargetPartyIDs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mNumberOfRespDisclosureInstruction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFirmNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFreeText5, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mXetraEnLightTargetParties.resize (mNoTargetPartyIDs);
            for (vector<xetraXetraEnLightTargetPartiesCompPacket>::iterator it = mXetraEnLightTargetParties.begin (); it != mXetraEnLightTargetParties.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "XetraEnLightNegotiationRequesterNotification::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeader=" << mRBCHeader.toString () << "],"
                << "[TransactTime=" << getTransactTime () << "],"
                << "[TrdRegTSExecutionTime=" << getTrdRegTSExecutionTime () << "],"
                << "[BidPx=" << getBidPx () << "],"
                << "[OfferPx=" << getOfferPx () << "],"
                << "[OrderQty=" << getOrderQty () << "],"
                << "[LastPx=" << getLastPx () << "],"
                << "[LeavesQty=" << getLeavesQty () << "],"
                << "[LastQty=" << getLastQty () << "],"
                << "[NegotiationID=" << getNegotiationID () << "],"
                << "[NumberOfRespondents=" << getNumberOfRespondents () << "],"
                << "[SettlDate=" << getSettlDate () << "],"
                << "[QuoteStatus=" << getQuoteStatus () << "],"
                << "[NoTargetPartyIDs=" << getNoTargetPartyIDs () << "],"
                << "[NumberOfRespDisclosureInstruction=" << getNumberOfRespDisclosureInstruction () << "],"
                << "[Side=" << getSide () << "],"
                << "[PartyExecutingFirm=" << getPartyExecutingFirm () << "],"
                << "[PartyExecutingTrader=" << getPartyExecutingTrader () << "],"
                << "[PartyEnteringTrader=" << getPartyEnteringTrader () << "],"
                << "[FirmNegotiationID=" << getFirmNegotiationID () << "],"
                << "[FreeText5=" << getFreeText5 () << "],"
                << "[Pad7=" << getPad7 () << "],"
                << "[XetraEnLightTargetParties=" << xetra::toString (getXetraEnLightTargetParties ()) << "]";
            return sss.str();
        }
};

const uint64_t xetraXetraEnLightNegotiationRequesterNotificationPacket::TRANSACT_TIME_MIN = 0UL;
const uint64_t xetraXetraEnLightNegotiationRequesterNotificationPacket::TRANSACT_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraXetraEnLightNegotiationRequesterNotificationPacket::TRANSACT_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraXetraEnLightNegotiationRequesterNotificationPacket::TRD_REG_TSEXECUTION_TIME_MIN = 0UL;
const uint64_t xetraXetraEnLightNegotiationRequesterNotificationPacket::TRD_REG_TSEXECUTION_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraXetraEnLightNegotiationRequesterNotificationPacket::TRD_REG_TSEXECUTION_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const double xetraXetraEnLightNegotiationRequesterNotificationPacket::BID_PX_MIN = -92233720368.54775807;
const double xetraXetraEnLightNegotiationRequesterNotificationPacket::BID_PX_MAX = 92233720368.54775807;
const int64_t xetraXetraEnLightNegotiationRequesterNotificationPacket::BID_PX_NO_VALUE = 0x8000000000000000;
const double xetraXetraEnLightNegotiationRequesterNotificationPacket::OFFER_PX_MIN = -92233720368.54775807;
const double xetraXetraEnLightNegotiationRequesterNotificationPacket::OFFER_PX_MAX = 92233720368.54775807;
const int64_t xetraXetraEnLightNegotiationRequesterNotificationPacket::OFFER_PX_NO_VALUE = 0x8000000000000000;
const double xetraXetraEnLightNegotiationRequesterNotificationPacket::ORDER_QTY_MIN = -922337203685477.5807;
const double xetraXetraEnLightNegotiationRequesterNotificationPacket::ORDER_QTY_MAX = 922337203685477.5807;
const int64_t xetraXetraEnLightNegotiationRequesterNotificationPacket::ORDER_QTY_NO_VALUE = 0x8000000000000000;
const double xetraXetraEnLightNegotiationRequesterNotificationPacket::LAST_PX_MIN = -92233720368.54775807;
const double xetraXetraEnLightNegotiationRequesterNotificationPacket::LAST_PX_MAX = 92233720368.54775807;
const int64_t xetraXetraEnLightNegotiationRequesterNotificationPacket::LAST_PX_NO_VALUE = 0x8000000000000000;
const double xetraXetraEnLightNegotiationRequesterNotificationPacket::LEAVES_QTY_MIN = -922337203685477.5807;
const double xetraXetraEnLightNegotiationRequesterNotificationPacket::LEAVES_QTY_MAX = 922337203685477.5807;
const int64_t xetraXetraEnLightNegotiationRequesterNotificationPacket::LEAVES_QTY_NO_VALUE = 0x8000000000000000;
const double xetraXetraEnLightNegotiationRequesterNotificationPacket::LAST_QTY_MIN = -922337203685477.5807;
const double xetraXetraEnLightNegotiationRequesterNotificationPacket::LAST_QTY_MAX = 922337203685477.5807;
const int64_t xetraXetraEnLightNegotiationRequesterNotificationPacket::LAST_QTY_NO_VALUE = 0x8000000000000000;
const uint32_t xetraXetraEnLightNegotiationRequesterNotificationPacket::NEGOTIATION_ID_MIN = 0;
const uint32_t xetraXetraEnLightNegotiationRequesterNotificationPacket::NEGOTIATION_ID_MAX = 4294967294;
const uint32_t xetraXetraEnLightNegotiationRequesterNotificationPacket::NEGOTIATION_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraXetraEnLightNegotiationRequesterNotificationPacket::NUMBER_OF_RESPONDENTS_MIN = 0;
const uint32_t xetraXetraEnLightNegotiationRequesterNotificationPacket::NUMBER_OF_RESPONDENTS_MAX = 4294967294;
const uint32_t xetraXetraEnLightNegotiationRequesterNotificationPacket::NUMBER_OF_RESPONDENTS_NO_VALUE = 0xFFFFFFFF;
const int32_t xetraXetraEnLightNegotiationRequesterNotificationPacket::SETTL_DATE_MIN = 0;
const int32_t xetraXetraEnLightNegotiationRequesterNotificationPacket::SETTL_DATE_MAX = 99991231;
const int32_t xetraXetraEnLightNegotiationRequesterNotificationPacket::SETTL_DATE_NO_VALUE = 0xFFFFFFFF;
const int8_t xetraXetraEnLightNegotiationRequesterNotificationPacket::QUOTE_STATUS_MIN = 6;
const int8_t xetraXetraEnLightNegotiationRequesterNotificationPacket::QUOTE_STATUS_MAX = 17;
const int8_t xetraXetraEnLightNegotiationRequesterNotificationPacket::QUOTE_STATUS_NO_VALUE = 0xFF;
const int8_t xetraXetraEnLightNegotiationRequesterNotificationPacket::NO_TARGET_PARTY_IDS_MIN = 0;
const int8_t xetraXetraEnLightNegotiationRequesterNotificationPacket::NO_TARGET_PARTY_IDS_MAX = 50;
const int8_t xetraXetraEnLightNegotiationRequesterNotificationPacket::NO_TARGET_PARTY_IDS_NO_VALUE = 0xFF;
const int8_t xetraXetraEnLightNegotiationRequesterNotificationPacket::NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_MIN = 0;
const int8_t xetraXetraEnLightNegotiationRequesterNotificationPacket::NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_MAX = 1;
const int8_t xetraXetraEnLightNegotiationRequesterNotificationPacket::NUMBER_OF_RESP_DISCLOSURE_INSTRUCTION_NO_VALUE = 0xFF;
const int8_t xetraXetraEnLightNegotiationRequesterNotificationPacket::SIDE_MIN = 1;
const int8_t xetraXetraEnLightNegotiationRequesterNotificationPacket::SIDE_MAX = 2;
const int8_t xetraXetraEnLightNegotiationRequesterNotificationPacket::SIDE_NO_VALUE = 0xFF;
const char xetraXetraEnLightNegotiationRequesterNotificationPacket::PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightNegotiationRequesterNotificationPacket::PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char xetraXetraEnLightNegotiationRequesterNotificationPacket::PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightNegotiationRequesterNotificationPacket::PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const char xetraXetraEnLightNegotiationRequesterNotificationPacket::PARTY_ENTERING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightNegotiationRequesterNotificationPacket::PARTY_ENTERING_TRADER_MAX_LENGTH = 6;
const char xetraXetraEnLightNegotiationRequesterNotificationPacket::FIRM_NEGOTIATION_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightNegotiationRequesterNotificationPacket::FIRM_NEGOTIATION_ID_MAX_LENGTH = 20;
const char xetraXetraEnLightNegotiationRequesterNotificationPacket::FREE_TEXT5_NO_VALUE[132] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightNegotiationRequesterNotificationPacket::FREE_TEXT5_MAX_LENGTH = 132;
const char xetraXetraEnLightNegotiationRequesterNotificationPacket::PAD7_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightNegotiationRequesterNotificationPacket::PAD7_MAX_LENGTH = 7;
const size_t xetraXetraEnLightNegotiationRequesterNotificationPacket::XETRA_EN_LIGHT_TARGET_PARTIES_MIN = 0;
const size_t xetraXetraEnLightNegotiationRequesterNotificationPacket::XETRA_EN_LIGHT_TARGET_PARTIES_MAX = 50;


} // namespace neueda

#endif // XETRA_XETRAENLIGHTNEGOTIATIONREQUESTERNOTIFICATION_PACKET_H
