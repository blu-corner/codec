/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 09/05/2019
 */
#ifndef XETRA_XETRAENLIGHTQUOTENOTIFICATION_PACKET_H
#define XETRA_XETRAENLIGHTQUOTENOTIFICATION_PACKET_H

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

class xetraXetraEnLightQuoteNotificationPacket
{
    public:
        // no value constants
        static const uint64_t TRANSACT_TIME_MIN;
        static const uint64_t TRANSACT_TIME_MAX;
        static const uint64_t TRANSACT_TIME_NO_VALUE;
        static const uint64_t QUOTE_ID_MIN;
        static const uint64_t QUOTE_ID_MAX;
        static const uint64_t QUOTE_ID_NO_VALUE;
        static const uint64_t SECONDARY_QUOTE_ID_MIN;
        static const uint64_t SECONDARY_QUOTE_ID_MAX;
        static const uint64_t SECONDARY_QUOTE_ID_NO_VALUE;
        static const double BID_PX_MIN;
        static const double BID_PX_MAX;
        static const int64_t BID_PX_NO_VALUE;
        static const double BID_SIZE_MIN;
        static const double BID_SIZE_MAX;
        static const int64_t BID_SIZE_NO_VALUE;
        static const double OFFER_PX_MIN;
        static const double OFFER_PX_MAX;
        static const int64_t OFFER_PX_NO_VALUE;
        static const double OFFER_SIZE_MIN;
        static const double OFFER_SIZE_MAX;
        static const int64_t OFFER_SIZE_NO_VALUE;
        static const uint32_t NEGOTIATION_ID_MIN;
        static const uint32_t NEGOTIATION_ID_MAX;
        static const uint32_t NEGOTIATION_ID_NO_VALUE;
        static const int8_t TRADING_CAPACITY_MIN;
        static const int8_t TRADING_CAPACITY_MAX;
        static const int8_t TRADING_CAPACITY_NO_VALUE;
        static const int8_t QUOTING_STATUS_MIN;
        static const int8_t QUOTING_STATUS_MAX;
        static const int8_t QUOTING_STATUS_NO_VALUE;
        static const int8_t QUOTE_EVENT_REASON_MIN;
        static const int8_t QUOTE_EVENT_REASON_MAX;
        static const int8_t QUOTE_EVENT_REASON_NO_VALUE;
        static const char PARTY_EXECUTING_FIRM_NO_VALUE[5];
        static const size_t PARTY_EXECUTING_FIRM_MAX_LENGTH;
        static const char PARTY_EXECUTING_TRADER_NO_VALUE[6];
        static const size_t PARTY_EXECUTING_TRADER_MAX_LENGTH;
        static const char PARTY_ENTERING_TRADER_NO_VALUE[6];
        static const size_t PARTY_ENTERING_TRADER_MAX_LENGTH;
        static const char QUOTE_REQ_ID_NO_VALUE[20];
        static const size_t QUOTE_REQ_ID_MAX_LENGTH;
        static const char FREE_TEXT1_NO_VALUE[12];
        static const size_t FREE_TEXT1_MAX_LENGTH;
        static const char FREE_TEXT2_NO_VALUE[12];
        static const size_t FREE_TEXT2_MAX_LENGTH;
        static const char FREE_TEXT4_NO_VALUE[16];
        static const size_t FREE_TEXT4_MAX_LENGTH;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraRBCHeaderCompPacket mRBCHeader;
        uint64_t mTransactTime;
        uint64_t mQuoteID;
        uint64_t mSecondaryQuoteID;
        int64_t mBidPx;
        int64_t mBidSize;
        int64_t mOfferPx;
        int64_t mOfferSize;
        uint32_t mNegotiationID;
        int8_t mTradingCapacity;
        int8_t mQuotingStatus;
        int8_t mQuoteEventReason;
        char mPartyExecutingFirm[5];
        char mPartyExecutingTrader[6];
        char mPartyEnteringTrader[6];
        char mQuoteReqID[20];
        char mFreeText1[12];
        char mFreeText2[12];
        char mFreeText4[16];
        char mPad4[4];

        // constructor
        xetraXetraEnLightQuoteNotificationPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10807;
            mTransactTime = TRANSACT_TIME_NO_VALUE;
            mQuoteID = QUOTE_ID_NO_VALUE;
            mSecondaryQuoteID = SECONDARY_QUOTE_ID_NO_VALUE;
            mBidPx = BID_PX_NO_VALUE;
            mBidSize = BID_SIZE_NO_VALUE;
            mOfferPx = OFFER_PX_NO_VALUE;
            mOfferSize = OFFER_SIZE_NO_VALUE;
            mNegotiationID = NEGOTIATION_ID_NO_VALUE;
            mTradingCapacity = TRADING_CAPACITY_NO_VALUE;
            mQuotingStatus = QUOTING_STATUS_NO_VALUE;
            mQuoteEventReason = QUOTE_EVENT_REASON_NO_VALUE;
            memcpy(mPartyExecutingFirm, PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mPartyExecutingFirm));
            memcpy(mPartyExecutingTrader, PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mPartyExecutingTrader));
            memcpy(mPartyEnteringTrader, PARTY_ENTERING_TRADER_NO_VALUE, sizeof (mPartyEnteringTrader));
            memcpy(mQuoteReqID, QUOTE_REQ_ID_NO_VALUE, sizeof (mQuoteReqID));
            memcpy(mFreeText1, FREE_TEXT1_NO_VALUE, sizeof (mFreeText1));
            memcpy(mFreeText2, FREE_TEXT2_NO_VALUE, sizeof (mFreeText2));
            memcpy(mFreeText4, FREE_TEXT4_NO_VALUE, sizeof (mFreeText4));
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

        uint64_t getSecondaryQuoteID () const
        {
            return mSecondaryQuoteID;
        }

        bool setSecondaryQuoteID (uint64_t v)
        {
            mSecondaryQuoteID = v;
            return ((SECONDARY_QUOTE_ID_MIN <= mSecondaryQuoteID && mSecondaryQuoteID <= SECONDARY_QUOTE_ID_MAX) || mSecondaryQuoteID == SECONDARY_QUOTE_ID_NO_VALUE);
        }

        bool isSecondaryQuoteIDValid () const
        {
            return (mSecondaryQuoteID != SECONDARY_QUOTE_ID_NO_VALUE);
        }

        void resetSecondaryQuoteID ()
        {
            mSecondaryQuoteID = SECONDARY_QUOTE_ID_NO_VALUE;
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

        double getBidSize () const
        {
            return mBidSize / 10000.0;
        }

        bool setBidSize (double v)
        {
            mBidSize = v * 10000.0;
            return ((BID_SIZE_MIN <= v && v <= BID_SIZE_MAX) || mBidSize == BID_SIZE_NO_VALUE);
        }

        bool isBidSizeValid () const
        {
            return (mBidSize != BID_SIZE_NO_VALUE);
        }

        void resetBidSize ()
        {
            mBidSize = BID_SIZE_NO_VALUE;
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

        double getOfferSize () const
        {
            return mOfferSize / 10000.0;
        }

        bool setOfferSize (double v)
        {
            mOfferSize = v * 10000.0;
            return ((OFFER_SIZE_MIN <= v && v <= OFFER_SIZE_MAX) || mOfferSize == OFFER_SIZE_NO_VALUE);
        }

        bool isOfferSizeValid () const
        {
            return (mOfferSize != OFFER_SIZE_NO_VALUE);
        }

        void resetOfferSize ()
        {
            mOfferSize = OFFER_SIZE_NO_VALUE;
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

        int8_t getTradingCapacity () const
        {
            return mTradingCapacity;
        }

        bool setTradingCapacity (int8_t v)
        {
            mTradingCapacity = v;
            return ((TRADING_CAPACITY_MIN <= mTradingCapacity && mTradingCapacity <= TRADING_CAPACITY_MAX) || mTradingCapacity == TRADING_CAPACITY_NO_VALUE);
        }

        bool isTradingCapacityValid () const
        {
            return (mTradingCapacity != TRADING_CAPACITY_NO_VALUE);
        }

        void resetTradingCapacity ()
        {
            mTradingCapacity = TRADING_CAPACITY_NO_VALUE;
        }

        int8_t getQuotingStatus () const
        {
            return mQuotingStatus;
        }

        bool setQuotingStatus (int8_t v)
        {
            mQuotingStatus = v;
            return ((QUOTING_STATUS_MIN <= mQuotingStatus && mQuotingStatus <= QUOTING_STATUS_MAX) || mQuotingStatus == QUOTING_STATUS_NO_VALUE);
        }

        bool isQuotingStatusValid () const
        {
            return (mQuotingStatus != QUOTING_STATUS_NO_VALUE);
        }

        void resetQuotingStatus ()
        {
            mQuotingStatus = QUOTING_STATUS_NO_VALUE;
        }

        int8_t getQuoteEventReason () const
        {
            return mQuoteEventReason;
        }

        bool setQuoteEventReason (int8_t v)
        {
            mQuoteEventReason = v;
            return ((QUOTE_EVENT_REASON_MIN <= mQuoteEventReason && mQuoteEventReason <= QUOTE_EVENT_REASON_MAX) || mQuoteEventReason == QUOTE_EVENT_REASON_NO_VALUE);
        }

        bool isQuoteEventReasonValid () const
        {
            return (mQuoteEventReason != QUOTE_EVENT_REASON_NO_VALUE);
        }

        void resetQuoteEventReason ()
        {
            mQuoteEventReason = QUOTE_EVENT_REASON_NO_VALUE;
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

        string getFreeText1 () const
        {
            return string (mFreeText1, FREE_TEXT1_MAX_LENGTH);
        }

        bool setFreeText1 (const string& v)
        {
            memset (mFreeText1, '\0', sizeof (mFreeText1));
            size_t size = min ((size_t) v.size (), (size_t) FREE_TEXT1_MAX_LENGTH);
            strncpy (mFreeText1, v.c_str (), size);
            return (v.size () <= FREE_TEXT1_MAX_LENGTH);
        }

        bool isFreeText1Valid () const
        {
            return (memcmp (mFreeText1, FREE_TEXT1_NO_VALUE, sizeof (mFreeText1)) != 0);
        }

        void resetFreeText1 ()
        {
            memcpy (mFreeText1, FREE_TEXT1_NO_VALUE, sizeof (mFreeText1));
        }

        string getFreeText2 () const
        {
            return string (mFreeText2, FREE_TEXT2_MAX_LENGTH);
        }

        bool setFreeText2 (const string& v)
        {
            memset (mFreeText2, '\0', sizeof (mFreeText2));
            size_t size = min ((size_t) v.size (), (size_t) FREE_TEXT2_MAX_LENGTH);
            strncpy (mFreeText2, v.c_str (), size);
            return (v.size () <= FREE_TEXT2_MAX_LENGTH);
        }

        bool isFreeText2Valid () const
        {
            return (memcmp (mFreeText2, FREE_TEXT2_NO_VALUE, sizeof (mFreeText2)) != 0);
        }

        void resetFreeText2 ()
        {
            memcpy (mFreeText2, FREE_TEXT2_NO_VALUE, sizeof (mFreeText2));
        }

        string getFreeText4 () const
        {
            return string (mFreeText4, FREE_TEXT4_MAX_LENGTH);
        }

        bool setFreeText4 (const string& v)
        {
            memset (mFreeText4, '\0', sizeof (mFreeText4));
            size_t size = min ((size_t) v.size (), (size_t) FREE_TEXT4_MAX_LENGTH);
            strncpy (mFreeText4, v.c_str (), size);
            return (v.size () <= FREE_TEXT4_MAX_LENGTH);
        }

        bool isFreeText4Valid () const
        {
            return (memcmp (mFreeText4, FREE_TEXT4_NO_VALUE, sizeof (mFreeText4)) != 0);
        }

        void resetFreeText4 ()
        {
            memcpy (mFreeText4, FREE_TEXT4_NO_VALUE, sizeof (mFreeText4));
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
                + mRBCHeader.getRawSize()
                + sizeof (mTransactTime)
                + sizeof (mQuoteID)
                + sizeof (mSecondaryQuoteID)
                + sizeof (mBidPx)
                + sizeof (mBidSize)
                + sizeof (mOfferPx)
                + sizeof (mOfferSize)
                + sizeof (mNegotiationID)
                + sizeof (mTradingCapacity)
                + sizeof (mQuotingStatus)
                + sizeof (mQuoteEventReason)
                + sizeof (mPartyExecutingFirm)
                + sizeof (mPartyExecutingTrader)
                + sizeof (mPartyEnteringTrader)
                + sizeof (mQuoteReqID)
                + sizeof (mFreeText1)
                + sizeof (mFreeText2)
                + sizeof (mFreeText4)
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
            state = mRBCHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSecondaryQuoteID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mBidPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mBidSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOfferPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOfferSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuotingStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteEventReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mQuoteReqID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFreeText4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad4, buf, len, used);
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
            state = xetra::deserialize (mQuoteID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSecondaryQuoteID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mBidPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mBidSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOfferPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOfferSize, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuotingStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteEventReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mQuoteReqID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFreeText4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "XetraEnLightQuoteNotification::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeader=" << mRBCHeader.toString () << "],"
                << "[TransactTime=" << getTransactTime () << "],"
                << "[QuoteID=" << getQuoteID () << "],"
                << "[SecondaryQuoteID=" << getSecondaryQuoteID () << "],"
                << "[BidPx=" << getBidPx () << "],"
                << "[BidSize=" << getBidSize () << "],"
                << "[OfferPx=" << getOfferPx () << "],"
                << "[OfferSize=" << getOfferSize () << "],"
                << "[NegotiationID=" << getNegotiationID () << "],"
                << "[TradingCapacity=" << getTradingCapacity () << "],"
                << "[QuotingStatus=" << getQuotingStatus () << "],"
                << "[QuoteEventReason=" << getQuoteEventReason () << "],"
                << "[PartyExecutingFirm=" << getPartyExecutingFirm () << "],"
                << "[PartyExecutingTrader=" << getPartyExecutingTrader () << "],"
                << "[PartyEnteringTrader=" << getPartyEnteringTrader () << "],"
                << "[QuoteReqID=" << getQuoteReqID () << "],"
                << "[FreeText1=" << getFreeText1 () << "],"
                << "[FreeText2=" << getFreeText2 () << "],"
                << "[FreeText4=" << getFreeText4 () << "],"
                << "[Pad4=" << getPad4 () << "]";
            return sss.str();
        }
};

const uint64_t xetraXetraEnLightQuoteNotificationPacket::TRANSACT_TIME_MIN = 0UL;
const uint64_t xetraXetraEnLightQuoteNotificationPacket::TRANSACT_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraXetraEnLightQuoteNotificationPacket::TRANSACT_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraXetraEnLightQuoteNotificationPacket::QUOTE_ID_MIN = 0UL;
const uint64_t xetraXetraEnLightQuoteNotificationPacket::QUOTE_ID_MAX = 18446744073709551614UL;
const uint64_t xetraXetraEnLightQuoteNotificationPacket::QUOTE_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraXetraEnLightQuoteNotificationPacket::SECONDARY_QUOTE_ID_MIN = 0UL;
const uint64_t xetraXetraEnLightQuoteNotificationPacket::SECONDARY_QUOTE_ID_MAX = 18446744073709551614UL;
const uint64_t xetraXetraEnLightQuoteNotificationPacket::SECONDARY_QUOTE_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const double xetraXetraEnLightQuoteNotificationPacket::BID_PX_MIN = -92233720368.54775807;
const double xetraXetraEnLightQuoteNotificationPacket::BID_PX_MAX = 92233720368.54775807;
const int64_t xetraXetraEnLightQuoteNotificationPacket::BID_PX_NO_VALUE = 0x8000000000000000;
const double xetraXetraEnLightQuoteNotificationPacket::BID_SIZE_MIN = -922337203685477.5807;
const double xetraXetraEnLightQuoteNotificationPacket::BID_SIZE_MAX = 922337203685477.5807;
const int64_t xetraXetraEnLightQuoteNotificationPacket::BID_SIZE_NO_VALUE = 0x8000000000000000;
const double xetraXetraEnLightQuoteNotificationPacket::OFFER_PX_MIN = -92233720368.54775807;
const double xetraXetraEnLightQuoteNotificationPacket::OFFER_PX_MAX = 92233720368.54775807;
const int64_t xetraXetraEnLightQuoteNotificationPacket::OFFER_PX_NO_VALUE = 0x8000000000000000;
const double xetraXetraEnLightQuoteNotificationPacket::OFFER_SIZE_MIN = -922337203685477.5807;
const double xetraXetraEnLightQuoteNotificationPacket::OFFER_SIZE_MAX = 922337203685477.5807;
const int64_t xetraXetraEnLightQuoteNotificationPacket::OFFER_SIZE_NO_VALUE = 0x8000000000000000;
const uint32_t xetraXetraEnLightQuoteNotificationPacket::NEGOTIATION_ID_MIN = 0;
const uint32_t xetraXetraEnLightQuoteNotificationPacket::NEGOTIATION_ID_MAX = 4294967294;
const uint32_t xetraXetraEnLightQuoteNotificationPacket::NEGOTIATION_ID_NO_VALUE = 0xFFFFFFFF;
const int8_t xetraXetraEnLightQuoteNotificationPacket::TRADING_CAPACITY_MIN = 1;
const int8_t xetraXetraEnLightQuoteNotificationPacket::TRADING_CAPACITY_MAX = 9;
const int8_t xetraXetraEnLightQuoteNotificationPacket::TRADING_CAPACITY_NO_VALUE = 0xFF;
const int8_t xetraXetraEnLightQuoteNotificationPacket::QUOTING_STATUS_MIN = 0;
const int8_t xetraXetraEnLightQuoteNotificationPacket::QUOTING_STATUS_MAX = 4;
const int8_t xetraXetraEnLightQuoteNotificationPacket::QUOTING_STATUS_NO_VALUE = 0xFF;
const int8_t xetraXetraEnLightQuoteNotificationPacket::QUOTE_EVENT_REASON_MIN = 14;
const int8_t xetraXetraEnLightQuoteNotificationPacket::QUOTE_EVENT_REASON_MAX = 21;
const int8_t xetraXetraEnLightQuoteNotificationPacket::QUOTE_EVENT_REASON_NO_VALUE = 0xFF;
const char xetraXetraEnLightQuoteNotificationPacket::PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightQuoteNotificationPacket::PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char xetraXetraEnLightQuoteNotificationPacket::PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightQuoteNotificationPacket::PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const char xetraXetraEnLightQuoteNotificationPacket::PARTY_ENTERING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightQuoteNotificationPacket::PARTY_ENTERING_TRADER_MAX_LENGTH = 6;
const char xetraXetraEnLightQuoteNotificationPacket::QUOTE_REQ_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightQuoteNotificationPacket::QUOTE_REQ_ID_MAX_LENGTH = 20;
const char xetraXetraEnLightQuoteNotificationPacket::FREE_TEXT1_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightQuoteNotificationPacket::FREE_TEXT1_MAX_LENGTH = 12;
const char xetraXetraEnLightQuoteNotificationPacket::FREE_TEXT2_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightQuoteNotificationPacket::FREE_TEXT2_MAX_LENGTH = 12;
const char xetraXetraEnLightQuoteNotificationPacket::FREE_TEXT4_NO_VALUE[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightQuoteNotificationPacket::FREE_TEXT4_MAX_LENGTH = 16;
const char xetraXetraEnLightQuoteNotificationPacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightQuoteNotificationPacket::PAD4_MAX_LENGTH = 4;


} // namespace neueda

#endif // XETRA_XETRAENLIGHTQUOTENOTIFICATION_PACKET_H
