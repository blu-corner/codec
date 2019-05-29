/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_SRQSCREATEDEALNOTIFICATION_PACKET_H
#define EUREX_SRQSCREATEDEALNOTIFICATION_PACKET_H

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

class eurexSRQSCreateDealNotificationPacket
{
    public:
        // no value constants
        static const uint64_t TRANSACT_TIME_MIN;
        static const uint64_t TRANSACT_TIME_MAX;
        static const uint64_t TRANSACT_TIME_NO_VALUE;
        static const double LAST_PX_MIN;
        static const double LAST_PX_MAX;
        static const int64_t LAST_PX_NO_VALUE;
        static const double LAST_QTY_MIN;
        static const double LAST_QTY_MAX;
        static const int64_t LAST_QTY_NO_VALUE;
        static const uint64_t QUOTE_ID_MIN;
        static const uint64_t QUOTE_ID_MAX;
        static const uint64_t QUOTE_ID_NO_VALUE;
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const uint64_t EXPIRE_TIME_MIN;
        static const uint64_t EXPIRE_TIME_MAX;
        static const uint64_t EXPIRE_TIME_NO_VALUE;
        static const double UNDERLYING_PX_MIN;
        static const double UNDERLYING_PX_MAX;
        static const int64_t UNDERLYING_PX_NO_VALUE;
        static const double UNDERLYING_DELTA_PERCENTAGE_MIN;
        static const double UNDERLYING_DELTA_PERCENTAGE_MAX;
        static const int64_t UNDERLYING_DELTA_PERCENTAGE_NO_VALUE;
        static const double UNDERLYING_EFFECTIVE_DELTA_PERCENTAGE_MIN;
        static const double UNDERLYING_EFFECTIVE_DELTA_PERCENTAGE_MAX;
        static const int64_t UNDERLYING_EFFECTIVE_DELTA_PERCENTAGE_NO_VALUE;
        static const double UNDERLYING_QTY_MIN;
        static const double UNDERLYING_QTY_MAX;
        static const int64_t UNDERLYING_QTY_NO_VALUE;
        static const double UNDERLYING_PRICE_STIP_VALUE_MIN;
        static const double UNDERLYING_PRICE_STIP_VALUE_MAX;
        static const int64_t UNDERLYING_PRICE_STIP_VALUE_NO_VALUE;
        static const uint32_t NEGOTIATION_ID_MIN;
        static const uint32_t NEGOTIATION_ID_MAX;
        static const uint32_t NEGOTIATION_ID_NO_VALUE;
        static const uint32_t TRADE_ID_MIN;
        static const uint32_t TRADE_ID_MAX;
        static const uint32_t TRADE_ID_NO_VALUE;
        static const uint32_t ORIG_TRADE_ID_MIN;
        static const uint32_t ORIG_TRADE_ID_MAX;
        static const uint32_t ORIG_TRADE_ID_NO_VALUE;
        static const int8_t TRD_RPT_STATUS_MIN;
        static const int8_t TRD_RPT_STATUS_MAX;
        static const int8_t TRD_RPT_STATUS_NO_VALUE;
        static const int8_t TRADE_REPORT_TYPE_MIN;
        static const int8_t TRADE_REPORT_TYPE_MAX;
        static const int8_t TRADE_REPORT_TYPE_NO_VALUE;
        static const char MESSAGE_EVENT_SOURCE_NO_VALUE[1];
        static const size_t MESSAGE_EVENT_SOURCE_MAX_LENGTH;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const int8_t NO_ORDER_BOOK_ITEMS_MIN;
        static const int8_t NO_ORDER_BOOK_ITEMS_MAX;
        static const int8_t NO_ORDER_BOOK_ITEMS_NO_VALUE;
        static const char ROOT_PARTY_EXECUTING_FIRM_NO_VALUE[5];
        static const size_t ROOT_PARTY_EXECUTING_FIRM_MAX_LENGTH;
        static const char ROOT_PARTY_EXECUTING_TRADER_NO_VALUE[6];
        static const size_t ROOT_PARTY_EXECUTING_TRADER_MAX_LENGTH;
        static const char ROOT_PARTY_ENTERING_TRADER_NO_VALUE[6];
        static const size_t ROOT_PARTY_ENTERING_TRADER_MAX_LENGTH;
        static const char TARGET_PARTY_EXECUTING_FIRM_NO_VALUE[5];
        static const size_t TARGET_PARTY_EXECUTING_FIRM_MAX_LENGTH;
        static const char TARGET_PARTY_EXECUTING_TRADER_NO_VALUE[6];
        static const size_t TARGET_PARTY_EXECUTING_TRADER_MAX_LENGTH;
        static const char FIRM_TRADE_ID_NO_VALUE[20];
        static const size_t FIRM_TRADE_ID_MAX_LENGTH;
        static const char FIRM_NEGOTIATION_ID_NO_VALUE[20];
        static const size_t FIRM_NEGOTIATION_ID_MAX_LENGTH;
        static const char FREE_TEXT1_NO_VALUE[12];
        static const size_t FREE_TEXT1_MAX_LENGTH;
        static const char FREE_TEXT5_NO_VALUE[132];
        static const size_t FREE_TEXT5_MAX_LENGTH;
        static const char PAD3_NO_VALUE[3];
        static const size_t PAD3_MAX_LENGTH;
        static const size_t ORDER_BOOK_ITEM_GRP_MIN;
        static const size_t ORDER_BOOK_ITEM_GRP_MAX;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexRBCHeaderCompPacket mRBCHeader;
        uint64_t mTransactTime;
        int64_t mLastPx;
        int64_t mLastQty;
        uint64_t mQuoteID;
        int64_t mSecurityID;
        uint64_t mExpireTime;
        int64_t mUnderlyingPx;
        int64_t mUnderlyingDeltaPercentage;
        int64_t mUnderlyingEffectiveDeltaPercentage;
        int64_t mUnderlyingQty;
        int64_t mUnderlyingPriceStipValue;
        uint32_t mNegotiationID;
        uint32_t mTradeID;
        uint32_t mOrigTradeID;
        int8_t mTrdRptStatus;
        int8_t mTradeReportType;
        char mMessageEventSource[1];
        int8_t mSide;
        int8_t mNoOrderBookItems;
        char mRootPartyExecutingFirm[5];
        char mRootPartyExecutingTrader[6];
        char mRootPartyEnteringTrader[6];
        char mTargetPartyExecutingFirm[5];
        char mTargetPartyExecutingTrader[6];
        char mFirmTradeID[20];
        char mFirmNegotiationID[20];
        char mFreeText1[12];
        char mFreeText5[132];
        char mPad3[3];
        vector<eurexOrderBookItemGrpCompPacket> mOrderBookItemGrp;

        // constructor
        eurexSRQSCreateDealNotificationPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10708;
            mTransactTime = TRANSACT_TIME_NO_VALUE;
            mLastPx = LAST_PX_NO_VALUE;
            mLastQty = LAST_QTY_NO_VALUE;
            mQuoteID = QUOTE_ID_NO_VALUE;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mExpireTime = EXPIRE_TIME_NO_VALUE;
            mUnderlyingPx = UNDERLYING_PX_NO_VALUE;
            mUnderlyingDeltaPercentage = UNDERLYING_DELTA_PERCENTAGE_NO_VALUE;
            mUnderlyingEffectiveDeltaPercentage = UNDERLYING_EFFECTIVE_DELTA_PERCENTAGE_NO_VALUE;
            mUnderlyingQty = UNDERLYING_QTY_NO_VALUE;
            mUnderlyingPriceStipValue = UNDERLYING_PRICE_STIP_VALUE_NO_VALUE;
            mNegotiationID = NEGOTIATION_ID_NO_VALUE;
            mTradeID = TRADE_ID_NO_VALUE;
            mOrigTradeID = ORIG_TRADE_ID_NO_VALUE;
            mTrdRptStatus = TRD_RPT_STATUS_NO_VALUE;
            mTradeReportType = TRADE_REPORT_TYPE_NO_VALUE;
            memcpy(mMessageEventSource, MESSAGE_EVENT_SOURCE_NO_VALUE, sizeof (mMessageEventSource));
            mSide = SIDE_NO_VALUE;
            mNoOrderBookItems = NO_ORDER_BOOK_ITEMS_NO_VALUE;
            memcpy(mRootPartyExecutingFirm, ROOT_PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mRootPartyExecutingFirm));
            memcpy(mRootPartyExecutingTrader, ROOT_PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mRootPartyExecutingTrader));
            memcpy(mRootPartyEnteringTrader, ROOT_PARTY_ENTERING_TRADER_NO_VALUE, sizeof (mRootPartyEnteringTrader));
            memcpy(mTargetPartyExecutingFirm, TARGET_PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mTargetPartyExecutingFirm));
            memcpy(mTargetPartyExecutingTrader, TARGET_PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mTargetPartyExecutingTrader));
            memcpy(mFirmTradeID, FIRM_TRADE_ID_NO_VALUE, sizeof (mFirmTradeID));
            memcpy(mFirmNegotiationID, FIRM_NEGOTIATION_ID_NO_VALUE, sizeof (mFirmNegotiationID));
            memcpy(mFreeText1, FREE_TEXT1_NO_VALUE, sizeof (mFreeText1));
            memcpy(mFreeText5, FREE_TEXT5_NO_VALUE, sizeof (mFreeText5));
            memcpy(mPad3, PAD3_NO_VALUE, sizeof (mPad3));
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

        double getUnderlyingPx () const
        {
            return mUnderlyingPx / 100000000.0;
        }

        bool setUnderlyingPx (double v)
        {
            mUnderlyingPx = v * 100000000.0;
            return ((UNDERLYING_PX_MIN <= v && v <= UNDERLYING_PX_MAX) || mUnderlyingPx == UNDERLYING_PX_NO_VALUE);
        }

        bool isUnderlyingPxValid () const
        {
            return (mUnderlyingPx != UNDERLYING_PX_NO_VALUE);
        }

        void resetUnderlyingPx ()
        {
            mUnderlyingPx = UNDERLYING_PX_NO_VALUE;
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

        double getUnderlyingEffectiveDeltaPercentage () const
        {
            return mUnderlyingEffectiveDeltaPercentage / 10000.0;
        }

        bool setUnderlyingEffectiveDeltaPercentage (double v)
        {
            mUnderlyingEffectiveDeltaPercentage = v * 10000.0;
            return ((UNDERLYING_EFFECTIVE_DELTA_PERCENTAGE_MIN <= v && v <= UNDERLYING_EFFECTIVE_DELTA_PERCENTAGE_MAX) || mUnderlyingEffectiveDeltaPercentage == UNDERLYING_EFFECTIVE_DELTA_PERCENTAGE_NO_VALUE);
        }

        bool isUnderlyingEffectiveDeltaPercentageValid () const
        {
            return (mUnderlyingEffectiveDeltaPercentage != UNDERLYING_EFFECTIVE_DELTA_PERCENTAGE_NO_VALUE);
        }

        void resetUnderlyingEffectiveDeltaPercentage ()
        {
            mUnderlyingEffectiveDeltaPercentage = UNDERLYING_EFFECTIVE_DELTA_PERCENTAGE_NO_VALUE;
        }

        double getUnderlyingQty () const
        {
            return mUnderlyingQty / 10000.0;
        }

        bool setUnderlyingQty (double v)
        {
            mUnderlyingQty = v * 10000.0;
            return ((UNDERLYING_QTY_MIN <= v && v <= UNDERLYING_QTY_MAX) || mUnderlyingQty == UNDERLYING_QTY_NO_VALUE);
        }

        bool isUnderlyingQtyValid () const
        {
            return (mUnderlyingQty != UNDERLYING_QTY_NO_VALUE);
        }

        void resetUnderlyingQty ()
        {
            mUnderlyingQty = UNDERLYING_QTY_NO_VALUE;
        }

        double getUnderlyingPriceStipValue () const
        {
            return mUnderlyingPriceStipValue / 100000000.0;
        }

        bool setUnderlyingPriceStipValue (double v)
        {
            mUnderlyingPriceStipValue = v * 100000000.0;
            return ((UNDERLYING_PRICE_STIP_VALUE_MIN <= v && v <= UNDERLYING_PRICE_STIP_VALUE_MAX) || mUnderlyingPriceStipValue == UNDERLYING_PRICE_STIP_VALUE_NO_VALUE);
        }

        bool isUnderlyingPriceStipValueValid () const
        {
            return (mUnderlyingPriceStipValue != UNDERLYING_PRICE_STIP_VALUE_NO_VALUE);
        }

        void resetUnderlyingPriceStipValue ()
        {
            mUnderlyingPriceStipValue = UNDERLYING_PRICE_STIP_VALUE_NO_VALUE;
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

        uint32_t getTradeID () const
        {
            return mTradeID;
        }

        bool setTradeID (uint32_t v)
        {
            mTradeID = v;
            return ((TRADE_ID_MIN <= mTradeID && mTradeID <= TRADE_ID_MAX) || mTradeID == TRADE_ID_NO_VALUE);
        }

        bool isTradeIDValid () const
        {
            return (mTradeID != TRADE_ID_NO_VALUE);
        }

        void resetTradeID ()
        {
            mTradeID = TRADE_ID_NO_VALUE;
        }

        uint32_t getOrigTradeID () const
        {
            return mOrigTradeID;
        }

        bool setOrigTradeID (uint32_t v)
        {
            mOrigTradeID = v;
            return ((ORIG_TRADE_ID_MIN <= mOrigTradeID && mOrigTradeID <= ORIG_TRADE_ID_MAX) || mOrigTradeID == ORIG_TRADE_ID_NO_VALUE);
        }

        bool isOrigTradeIDValid () const
        {
            return (mOrigTradeID != ORIG_TRADE_ID_NO_VALUE);
        }

        void resetOrigTradeID ()
        {
            mOrigTradeID = ORIG_TRADE_ID_NO_VALUE;
        }

        int8_t getTrdRptStatus () const
        {
            return mTrdRptStatus;
        }

        bool setTrdRptStatus (int8_t v)
        {
            mTrdRptStatus = v;
            return ((TRD_RPT_STATUS_MIN <= mTrdRptStatus && mTrdRptStatus <= TRD_RPT_STATUS_MAX) || mTrdRptStatus == TRD_RPT_STATUS_NO_VALUE);
        }

        bool isTrdRptStatusValid () const
        {
            return (mTrdRptStatus != TRD_RPT_STATUS_NO_VALUE);
        }

        void resetTrdRptStatus ()
        {
            mTrdRptStatus = TRD_RPT_STATUS_NO_VALUE;
        }

        int8_t getTradeReportType () const
        {
            return mTradeReportType;
        }

        bool setTradeReportType (int8_t v)
        {
            mTradeReportType = v;
            return ((TRADE_REPORT_TYPE_MIN <= mTradeReportType && mTradeReportType <= TRADE_REPORT_TYPE_MAX) || mTradeReportType == TRADE_REPORT_TYPE_NO_VALUE);
        }

        bool isTradeReportTypeValid () const
        {
            return (mTradeReportType != TRADE_REPORT_TYPE_NO_VALUE);
        }

        void resetTradeReportType ()
        {
            mTradeReportType = TRADE_REPORT_TYPE_NO_VALUE;
        }

        string getMessageEventSource () const
        {
            return string (mMessageEventSource, MESSAGE_EVENT_SOURCE_MAX_LENGTH);
        }

        bool setMessageEventSource (const string& v)
        {
            memset (mMessageEventSource, '\0', sizeof (mMessageEventSource));
            size_t size = min ((size_t) v.size (), (size_t) MESSAGE_EVENT_SOURCE_MAX_LENGTH);
            strncpy (mMessageEventSource, v.c_str (), size);
            return (v.size () <= MESSAGE_EVENT_SOURCE_MAX_LENGTH);
        }

        bool isMessageEventSourceValid () const
        {
            return (memcmp (mMessageEventSource, MESSAGE_EVENT_SOURCE_NO_VALUE, sizeof (mMessageEventSource)) != 0);
        }

        void resetMessageEventSource ()
        {
            memcpy (mMessageEventSource, MESSAGE_EVENT_SOURCE_NO_VALUE, sizeof (mMessageEventSource));
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

        int8_t getNoOrderBookItems () const
        {
            return mNoOrderBookItems;
        }

        bool setNoOrderBookItems (int8_t v)
        {
            mNoOrderBookItems = v;
            return ((NO_ORDER_BOOK_ITEMS_MIN <= mNoOrderBookItems && mNoOrderBookItems <= NO_ORDER_BOOK_ITEMS_MAX) || mNoOrderBookItems == NO_ORDER_BOOK_ITEMS_NO_VALUE);
        }

        bool isNoOrderBookItemsValid () const
        {
            return (mNoOrderBookItems != NO_ORDER_BOOK_ITEMS_NO_VALUE);
        }

        void resetNoOrderBookItems ()
        {
            mNoOrderBookItems = NO_ORDER_BOOK_ITEMS_NO_VALUE;
        }

        string getRootPartyExecutingFirm () const
        {
            return string (mRootPartyExecutingFirm, ROOT_PARTY_EXECUTING_FIRM_MAX_LENGTH);
        }

        bool setRootPartyExecutingFirm (const string& v)
        {
            memset (mRootPartyExecutingFirm, '\0', sizeof (mRootPartyExecutingFirm));
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_EXECUTING_FIRM_MAX_LENGTH);
            strncpy (mRootPartyExecutingFirm, v.c_str (), size);
            return (v.size () <= ROOT_PARTY_EXECUTING_FIRM_MAX_LENGTH);
        }

        bool isRootPartyExecutingFirmValid () const
        {
            return (memcmp (mRootPartyExecutingFirm, ROOT_PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mRootPartyExecutingFirm)) != 0);
        }

        void resetRootPartyExecutingFirm ()
        {
            memcpy (mRootPartyExecutingFirm, ROOT_PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mRootPartyExecutingFirm));
        }

        string getRootPartyExecutingTrader () const
        {
            return string (mRootPartyExecutingTrader, ROOT_PARTY_EXECUTING_TRADER_MAX_LENGTH);
        }

        bool setRootPartyExecutingTrader (const string& v)
        {
            memset (mRootPartyExecutingTrader, '\0', sizeof (mRootPartyExecutingTrader));
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_EXECUTING_TRADER_MAX_LENGTH);
            strncpy (mRootPartyExecutingTrader, v.c_str (), size);
            return (v.size () <= ROOT_PARTY_EXECUTING_TRADER_MAX_LENGTH);
        }

        bool isRootPartyExecutingTraderValid () const
        {
            return (memcmp (mRootPartyExecutingTrader, ROOT_PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mRootPartyExecutingTrader)) != 0);
        }

        void resetRootPartyExecutingTrader ()
        {
            memcpy (mRootPartyExecutingTrader, ROOT_PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mRootPartyExecutingTrader));
        }

        string getRootPartyEnteringTrader () const
        {
            return string (mRootPartyEnteringTrader, ROOT_PARTY_ENTERING_TRADER_MAX_LENGTH);
        }

        bool setRootPartyEnteringTrader (const string& v)
        {
            memset (mRootPartyEnteringTrader, '\0', sizeof (mRootPartyEnteringTrader));
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_ENTERING_TRADER_MAX_LENGTH);
            strncpy (mRootPartyEnteringTrader, v.c_str (), size);
            return (v.size () <= ROOT_PARTY_ENTERING_TRADER_MAX_LENGTH);
        }

        bool isRootPartyEnteringTraderValid () const
        {
            return (memcmp (mRootPartyEnteringTrader, ROOT_PARTY_ENTERING_TRADER_NO_VALUE, sizeof (mRootPartyEnteringTrader)) != 0);
        }

        void resetRootPartyEnteringTrader ()
        {
            memcpy (mRootPartyEnteringTrader, ROOT_PARTY_ENTERING_TRADER_NO_VALUE, sizeof (mRootPartyEnteringTrader));
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

        string getFirmTradeID () const
        {
            return string (mFirmTradeID, FIRM_TRADE_ID_MAX_LENGTH);
        }

        bool setFirmTradeID (const string& v)
        {
            memset (mFirmTradeID, '\0', sizeof (mFirmTradeID));
            size_t size = min ((size_t) v.size (), (size_t) FIRM_TRADE_ID_MAX_LENGTH);
            strncpy (mFirmTradeID, v.c_str (), size);
            return (v.size () <= FIRM_TRADE_ID_MAX_LENGTH);
        }

        bool isFirmTradeIDValid () const
        {
            return (memcmp (mFirmTradeID, FIRM_TRADE_ID_NO_VALUE, sizeof (mFirmTradeID)) != 0);
        }

        void resetFirmTradeID ()
        {
            memcpy (mFirmTradeID, FIRM_TRADE_ID_NO_VALUE, sizeof (mFirmTradeID));
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

        const vector<eurexOrderBookItemGrpCompPacket>& getOrderBookItemGrp () const
        {
            return mOrderBookItemGrp;
        }

        bool setOrderBookItemGrp (const vector<eurexOrderBookItemGrpCompPacket>& v)
        {
            mOrderBookItemGrp = v;
            mNoOrderBookItems = v.size ();
            return (ORDER_BOOK_ITEM_GRP_MIN <= v.size () && v.size () <= ORDER_BOOK_ITEM_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeader.getRawSize()
                + sizeof (mTransactTime)
                + sizeof (mLastPx)
                + sizeof (mLastQty)
                + sizeof (mQuoteID)
                + sizeof (mSecurityID)
                + sizeof (mExpireTime)
                + sizeof (mUnderlyingPx)
                + sizeof (mUnderlyingDeltaPercentage)
                + sizeof (mUnderlyingEffectiveDeltaPercentage)
                + sizeof (mUnderlyingQty)
                + sizeof (mUnderlyingPriceStipValue)
                + sizeof (mNegotiationID)
                + sizeof (mTradeID)
                + sizeof (mOrigTradeID)
                + sizeof (mTrdRptStatus)
                + sizeof (mTradeReportType)
                + sizeof (mMessageEventSource)
                + sizeof (mSide)
                + sizeof (mNoOrderBookItems)
                + sizeof (mRootPartyExecutingFirm)
                + sizeof (mRootPartyExecutingTrader)
                + sizeof (mRootPartyEnteringTrader)
                + sizeof (mTargetPartyExecutingFirm)
                + sizeof (mTargetPartyExecutingTrader)
                + sizeof (mFirmTradeID)
                + sizeof (mFirmNegotiationID)
                + sizeof (mFreeText1)
                + sizeof (mFreeText5)
                + sizeof (mPad3)
                + eti::getRawSize (mOrderBookItemGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoOrderBookItems = mOrderBookItemGrp.size ();
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mLastQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mQuoteID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExpireTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mUnderlyingPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mUnderlyingDeltaPercentage, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mUnderlyingEffectiveDeltaPercentage, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mUnderlyingQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mUnderlyingPriceStipValue, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrigTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTrdRptStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMessageEventSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoOrderBookItems, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRootPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRootPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRootPartyEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTargetPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTargetPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFirmTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFirmNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText5, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mOrderBookItemGrp.size (); i++)
            {
                state = mOrderBookItemGrp[i].serialize (buf, len, used);
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
            state = eti::deserialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mLastQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mQuoteID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExpireTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mUnderlyingPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mUnderlyingDeltaPercentage, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mUnderlyingEffectiveDeltaPercentage, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mUnderlyingQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mUnderlyingPriceStipValue, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrigTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTrdRptStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMessageEventSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoOrderBookItems, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRootPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRootPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRootPartyEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTargetPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTargetPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFirmTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFirmNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText5, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mOrderBookItemGrp.resize (mNoOrderBookItems);
            for (vector<eurexOrderBookItemGrpCompPacket>::iterator it = mOrderBookItemGrp.begin (); it != mOrderBookItemGrp.end (); ++it)
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
            sss << "SRQSCreateDealNotification::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeader=" << mRBCHeader.toString () << "],"
                << "[TransactTime=" << getTransactTime () << "],"
                << "[LastPx=" << getLastPx () << "],"
                << "[LastQty=" << getLastQty () << "],"
                << "[QuoteID=" << getQuoteID () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[ExpireTime=" << getExpireTime () << "],"
                << "[UnderlyingPx=" << getUnderlyingPx () << "],"
                << "[UnderlyingDeltaPercentage=" << getUnderlyingDeltaPercentage () << "],"
                << "[UnderlyingEffectiveDeltaPercentage=" << getUnderlyingEffectiveDeltaPercentage () << "],"
                << "[UnderlyingQty=" << getUnderlyingQty () << "],"
                << "[UnderlyingPriceStipValue=" << getUnderlyingPriceStipValue () << "],"
                << "[NegotiationID=" << getNegotiationID () << "],"
                << "[TradeID=" << getTradeID () << "],"
                << "[OrigTradeID=" << getOrigTradeID () << "],"
                << "[TrdRptStatus=" << getTrdRptStatus () << "],"
                << "[TradeReportType=" << getTradeReportType () << "],"
                << "[MessageEventSource=" << getMessageEventSource () << "],"
                << "[Side=" << getSide () << "],"
                << "[NoOrderBookItems=" << getNoOrderBookItems () << "],"
                << "[RootPartyExecutingFirm=" << getRootPartyExecutingFirm () << "],"
                << "[RootPartyExecutingTrader=" << getRootPartyExecutingTrader () << "],"
                << "[RootPartyEnteringTrader=" << getRootPartyEnteringTrader () << "],"
                << "[TargetPartyExecutingFirm=" << getTargetPartyExecutingFirm () << "],"
                << "[TargetPartyExecutingTrader=" << getTargetPartyExecutingTrader () << "],"
                << "[FirmTradeID=" << getFirmTradeID () << "],"
                << "[FirmNegotiationID=" << getFirmNegotiationID () << "],"
                << "[FreeText1=" << getFreeText1 () << "],"
                << "[FreeText5=" << getFreeText5 () << "],"
                << "[Pad3=" << getPad3 () << "],"
                << "[OrderBookItemGrp=" << eti::toString (getOrderBookItemGrp ()) << "]";
            return sss.str();
        }
};

const uint64_t eurexSRQSCreateDealNotificationPacket::TRANSACT_TIME_MIN = 0UL;
const uint64_t eurexSRQSCreateDealNotificationPacket::TRANSACT_TIME_MAX = 18446744073709551614UL;
const uint64_t eurexSRQSCreateDealNotificationPacket::TRANSACT_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const double eurexSRQSCreateDealNotificationPacket::LAST_PX_MIN = -92233720368.54775807;
const double eurexSRQSCreateDealNotificationPacket::LAST_PX_MAX = 92233720368.54775807;
const int64_t eurexSRQSCreateDealNotificationPacket::LAST_PX_NO_VALUE = 0x8000000000000000;
const double eurexSRQSCreateDealNotificationPacket::LAST_QTY_MIN = -922337203685477.5807;
const double eurexSRQSCreateDealNotificationPacket::LAST_QTY_MAX = 922337203685477.5807;
const int64_t eurexSRQSCreateDealNotificationPacket::LAST_QTY_NO_VALUE = 0x8000000000000000;
const uint64_t eurexSRQSCreateDealNotificationPacket::QUOTE_ID_MIN = 0UL;
const uint64_t eurexSRQSCreateDealNotificationPacket::QUOTE_ID_MAX = 18446744073709551614UL;
const uint64_t eurexSRQSCreateDealNotificationPacket::QUOTE_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int64_t eurexSRQSCreateDealNotificationPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t eurexSRQSCreateDealNotificationPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t eurexSRQSCreateDealNotificationPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const uint64_t eurexSRQSCreateDealNotificationPacket::EXPIRE_TIME_MIN = 0UL;
const uint64_t eurexSRQSCreateDealNotificationPacket::EXPIRE_TIME_MAX = 18446744073709551614UL;
const uint64_t eurexSRQSCreateDealNotificationPacket::EXPIRE_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const double eurexSRQSCreateDealNotificationPacket::UNDERLYING_PX_MIN = -92233720368.54775807;
const double eurexSRQSCreateDealNotificationPacket::UNDERLYING_PX_MAX = 92233720368.54775807;
const int64_t eurexSRQSCreateDealNotificationPacket::UNDERLYING_PX_NO_VALUE = 0x8000000000000000;
const double eurexSRQSCreateDealNotificationPacket::UNDERLYING_DELTA_PERCENTAGE_MIN = -922337203685477.5807;
const double eurexSRQSCreateDealNotificationPacket::UNDERLYING_DELTA_PERCENTAGE_MAX = 922337203685477.5807;
const int64_t eurexSRQSCreateDealNotificationPacket::UNDERLYING_DELTA_PERCENTAGE_NO_VALUE = 0x8000000000000000;
const double eurexSRQSCreateDealNotificationPacket::UNDERLYING_EFFECTIVE_DELTA_PERCENTAGE_MIN = -922337203685477.5807;
const double eurexSRQSCreateDealNotificationPacket::UNDERLYING_EFFECTIVE_DELTA_PERCENTAGE_MAX = 922337203685477.5807;
const int64_t eurexSRQSCreateDealNotificationPacket::UNDERLYING_EFFECTIVE_DELTA_PERCENTAGE_NO_VALUE = 0x8000000000000000;
const double eurexSRQSCreateDealNotificationPacket::UNDERLYING_QTY_MIN = -922337203685477.5807;
const double eurexSRQSCreateDealNotificationPacket::UNDERLYING_QTY_MAX = 922337203685477.5807;
const int64_t eurexSRQSCreateDealNotificationPacket::UNDERLYING_QTY_NO_VALUE = 0x8000000000000000;
const double eurexSRQSCreateDealNotificationPacket::UNDERLYING_PRICE_STIP_VALUE_MIN = -92233720368.54775807;
const double eurexSRQSCreateDealNotificationPacket::UNDERLYING_PRICE_STIP_VALUE_MAX = 92233720368.54775807;
const int64_t eurexSRQSCreateDealNotificationPacket::UNDERLYING_PRICE_STIP_VALUE_NO_VALUE = 0x8000000000000000;
const uint32_t eurexSRQSCreateDealNotificationPacket::NEGOTIATION_ID_MIN = 0;
const uint32_t eurexSRQSCreateDealNotificationPacket::NEGOTIATION_ID_MAX = 4294967294;
const uint32_t eurexSRQSCreateDealNotificationPacket::NEGOTIATION_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexSRQSCreateDealNotificationPacket::TRADE_ID_MIN = 0;
const uint32_t eurexSRQSCreateDealNotificationPacket::TRADE_ID_MAX = 4294967294;
const uint32_t eurexSRQSCreateDealNotificationPacket::TRADE_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexSRQSCreateDealNotificationPacket::ORIG_TRADE_ID_MIN = 0;
const uint32_t eurexSRQSCreateDealNotificationPacket::ORIG_TRADE_ID_MAX = 4294967294;
const uint32_t eurexSRQSCreateDealNotificationPacket::ORIG_TRADE_ID_NO_VALUE = 0xFFFFFFFF;
const int8_t eurexSRQSCreateDealNotificationPacket::TRD_RPT_STATUS_MIN = 0;
const int8_t eurexSRQSCreateDealNotificationPacket::TRD_RPT_STATUS_MAX = 9;
const int8_t eurexSRQSCreateDealNotificationPacket::TRD_RPT_STATUS_NO_VALUE = 0xFF;
const int8_t eurexSRQSCreateDealNotificationPacket::TRADE_REPORT_TYPE_MIN = 0;
const int8_t eurexSRQSCreateDealNotificationPacket::TRADE_REPORT_TYPE_MAX = 13;
const int8_t eurexSRQSCreateDealNotificationPacket::TRADE_REPORT_TYPE_NO_VALUE = 0xFF;
const char eurexSRQSCreateDealNotificationPacket::MESSAGE_EVENT_SOURCE_NO_VALUE[1] = {0x00};
const size_t eurexSRQSCreateDealNotificationPacket::MESSAGE_EVENT_SOURCE_MAX_LENGTH = 1;
const int8_t eurexSRQSCreateDealNotificationPacket::SIDE_MIN = 1;
const int8_t eurexSRQSCreateDealNotificationPacket::SIDE_MAX = 2;
const int8_t eurexSRQSCreateDealNotificationPacket::SIDE_NO_VALUE = 0xFF;
const int8_t eurexSRQSCreateDealNotificationPacket::NO_ORDER_BOOK_ITEMS_MIN = 0;
const int8_t eurexSRQSCreateDealNotificationPacket::NO_ORDER_BOOK_ITEMS_MAX = 26;
const int8_t eurexSRQSCreateDealNotificationPacket::NO_ORDER_BOOK_ITEMS_NO_VALUE = 0xFF;
const char eurexSRQSCreateDealNotificationPacket::ROOT_PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSCreateDealNotificationPacket::ROOT_PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char eurexSRQSCreateDealNotificationPacket::ROOT_PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSCreateDealNotificationPacket::ROOT_PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const char eurexSRQSCreateDealNotificationPacket::ROOT_PARTY_ENTERING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSCreateDealNotificationPacket::ROOT_PARTY_ENTERING_TRADER_MAX_LENGTH = 6;
const char eurexSRQSCreateDealNotificationPacket::TARGET_PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSCreateDealNotificationPacket::TARGET_PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char eurexSRQSCreateDealNotificationPacket::TARGET_PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSCreateDealNotificationPacket::TARGET_PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const char eurexSRQSCreateDealNotificationPacket::FIRM_TRADE_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSCreateDealNotificationPacket::FIRM_TRADE_ID_MAX_LENGTH = 20;
const char eurexSRQSCreateDealNotificationPacket::FIRM_NEGOTIATION_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSCreateDealNotificationPacket::FIRM_NEGOTIATION_ID_MAX_LENGTH = 20;
const char eurexSRQSCreateDealNotificationPacket::FREE_TEXT1_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSCreateDealNotificationPacket::FREE_TEXT1_MAX_LENGTH = 12;
const char eurexSRQSCreateDealNotificationPacket::FREE_TEXT5_NO_VALUE[132] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexSRQSCreateDealNotificationPacket::FREE_TEXT5_MAX_LENGTH = 132;
const char eurexSRQSCreateDealNotificationPacket::PAD3_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t eurexSRQSCreateDealNotificationPacket::PAD3_MAX_LENGTH = 3;
const size_t eurexSRQSCreateDealNotificationPacket::ORDER_BOOK_ITEM_GRP_MIN = 0;
const size_t eurexSRQSCreateDealNotificationPacket::ORDER_BOOK_ITEM_GRP_MAX = 26;


} // namespace neueda

#endif // EUREX_SRQSCREATEDEALNOTIFICATION_PACKET_H
