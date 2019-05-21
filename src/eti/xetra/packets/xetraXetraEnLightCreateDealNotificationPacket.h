/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef XETRA_XETRAENLIGHTCREATEDEALNOTIFICATION_PACKET_H
#define XETRA_XETRAENLIGHTCREATEDEALNOTIFICATION_PACKET_H

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

class xetraXetraEnLightCreateDealNotificationPacket
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
        static const uint64_t PARTY_IDCLIENT_ID_MIN;
        static const uint64_t PARTY_IDCLIENT_ID_MAX;
        static const uint64_t PARTY_IDCLIENT_ID_NO_VALUE;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_MIN;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_MAX;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE;
        static const uint64_t EXECUTING_TRADER_MIN;
        static const uint64_t EXECUTING_TRADER_MAX;
        static const uint64_t EXECUTING_TRADER_NO_VALUE;
        static const uint32_t NEGOTIATION_ID_MIN;
        static const uint32_t NEGOTIATION_ID_MAX;
        static const uint32_t NEGOTIATION_ID_NO_VALUE;
        static const uint32_t TRADE_ID_MIN;
        static const uint32_t TRADE_ID_MAX;
        static const uint32_t TRADE_ID_NO_VALUE;
        static const int32_t SETTL_DATE_MIN;
        static const int32_t SETTL_DATE_MAX;
        static const int32_t SETTL_DATE_NO_VALUE;
        static const int8_t TRADING_CAPACITY_MIN;
        static const int8_t TRADING_CAPACITY_MAX;
        static const int8_t TRADING_CAPACITY_NO_VALUE;
        static const int8_t TRD_RPT_STATUS_MIN;
        static const int8_t TRD_RPT_STATUS_MAX;
        static const int8_t TRD_RPT_STATUS_NO_VALUE;
        static const char MESSAGE_EVENT_SOURCE_NO_VALUE[1];
        static const size_t MESSAGE_EVENT_SOURCE_MAX_LENGTH;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const int8_t ALLOC_METHOD_MIN;
        static const int8_t ALLOC_METHOD_MAX;
        static const int8_t ALLOC_METHOD_NO_VALUE;
        static const int8_t NO_ORDER_BOOK_ITEMS_MIN;
        static const int8_t NO_ORDER_BOOK_ITEMS_MAX;
        static const int8_t NO_ORDER_BOOK_ITEMS_NO_VALUE;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MIN;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MAX;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE;
        static const int8_t EXECUTING_TRADER_QUALIFIER_MIN;
        static const int8_t EXECUTING_TRADER_QUALIFIER_MAX;
        static const int8_t EXECUTING_TRADER_QUALIFIER_NO_VALUE;
        static const int8_t PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MIN;
        static const int8_t PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MAX;
        static const int8_t PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE;
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
        static const char FREE_TEXT2_NO_VALUE[12];
        static const size_t FREE_TEXT2_MAX_LENGTH;
        static const char FREE_TEXT4_NO_VALUE[16];
        static const size_t FREE_TEXT4_MAX_LENGTH;
        static const char PAD7_NO_VALUE[7];
        static const size_t PAD7_MAX_LENGTH;
        static const size_t ORDER_BOOK_ITEM_GRP_MIN;
        static const size_t ORDER_BOOK_ITEM_GRP_MAX;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraRBCHeaderCompPacket mRBCHeader;
        uint64_t mTransactTime;
        int64_t mLastPx;
        int64_t mLastQty;
        uint64_t mQuoteID;
        int64_t mSecurityID;
        uint64_t mPartyIDClientID;
        uint64_t mPartyIdInvestmentDecisionMaker;
        uint64_t mExecutingTrader;
        uint32_t mNegotiationID;
        uint32_t mTradeID;
        int32_t mSettlDate;
        int8_t mTradingCapacity;
        int8_t mTrdRptStatus;
        char mMessageEventSource[1];
        int8_t mSide;
        int8_t mAllocMethod;
        int8_t mNoOrderBookItems;
        int8_t mOrderAttributeLiquidityProvision;
        int8_t mExecutingTraderQualifier;
        int8_t mPartyIdInvestmentDecisionMakerQualifier;
        char mRootPartyExecutingFirm[5];
        char mRootPartyExecutingTrader[6];
        char mRootPartyEnteringTrader[6];
        char mTargetPartyExecutingFirm[5];
        char mTargetPartyExecutingTrader[6];
        char mFirmTradeID[20];
        char mFirmNegotiationID[20];
        char mFreeText1[12];
        char mFreeText2[12];
        char mFreeText4[16];
        char mPad7[7];
        vector<xetraOrderBookItemGrpCompPacket> mOrderBookItemGrp;

        // constructor
        xetraXetraEnLightCreateDealNotificationPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10808;
            mTransactTime = TRANSACT_TIME_NO_VALUE;
            mLastPx = LAST_PX_NO_VALUE;
            mLastQty = LAST_QTY_NO_VALUE;
            mQuoteID = QUOTE_ID_NO_VALUE;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mPartyIDClientID = PARTY_IDCLIENT_ID_NO_VALUE;
            mPartyIdInvestmentDecisionMaker = PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE;
            mExecutingTrader = EXECUTING_TRADER_NO_VALUE;
            mNegotiationID = NEGOTIATION_ID_NO_VALUE;
            mTradeID = TRADE_ID_NO_VALUE;
            mSettlDate = SETTL_DATE_NO_VALUE;
            mTradingCapacity = TRADING_CAPACITY_NO_VALUE;
            mTrdRptStatus = TRD_RPT_STATUS_NO_VALUE;
            memcpy(mMessageEventSource, MESSAGE_EVENT_SOURCE_NO_VALUE, sizeof (mMessageEventSource));
            mSide = SIDE_NO_VALUE;
            mAllocMethod = ALLOC_METHOD_NO_VALUE;
            mNoOrderBookItems = NO_ORDER_BOOK_ITEMS_NO_VALUE;
            mOrderAttributeLiquidityProvision = ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE;
            mExecutingTraderQualifier = EXECUTING_TRADER_QUALIFIER_NO_VALUE;
            mPartyIdInvestmentDecisionMakerQualifier = PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE;
            memcpy(mRootPartyExecutingFirm, ROOT_PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mRootPartyExecutingFirm));
            memcpy(mRootPartyExecutingTrader, ROOT_PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mRootPartyExecutingTrader));
            memcpy(mRootPartyEnteringTrader, ROOT_PARTY_ENTERING_TRADER_NO_VALUE, sizeof (mRootPartyEnteringTrader));
            memcpy(mTargetPartyExecutingFirm, TARGET_PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mTargetPartyExecutingFirm));
            memcpy(mTargetPartyExecutingTrader, TARGET_PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mTargetPartyExecutingTrader));
            memcpy(mFirmTradeID, FIRM_TRADE_ID_NO_VALUE, sizeof (mFirmTradeID));
            memcpy(mFirmNegotiationID, FIRM_NEGOTIATION_ID_NO_VALUE, sizeof (mFirmNegotiationID));
            memcpy(mFreeText1, FREE_TEXT1_NO_VALUE, sizeof (mFreeText1));
            memcpy(mFreeText2, FREE_TEXT2_NO_VALUE, sizeof (mFreeText2));
            memcpy(mFreeText4, FREE_TEXT4_NO_VALUE, sizeof (mFreeText4));
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

        uint64_t getPartyIDClientID () const
        {
            return mPartyIDClientID;
        }

        bool setPartyIDClientID (uint64_t v)
        {
            mPartyIDClientID = v;
            return ((PARTY_IDCLIENT_ID_MIN <= mPartyIDClientID && mPartyIDClientID <= PARTY_IDCLIENT_ID_MAX) || mPartyIDClientID == PARTY_IDCLIENT_ID_NO_VALUE);
        }

        bool isPartyIDClientIDValid () const
        {
            return (mPartyIDClientID != PARTY_IDCLIENT_ID_NO_VALUE);
        }

        void resetPartyIDClientID ()
        {
            mPartyIDClientID = PARTY_IDCLIENT_ID_NO_VALUE;
        }

        uint64_t getPartyIdInvestmentDecisionMaker () const
        {
            return mPartyIdInvestmentDecisionMaker;
        }

        bool setPartyIdInvestmentDecisionMaker (uint64_t v)
        {
            mPartyIdInvestmentDecisionMaker = v;
            return ((PARTY_ID_INVESTMENT_DECISION_MAKER_MIN <= mPartyIdInvestmentDecisionMaker && mPartyIdInvestmentDecisionMaker <= PARTY_ID_INVESTMENT_DECISION_MAKER_MAX) || mPartyIdInvestmentDecisionMaker == PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE);
        }

        bool isPartyIdInvestmentDecisionMakerValid () const
        {
            return (mPartyIdInvestmentDecisionMaker != PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE);
        }

        void resetPartyIdInvestmentDecisionMaker ()
        {
            mPartyIdInvestmentDecisionMaker = PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE;
        }

        uint64_t getExecutingTrader () const
        {
            return mExecutingTrader;
        }

        bool setExecutingTrader (uint64_t v)
        {
            mExecutingTrader = v;
            return ((EXECUTING_TRADER_MIN <= mExecutingTrader && mExecutingTrader <= EXECUTING_TRADER_MAX) || mExecutingTrader == EXECUTING_TRADER_NO_VALUE);
        }

        bool isExecutingTraderValid () const
        {
            return (mExecutingTrader != EXECUTING_TRADER_NO_VALUE);
        }

        void resetExecutingTrader ()
        {
            mExecutingTrader = EXECUTING_TRADER_NO_VALUE;
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

        int8_t getAllocMethod () const
        {
            return mAllocMethod;
        }

        bool setAllocMethod (int8_t v)
        {
            mAllocMethod = v;
            return ((ALLOC_METHOD_MIN <= mAllocMethod && mAllocMethod <= ALLOC_METHOD_MAX) || mAllocMethod == ALLOC_METHOD_NO_VALUE);
        }

        bool isAllocMethodValid () const
        {
            return (mAllocMethod != ALLOC_METHOD_NO_VALUE);
        }

        void resetAllocMethod ()
        {
            mAllocMethod = ALLOC_METHOD_NO_VALUE;
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

        int8_t getOrderAttributeLiquidityProvision () const
        {
            return mOrderAttributeLiquidityProvision;
        }

        bool setOrderAttributeLiquidityProvision (int8_t v)
        {
            mOrderAttributeLiquidityProvision = v;
            return ((ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MIN <= mOrderAttributeLiquidityProvision && mOrderAttributeLiquidityProvision <= ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MAX) || mOrderAttributeLiquidityProvision == ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE);
        }

        bool isOrderAttributeLiquidityProvisionValid () const
        {
            return (mOrderAttributeLiquidityProvision != ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE);
        }

        void resetOrderAttributeLiquidityProvision ()
        {
            mOrderAttributeLiquidityProvision = ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE;
        }

        int8_t getExecutingTraderQualifier () const
        {
            return mExecutingTraderQualifier;
        }

        bool setExecutingTraderQualifier (int8_t v)
        {
            mExecutingTraderQualifier = v;
            return ((EXECUTING_TRADER_QUALIFIER_MIN <= mExecutingTraderQualifier && mExecutingTraderQualifier <= EXECUTING_TRADER_QUALIFIER_MAX) || mExecutingTraderQualifier == EXECUTING_TRADER_QUALIFIER_NO_VALUE);
        }

        bool isExecutingTraderQualifierValid () const
        {
            return (mExecutingTraderQualifier != EXECUTING_TRADER_QUALIFIER_NO_VALUE);
        }

        void resetExecutingTraderQualifier ()
        {
            mExecutingTraderQualifier = EXECUTING_TRADER_QUALIFIER_NO_VALUE;
        }

        int8_t getPartyIdInvestmentDecisionMakerQualifier () const
        {
            return mPartyIdInvestmentDecisionMakerQualifier;
        }

        bool setPartyIdInvestmentDecisionMakerQualifier (int8_t v)
        {
            mPartyIdInvestmentDecisionMakerQualifier = v;
            return ((PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MIN <= mPartyIdInvestmentDecisionMakerQualifier && mPartyIdInvestmentDecisionMakerQualifier <= PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MAX) || mPartyIdInvestmentDecisionMakerQualifier == PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE);
        }

        bool isPartyIdInvestmentDecisionMakerQualifierValid () const
        {
            return (mPartyIdInvestmentDecisionMakerQualifier != PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE);
        }

        void resetPartyIdInvestmentDecisionMakerQualifier ()
        {
            mPartyIdInvestmentDecisionMakerQualifier = PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE;
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

        const vector<xetraOrderBookItemGrpCompPacket>& getOrderBookItemGrp () const
        {
            return mOrderBookItemGrp;
        }

        bool setOrderBookItemGrp (const vector<xetraOrderBookItemGrpCompPacket>& v)
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
                + sizeof (mPartyIDClientID)
                + sizeof (mPartyIdInvestmentDecisionMaker)
                + sizeof (mExecutingTrader)
                + sizeof (mNegotiationID)
                + sizeof (mTradeID)
                + sizeof (mSettlDate)
                + sizeof (mTradingCapacity)
                + sizeof (mTrdRptStatus)
                + sizeof (mMessageEventSource)
                + sizeof (mSide)
                + sizeof (mAllocMethod)
                + sizeof (mNoOrderBookItems)
                + sizeof (mOrderAttributeLiquidityProvision)
                + sizeof (mExecutingTraderQualifier)
                + sizeof (mPartyIdInvestmentDecisionMakerQualifier)
                + sizeof (mRootPartyExecutingFirm)
                + sizeof (mRootPartyExecutingTrader)
                + sizeof (mRootPartyEnteringTrader)
                + sizeof (mTargetPartyExecutingFirm)
                + sizeof (mTargetPartyExecutingTrader)
                + sizeof (mFirmTradeID)
                + sizeof (mFirmNegotiationID)
                + sizeof (mFreeText1)
                + sizeof (mFreeText2)
                + sizeof (mFreeText4)
                + sizeof (mPad7)
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
            state = eti::serialize (mPartyIDClientID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIdInvestmentDecisionMaker, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSettlDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTrdRptStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMessageEventSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mAllocMethod, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoOrderBookItems, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrderAttributeLiquidityProvision, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecutingTraderQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIdInvestmentDecisionMakerQualifier, buf, len, used);
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
            state = eti::serialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad7, buf, len, used);
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
            state = eti::deserialize (mPartyIDClientID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIdInvestmentDecisionMaker, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSettlDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTrdRptStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMessageEventSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mAllocMethod, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoOrderBookItems, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrderAttributeLiquidityProvision, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecutingTraderQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIdInvestmentDecisionMakerQualifier, buf, len, used);
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
            state = eti::deserialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mOrderBookItemGrp.resize (mNoOrderBookItems);
            for (vector<xetraOrderBookItemGrpCompPacket>::iterator it = mOrderBookItemGrp.begin (); it != mOrderBookItemGrp.end (); ++it)
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
            sss << "XetraEnLightCreateDealNotification::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeader=" << mRBCHeader.toString () << "],"
                << "[TransactTime=" << getTransactTime () << "],"
                << "[LastPx=" << getLastPx () << "],"
                << "[LastQty=" << getLastQty () << "],"
                << "[QuoteID=" << getQuoteID () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[PartyIDClientID=" << getPartyIDClientID () << "],"
                << "[PartyIdInvestmentDecisionMaker=" << getPartyIdInvestmentDecisionMaker () << "],"
                << "[ExecutingTrader=" << getExecutingTrader () << "],"
                << "[NegotiationID=" << getNegotiationID () << "],"
                << "[TradeID=" << getTradeID () << "],"
                << "[SettlDate=" << getSettlDate () << "],"
                << "[TradingCapacity=" << getTradingCapacity () << "],"
                << "[TrdRptStatus=" << getTrdRptStatus () << "],"
                << "[MessageEventSource=" << getMessageEventSource () << "],"
                << "[Side=" << getSide () << "],"
                << "[AllocMethod=" << getAllocMethod () << "],"
                << "[NoOrderBookItems=" << getNoOrderBookItems () << "],"
                << "[OrderAttributeLiquidityProvision=" << getOrderAttributeLiquidityProvision () << "],"
                << "[ExecutingTraderQualifier=" << getExecutingTraderQualifier () << "],"
                << "[PartyIdInvestmentDecisionMakerQualifier=" << getPartyIdInvestmentDecisionMakerQualifier () << "],"
                << "[RootPartyExecutingFirm=" << getRootPartyExecutingFirm () << "],"
                << "[RootPartyExecutingTrader=" << getRootPartyExecutingTrader () << "],"
                << "[RootPartyEnteringTrader=" << getRootPartyEnteringTrader () << "],"
                << "[TargetPartyExecutingFirm=" << getTargetPartyExecutingFirm () << "],"
                << "[TargetPartyExecutingTrader=" << getTargetPartyExecutingTrader () << "],"
                << "[FirmTradeID=" << getFirmTradeID () << "],"
                << "[FirmNegotiationID=" << getFirmNegotiationID () << "],"
                << "[FreeText1=" << getFreeText1 () << "],"
                << "[FreeText2=" << getFreeText2 () << "],"
                << "[FreeText4=" << getFreeText4 () << "],"
                << "[Pad7=" << getPad7 () << "],"
                << "[OrderBookItemGrp=" << eti::toString (getOrderBookItemGrp ()) << "]";
            return sss.str();
        }
};

const uint64_t xetraXetraEnLightCreateDealNotificationPacket::TRANSACT_TIME_MIN = 0UL;
const uint64_t xetraXetraEnLightCreateDealNotificationPacket::TRANSACT_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraXetraEnLightCreateDealNotificationPacket::TRANSACT_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const double xetraXetraEnLightCreateDealNotificationPacket::LAST_PX_MIN = -92233720368.54775807;
const double xetraXetraEnLightCreateDealNotificationPacket::LAST_PX_MAX = 92233720368.54775807;
const int64_t xetraXetraEnLightCreateDealNotificationPacket::LAST_PX_NO_VALUE = 0x8000000000000000;
const double xetraXetraEnLightCreateDealNotificationPacket::LAST_QTY_MIN = -922337203685477.5807;
const double xetraXetraEnLightCreateDealNotificationPacket::LAST_QTY_MAX = 922337203685477.5807;
const int64_t xetraXetraEnLightCreateDealNotificationPacket::LAST_QTY_NO_VALUE = 0x8000000000000000;
const uint64_t xetraXetraEnLightCreateDealNotificationPacket::QUOTE_ID_MIN = 0UL;
const uint64_t xetraXetraEnLightCreateDealNotificationPacket::QUOTE_ID_MAX = 18446744073709551614UL;
const uint64_t xetraXetraEnLightCreateDealNotificationPacket::QUOTE_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int64_t xetraXetraEnLightCreateDealNotificationPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraXetraEnLightCreateDealNotificationPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraXetraEnLightCreateDealNotificationPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const uint64_t xetraXetraEnLightCreateDealNotificationPacket::PARTY_IDCLIENT_ID_MIN = 0UL;
const uint64_t xetraXetraEnLightCreateDealNotificationPacket::PARTY_IDCLIENT_ID_MAX = 18446744073709551614UL;
const uint64_t xetraXetraEnLightCreateDealNotificationPacket::PARTY_IDCLIENT_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraXetraEnLightCreateDealNotificationPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_MIN = 0UL;
const uint64_t xetraXetraEnLightCreateDealNotificationPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_MAX = 18446744073709551614UL;
const uint64_t xetraXetraEnLightCreateDealNotificationPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraXetraEnLightCreateDealNotificationPacket::EXECUTING_TRADER_MIN = 0UL;
const uint64_t xetraXetraEnLightCreateDealNotificationPacket::EXECUTING_TRADER_MAX = 18446744073709551614UL;
const uint64_t xetraXetraEnLightCreateDealNotificationPacket::EXECUTING_TRADER_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint32_t xetraXetraEnLightCreateDealNotificationPacket::NEGOTIATION_ID_MIN = 0;
const uint32_t xetraXetraEnLightCreateDealNotificationPacket::NEGOTIATION_ID_MAX = 4294967294;
const uint32_t xetraXetraEnLightCreateDealNotificationPacket::NEGOTIATION_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraXetraEnLightCreateDealNotificationPacket::TRADE_ID_MIN = 0;
const uint32_t xetraXetraEnLightCreateDealNotificationPacket::TRADE_ID_MAX = 4294967294;
const uint32_t xetraXetraEnLightCreateDealNotificationPacket::TRADE_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t xetraXetraEnLightCreateDealNotificationPacket::SETTL_DATE_MIN = 0;
const int32_t xetraXetraEnLightCreateDealNotificationPacket::SETTL_DATE_MAX = 99991231;
const int32_t xetraXetraEnLightCreateDealNotificationPacket::SETTL_DATE_NO_VALUE = 0xFFFFFFFF;
const int8_t xetraXetraEnLightCreateDealNotificationPacket::TRADING_CAPACITY_MIN = 1;
const int8_t xetraXetraEnLightCreateDealNotificationPacket::TRADING_CAPACITY_MAX = 9;
const int8_t xetraXetraEnLightCreateDealNotificationPacket::TRADING_CAPACITY_NO_VALUE = 0xFF;
const int8_t xetraXetraEnLightCreateDealNotificationPacket::TRD_RPT_STATUS_MIN = 0;
const int8_t xetraXetraEnLightCreateDealNotificationPacket::TRD_RPT_STATUS_MAX = 9;
const int8_t xetraXetraEnLightCreateDealNotificationPacket::TRD_RPT_STATUS_NO_VALUE = 0xFF;
const char xetraXetraEnLightCreateDealNotificationPacket::MESSAGE_EVENT_SOURCE_NO_VALUE[1] = {0x00};
const size_t xetraXetraEnLightCreateDealNotificationPacket::MESSAGE_EVENT_SOURCE_MAX_LENGTH = 1;
const int8_t xetraXetraEnLightCreateDealNotificationPacket::SIDE_MIN = 1;
const int8_t xetraXetraEnLightCreateDealNotificationPacket::SIDE_MAX = 2;
const int8_t xetraXetraEnLightCreateDealNotificationPacket::SIDE_NO_VALUE = 0xFF;
const int8_t xetraXetraEnLightCreateDealNotificationPacket::ALLOC_METHOD_MIN = 1;
const int8_t xetraXetraEnLightCreateDealNotificationPacket::ALLOC_METHOD_MAX = 3;
const int8_t xetraXetraEnLightCreateDealNotificationPacket::ALLOC_METHOD_NO_VALUE = 0xFF;
const int8_t xetraXetraEnLightCreateDealNotificationPacket::NO_ORDER_BOOK_ITEMS_MIN = 0;
const int8_t xetraXetraEnLightCreateDealNotificationPacket::NO_ORDER_BOOK_ITEMS_MAX = 26;
const int8_t xetraXetraEnLightCreateDealNotificationPacket::NO_ORDER_BOOK_ITEMS_NO_VALUE = 0xFF;
const int8_t xetraXetraEnLightCreateDealNotificationPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MIN = 0;
const int8_t xetraXetraEnLightCreateDealNotificationPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MAX = 1;
const int8_t xetraXetraEnLightCreateDealNotificationPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE = 0xFF;
const int8_t xetraXetraEnLightCreateDealNotificationPacket::EXECUTING_TRADER_QUALIFIER_MIN = 22;
const int8_t xetraXetraEnLightCreateDealNotificationPacket::EXECUTING_TRADER_QUALIFIER_MAX = 24;
const int8_t xetraXetraEnLightCreateDealNotificationPacket::EXECUTING_TRADER_QUALIFIER_NO_VALUE = 0xFF;
const int8_t xetraXetraEnLightCreateDealNotificationPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MIN = 22;
const int8_t xetraXetraEnLightCreateDealNotificationPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MAX = 24;
const int8_t xetraXetraEnLightCreateDealNotificationPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE = 0xFF;
const char xetraXetraEnLightCreateDealNotificationPacket::ROOT_PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightCreateDealNotificationPacket::ROOT_PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char xetraXetraEnLightCreateDealNotificationPacket::ROOT_PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightCreateDealNotificationPacket::ROOT_PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const char xetraXetraEnLightCreateDealNotificationPacket::ROOT_PARTY_ENTERING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightCreateDealNotificationPacket::ROOT_PARTY_ENTERING_TRADER_MAX_LENGTH = 6;
const char xetraXetraEnLightCreateDealNotificationPacket::TARGET_PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightCreateDealNotificationPacket::TARGET_PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char xetraXetraEnLightCreateDealNotificationPacket::TARGET_PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightCreateDealNotificationPacket::TARGET_PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const char xetraXetraEnLightCreateDealNotificationPacket::FIRM_TRADE_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightCreateDealNotificationPacket::FIRM_TRADE_ID_MAX_LENGTH = 20;
const char xetraXetraEnLightCreateDealNotificationPacket::FIRM_NEGOTIATION_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightCreateDealNotificationPacket::FIRM_NEGOTIATION_ID_MAX_LENGTH = 20;
const char xetraXetraEnLightCreateDealNotificationPacket::FREE_TEXT1_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightCreateDealNotificationPacket::FREE_TEXT1_MAX_LENGTH = 12;
const char xetraXetraEnLightCreateDealNotificationPacket::FREE_TEXT2_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightCreateDealNotificationPacket::FREE_TEXT2_MAX_LENGTH = 12;
const char xetraXetraEnLightCreateDealNotificationPacket::FREE_TEXT4_NO_VALUE[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightCreateDealNotificationPacket::FREE_TEXT4_MAX_LENGTH = 16;
const char xetraXetraEnLightCreateDealNotificationPacket::PAD7_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraXetraEnLightCreateDealNotificationPacket::PAD7_MAX_LENGTH = 7;
const size_t xetraXetraEnLightCreateDealNotificationPacket::ORDER_BOOK_ITEM_GRP_MIN = 0;
const size_t xetraXetraEnLightCreateDealNotificationPacket::ORDER_BOOK_ITEM_GRP_MAX = 26;


} // namespace neueda

#endif // XETRA_XETRAENLIGHTCREATEDEALNOTIFICATION_PACKET_H
