/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_TESAPPROVEBROADCAST_PACKET_H
#define EUREX_TESAPPROVEBROADCAST_PACKET_H

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

class eurexTESApproveBroadcastPacket
{
    public:
        // no value constants
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const double LAST_PX_MIN;
        static const double LAST_PX_MAX;
        static const int64_t LAST_PX_NO_VALUE;
        static const double ALLOC_QTY_MIN;
        static const double ALLOC_QTY_MAX;
        static const int64_t ALLOC_QTY_NO_VALUE;
        static const uint64_t TRANSACT_TIME_MIN;
        static const uint64_t TRANSACT_TIME_MAX;
        static const uint64_t TRANSACT_TIME_NO_VALUE;
        static const double UNDERLYING_PX_MIN;
        static const double UNDERLYING_PX_MAX;
        static const int64_t UNDERLYING_PX_NO_VALUE;
        static const uint64_t TRANS_BKD_TIME_MIN;
        static const uint64_t TRANS_BKD_TIME_MAX;
        static const uint64_t TRANS_BKD_TIME_NO_VALUE;
        static const double RELATED_CLOSE_PRICE_MIN;
        static const double RELATED_CLOSE_PRICE_MAX;
        static const int64_t RELATED_CLOSE_PRICE_NO_VALUE;
        static const double RELATED_TRADE_QUANTITY_MIN;
        static const double RELATED_TRADE_QUANTITY_MAX;
        static const int64_t RELATED_TRADE_QUANTITY_NO_VALUE;
        static const double UNDERLYING_QTY_MIN;
        static const double UNDERLYING_QTY_MAX;
        static const int64_t UNDERLYING_QTY_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const uint32_t PACKAGE_ID_MIN;
        static const uint32_t PACKAGE_ID_MAX;
        static const uint32_t PACKAGE_ID_NO_VALUE;
        static const uint32_t TESEXEC_ID_MIN;
        static const uint32_t TESEXEC_ID_MAX;
        static const uint32_t TESEXEC_ID_NO_VALUE;
        static const uint32_t ALLOC_ID_MIN;
        static const uint32_t ALLOC_ID_MAX;
        static const uint32_t ALLOC_ID_NO_VALUE;
        static const int32_t UNDERLYING_SETTLEMENT_DATE_MIN;
        static const int32_t UNDERLYING_SETTLEMENT_DATE_MAX;
        static const int32_t UNDERLYING_SETTLEMENT_DATE_NO_VALUE;
        static const int32_t UNDERLYING_MATURITY_DATE_MIN;
        static const int32_t UNDERLYING_MATURITY_DATE_MAX;
        static const int32_t UNDERLYING_MATURITY_DATE_NO_VALUE;
        static const uint32_t RELATED_TRADE_ID_MIN;
        static const uint32_t RELATED_TRADE_ID_MAX;
        static const uint32_t RELATED_TRADE_ID_NO_VALUE;
        static const int32_t RELATED_MARKET_SEGMENT_ID_MIN;
        static const int32_t RELATED_MARKET_SEGMENT_ID_MAX;
        static const int32_t RELATED_MARKET_SEGMENT_ID_NO_VALUE;
        static const uint32_t NEGOTIATION_ID_MIN;
        static const uint32_t NEGOTIATION_ID_MAX;
        static const uint32_t NEGOTIATION_ID_NO_VALUE;
        static const int8_t NO_SRQSRELATED_TRADE_IDS_MIN;
        static const int8_t NO_SRQSRELATED_TRADE_IDS_MAX;
        static const int8_t NO_SRQSRELATED_TRADE_IDS_NO_VALUE;
        static const char PAD1_NO_VALUE[1];
        static const size_t PAD1_MAX_LENGTH;
        static const int16_t TRD_TYPE_MIN;
        static const int16_t TRD_TYPE_MAX;
        static const int16_t TRD_TYPE_NO_VALUE;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const int8_t TRADE_PUBLISH_INDICATOR_MIN;
        static const int8_t TRADE_PUBLISH_INDICATOR_MAX;
        static const int8_t TRADE_PUBLISH_INDICATOR_NO_VALUE;
        static const int8_t PRODUCT_COMPLEX_MIN;
        static const int8_t PRODUCT_COMPLEX_MAX;
        static const int8_t PRODUCT_COMPLEX_NO_VALUE;
        static const int8_t TRADE_REPORT_TYPE_MIN;
        static const int8_t TRADE_REPORT_TYPE_MAX;
        static const int8_t TRADE_REPORT_TYPE_NO_VALUE;
        static const int8_t TRADING_CAPACITY_MIN;
        static const int8_t TRADING_CAPACITY_MAX;
        static const int8_t TRADING_CAPACITY_NO_VALUE;
        static const int8_t PARTY_IDSETTLEMENT_LOCATION_MIN;
        static const int8_t PARTY_IDSETTLEMENT_LOCATION_MAX;
        static const int8_t PARTY_IDSETTLEMENT_LOCATION_NO_VALUE;
        static const int8_t TRADE_ALLOC_STATUS_MIN;
        static const int8_t TRADE_ALLOC_STATUS_MAX;
        static const int8_t TRADE_ALLOC_STATUS_NO_VALUE;
        static const int8_t HEDGE_TYPE_MIN;
        static const int8_t HEDGE_TYPE_MAX;
        static const int8_t HEDGE_TYPE_NO_VALUE;
        static const int8_t NO_LEGS_MIN;
        static const int8_t NO_LEGS_MAX;
        static const int8_t NO_LEGS_NO_VALUE;
        static const int8_t NO_EVENTS_MIN;
        static const int8_t NO_EVENTS_MAX;
        static const int8_t NO_EVENTS_NO_VALUE;
        static const int8_t NO_INSTR_ATTRIB_MIN;
        static const int8_t NO_INSTR_ATTRIB_MAX;
        static const int8_t NO_INSTR_ATTRIB_NO_VALUE;
        static const int8_t NO_UNDERLYING_STIPS_MIN;
        static const int8_t NO_UNDERLYING_STIPS_MAX;
        static const int8_t NO_UNDERLYING_STIPS_NO_VALUE;
        static const char MESSAGE_EVENT_SOURCE_NO_VALUE[1];
        static const size_t MESSAGE_EVENT_SOURCE_MAX_LENGTH;
        static const char TRADE_REPORT_ID_NO_VALUE[20];
        static const size_t TRADE_REPORT_ID_MAX_LENGTH;
        static const char PARTY_EXECUTING_FIRM_NO_VALUE[5];
        static const size_t PARTY_EXECUTING_FIRM_MAX_LENGTH;
        static const char PARTY_EXECUTING_TRADER_NO_VALUE[6];
        static const size_t PARTY_EXECUTING_TRADER_MAX_LENGTH;
        static const int8_t PARTY_IDENTERING_FIRM_MIN;
        static const int8_t PARTY_IDENTERING_FIRM_MAX;
        static const int8_t PARTY_IDENTERING_FIRM_NO_VALUE;
        static const char PARTY_ENTERING_TRADER_NO_VALUE[6];
        static const size_t PARTY_ENTERING_TRADER_MAX_LENGTH;
        static const char POSITION_EFFECT_NO_VALUE[1];
        static const size_t POSITION_EFFECT_MAX_LENGTH;
        static const char ROOT_PARTY_EXECUTING_FIRM_NO_VALUE[5];
        static const size_t ROOT_PARTY_EXECUTING_FIRM_MAX_LENGTH;
        static const char ROOT_PARTY_EXECUTING_TRADER_NO_VALUE[6];
        static const size_t ROOT_PARTY_EXECUTING_TRADER_MAX_LENGTH;
        static const char FREE_TEXT1_NO_VALUE[12];
        static const size_t FREE_TEXT1_MAX_LENGTH;
        static const char FREE_TEXT2_NO_VALUE[12];
        static const size_t FREE_TEXT2_MAX_LENGTH;
        static const char FREE_TEXT3_NO_VALUE[12];
        static const size_t FREE_TEXT3_MAX_LENGTH;
        static const char PARTY_IDTAKE_UP_TRADING_FIRM_NO_VALUE[5];
        static const size_t PARTY_IDTAKE_UP_TRADING_FIRM_MAX_LENGTH;
        static const char ACCOUNT_NO_VALUE[2];
        static const size_t ACCOUNT_MAX_LENGTH;
        static const char PARTY_IDPOSITION_ACCOUNT_NO_VALUE[32];
        static const size_t PARTY_IDPOSITION_ACCOUNT_MAX_LENGTH;
        static const char PARTY_IDORDER_ORIGINATION_FIRM_NO_VALUE[7];
        static const size_t PARTY_IDORDER_ORIGINATION_FIRM_MAX_LENGTH;
        static const char PARTY_IDBENEFICIARY_NO_VALUE[9];
        static const size_t PARTY_IDBENEFICIARY_MAX_LENGTH;
        static const char PARTY_IDLOCATION_ID_NO_VALUE[2];
        static const size_t PARTY_IDLOCATION_ID_MAX_LENGTH;
        static const char CUST_ORDER_HANDLING_INST_NO_VALUE[1];
        static const size_t CUST_ORDER_HANDLING_INST_MAX_LENGTH;
        static const char COMPLIANCE_TEXT_NO_VALUE[20];
        static const size_t COMPLIANCE_TEXT_MAX_LENGTH;
        static const char UNDERLYING_SECURITY_ID_NO_VALUE[12];
        static const size_t UNDERLYING_SECURITY_ID_MAX_LENGTH;
        static const char UNDERLYING_SECURITY_DESC_NO_VALUE[30];
        static const size_t UNDERLYING_SECURITY_DESC_MAX_LENGTH;
        static const char UNDERLYING_CURRENCY_NO_VALUE[3];
        static const size_t UNDERLYING_CURRENCY_MAX_LENGTH;
        static const char UNDERLYING_ISSUER_NO_VALUE[30];
        static const size_t UNDERLYING_ISSUER_MAX_LENGTH;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;
        static const size_t TRD_INSTRMNT_LEG_GRP_MIN;
        static const size_t TRD_INSTRMNT_LEG_GRP_MAX;
        static const size_t INSTRUMENT_EVENT_GRP_MIN;
        static const size_t INSTRUMENT_EVENT_GRP_MAX;
        static const size_t INSTRUMENT_ATTRIBUTE_GRP_MIN;
        static const size_t INSTRUMENT_ATTRIBUTE_GRP_MAX;
        static const size_t SRQSRELATED_TRADE_IDGRP_MIN;
        static const size_t SRQSRELATED_TRADE_IDGRP_MAX;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexRBCHeaderCompPacket mRBCHeader;
        int64_t mSecurityID;
        int64_t mLastPx;
        int64_t mAllocQty;
        uint64_t mTransactTime;
        int64_t mUnderlyingPx;
        uint64_t mTransBkdTime;
        int64_t mRelatedClosePrice;
        int64_t mRelatedTradeQuantity;
        int64_t mUnderlyingQty;
        int32_t mMarketSegmentID;
        uint32_t mPackageID;
        uint32_t mTESExecID;
        uint32_t mAllocID;
        int32_t mUnderlyingSettlementDate;
        int32_t mUnderlyingMaturityDate;
        uint32_t mRelatedTradeID;
        int32_t mRelatedMarketSegmentID;
        uint32_t mNegotiationID;
        int8_t mNoSRQSRelatedTradeIDs;
        char mPad1[1];
        int16_t mTrdType;
        int8_t mSide;
        int8_t mTradePublishIndicator;
        int8_t mProductComplex;
        int8_t mTradeReportType;
        int8_t mTradingCapacity;
        int8_t mPartyIDSettlementLocation;
        int8_t mTradeAllocStatus;
        int8_t mHedgeType;
        int8_t mNoLegs;
        int8_t mNoEvents;
        int8_t mNoInstrAttrib;
        int8_t mNoUnderlyingStips;
        char mMessageEventSource[1];
        char mTradeReportID[20];
        char mPartyExecutingFirm[5];
        char mPartyExecutingTrader[6];
        int8_t mPartyIDEnteringFirm;
        char mPartyEnteringTrader[6];
        char mPositionEffect[1];
        char mRootPartyExecutingFirm[5];
        char mRootPartyExecutingTrader[6];
        char mFreeText1[12];
        char mFreeText2[12];
        char mFreeText3[12];
        char mPartyIDTakeUpTradingFirm[5];
        char mAccount[2];
        char mPartyIDPositionAccount[32];
        char mPartyIDOrderOriginationFirm[7];
        char mPartyIDBeneficiary[9];
        char mPartyIDLocationID[2];
        char mCustOrderHandlingInst[1];
        char mComplianceText[20];
        char mUnderlyingSecurityID[12];
        char mUnderlyingSecurityDesc[30];
        char mUnderlyingCurrency[3];
        char mUnderlyingIssuer[30];
        char mPad4[4];
        vector<eurexTrdInstrmntLegGrpCompPacket> mTrdInstrmntLegGrp;
        vector<eurexInstrumentEventGrpCompPacket> mInstrumentEventGrp;
        vector<eurexInstrumentAttributeGrpCompPacket> mInstrumentAttributeGrp;
        eurexUnderlyingStipGrpCompPacket mUnderlyingStipGrp;
        vector<eurexSRQSRelatedTradeIDGrpCompPacket> mSRQSRelatedTradeIDGrp;

        // constructor
        eurexTESApproveBroadcastPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10607;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mLastPx = LAST_PX_NO_VALUE;
            mAllocQty = ALLOC_QTY_NO_VALUE;
            mTransactTime = TRANSACT_TIME_NO_VALUE;
            mUnderlyingPx = UNDERLYING_PX_NO_VALUE;
            mTransBkdTime = TRANS_BKD_TIME_NO_VALUE;
            mRelatedClosePrice = RELATED_CLOSE_PRICE_NO_VALUE;
            mRelatedTradeQuantity = RELATED_TRADE_QUANTITY_NO_VALUE;
            mUnderlyingQty = UNDERLYING_QTY_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mPackageID = PACKAGE_ID_NO_VALUE;
            mTESExecID = TESEXEC_ID_NO_VALUE;
            mAllocID = ALLOC_ID_NO_VALUE;
            mUnderlyingSettlementDate = UNDERLYING_SETTLEMENT_DATE_NO_VALUE;
            mUnderlyingMaturityDate = UNDERLYING_MATURITY_DATE_NO_VALUE;
            mRelatedTradeID = RELATED_TRADE_ID_NO_VALUE;
            mRelatedMarketSegmentID = RELATED_MARKET_SEGMENT_ID_NO_VALUE;
            mNegotiationID = NEGOTIATION_ID_NO_VALUE;
            mNoSRQSRelatedTradeIDs = NO_SRQSRELATED_TRADE_IDS_NO_VALUE;
            memcpy(mPad1, PAD1_NO_VALUE, sizeof (mPad1));
            mTrdType = TRD_TYPE_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            mTradePublishIndicator = TRADE_PUBLISH_INDICATOR_NO_VALUE;
            mProductComplex = PRODUCT_COMPLEX_NO_VALUE;
            mTradeReportType = TRADE_REPORT_TYPE_NO_VALUE;
            mTradingCapacity = TRADING_CAPACITY_NO_VALUE;
            mPartyIDSettlementLocation = PARTY_IDSETTLEMENT_LOCATION_NO_VALUE;
            mTradeAllocStatus = TRADE_ALLOC_STATUS_NO_VALUE;
            mHedgeType = HEDGE_TYPE_NO_VALUE;
            mNoLegs = NO_LEGS_NO_VALUE;
            mNoEvents = NO_EVENTS_NO_VALUE;
            mNoInstrAttrib = NO_INSTR_ATTRIB_NO_VALUE;
            mNoUnderlyingStips = NO_UNDERLYING_STIPS_NO_VALUE;
            memcpy(mMessageEventSource, MESSAGE_EVENT_SOURCE_NO_VALUE, sizeof (mMessageEventSource));
            memcpy(mTradeReportID, TRADE_REPORT_ID_NO_VALUE, sizeof (mTradeReportID));
            memcpy(mPartyExecutingFirm, PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mPartyExecutingFirm));
            memcpy(mPartyExecutingTrader, PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mPartyExecutingTrader));
            mPartyIDEnteringFirm = PARTY_IDENTERING_FIRM_NO_VALUE;
            memcpy(mPartyEnteringTrader, PARTY_ENTERING_TRADER_NO_VALUE, sizeof (mPartyEnteringTrader));
            memcpy(mPositionEffect, POSITION_EFFECT_NO_VALUE, sizeof (mPositionEffect));
            memcpy(mRootPartyExecutingFirm, ROOT_PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mRootPartyExecutingFirm));
            memcpy(mRootPartyExecutingTrader, ROOT_PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mRootPartyExecutingTrader));
            memcpy(mFreeText1, FREE_TEXT1_NO_VALUE, sizeof (mFreeText1));
            memcpy(mFreeText2, FREE_TEXT2_NO_VALUE, sizeof (mFreeText2));
            memcpy(mFreeText3, FREE_TEXT3_NO_VALUE, sizeof (mFreeText3));
            memcpy(mPartyIDTakeUpTradingFirm, PARTY_IDTAKE_UP_TRADING_FIRM_NO_VALUE, sizeof (mPartyIDTakeUpTradingFirm));
            memcpy(mAccount, ACCOUNT_NO_VALUE, sizeof (mAccount));
            memcpy(mPartyIDPositionAccount, PARTY_IDPOSITION_ACCOUNT_NO_VALUE, sizeof (mPartyIDPositionAccount));
            memcpy(mPartyIDOrderOriginationFirm, PARTY_IDORDER_ORIGINATION_FIRM_NO_VALUE, sizeof (mPartyIDOrderOriginationFirm));
            memcpy(mPartyIDBeneficiary, PARTY_IDBENEFICIARY_NO_VALUE, sizeof (mPartyIDBeneficiary));
            memcpy(mPartyIDLocationID, PARTY_IDLOCATION_ID_NO_VALUE, sizeof (mPartyIDLocationID));
            memcpy(mCustOrderHandlingInst, CUST_ORDER_HANDLING_INST_NO_VALUE, sizeof (mCustOrderHandlingInst));
            memcpy(mComplianceText, COMPLIANCE_TEXT_NO_VALUE, sizeof (mComplianceText));
            memcpy(mUnderlyingSecurityID, UNDERLYING_SECURITY_ID_NO_VALUE, sizeof (mUnderlyingSecurityID));
            memcpy(mUnderlyingSecurityDesc, UNDERLYING_SECURITY_DESC_NO_VALUE, sizeof (mUnderlyingSecurityDesc));
            memcpy(mUnderlyingCurrency, UNDERLYING_CURRENCY_NO_VALUE, sizeof (mUnderlyingCurrency));
            memcpy(mUnderlyingIssuer, UNDERLYING_ISSUER_NO_VALUE, sizeof (mUnderlyingIssuer));
            memcpy(mPad4, PAD4_NO_VALUE, sizeof (mPad4));
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

        double getAllocQty () const
        {
            return mAllocQty / 10000.0;
        }

        bool setAllocQty (double v)
        {
            mAllocQty = v * 10000.0;
            return ((ALLOC_QTY_MIN <= v && v <= ALLOC_QTY_MAX) || mAllocQty == ALLOC_QTY_NO_VALUE);
        }

        bool isAllocQtyValid () const
        {
            return (mAllocQty != ALLOC_QTY_NO_VALUE);
        }

        void resetAllocQty ()
        {
            mAllocQty = ALLOC_QTY_NO_VALUE;
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

        uint64_t getTransBkdTime () const
        {
            return mTransBkdTime;
        }

        bool setTransBkdTime (uint64_t v)
        {
            mTransBkdTime = v;
            return ((TRANS_BKD_TIME_MIN <= mTransBkdTime && mTransBkdTime <= TRANS_BKD_TIME_MAX) || mTransBkdTime == TRANS_BKD_TIME_NO_VALUE);
        }

        bool isTransBkdTimeValid () const
        {
            return (mTransBkdTime != TRANS_BKD_TIME_NO_VALUE);
        }

        void resetTransBkdTime ()
        {
            mTransBkdTime = TRANS_BKD_TIME_NO_VALUE;
        }

        double getRelatedClosePrice () const
        {
            return mRelatedClosePrice / 1000000.0;
        }

        bool setRelatedClosePrice (double v)
        {
            mRelatedClosePrice = v * 1000000.0;
            return ((RELATED_CLOSE_PRICE_MIN <= v && v <= RELATED_CLOSE_PRICE_MAX) || mRelatedClosePrice == RELATED_CLOSE_PRICE_NO_VALUE);
        }

        bool isRelatedClosePriceValid () const
        {
            return (mRelatedClosePrice != RELATED_CLOSE_PRICE_NO_VALUE);
        }

        void resetRelatedClosePrice ()
        {
            mRelatedClosePrice = RELATED_CLOSE_PRICE_NO_VALUE;
        }

        double getRelatedTradeQuantity () const
        {
            return mRelatedTradeQuantity / 10000.0;
        }

        bool setRelatedTradeQuantity (double v)
        {
            mRelatedTradeQuantity = v * 10000.0;
            return ((RELATED_TRADE_QUANTITY_MIN <= v && v <= RELATED_TRADE_QUANTITY_MAX) || mRelatedTradeQuantity == RELATED_TRADE_QUANTITY_NO_VALUE);
        }

        bool isRelatedTradeQuantityValid () const
        {
            return (mRelatedTradeQuantity != RELATED_TRADE_QUANTITY_NO_VALUE);
        }

        void resetRelatedTradeQuantity ()
        {
            mRelatedTradeQuantity = RELATED_TRADE_QUANTITY_NO_VALUE;
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

        uint32_t getPackageID () const
        {
            return mPackageID;
        }

        bool setPackageID (uint32_t v)
        {
            mPackageID = v;
            return ((PACKAGE_ID_MIN <= mPackageID && mPackageID <= PACKAGE_ID_MAX) || mPackageID == PACKAGE_ID_NO_VALUE);
        }

        bool isPackageIDValid () const
        {
            return (mPackageID != PACKAGE_ID_NO_VALUE);
        }

        void resetPackageID ()
        {
            mPackageID = PACKAGE_ID_NO_VALUE;
        }

        uint32_t getTESExecID () const
        {
            return mTESExecID;
        }

        bool setTESExecID (uint32_t v)
        {
            mTESExecID = v;
            return ((TESEXEC_ID_MIN <= mTESExecID && mTESExecID <= TESEXEC_ID_MAX) || mTESExecID == TESEXEC_ID_NO_VALUE);
        }

        bool isTESExecIDValid () const
        {
            return (mTESExecID != TESEXEC_ID_NO_VALUE);
        }

        void resetTESExecID ()
        {
            mTESExecID = TESEXEC_ID_NO_VALUE;
        }

        uint32_t getAllocID () const
        {
            return mAllocID;
        }

        bool setAllocID (uint32_t v)
        {
            mAllocID = v;
            return ((ALLOC_ID_MIN <= mAllocID && mAllocID <= ALLOC_ID_MAX) || mAllocID == ALLOC_ID_NO_VALUE);
        }

        bool isAllocIDValid () const
        {
            return (mAllocID != ALLOC_ID_NO_VALUE);
        }

        void resetAllocID ()
        {
            mAllocID = ALLOC_ID_NO_VALUE;
        }

        int32_t getUnderlyingSettlementDate () const
        {
            return mUnderlyingSettlementDate;
        }

        bool setUnderlyingSettlementDate (int32_t v)
        {
            mUnderlyingSettlementDate = v;
            return ((UNDERLYING_SETTLEMENT_DATE_MIN <= mUnderlyingSettlementDate && mUnderlyingSettlementDate <= UNDERLYING_SETTLEMENT_DATE_MAX) || mUnderlyingSettlementDate == UNDERLYING_SETTLEMENT_DATE_NO_VALUE);
        }

        bool isUnderlyingSettlementDateValid () const
        {
            return (mUnderlyingSettlementDate != UNDERLYING_SETTLEMENT_DATE_NO_VALUE);
        }

        void resetUnderlyingSettlementDate ()
        {
            mUnderlyingSettlementDate = UNDERLYING_SETTLEMENT_DATE_NO_VALUE;
        }

        int32_t getUnderlyingMaturityDate () const
        {
            return mUnderlyingMaturityDate;
        }

        bool setUnderlyingMaturityDate (int32_t v)
        {
            mUnderlyingMaturityDate = v;
            return ((UNDERLYING_MATURITY_DATE_MIN <= mUnderlyingMaturityDate && mUnderlyingMaturityDate <= UNDERLYING_MATURITY_DATE_MAX) || mUnderlyingMaturityDate == UNDERLYING_MATURITY_DATE_NO_VALUE);
        }

        bool isUnderlyingMaturityDateValid () const
        {
            return (mUnderlyingMaturityDate != UNDERLYING_MATURITY_DATE_NO_VALUE);
        }

        void resetUnderlyingMaturityDate ()
        {
            mUnderlyingMaturityDate = UNDERLYING_MATURITY_DATE_NO_VALUE;
        }

        uint32_t getRelatedTradeID () const
        {
            return mRelatedTradeID;
        }

        bool setRelatedTradeID (uint32_t v)
        {
            mRelatedTradeID = v;
            return ((RELATED_TRADE_ID_MIN <= mRelatedTradeID && mRelatedTradeID <= RELATED_TRADE_ID_MAX) || mRelatedTradeID == RELATED_TRADE_ID_NO_VALUE);
        }

        bool isRelatedTradeIDValid () const
        {
            return (mRelatedTradeID != RELATED_TRADE_ID_NO_VALUE);
        }

        void resetRelatedTradeID ()
        {
            mRelatedTradeID = RELATED_TRADE_ID_NO_VALUE;
        }

        int32_t getRelatedMarketSegmentID () const
        {
            return mRelatedMarketSegmentID;
        }

        bool setRelatedMarketSegmentID (int32_t v)
        {
            mRelatedMarketSegmentID = v;
            return ((RELATED_MARKET_SEGMENT_ID_MIN <= mRelatedMarketSegmentID && mRelatedMarketSegmentID <= RELATED_MARKET_SEGMENT_ID_MAX) || mRelatedMarketSegmentID == RELATED_MARKET_SEGMENT_ID_NO_VALUE);
        }

        bool isRelatedMarketSegmentIDValid () const
        {
            return (mRelatedMarketSegmentID != RELATED_MARKET_SEGMENT_ID_NO_VALUE);
        }

        void resetRelatedMarketSegmentID ()
        {
            mRelatedMarketSegmentID = RELATED_MARKET_SEGMENT_ID_NO_VALUE;
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

        int8_t getNoSRQSRelatedTradeIDs () const
        {
            return mNoSRQSRelatedTradeIDs;
        }

        bool setNoSRQSRelatedTradeIDs (int8_t v)
        {
            mNoSRQSRelatedTradeIDs = v;
            return ((NO_SRQSRELATED_TRADE_IDS_MIN <= mNoSRQSRelatedTradeIDs && mNoSRQSRelatedTradeIDs <= NO_SRQSRELATED_TRADE_IDS_MAX) || mNoSRQSRelatedTradeIDs == NO_SRQSRELATED_TRADE_IDS_NO_VALUE);
        }

        bool isNoSRQSRelatedTradeIDsValid () const
        {
            return (mNoSRQSRelatedTradeIDs != NO_SRQSRELATED_TRADE_IDS_NO_VALUE);
        }

        void resetNoSRQSRelatedTradeIDs ()
        {
            mNoSRQSRelatedTradeIDs = NO_SRQSRELATED_TRADE_IDS_NO_VALUE;
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

        int16_t getTrdType () const
        {
            return mTrdType;
        }

        bool setTrdType (int16_t v)
        {
            mTrdType = v;
            return ((TRD_TYPE_MIN <= mTrdType && mTrdType <= TRD_TYPE_MAX) || mTrdType == TRD_TYPE_NO_VALUE);
        }

        bool isTrdTypeValid () const
        {
            return (mTrdType != TRD_TYPE_NO_VALUE);
        }

        void resetTrdType ()
        {
            mTrdType = TRD_TYPE_NO_VALUE;
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

        int8_t getTradePublishIndicator () const
        {
            return mTradePublishIndicator;
        }

        bool setTradePublishIndicator (int8_t v)
        {
            mTradePublishIndicator = v;
            return ((TRADE_PUBLISH_INDICATOR_MIN <= mTradePublishIndicator && mTradePublishIndicator <= TRADE_PUBLISH_INDICATOR_MAX) || mTradePublishIndicator == TRADE_PUBLISH_INDICATOR_NO_VALUE);
        }

        bool isTradePublishIndicatorValid () const
        {
            return (mTradePublishIndicator != TRADE_PUBLISH_INDICATOR_NO_VALUE);
        }

        void resetTradePublishIndicator ()
        {
            mTradePublishIndicator = TRADE_PUBLISH_INDICATOR_NO_VALUE;
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

        int8_t getPartyIDSettlementLocation () const
        {
            return mPartyIDSettlementLocation;
        }

        bool setPartyIDSettlementLocation (int8_t v)
        {
            mPartyIDSettlementLocation = v;
            return ((PARTY_IDSETTLEMENT_LOCATION_MIN <= mPartyIDSettlementLocation && mPartyIDSettlementLocation <= PARTY_IDSETTLEMENT_LOCATION_MAX) || mPartyIDSettlementLocation == PARTY_IDSETTLEMENT_LOCATION_NO_VALUE);
        }

        bool isPartyIDSettlementLocationValid () const
        {
            return (mPartyIDSettlementLocation != PARTY_IDSETTLEMENT_LOCATION_NO_VALUE);
        }

        void resetPartyIDSettlementLocation ()
        {
            mPartyIDSettlementLocation = PARTY_IDSETTLEMENT_LOCATION_NO_VALUE;
        }

        int8_t getTradeAllocStatus () const
        {
            return mTradeAllocStatus;
        }

        bool setTradeAllocStatus (int8_t v)
        {
            mTradeAllocStatus = v;
            return ((TRADE_ALLOC_STATUS_MIN <= mTradeAllocStatus && mTradeAllocStatus <= TRADE_ALLOC_STATUS_MAX) || mTradeAllocStatus == TRADE_ALLOC_STATUS_NO_VALUE);
        }

        bool isTradeAllocStatusValid () const
        {
            return (mTradeAllocStatus != TRADE_ALLOC_STATUS_NO_VALUE);
        }

        void resetTradeAllocStatus ()
        {
            mTradeAllocStatus = TRADE_ALLOC_STATUS_NO_VALUE;
        }

        int8_t getHedgeType () const
        {
            return mHedgeType;
        }

        bool setHedgeType (int8_t v)
        {
            mHedgeType = v;
            return ((HEDGE_TYPE_MIN <= mHedgeType && mHedgeType <= HEDGE_TYPE_MAX) || mHedgeType == HEDGE_TYPE_NO_VALUE);
        }

        bool isHedgeTypeValid () const
        {
            return (mHedgeType != HEDGE_TYPE_NO_VALUE);
        }

        void resetHedgeType ()
        {
            mHedgeType = HEDGE_TYPE_NO_VALUE;
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

        int8_t getNoEvents () const
        {
            return mNoEvents;
        }

        bool setNoEvents (int8_t v)
        {
            mNoEvents = v;
            return ((NO_EVENTS_MIN <= mNoEvents && mNoEvents <= NO_EVENTS_MAX) || mNoEvents == NO_EVENTS_NO_VALUE);
        }

        bool isNoEventsValid () const
        {
            return (mNoEvents != NO_EVENTS_NO_VALUE);
        }

        void resetNoEvents ()
        {
            mNoEvents = NO_EVENTS_NO_VALUE;
        }

        int8_t getNoInstrAttrib () const
        {
            return mNoInstrAttrib;
        }

        bool setNoInstrAttrib (int8_t v)
        {
            mNoInstrAttrib = v;
            return ((NO_INSTR_ATTRIB_MIN <= mNoInstrAttrib && mNoInstrAttrib <= NO_INSTR_ATTRIB_MAX) || mNoInstrAttrib == NO_INSTR_ATTRIB_NO_VALUE);
        }

        bool isNoInstrAttribValid () const
        {
            return (mNoInstrAttrib != NO_INSTR_ATTRIB_NO_VALUE);
        }

        void resetNoInstrAttrib ()
        {
            mNoInstrAttrib = NO_INSTR_ATTRIB_NO_VALUE;
        }

        int8_t getNoUnderlyingStips () const
        {
            return mNoUnderlyingStips;
        }

        bool setNoUnderlyingStips (int8_t v)
        {
            mNoUnderlyingStips = v;
            return ((NO_UNDERLYING_STIPS_MIN <= mNoUnderlyingStips && mNoUnderlyingStips <= NO_UNDERLYING_STIPS_MAX) || mNoUnderlyingStips == NO_UNDERLYING_STIPS_NO_VALUE);
        }

        bool isNoUnderlyingStipsValid () const
        {
            return (mNoUnderlyingStips != NO_UNDERLYING_STIPS_NO_VALUE);
        }

        void resetNoUnderlyingStips ()
        {
            mNoUnderlyingStips = NO_UNDERLYING_STIPS_NO_VALUE;
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

        string getTradeReportID () const
        {
            return string (mTradeReportID, TRADE_REPORT_ID_MAX_LENGTH);
        }

        bool setTradeReportID (const string& v)
        {
            memset (mTradeReportID, '\0', sizeof (mTradeReportID));
            size_t size = min ((size_t) v.size (), (size_t) TRADE_REPORT_ID_MAX_LENGTH);
            strncpy (mTradeReportID, v.c_str (), size);
            return (v.size () <= TRADE_REPORT_ID_MAX_LENGTH);
        }

        bool isTradeReportIDValid () const
        {
            return (memcmp (mTradeReportID, TRADE_REPORT_ID_NO_VALUE, sizeof (mTradeReportID)) != 0);
        }

        void resetTradeReportID ()
        {
            memcpy (mTradeReportID, TRADE_REPORT_ID_NO_VALUE, sizeof (mTradeReportID));
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

        int8_t getPartyIDEnteringFirm () const
        {
            return mPartyIDEnteringFirm;
        }

        bool setPartyIDEnteringFirm (int8_t v)
        {
            mPartyIDEnteringFirm = v;
            return ((PARTY_IDENTERING_FIRM_MIN <= mPartyIDEnteringFirm && mPartyIDEnteringFirm <= PARTY_IDENTERING_FIRM_MAX) || mPartyIDEnteringFirm == PARTY_IDENTERING_FIRM_NO_VALUE);
        }

        bool isPartyIDEnteringFirmValid () const
        {
            return (mPartyIDEnteringFirm != PARTY_IDENTERING_FIRM_NO_VALUE);
        }

        void resetPartyIDEnteringFirm ()
        {
            mPartyIDEnteringFirm = PARTY_IDENTERING_FIRM_NO_VALUE;
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

        string getPositionEffect () const
        {
            return string (mPositionEffect, POSITION_EFFECT_MAX_LENGTH);
        }

        bool setPositionEffect (const string& v)
        {
            memset (mPositionEffect, '\0', sizeof (mPositionEffect));
            size_t size = min ((size_t) v.size (), (size_t) POSITION_EFFECT_MAX_LENGTH);
            strncpy (mPositionEffect, v.c_str (), size);
            return (v.size () <= POSITION_EFFECT_MAX_LENGTH);
        }

        bool isPositionEffectValid () const
        {
            return (memcmp (mPositionEffect, POSITION_EFFECT_NO_VALUE, sizeof (mPositionEffect)) != 0);
        }

        void resetPositionEffect ()
        {
            memcpy (mPositionEffect, POSITION_EFFECT_NO_VALUE, sizeof (mPositionEffect));
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

        string getFreeText3 () const
        {
            return string (mFreeText3, FREE_TEXT3_MAX_LENGTH);
        }

        bool setFreeText3 (const string& v)
        {
            memset (mFreeText3, '\0', sizeof (mFreeText3));
            size_t size = min ((size_t) v.size (), (size_t) FREE_TEXT3_MAX_LENGTH);
            strncpy (mFreeText3, v.c_str (), size);
            return (v.size () <= FREE_TEXT3_MAX_LENGTH);
        }

        bool isFreeText3Valid () const
        {
            return (memcmp (mFreeText3, FREE_TEXT3_NO_VALUE, sizeof (mFreeText3)) != 0);
        }

        void resetFreeText3 ()
        {
            memcpy (mFreeText3, FREE_TEXT3_NO_VALUE, sizeof (mFreeText3));
        }

        string getPartyIDTakeUpTradingFirm () const
        {
            return string (mPartyIDTakeUpTradingFirm, PARTY_IDTAKE_UP_TRADING_FIRM_MAX_LENGTH);
        }

        bool setPartyIDTakeUpTradingFirm (const string& v)
        {
            memset (mPartyIDTakeUpTradingFirm, '\0', sizeof (mPartyIDTakeUpTradingFirm));
            size_t size = min ((size_t) v.size (), (size_t) PARTY_IDTAKE_UP_TRADING_FIRM_MAX_LENGTH);
            strncpy (mPartyIDTakeUpTradingFirm, v.c_str (), size);
            return (v.size () <= PARTY_IDTAKE_UP_TRADING_FIRM_MAX_LENGTH);
        }

        bool isPartyIDTakeUpTradingFirmValid () const
        {
            return (memcmp (mPartyIDTakeUpTradingFirm, PARTY_IDTAKE_UP_TRADING_FIRM_NO_VALUE, sizeof (mPartyIDTakeUpTradingFirm)) != 0);
        }

        void resetPartyIDTakeUpTradingFirm ()
        {
            memcpy (mPartyIDTakeUpTradingFirm, PARTY_IDTAKE_UP_TRADING_FIRM_NO_VALUE, sizeof (mPartyIDTakeUpTradingFirm));
        }

        string getAccount () const
        {
            return string (mAccount, ACCOUNT_MAX_LENGTH);
        }

        bool setAccount (const string& v)
        {
            memset (mAccount, '\0', sizeof (mAccount));
            size_t size = min ((size_t) v.size (), (size_t) ACCOUNT_MAX_LENGTH);
            strncpy (mAccount, v.c_str (), size);
            return (v.size () <= ACCOUNT_MAX_LENGTH);
        }

        bool isAccountValid () const
        {
            return (memcmp (mAccount, ACCOUNT_NO_VALUE, sizeof (mAccount)) != 0);
        }

        void resetAccount ()
        {
            memcpy (mAccount, ACCOUNT_NO_VALUE, sizeof (mAccount));
        }

        string getPartyIDPositionAccount () const
        {
            return string (mPartyIDPositionAccount, PARTY_IDPOSITION_ACCOUNT_MAX_LENGTH);
        }

        bool setPartyIDPositionAccount (const string& v)
        {
            memset (mPartyIDPositionAccount, '\0', sizeof (mPartyIDPositionAccount));
            size_t size = min ((size_t) v.size (), (size_t) PARTY_IDPOSITION_ACCOUNT_MAX_LENGTH);
            strncpy (mPartyIDPositionAccount, v.c_str (), size);
            return (v.size () <= PARTY_IDPOSITION_ACCOUNT_MAX_LENGTH);
        }

        bool isPartyIDPositionAccountValid () const
        {
            return (memcmp (mPartyIDPositionAccount, PARTY_IDPOSITION_ACCOUNT_NO_VALUE, sizeof (mPartyIDPositionAccount)) != 0);
        }

        void resetPartyIDPositionAccount ()
        {
            memcpy (mPartyIDPositionAccount, PARTY_IDPOSITION_ACCOUNT_NO_VALUE, sizeof (mPartyIDPositionAccount));
        }

        string getPartyIDOrderOriginationFirm () const
        {
            return string (mPartyIDOrderOriginationFirm, PARTY_IDORDER_ORIGINATION_FIRM_MAX_LENGTH);
        }

        bool setPartyIDOrderOriginationFirm (const string& v)
        {
            memset (mPartyIDOrderOriginationFirm, '\0', sizeof (mPartyIDOrderOriginationFirm));
            size_t size = min ((size_t) v.size (), (size_t) PARTY_IDORDER_ORIGINATION_FIRM_MAX_LENGTH);
            strncpy (mPartyIDOrderOriginationFirm, v.c_str (), size);
            return (v.size () <= PARTY_IDORDER_ORIGINATION_FIRM_MAX_LENGTH);
        }

        bool isPartyIDOrderOriginationFirmValid () const
        {
            return (memcmp (mPartyIDOrderOriginationFirm, PARTY_IDORDER_ORIGINATION_FIRM_NO_VALUE, sizeof (mPartyIDOrderOriginationFirm)) != 0);
        }

        void resetPartyIDOrderOriginationFirm ()
        {
            memcpy (mPartyIDOrderOriginationFirm, PARTY_IDORDER_ORIGINATION_FIRM_NO_VALUE, sizeof (mPartyIDOrderOriginationFirm));
        }

        string getPartyIDBeneficiary () const
        {
            return string (mPartyIDBeneficiary, PARTY_IDBENEFICIARY_MAX_LENGTH);
        }

        bool setPartyIDBeneficiary (const string& v)
        {
            memset (mPartyIDBeneficiary, '\0', sizeof (mPartyIDBeneficiary));
            size_t size = min ((size_t) v.size (), (size_t) PARTY_IDBENEFICIARY_MAX_LENGTH);
            strncpy (mPartyIDBeneficiary, v.c_str (), size);
            return (v.size () <= PARTY_IDBENEFICIARY_MAX_LENGTH);
        }

        bool isPartyIDBeneficiaryValid () const
        {
            return (memcmp (mPartyIDBeneficiary, PARTY_IDBENEFICIARY_NO_VALUE, sizeof (mPartyIDBeneficiary)) != 0);
        }

        void resetPartyIDBeneficiary ()
        {
            memcpy (mPartyIDBeneficiary, PARTY_IDBENEFICIARY_NO_VALUE, sizeof (mPartyIDBeneficiary));
        }

        string getPartyIDLocationID () const
        {
            return string (mPartyIDLocationID, PARTY_IDLOCATION_ID_MAX_LENGTH);
        }

        bool setPartyIDLocationID (const string& v)
        {
            memset (mPartyIDLocationID, '\0', sizeof (mPartyIDLocationID));
            size_t size = min ((size_t) v.size (), (size_t) PARTY_IDLOCATION_ID_MAX_LENGTH);
            strncpy (mPartyIDLocationID, v.c_str (), size);
            return (v.size () <= PARTY_IDLOCATION_ID_MAX_LENGTH);
        }

        bool isPartyIDLocationIDValid () const
        {
            return (memcmp (mPartyIDLocationID, PARTY_IDLOCATION_ID_NO_VALUE, sizeof (mPartyIDLocationID)) != 0);
        }

        void resetPartyIDLocationID ()
        {
            memcpy (mPartyIDLocationID, PARTY_IDLOCATION_ID_NO_VALUE, sizeof (mPartyIDLocationID));
        }

        string getCustOrderHandlingInst () const
        {
            return string (mCustOrderHandlingInst, CUST_ORDER_HANDLING_INST_MAX_LENGTH);
        }

        bool setCustOrderHandlingInst (const string& v)
        {
            memset (mCustOrderHandlingInst, '\0', sizeof (mCustOrderHandlingInst));
            size_t size = min ((size_t) v.size (), (size_t) CUST_ORDER_HANDLING_INST_MAX_LENGTH);
            strncpy (mCustOrderHandlingInst, v.c_str (), size);
            return (v.size () <= CUST_ORDER_HANDLING_INST_MAX_LENGTH);
        }

        bool isCustOrderHandlingInstValid () const
        {
            return (memcmp (mCustOrderHandlingInst, CUST_ORDER_HANDLING_INST_NO_VALUE, sizeof (mCustOrderHandlingInst)) != 0);
        }

        void resetCustOrderHandlingInst ()
        {
            memcpy (mCustOrderHandlingInst, CUST_ORDER_HANDLING_INST_NO_VALUE, sizeof (mCustOrderHandlingInst));
        }

        string getComplianceText () const
        {
            return string (mComplianceText, COMPLIANCE_TEXT_MAX_LENGTH);
        }

        bool setComplianceText (const string& v)
        {
            memset (mComplianceText, '\0', sizeof (mComplianceText));
            size_t size = min ((size_t) v.size (), (size_t) COMPLIANCE_TEXT_MAX_LENGTH);
            strncpy (mComplianceText, v.c_str (), size);
            return (v.size () <= COMPLIANCE_TEXT_MAX_LENGTH);
        }

        bool isComplianceTextValid () const
        {
            return (memcmp (mComplianceText, COMPLIANCE_TEXT_NO_VALUE, sizeof (mComplianceText)) != 0);
        }

        void resetComplianceText ()
        {
            memcpy (mComplianceText, COMPLIANCE_TEXT_NO_VALUE, sizeof (mComplianceText));
        }

        string getUnderlyingSecurityID () const
        {
            return string (mUnderlyingSecurityID, UNDERLYING_SECURITY_ID_MAX_LENGTH);
        }

        bool setUnderlyingSecurityID (const string& v)
        {
            memset (mUnderlyingSecurityID, '\0', sizeof (mUnderlyingSecurityID));
            size_t size = min ((size_t) v.size (), (size_t) UNDERLYING_SECURITY_ID_MAX_LENGTH);
            strncpy (mUnderlyingSecurityID, v.c_str (), size);
            return (v.size () <= UNDERLYING_SECURITY_ID_MAX_LENGTH);
        }

        bool isUnderlyingSecurityIDValid () const
        {
            return (memcmp (mUnderlyingSecurityID, UNDERLYING_SECURITY_ID_NO_VALUE, sizeof (mUnderlyingSecurityID)) != 0);
        }

        void resetUnderlyingSecurityID ()
        {
            memcpy (mUnderlyingSecurityID, UNDERLYING_SECURITY_ID_NO_VALUE, sizeof (mUnderlyingSecurityID));
        }

        string getUnderlyingSecurityDesc () const
        {
            return string (mUnderlyingSecurityDesc, UNDERLYING_SECURITY_DESC_MAX_LENGTH);
        }

        bool setUnderlyingSecurityDesc (const string& v)
        {
            memset (mUnderlyingSecurityDesc, '\0', sizeof (mUnderlyingSecurityDesc));
            size_t size = min ((size_t) v.size (), (size_t) UNDERLYING_SECURITY_DESC_MAX_LENGTH);
            strncpy (mUnderlyingSecurityDesc, v.c_str (), size);
            return (v.size () <= UNDERLYING_SECURITY_DESC_MAX_LENGTH);
        }

        bool isUnderlyingSecurityDescValid () const
        {
            return (memcmp (mUnderlyingSecurityDesc, UNDERLYING_SECURITY_DESC_NO_VALUE, sizeof (mUnderlyingSecurityDesc)) != 0);
        }

        void resetUnderlyingSecurityDesc ()
        {
            memcpy (mUnderlyingSecurityDesc, UNDERLYING_SECURITY_DESC_NO_VALUE, sizeof (mUnderlyingSecurityDesc));
        }

        string getUnderlyingCurrency () const
        {
            return string (mUnderlyingCurrency, UNDERLYING_CURRENCY_MAX_LENGTH);
        }

        bool setUnderlyingCurrency (const string& v)
        {
            memset (mUnderlyingCurrency, '\0', sizeof (mUnderlyingCurrency));
            size_t size = min ((size_t) v.size (), (size_t) UNDERLYING_CURRENCY_MAX_LENGTH);
            strncpy (mUnderlyingCurrency, v.c_str (), size);
            return (v.size () <= UNDERLYING_CURRENCY_MAX_LENGTH);
        }

        bool isUnderlyingCurrencyValid () const
        {
            return (memcmp (mUnderlyingCurrency, UNDERLYING_CURRENCY_NO_VALUE, sizeof (mUnderlyingCurrency)) != 0);
        }

        void resetUnderlyingCurrency ()
        {
            memcpy (mUnderlyingCurrency, UNDERLYING_CURRENCY_NO_VALUE, sizeof (mUnderlyingCurrency));
        }

        string getUnderlyingIssuer () const
        {
            return string (mUnderlyingIssuer, UNDERLYING_ISSUER_MAX_LENGTH);
        }

        bool setUnderlyingIssuer (const string& v)
        {
            memset (mUnderlyingIssuer, '\0', sizeof (mUnderlyingIssuer));
            size_t size = min ((size_t) v.size (), (size_t) UNDERLYING_ISSUER_MAX_LENGTH);
            strncpy (mUnderlyingIssuer, v.c_str (), size);
            return (v.size () <= UNDERLYING_ISSUER_MAX_LENGTH);
        }

        bool isUnderlyingIssuerValid () const
        {
            return (memcmp (mUnderlyingIssuer, UNDERLYING_ISSUER_NO_VALUE, sizeof (mUnderlyingIssuer)) != 0);
        }

        void resetUnderlyingIssuer ()
        {
            memcpy (mUnderlyingIssuer, UNDERLYING_ISSUER_NO_VALUE, sizeof (mUnderlyingIssuer));
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

        const vector<eurexTrdInstrmntLegGrpCompPacket>& getTrdInstrmntLegGrp () const
        {
            return mTrdInstrmntLegGrp;
        }

        bool setTrdInstrmntLegGrp (const vector<eurexTrdInstrmntLegGrpCompPacket>& v)
        {
            mTrdInstrmntLegGrp = v;
            mNoLegs = v.size ();
            return (TRD_INSTRMNT_LEG_GRP_MIN <= v.size () && v.size () <= TRD_INSTRMNT_LEG_GRP_MAX);
        }

        const vector<eurexInstrumentEventGrpCompPacket>& getInstrumentEventGrp () const
        {
            return mInstrumentEventGrp;
        }

        bool setInstrumentEventGrp (const vector<eurexInstrumentEventGrpCompPacket>& v)
        {
            mInstrumentEventGrp = v;
            mNoEvents = v.size ();
            return (INSTRUMENT_EVENT_GRP_MIN <= v.size () && v.size () <= INSTRUMENT_EVENT_GRP_MAX);
        }

        const vector<eurexInstrumentAttributeGrpCompPacket>& getInstrumentAttributeGrp () const
        {
            return mInstrumentAttributeGrp;
        }

        bool setInstrumentAttributeGrp (const vector<eurexInstrumentAttributeGrpCompPacket>& v)
        {
            mInstrumentAttributeGrp = v;
            mNoInstrAttrib = v.size ();
            return (INSTRUMENT_ATTRIBUTE_GRP_MIN <= v.size () && v.size () <= INSTRUMENT_ATTRIBUTE_GRP_MAX);
        }

        const eurexUnderlyingStipGrpCompPacket& getUnderlyingStipGrp () const
        {
            return mUnderlyingStipGrp;
        }

        bool setUnderlyingStipGrp (const eurexUnderlyingStipGrpCompPacket& v)
        {
            mUnderlyingStipGrp = v;
            return true;
        }

        const vector<eurexSRQSRelatedTradeIDGrpCompPacket>& getSRQSRelatedTradeIDGrp () const
        {
            return mSRQSRelatedTradeIDGrp;
        }

        bool setSRQSRelatedTradeIDGrp (const vector<eurexSRQSRelatedTradeIDGrpCompPacket>& v)
        {
            mSRQSRelatedTradeIDGrp = v;
            mNoSRQSRelatedTradeIDs = v.size ();
            return (SRQSRELATED_TRADE_IDGRP_MIN <= v.size () && v.size () <= SRQSRELATED_TRADE_IDGRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeader.getRawSize()
                + sizeof (mSecurityID)
                + sizeof (mLastPx)
                + sizeof (mAllocQty)
                + sizeof (mTransactTime)
                + sizeof (mUnderlyingPx)
                + sizeof (mTransBkdTime)
                + sizeof (mRelatedClosePrice)
                + sizeof (mRelatedTradeQuantity)
                + sizeof (mUnderlyingQty)
                + sizeof (mMarketSegmentID)
                + sizeof (mPackageID)
                + sizeof (mTESExecID)
                + sizeof (mAllocID)
                + sizeof (mUnderlyingSettlementDate)
                + sizeof (mUnderlyingMaturityDate)
                + sizeof (mRelatedTradeID)
                + sizeof (mRelatedMarketSegmentID)
                + sizeof (mNegotiationID)
                + sizeof (mNoSRQSRelatedTradeIDs)
                + sizeof (mPad1)
                + sizeof (mTrdType)
                + sizeof (mSide)
                + sizeof (mTradePublishIndicator)
                + sizeof (mProductComplex)
                + sizeof (mTradeReportType)
                + sizeof (mTradingCapacity)
                + sizeof (mPartyIDSettlementLocation)
                + sizeof (mTradeAllocStatus)
                + sizeof (mHedgeType)
                + sizeof (mNoLegs)
                + sizeof (mNoEvents)
                + sizeof (mNoInstrAttrib)
                + sizeof (mNoUnderlyingStips)
                + sizeof (mMessageEventSource)
                + sizeof (mTradeReportID)
                + sizeof (mPartyExecutingFirm)
                + sizeof (mPartyExecutingTrader)
                + sizeof (mPartyIDEnteringFirm)
                + sizeof (mPartyEnteringTrader)
                + sizeof (mPositionEffect)
                + sizeof (mRootPartyExecutingFirm)
                + sizeof (mRootPartyExecutingTrader)
                + sizeof (mFreeText1)
                + sizeof (mFreeText2)
                + sizeof (mFreeText3)
                + sizeof (mPartyIDTakeUpTradingFirm)
                + sizeof (mAccount)
                + sizeof (mPartyIDPositionAccount)
                + sizeof (mPartyIDOrderOriginationFirm)
                + sizeof (mPartyIDBeneficiary)
                + sizeof (mPartyIDLocationID)
                + sizeof (mCustOrderHandlingInst)
                + sizeof (mComplianceText)
                + sizeof (mUnderlyingSecurityID)
                + sizeof (mUnderlyingSecurityDesc)
                + sizeof (mUnderlyingCurrency)
                + sizeof (mUnderlyingIssuer)
                + sizeof (mPad4)
                + eti::getRawSize (mTrdInstrmntLegGrp)
                + eti::getRawSize (mInstrumentEventGrp)
                + eti::getRawSize (mInstrumentAttributeGrp)
                + mUnderlyingStipGrp.getRawSize()
                + eti::getRawSize (mSRQSRelatedTradeIDGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoLegs = mTrdInstrmntLegGrp.size ();
            mNoEvents = mInstrumentEventGrp.size ();
            mNoInstrAttrib = mInstrumentAttributeGrp.size ();
            mNoSRQSRelatedTradeIDs = mSRQSRelatedTradeIDGrp.size ();
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mAllocQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mUnderlyingPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTransBkdTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRelatedClosePrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRelatedTradeQuantity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mUnderlyingQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPackageID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTESExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mAllocID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mUnderlyingSettlementDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mUnderlyingMaturityDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRelatedTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRelatedMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoSRQSRelatedTradeIDs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradePublishIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDSettlementLocation, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradeAllocStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mHedgeType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoLegs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoEvents, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoInstrAttrib, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoUnderlyingStips, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMessageEventSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDEnteringFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPositionEffect, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRootPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRootPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDTakeUpTradingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDPositionAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDOrderOriginationFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDBeneficiary, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDLocationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mCustOrderHandlingInst, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mComplianceText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mUnderlyingSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mUnderlyingSecurityDesc, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mUnderlyingCurrency, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mUnderlyingIssuer, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mTrdInstrmntLegGrp.size (); i++)
            {
                state = mTrdInstrmntLegGrp[i].serialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            for (size_t i = 0; i < mInstrumentEventGrp.size (); i++)
            {
                state = mInstrumentEventGrp[i].serialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            for (size_t i = 0; i < mInstrumentAttributeGrp.size (); i++)
            {
                state = mInstrumentAttributeGrp[i].serialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            state = mUnderlyingStipGrp.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mSRQSRelatedTradeIDGrp.size (); i++)
            {
                state = mSRQSRelatedTradeIDGrp[i].serialize (buf, len, used);
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
            state = eti::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mAllocQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mUnderlyingPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTransBkdTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRelatedClosePrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRelatedTradeQuantity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mUnderlyingQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPackageID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTESExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mAllocID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mUnderlyingSettlementDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mUnderlyingMaturityDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRelatedTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRelatedMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoSRQSRelatedTradeIDs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradePublishIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDSettlementLocation, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradeAllocStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mHedgeType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoLegs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoEvents, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoInstrAttrib, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoUnderlyingStips, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMessageEventSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDEnteringFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPositionEffect, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRootPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRootPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDTakeUpTradingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDPositionAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDOrderOriginationFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDBeneficiary, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDLocationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mCustOrderHandlingInst, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mComplianceText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mUnderlyingSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mUnderlyingSecurityDesc, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mUnderlyingCurrency, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mUnderlyingIssuer, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mTrdInstrmntLegGrp.resize (mNoLegs);
            for (vector<eurexTrdInstrmntLegGrpCompPacket>::iterator it = mTrdInstrmntLegGrp.begin (); it != mTrdInstrmntLegGrp.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            mInstrumentEventGrp.resize (mNoEvents);
            for (vector<eurexInstrumentEventGrpCompPacket>::iterator it = mInstrumentEventGrp.begin (); it != mInstrumentEventGrp.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            mInstrumentAttributeGrp.resize (mNoInstrAttrib);
            for (vector<eurexInstrumentAttributeGrpCompPacket>::iterator it = mInstrumentAttributeGrp.begin (); it != mInstrumentAttributeGrp.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            state = mUnderlyingStipGrp.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mSRQSRelatedTradeIDGrp.resize (mNoSRQSRelatedTradeIDs);
            for (vector<eurexSRQSRelatedTradeIDGrpCompPacket>::iterator it = mSRQSRelatedTradeIDGrp.begin (); it != mSRQSRelatedTradeIDGrp.end (); ++it)
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
            sss << "TESApproveBroadcast::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeader=" << mRBCHeader.toString () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[LastPx=" << getLastPx () << "],"
                << "[AllocQty=" << getAllocQty () << "],"
                << "[TransactTime=" << getTransactTime () << "],"
                << "[UnderlyingPx=" << getUnderlyingPx () << "],"
                << "[TransBkdTime=" << getTransBkdTime () << "],"
                << "[RelatedClosePrice=" << getRelatedClosePrice () << "],"
                << "[RelatedTradeQuantity=" << getRelatedTradeQuantity () << "],"
                << "[UnderlyingQty=" << getUnderlyingQty () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[PackageID=" << getPackageID () << "],"
                << "[TESExecID=" << getTESExecID () << "],"
                << "[AllocID=" << getAllocID () << "],"
                << "[UnderlyingSettlementDate=" << getUnderlyingSettlementDate () << "],"
                << "[UnderlyingMaturityDate=" << getUnderlyingMaturityDate () << "],"
                << "[RelatedTradeID=" << getRelatedTradeID () << "],"
                << "[RelatedMarketSegmentID=" << getRelatedMarketSegmentID () << "],"
                << "[NegotiationID=" << getNegotiationID () << "],"
                << "[NoSRQSRelatedTradeIDs=" << getNoSRQSRelatedTradeIDs () << "],"
                << "[Pad1=" << getPad1 () << "],"
                << "[TrdType=" << getTrdType () << "],"
                << "[Side=" << getSide () << "],"
                << "[TradePublishIndicator=" << getTradePublishIndicator () << "],"
                << "[ProductComplex=" << getProductComplex () << "],"
                << "[TradeReportType=" << getTradeReportType () << "],"
                << "[TradingCapacity=" << getTradingCapacity () << "],"
                << "[PartyIDSettlementLocation=" << getPartyIDSettlementLocation () << "],"
                << "[TradeAllocStatus=" << getTradeAllocStatus () << "],"
                << "[HedgeType=" << getHedgeType () << "],"
                << "[NoLegs=" << getNoLegs () << "],"
                << "[NoEvents=" << getNoEvents () << "],"
                << "[NoInstrAttrib=" << getNoInstrAttrib () << "],"
                << "[NoUnderlyingStips=" << getNoUnderlyingStips () << "],"
                << "[MessageEventSource=" << getMessageEventSource () << "],"
                << "[TradeReportID=" << getTradeReportID () << "],"
                << "[PartyExecutingFirm=" << getPartyExecutingFirm () << "],"
                << "[PartyExecutingTrader=" << getPartyExecutingTrader () << "],"
                << "[PartyIDEnteringFirm=" << getPartyIDEnteringFirm () << "],"
                << "[PartyEnteringTrader=" << getPartyEnteringTrader () << "],"
                << "[PositionEffect=" << getPositionEffect () << "],"
                << "[RootPartyExecutingFirm=" << getRootPartyExecutingFirm () << "],"
                << "[RootPartyExecutingTrader=" << getRootPartyExecutingTrader () << "],"
                << "[FreeText1=" << getFreeText1 () << "],"
                << "[FreeText2=" << getFreeText2 () << "],"
                << "[FreeText3=" << getFreeText3 () << "],"
                << "[PartyIDTakeUpTradingFirm=" << getPartyIDTakeUpTradingFirm () << "],"
                << "[Account=" << getAccount () << "],"
                << "[PartyIDPositionAccount=" << getPartyIDPositionAccount () << "],"
                << "[PartyIDOrderOriginationFirm=" << getPartyIDOrderOriginationFirm () << "],"
                << "[PartyIDBeneficiary=" << getPartyIDBeneficiary () << "],"
                << "[PartyIDLocationID=" << getPartyIDLocationID () << "],"
                << "[CustOrderHandlingInst=" << getCustOrderHandlingInst () << "],"
                << "[ComplianceText=" << getComplianceText () << "],"
                << "[UnderlyingSecurityID=" << getUnderlyingSecurityID () << "],"
                << "[UnderlyingSecurityDesc=" << getUnderlyingSecurityDesc () << "],"
                << "[UnderlyingCurrency=" << getUnderlyingCurrency () << "],"
                << "[UnderlyingIssuer=" << getUnderlyingIssuer () << "],"
                << "[Pad4=" << getPad4 () << "],"
                << "[TrdInstrmntLegGrp=" << eti::toString (getTrdInstrmntLegGrp ()) << "],"
                << "[InstrumentEventGrp=" << eti::toString (getInstrumentEventGrp ()) << "],"
                << "[InstrumentAttributeGrp=" << eti::toString (getInstrumentAttributeGrp ()) << "],"
                << "[UnderlyingStipGrp=" << mUnderlyingStipGrp.toString () << "],"
                << "[SRQSRelatedTradeIDGrp=" << eti::toString (getSRQSRelatedTradeIDGrp ()) << "]";
            return sss.str();
        }
};

const int64_t eurexTESApproveBroadcastPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t eurexTESApproveBroadcastPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t eurexTESApproveBroadcastPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double eurexTESApproveBroadcastPacket::LAST_PX_MIN = -92233720368.54775807;
const double eurexTESApproveBroadcastPacket::LAST_PX_MAX = 92233720368.54775807;
const int64_t eurexTESApproveBroadcastPacket::LAST_PX_NO_VALUE = 0x8000000000000000;
const double eurexTESApproveBroadcastPacket::ALLOC_QTY_MIN = -922337203685477.5807;
const double eurexTESApproveBroadcastPacket::ALLOC_QTY_MAX = 922337203685477.5807;
const int64_t eurexTESApproveBroadcastPacket::ALLOC_QTY_NO_VALUE = 0x8000000000000000;
const uint64_t eurexTESApproveBroadcastPacket::TRANSACT_TIME_MIN = 0UL;
const uint64_t eurexTESApproveBroadcastPacket::TRANSACT_TIME_MAX = 18446744073709551614UL;
const uint64_t eurexTESApproveBroadcastPacket::TRANSACT_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const double eurexTESApproveBroadcastPacket::UNDERLYING_PX_MIN = -92233720368.54775807;
const double eurexTESApproveBroadcastPacket::UNDERLYING_PX_MAX = 92233720368.54775807;
const int64_t eurexTESApproveBroadcastPacket::UNDERLYING_PX_NO_VALUE = 0x8000000000000000;
const uint64_t eurexTESApproveBroadcastPacket::TRANS_BKD_TIME_MIN = 0UL;
const uint64_t eurexTESApproveBroadcastPacket::TRANS_BKD_TIME_MAX = 18446744073709551614UL;
const uint64_t eurexTESApproveBroadcastPacket::TRANS_BKD_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const double eurexTESApproveBroadcastPacket::RELATED_CLOSE_PRICE_MIN = -9223372036854.775807;
const double eurexTESApproveBroadcastPacket::RELATED_CLOSE_PRICE_MAX = 9223372036854.775807;
const int64_t eurexTESApproveBroadcastPacket::RELATED_CLOSE_PRICE_NO_VALUE = 0x8000000000000000;
const double eurexTESApproveBroadcastPacket::RELATED_TRADE_QUANTITY_MIN = -922337203685477.5807;
const double eurexTESApproveBroadcastPacket::RELATED_TRADE_QUANTITY_MAX = 922337203685477.5807;
const int64_t eurexTESApproveBroadcastPacket::RELATED_TRADE_QUANTITY_NO_VALUE = 0x8000000000000000;
const double eurexTESApproveBroadcastPacket::UNDERLYING_QTY_MIN = -922337203685477.5807;
const double eurexTESApproveBroadcastPacket::UNDERLYING_QTY_MAX = 922337203685477.5807;
const int64_t eurexTESApproveBroadcastPacket::UNDERLYING_QTY_NO_VALUE = 0x8000000000000000;
const int32_t eurexTESApproveBroadcastPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexTESApproveBroadcastPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexTESApproveBroadcastPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t eurexTESApproveBroadcastPacket::PACKAGE_ID_MIN = 0;
const uint32_t eurexTESApproveBroadcastPacket::PACKAGE_ID_MAX = 4294967294;
const uint32_t eurexTESApproveBroadcastPacket::PACKAGE_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexTESApproveBroadcastPacket::TESEXEC_ID_MIN = 0;
const uint32_t eurexTESApproveBroadcastPacket::TESEXEC_ID_MAX = 4294967294;
const uint32_t eurexTESApproveBroadcastPacket::TESEXEC_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexTESApproveBroadcastPacket::ALLOC_ID_MIN = 0;
const uint32_t eurexTESApproveBroadcastPacket::ALLOC_ID_MAX = 4294967294;
const uint32_t eurexTESApproveBroadcastPacket::ALLOC_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t eurexTESApproveBroadcastPacket::UNDERLYING_SETTLEMENT_DATE_MIN = 0;
const int32_t eurexTESApproveBroadcastPacket::UNDERLYING_SETTLEMENT_DATE_MAX = 99991231;
const int32_t eurexTESApproveBroadcastPacket::UNDERLYING_SETTLEMENT_DATE_NO_VALUE = 0xFFFFFFFF;
const int32_t eurexTESApproveBroadcastPacket::UNDERLYING_MATURITY_DATE_MIN = 0;
const int32_t eurexTESApproveBroadcastPacket::UNDERLYING_MATURITY_DATE_MAX = 99991231;
const int32_t eurexTESApproveBroadcastPacket::UNDERLYING_MATURITY_DATE_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexTESApproveBroadcastPacket::RELATED_TRADE_ID_MIN = 0;
const uint32_t eurexTESApproveBroadcastPacket::RELATED_TRADE_ID_MAX = 4294967294;
const uint32_t eurexTESApproveBroadcastPacket::RELATED_TRADE_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t eurexTESApproveBroadcastPacket::RELATED_MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexTESApproveBroadcastPacket::RELATED_MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexTESApproveBroadcastPacket::RELATED_MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t eurexTESApproveBroadcastPacket::NEGOTIATION_ID_MIN = 0;
const uint32_t eurexTESApproveBroadcastPacket::NEGOTIATION_ID_MAX = 4294967294;
const uint32_t eurexTESApproveBroadcastPacket::NEGOTIATION_ID_NO_VALUE = 0xFFFFFFFF;
const int8_t eurexTESApproveBroadcastPacket::NO_SRQSRELATED_TRADE_IDS_MIN = 0;
const int8_t eurexTESApproveBroadcastPacket::NO_SRQSRELATED_TRADE_IDS_MAX = 12;
const int8_t eurexTESApproveBroadcastPacket::NO_SRQSRELATED_TRADE_IDS_NO_VALUE = 0xFF;
const char eurexTESApproveBroadcastPacket::PAD1_NO_VALUE[1] = {0x00};
const size_t eurexTESApproveBroadcastPacket::PAD1_MAX_LENGTH = 1;
const int16_t eurexTESApproveBroadcastPacket::TRD_TYPE_MIN = 1;
const int16_t eurexTESApproveBroadcastPacket::TRD_TYPE_MAX = 1010;
const int16_t eurexTESApproveBroadcastPacket::TRD_TYPE_NO_VALUE = 0xFFFF;
const int8_t eurexTESApproveBroadcastPacket::SIDE_MIN = 1;
const int8_t eurexTESApproveBroadcastPacket::SIDE_MAX = 2;
const int8_t eurexTESApproveBroadcastPacket::SIDE_NO_VALUE = 0xFF;
const int8_t eurexTESApproveBroadcastPacket::TRADE_PUBLISH_INDICATOR_MIN = 0;
const int8_t eurexTESApproveBroadcastPacket::TRADE_PUBLISH_INDICATOR_MAX = 3;
const int8_t eurexTESApproveBroadcastPacket::TRADE_PUBLISH_INDICATOR_NO_VALUE = 0xFF;
const int8_t eurexTESApproveBroadcastPacket::PRODUCT_COMPLEX_MIN = 1;
const int8_t eurexTESApproveBroadcastPacket::PRODUCT_COMPLEX_MAX = 10;
const int8_t eurexTESApproveBroadcastPacket::PRODUCT_COMPLEX_NO_VALUE = 0xFF;
const int8_t eurexTESApproveBroadcastPacket::TRADE_REPORT_TYPE_MIN = 0;
const int8_t eurexTESApproveBroadcastPacket::TRADE_REPORT_TYPE_MAX = 13;
const int8_t eurexTESApproveBroadcastPacket::TRADE_REPORT_TYPE_NO_VALUE = 0xFF;
const int8_t eurexTESApproveBroadcastPacket::TRADING_CAPACITY_MIN = 1;
const int8_t eurexTESApproveBroadcastPacket::TRADING_CAPACITY_MAX = 9;
const int8_t eurexTESApproveBroadcastPacket::TRADING_CAPACITY_NO_VALUE = 0xFF;
const int8_t eurexTESApproveBroadcastPacket::PARTY_IDSETTLEMENT_LOCATION_MIN = 1;
const int8_t eurexTESApproveBroadcastPacket::PARTY_IDSETTLEMENT_LOCATION_MAX = 4;
const int8_t eurexTESApproveBroadcastPacket::PARTY_IDSETTLEMENT_LOCATION_NO_VALUE = 0xFF;
const int8_t eurexTESApproveBroadcastPacket::TRADE_ALLOC_STATUS_MIN = 0;
const int8_t eurexTESApproveBroadcastPacket::TRADE_ALLOC_STATUS_MAX = 5;
const int8_t eurexTESApproveBroadcastPacket::TRADE_ALLOC_STATUS_NO_VALUE = 0xFF;
const int8_t eurexTESApproveBroadcastPacket::HEDGE_TYPE_MIN = 0;
const int8_t eurexTESApproveBroadcastPacket::HEDGE_TYPE_MAX = 2;
const int8_t eurexTESApproveBroadcastPacket::HEDGE_TYPE_NO_VALUE = 0xFF;
const int8_t eurexTESApproveBroadcastPacket::NO_LEGS_MIN = 0;
const int8_t eurexTESApproveBroadcastPacket::NO_LEGS_MAX = 20;
const int8_t eurexTESApproveBroadcastPacket::NO_LEGS_NO_VALUE = 0xFF;
const int8_t eurexTESApproveBroadcastPacket::NO_EVENTS_MIN = 0;
const int8_t eurexTESApproveBroadcastPacket::NO_EVENTS_MAX = 2;
const int8_t eurexTESApproveBroadcastPacket::NO_EVENTS_NO_VALUE = 0xFF;
const int8_t eurexTESApproveBroadcastPacket::NO_INSTR_ATTRIB_MIN = 0;
const int8_t eurexTESApproveBroadcastPacket::NO_INSTR_ATTRIB_MAX = 6;
const int8_t eurexTESApproveBroadcastPacket::NO_INSTR_ATTRIB_NO_VALUE = 0xFF;
const int8_t eurexTESApproveBroadcastPacket::NO_UNDERLYING_STIPS_MIN = 0;
const int8_t eurexTESApproveBroadcastPacket::NO_UNDERLYING_STIPS_MAX = 1;
const int8_t eurexTESApproveBroadcastPacket::NO_UNDERLYING_STIPS_NO_VALUE = 0xFF;
const char eurexTESApproveBroadcastPacket::MESSAGE_EVENT_SOURCE_NO_VALUE[1] = {0x00};
const size_t eurexTESApproveBroadcastPacket::MESSAGE_EVENT_SOURCE_MAX_LENGTH = 1;
const char eurexTESApproveBroadcastPacket::TRADE_REPORT_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESApproveBroadcastPacket::TRADE_REPORT_ID_MAX_LENGTH = 20;
const char eurexTESApproveBroadcastPacket::PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESApproveBroadcastPacket::PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char eurexTESApproveBroadcastPacket::PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESApproveBroadcastPacket::PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const int8_t eurexTESApproveBroadcastPacket::PARTY_IDENTERING_FIRM_MIN = 1;
const int8_t eurexTESApproveBroadcastPacket::PARTY_IDENTERING_FIRM_MAX = 2;
const int8_t eurexTESApproveBroadcastPacket::PARTY_IDENTERING_FIRM_NO_VALUE = 0xFF;
const char eurexTESApproveBroadcastPacket::PARTY_ENTERING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESApproveBroadcastPacket::PARTY_ENTERING_TRADER_MAX_LENGTH = 6;
const char eurexTESApproveBroadcastPacket::POSITION_EFFECT_NO_VALUE[1] = {0x00};
const size_t eurexTESApproveBroadcastPacket::POSITION_EFFECT_MAX_LENGTH = 1;
const char eurexTESApproveBroadcastPacket::ROOT_PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESApproveBroadcastPacket::ROOT_PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char eurexTESApproveBroadcastPacket::ROOT_PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESApproveBroadcastPacket::ROOT_PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const char eurexTESApproveBroadcastPacket::FREE_TEXT1_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESApproveBroadcastPacket::FREE_TEXT1_MAX_LENGTH = 12;
const char eurexTESApproveBroadcastPacket::FREE_TEXT2_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESApproveBroadcastPacket::FREE_TEXT2_MAX_LENGTH = 12;
const char eurexTESApproveBroadcastPacket::FREE_TEXT3_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESApproveBroadcastPacket::FREE_TEXT3_MAX_LENGTH = 12;
const char eurexTESApproveBroadcastPacket::PARTY_IDTAKE_UP_TRADING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESApproveBroadcastPacket::PARTY_IDTAKE_UP_TRADING_FIRM_MAX_LENGTH = 5;
const char eurexTESApproveBroadcastPacket::ACCOUNT_NO_VALUE[2] = {0x00, 0x00};
const size_t eurexTESApproveBroadcastPacket::ACCOUNT_MAX_LENGTH = 2;
const char eurexTESApproveBroadcastPacket::PARTY_IDPOSITION_ACCOUNT_NO_VALUE[32] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESApproveBroadcastPacket::PARTY_IDPOSITION_ACCOUNT_MAX_LENGTH = 32;
const char eurexTESApproveBroadcastPacket::PARTY_IDORDER_ORIGINATION_FIRM_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESApproveBroadcastPacket::PARTY_IDORDER_ORIGINATION_FIRM_MAX_LENGTH = 7;
const char eurexTESApproveBroadcastPacket::PARTY_IDBENEFICIARY_NO_VALUE[9] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESApproveBroadcastPacket::PARTY_IDBENEFICIARY_MAX_LENGTH = 9;
const char eurexTESApproveBroadcastPacket::PARTY_IDLOCATION_ID_NO_VALUE[2] = {0x00, 0x00};
const size_t eurexTESApproveBroadcastPacket::PARTY_IDLOCATION_ID_MAX_LENGTH = 2;
const char eurexTESApproveBroadcastPacket::CUST_ORDER_HANDLING_INST_NO_VALUE[1] = {0x00};
const size_t eurexTESApproveBroadcastPacket::CUST_ORDER_HANDLING_INST_MAX_LENGTH = 1;
const char eurexTESApproveBroadcastPacket::COMPLIANCE_TEXT_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESApproveBroadcastPacket::COMPLIANCE_TEXT_MAX_LENGTH = 20;
const char eurexTESApproveBroadcastPacket::UNDERLYING_SECURITY_ID_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESApproveBroadcastPacket::UNDERLYING_SECURITY_ID_MAX_LENGTH = 12;
const char eurexTESApproveBroadcastPacket::UNDERLYING_SECURITY_DESC_NO_VALUE[30] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESApproveBroadcastPacket::UNDERLYING_SECURITY_DESC_MAX_LENGTH = 30;
const char eurexTESApproveBroadcastPacket::UNDERLYING_CURRENCY_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t eurexTESApproveBroadcastPacket::UNDERLYING_CURRENCY_MAX_LENGTH = 3;
const char eurexTESApproveBroadcastPacket::UNDERLYING_ISSUER_NO_VALUE[30] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexTESApproveBroadcastPacket::UNDERLYING_ISSUER_MAX_LENGTH = 30;
const char eurexTESApproveBroadcastPacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t eurexTESApproveBroadcastPacket::PAD4_MAX_LENGTH = 4;
const size_t eurexTESApproveBroadcastPacket::TRD_INSTRMNT_LEG_GRP_MIN = 0;
const size_t eurexTESApproveBroadcastPacket::TRD_INSTRMNT_LEG_GRP_MAX = 20;
const size_t eurexTESApproveBroadcastPacket::INSTRUMENT_EVENT_GRP_MIN = 0;
const size_t eurexTESApproveBroadcastPacket::INSTRUMENT_EVENT_GRP_MAX = 2;
const size_t eurexTESApproveBroadcastPacket::INSTRUMENT_ATTRIBUTE_GRP_MIN = 0;
const size_t eurexTESApproveBroadcastPacket::INSTRUMENT_ATTRIBUTE_GRP_MAX = 6;
const size_t eurexTESApproveBroadcastPacket::SRQSRELATED_TRADE_IDGRP_MIN = 0;
const size_t eurexTESApproveBroadcastPacket::SRQSRELATED_TRADE_IDGRP_MAX = 12;


} // namespace neueda

#endif // EUREX_TESAPPROVEBROADCAST_PACKET_H
