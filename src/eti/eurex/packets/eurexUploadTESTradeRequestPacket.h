/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_UPLOADTESTRADEREQUEST_PACKET_H
#define EUREX_UPLOADTESTRADEREQUEST_PACKET_H

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

class eurexUploadTESTradeRequestPacket
{
    public:
        // no value constants
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const double LAST_PX_MIN;
        static const double LAST_PX_MAX;
        static const int64_t LAST_PX_NO_VALUE;
        static const uint64_t TRANS_BKD_TIME_MIN;
        static const uint64_t TRANS_BKD_TIME_MAX;
        static const uint64_t TRANS_BKD_TIME_NO_VALUE;
        static const double UNDERLYING_PX_MIN;
        static const double UNDERLYING_PX_MAX;
        static const int64_t UNDERLYING_PX_NO_VALUE;
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
        static const int8_t PRODUCT_COMPLEX_MIN;
        static const int8_t PRODUCT_COMPLEX_MAX;
        static const int8_t PRODUCT_COMPLEX_NO_VALUE;
        static const int8_t TRADE_REPORT_TYPE_MIN;
        static const int8_t TRADE_REPORT_TYPE_MAX;
        static const int8_t TRADE_REPORT_TYPE_NO_VALUE;
        static const int8_t TRADE_PUBLISH_INDICATOR_MIN;
        static const int8_t TRADE_PUBLISH_INDICATOR_MAX;
        static const int8_t TRADE_PUBLISH_INDICATOR_NO_VALUE;
        static const int8_t NO_SIDE_ALLOCS_MIN;
        static const int8_t NO_SIDE_ALLOCS_MAX;
        static const int8_t NO_SIDE_ALLOCS_NO_VALUE;
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
        static const int8_t SKIP_VALIDATIONS_MIN;
        static const int8_t SKIP_VALIDATIONS_MAX;
        static const int8_t SKIP_VALIDATIONS_NO_VALUE;
        static const int8_t TRD_RPT_STATUS_MIN;
        static const int8_t TRD_RPT_STATUS_MAX;
        static const int8_t TRD_RPT_STATUS_NO_VALUE;
        static const int8_t TRADE_PLATFORM_MIN;
        static const int8_t TRADE_PLATFORM_MAX;
        static const int8_t TRADE_PLATFORM_NO_VALUE;
        static const int8_t HEDGE_TYPE_MIN;
        static const int8_t HEDGE_TYPE_MAX;
        static const int8_t HEDGE_TYPE_NO_VALUE;
        static const int8_t PARTY_IDSETTLEMENT_LOCATION_MIN;
        static const int8_t PARTY_IDSETTLEMENT_LOCATION_MAX;
        static const int8_t PARTY_IDSETTLEMENT_LOCATION_NO_VALUE;
        static const char TRADE_REPORT_ID_NO_VALUE[20];
        static const size_t TRADE_REPORT_ID_MAX_LENGTH;
        static const char TRADE_REPORT_TEXT_NO_VALUE[20];
        static const size_t TRADE_REPORT_TEXT_MAX_LENGTH;
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
        static const size_t SIDE_ALLOC_EXT_GRP_MIN;
        static const size_t SIDE_ALLOC_EXT_GRP_MAX;
        static const size_t TRD_INSTRMNT_LEG_GRP_MIN;
        static const size_t TRD_INSTRMNT_LEG_GRP_MAX;
        static const size_t INSTRUMENT_EVENT_GRP_MIN;
        static const size_t INSTRUMENT_EVENT_GRP_MAX;
        static const size_t INSTRUMENT_ATTRIBUTE_GRP_MIN;
        static const size_t INSTRUMENT_ATTRIBUTE_GRP_MAX;
        static const size_t SRQSRELATED_TRADE_IDGRP_MIN;
        static const size_t SRQSRELATED_TRADE_IDGRP_MAX;

        // fields (use with care)
        eurexMessageHeaderInCompPacket mMessageHeaderIn;
        eurexRequestHeaderCompPacket mRequestHeader;
        int64_t mSecurityID;
        int64_t mLastPx;
        uint64_t mTransBkdTime;
        int64_t mUnderlyingPx;
        int64_t mRelatedClosePrice;
        int64_t mRelatedTradeQuantity;
        int64_t mUnderlyingQty;
        int32_t mMarketSegmentID;
        int32_t mUnderlyingSettlementDate;
        int32_t mUnderlyingMaturityDate;
        uint32_t mRelatedTradeID;
        int32_t mRelatedMarketSegmentID;
        uint32_t mNegotiationID;
        int8_t mNoSRQSRelatedTradeIDs;
        char mPad1[1];
        int16_t mTrdType;
        int8_t mProductComplex;
        int8_t mTradeReportType;
        int8_t mTradePublishIndicator;
        int8_t mNoSideAllocs;
        int8_t mNoLegs;
        int8_t mNoEvents;
        int8_t mNoInstrAttrib;
        int8_t mNoUnderlyingStips;
        int8_t mSkipValidations;
        int8_t mTrdRptStatus;
        int8_t mTradePlatform;
        int8_t mHedgeType;
        int8_t mPartyIDSettlementLocation;
        char mTradeReportID[20];
        char mTradeReportText[20];
        char mUnderlyingSecurityID[12];
        char mUnderlyingSecurityDesc[30];
        char mUnderlyingCurrency[3];
        char mUnderlyingIssuer[30];
        char mPad4[4];
        vector<eurexSideAllocExtGrpCompPacket> mSideAllocExtGrp;
        vector<eurexTrdInstrmntLegGrpCompPacket> mTrdInstrmntLegGrp;
        vector<eurexInstrumentEventGrpCompPacket> mInstrumentEventGrp;
        vector<eurexInstrumentAttributeGrpCompPacket> mInstrumentAttributeGrp;
        eurexUnderlyingStipGrpCompPacket mUnderlyingStipGrp;
        vector<eurexSRQSRelatedTradeIDGrpCompPacket> mSRQSRelatedTradeIDGrp;

        // constructor
        eurexUploadTESTradeRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10612;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mLastPx = LAST_PX_NO_VALUE;
            mTransBkdTime = TRANS_BKD_TIME_NO_VALUE;
            mUnderlyingPx = UNDERLYING_PX_NO_VALUE;
            mRelatedClosePrice = RELATED_CLOSE_PRICE_NO_VALUE;
            mRelatedTradeQuantity = RELATED_TRADE_QUANTITY_NO_VALUE;
            mUnderlyingQty = UNDERLYING_QTY_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mUnderlyingSettlementDate = UNDERLYING_SETTLEMENT_DATE_NO_VALUE;
            mUnderlyingMaturityDate = UNDERLYING_MATURITY_DATE_NO_VALUE;
            mRelatedTradeID = RELATED_TRADE_ID_NO_VALUE;
            mRelatedMarketSegmentID = RELATED_MARKET_SEGMENT_ID_NO_VALUE;
            mNegotiationID = NEGOTIATION_ID_NO_VALUE;
            mNoSRQSRelatedTradeIDs = NO_SRQSRELATED_TRADE_IDS_NO_VALUE;
            memcpy(mPad1, PAD1_NO_VALUE, sizeof (mPad1));
            mTrdType = TRD_TYPE_NO_VALUE;
            mProductComplex = PRODUCT_COMPLEX_NO_VALUE;
            mTradeReportType = TRADE_REPORT_TYPE_NO_VALUE;
            mTradePublishIndicator = TRADE_PUBLISH_INDICATOR_NO_VALUE;
            mNoSideAllocs = NO_SIDE_ALLOCS_NO_VALUE;
            mNoLegs = NO_LEGS_NO_VALUE;
            mNoEvents = NO_EVENTS_NO_VALUE;
            mNoInstrAttrib = NO_INSTR_ATTRIB_NO_VALUE;
            mNoUnderlyingStips = NO_UNDERLYING_STIPS_NO_VALUE;
            mSkipValidations = SKIP_VALIDATIONS_NO_VALUE;
            mTrdRptStatus = TRD_RPT_STATUS_NO_VALUE;
            mTradePlatform = TRADE_PLATFORM_NO_VALUE;
            mHedgeType = HEDGE_TYPE_NO_VALUE;
            mPartyIDSettlementLocation = PARTY_IDSETTLEMENT_LOCATION_NO_VALUE;
            memcpy(mTradeReportID, TRADE_REPORT_ID_NO_VALUE, sizeof (mTradeReportID));
            memcpy(mTradeReportText, TRADE_REPORT_TEXT_NO_VALUE, sizeof (mTradeReportText));
            memcpy(mUnderlyingSecurityID, UNDERLYING_SECURITY_ID_NO_VALUE, sizeof (mUnderlyingSecurityID));
            memcpy(mUnderlyingSecurityDesc, UNDERLYING_SECURITY_DESC_NO_VALUE, sizeof (mUnderlyingSecurityDesc));
            memcpy(mUnderlyingCurrency, UNDERLYING_CURRENCY_NO_VALUE, sizeof (mUnderlyingCurrency));
            memcpy(mUnderlyingIssuer, UNDERLYING_ISSUER_NO_VALUE, sizeof (mUnderlyingIssuer));
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

        int8_t getNoSideAllocs () const
        {
            return mNoSideAllocs;
        }

        bool setNoSideAllocs (int8_t v)
        {
            mNoSideAllocs = v;
            return ((NO_SIDE_ALLOCS_MIN <= mNoSideAllocs && mNoSideAllocs <= NO_SIDE_ALLOCS_MAX) || mNoSideAllocs == NO_SIDE_ALLOCS_NO_VALUE);
        }

        bool isNoSideAllocsValid () const
        {
            return (mNoSideAllocs != NO_SIDE_ALLOCS_NO_VALUE);
        }

        void resetNoSideAllocs ()
        {
            mNoSideAllocs = NO_SIDE_ALLOCS_NO_VALUE;
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

        int8_t getSkipValidations () const
        {
            return mSkipValidations;
        }

        bool setSkipValidations (int8_t v)
        {
            mSkipValidations = v;
            return ((SKIP_VALIDATIONS_MIN <= mSkipValidations && mSkipValidations <= SKIP_VALIDATIONS_MAX) || mSkipValidations == SKIP_VALIDATIONS_NO_VALUE);
        }

        bool isSkipValidationsValid () const
        {
            return (mSkipValidations != SKIP_VALIDATIONS_NO_VALUE);
        }

        void resetSkipValidations ()
        {
            mSkipValidations = SKIP_VALIDATIONS_NO_VALUE;
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

        int8_t getTradePlatform () const
        {
            return mTradePlatform;
        }

        bool setTradePlatform (int8_t v)
        {
            mTradePlatform = v;
            return ((TRADE_PLATFORM_MIN <= mTradePlatform && mTradePlatform <= TRADE_PLATFORM_MAX) || mTradePlatform == TRADE_PLATFORM_NO_VALUE);
        }

        bool isTradePlatformValid () const
        {
            return (mTradePlatform != TRADE_PLATFORM_NO_VALUE);
        }

        void resetTradePlatform ()
        {
            mTradePlatform = TRADE_PLATFORM_NO_VALUE;
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

        string getTradeReportText () const
        {
            return string (mTradeReportText, TRADE_REPORT_TEXT_MAX_LENGTH);
        }

        bool setTradeReportText (const string& v)
        {
            memset (mTradeReportText, '\0', sizeof (mTradeReportText));
            size_t size = min ((size_t) v.size (), (size_t) TRADE_REPORT_TEXT_MAX_LENGTH);
            strncpy (mTradeReportText, v.c_str (), size);
            return (v.size () <= TRADE_REPORT_TEXT_MAX_LENGTH);
        }

        bool isTradeReportTextValid () const
        {
            return (memcmp (mTradeReportText, TRADE_REPORT_TEXT_NO_VALUE, sizeof (mTradeReportText)) != 0);
        }

        void resetTradeReportText ()
        {
            memcpy (mTradeReportText, TRADE_REPORT_TEXT_NO_VALUE, sizeof (mTradeReportText));
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

        const vector<eurexSideAllocExtGrpCompPacket>& getSideAllocExtGrp () const
        {
            return mSideAllocExtGrp;
        }

        bool setSideAllocExtGrp (const vector<eurexSideAllocExtGrpCompPacket>& v)
        {
            mSideAllocExtGrp = v;
            mNoSideAllocs = v.size ();
            return (SIDE_ALLOC_EXT_GRP_MIN <= v.size () && v.size () <= SIDE_ALLOC_EXT_GRP_MAX);
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
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mSecurityID)
                + sizeof (mLastPx)
                + sizeof (mTransBkdTime)
                + sizeof (mUnderlyingPx)
                + sizeof (mRelatedClosePrice)
                + sizeof (mRelatedTradeQuantity)
                + sizeof (mUnderlyingQty)
                + sizeof (mMarketSegmentID)
                + sizeof (mUnderlyingSettlementDate)
                + sizeof (mUnderlyingMaturityDate)
                + sizeof (mRelatedTradeID)
                + sizeof (mRelatedMarketSegmentID)
                + sizeof (mNegotiationID)
                + sizeof (mNoSRQSRelatedTradeIDs)
                + sizeof (mPad1)
                + sizeof (mTrdType)
                + sizeof (mProductComplex)
                + sizeof (mTradeReportType)
                + sizeof (mTradePublishIndicator)
                + sizeof (mNoSideAllocs)
                + sizeof (mNoLegs)
                + sizeof (mNoEvents)
                + sizeof (mNoInstrAttrib)
                + sizeof (mNoUnderlyingStips)
                + sizeof (mSkipValidations)
                + sizeof (mTrdRptStatus)
                + sizeof (mTradePlatform)
                + sizeof (mHedgeType)
                + sizeof (mPartyIDSettlementLocation)
                + sizeof (mTradeReportID)
                + sizeof (mTradeReportText)
                + sizeof (mUnderlyingSecurityID)
                + sizeof (mUnderlyingSecurityDesc)
                + sizeof (mUnderlyingCurrency)
                + sizeof (mUnderlyingIssuer)
                + sizeof (mPad4)
                + eti::getRawSize (mSideAllocExtGrp)
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
            mNoSideAllocs = mSideAllocExtGrp.size ();
            mNoLegs = mTrdInstrmntLegGrp.size ();
            mNoEvents = mInstrumentEventGrp.size ();
            mNoInstrAttrib = mInstrumentAttributeGrp.size ();
            mNoSRQSRelatedTradeIDs = mSRQSRelatedTradeIDGrp.size ();
            mMessageHeaderIn.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderIn.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTransBkdTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mUnderlyingPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRelatedClosePrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRelatedTradeQuantity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mUnderlyingQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
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
            state = eti::serialize (mProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradePublishIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoSideAllocs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoLegs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoEvents, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoInstrAttrib, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoUnderlyingStips, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSkipValidations, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTrdRptStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradePlatform, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mHedgeType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDSettlementLocation, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradeReportText, buf, len, used);
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
            for (size_t i = 0; i < mSideAllocExtGrp.size (); i++)
            {
                state = mSideAllocExtGrp[i].serialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
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
            state = mMessageHeaderIn.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTransBkdTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mUnderlyingPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRelatedClosePrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRelatedTradeQuantity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mUnderlyingQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
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
            state = eti::deserialize (mProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradePublishIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoSideAllocs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoLegs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoEvents, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoInstrAttrib, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoUnderlyingStips, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSkipValidations, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTrdRptStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradePlatform, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mHedgeType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDSettlementLocation, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradeReportText, buf, len, used);
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
            mSideAllocExtGrp.resize (mNoSideAllocs);
            for (vector<eurexSideAllocExtGrpCompPacket>::iterator it = mSideAllocExtGrp.begin (); it != mSideAllocExtGrp.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
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
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "UploadTESTradeRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[LastPx=" << getLastPx () << "],"
                << "[TransBkdTime=" << getTransBkdTime () << "],"
                << "[UnderlyingPx=" << getUnderlyingPx () << "],"
                << "[RelatedClosePrice=" << getRelatedClosePrice () << "],"
                << "[RelatedTradeQuantity=" << getRelatedTradeQuantity () << "],"
                << "[UnderlyingQty=" << getUnderlyingQty () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[UnderlyingSettlementDate=" << getUnderlyingSettlementDate () << "],"
                << "[UnderlyingMaturityDate=" << getUnderlyingMaturityDate () << "],"
                << "[RelatedTradeID=" << getRelatedTradeID () << "],"
                << "[RelatedMarketSegmentID=" << getRelatedMarketSegmentID () << "],"
                << "[NegotiationID=" << getNegotiationID () << "],"
                << "[NoSRQSRelatedTradeIDs=" << getNoSRQSRelatedTradeIDs () << "],"
                << "[Pad1=" << getPad1 () << "],"
                << "[TrdType=" << getTrdType () << "],"
                << "[ProductComplex=" << getProductComplex () << "],"
                << "[TradeReportType=" << getTradeReportType () << "],"
                << "[TradePublishIndicator=" << getTradePublishIndicator () << "],"
                << "[NoSideAllocs=" << getNoSideAllocs () << "],"
                << "[NoLegs=" << getNoLegs () << "],"
                << "[NoEvents=" << getNoEvents () << "],"
                << "[NoInstrAttrib=" << getNoInstrAttrib () << "],"
                << "[NoUnderlyingStips=" << getNoUnderlyingStips () << "],"
                << "[SkipValidations=" << getSkipValidations () << "],"
                << "[TrdRptStatus=" << getTrdRptStatus () << "],"
                << "[TradePlatform=" << getTradePlatform () << "],"
                << "[HedgeType=" << getHedgeType () << "],"
                << "[PartyIDSettlementLocation=" << getPartyIDSettlementLocation () << "],"
                << "[TradeReportID=" << getTradeReportID () << "],"
                << "[TradeReportText=" << getTradeReportText () << "],"
                << "[UnderlyingSecurityID=" << getUnderlyingSecurityID () << "],"
                << "[UnderlyingSecurityDesc=" << getUnderlyingSecurityDesc () << "],"
                << "[UnderlyingCurrency=" << getUnderlyingCurrency () << "],"
                << "[UnderlyingIssuer=" << getUnderlyingIssuer () << "],"
                << "[Pad4=" << getPad4 () << "],"
                << "[SideAllocExtGrp=" << eti::toString (getSideAllocExtGrp ()) << "],"
                << "[TrdInstrmntLegGrp=" << eti::toString (getTrdInstrmntLegGrp ()) << "],"
                << "[InstrumentEventGrp=" << eti::toString (getInstrumentEventGrp ()) << "],"
                << "[InstrumentAttributeGrp=" << eti::toString (getInstrumentAttributeGrp ()) << "],"
                << "[UnderlyingStipGrp=" << mUnderlyingStipGrp.toString () << "],"
                << "[SRQSRelatedTradeIDGrp=" << eti::toString (getSRQSRelatedTradeIDGrp ()) << "]";
            return sss.str();
        }
};

const int64_t eurexUploadTESTradeRequestPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t eurexUploadTESTradeRequestPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t eurexUploadTESTradeRequestPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double eurexUploadTESTradeRequestPacket::LAST_PX_MIN = -92233720368.54775807;
const double eurexUploadTESTradeRequestPacket::LAST_PX_MAX = 92233720368.54775807;
const int64_t eurexUploadTESTradeRequestPacket::LAST_PX_NO_VALUE = 0x8000000000000000;
const uint64_t eurexUploadTESTradeRequestPacket::TRANS_BKD_TIME_MIN = 0UL;
const uint64_t eurexUploadTESTradeRequestPacket::TRANS_BKD_TIME_MAX = 18446744073709551614UL;
const uint64_t eurexUploadTESTradeRequestPacket::TRANS_BKD_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const double eurexUploadTESTradeRequestPacket::UNDERLYING_PX_MIN = -92233720368.54775807;
const double eurexUploadTESTradeRequestPacket::UNDERLYING_PX_MAX = 92233720368.54775807;
const int64_t eurexUploadTESTradeRequestPacket::UNDERLYING_PX_NO_VALUE = 0x8000000000000000;
const double eurexUploadTESTradeRequestPacket::RELATED_CLOSE_PRICE_MIN = -9223372036854.775807;
const double eurexUploadTESTradeRequestPacket::RELATED_CLOSE_PRICE_MAX = 9223372036854.775807;
const int64_t eurexUploadTESTradeRequestPacket::RELATED_CLOSE_PRICE_NO_VALUE = 0x8000000000000000;
const double eurexUploadTESTradeRequestPacket::RELATED_TRADE_QUANTITY_MIN = -922337203685477.5807;
const double eurexUploadTESTradeRequestPacket::RELATED_TRADE_QUANTITY_MAX = 922337203685477.5807;
const int64_t eurexUploadTESTradeRequestPacket::RELATED_TRADE_QUANTITY_NO_VALUE = 0x8000000000000000;
const double eurexUploadTESTradeRequestPacket::UNDERLYING_QTY_MIN = -922337203685477.5807;
const double eurexUploadTESTradeRequestPacket::UNDERLYING_QTY_MAX = 922337203685477.5807;
const int64_t eurexUploadTESTradeRequestPacket::UNDERLYING_QTY_NO_VALUE = 0x8000000000000000;
const int32_t eurexUploadTESTradeRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexUploadTESTradeRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexUploadTESTradeRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int32_t eurexUploadTESTradeRequestPacket::UNDERLYING_SETTLEMENT_DATE_MIN = 0;
const int32_t eurexUploadTESTradeRequestPacket::UNDERLYING_SETTLEMENT_DATE_MAX = 99991231;
const int32_t eurexUploadTESTradeRequestPacket::UNDERLYING_SETTLEMENT_DATE_NO_VALUE = 0xFFFFFFFF;
const int32_t eurexUploadTESTradeRequestPacket::UNDERLYING_MATURITY_DATE_MIN = 0;
const int32_t eurexUploadTESTradeRequestPacket::UNDERLYING_MATURITY_DATE_MAX = 99991231;
const int32_t eurexUploadTESTradeRequestPacket::UNDERLYING_MATURITY_DATE_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexUploadTESTradeRequestPacket::RELATED_TRADE_ID_MIN = 0;
const uint32_t eurexUploadTESTradeRequestPacket::RELATED_TRADE_ID_MAX = 4294967294;
const uint32_t eurexUploadTESTradeRequestPacket::RELATED_TRADE_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t eurexUploadTESTradeRequestPacket::RELATED_MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexUploadTESTradeRequestPacket::RELATED_MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexUploadTESTradeRequestPacket::RELATED_MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t eurexUploadTESTradeRequestPacket::NEGOTIATION_ID_MIN = 0;
const uint32_t eurexUploadTESTradeRequestPacket::NEGOTIATION_ID_MAX = 4294967294;
const uint32_t eurexUploadTESTradeRequestPacket::NEGOTIATION_ID_NO_VALUE = 0xFFFFFFFF;
const int8_t eurexUploadTESTradeRequestPacket::NO_SRQSRELATED_TRADE_IDS_MIN = 0;
const int8_t eurexUploadTESTradeRequestPacket::NO_SRQSRELATED_TRADE_IDS_MAX = 12;
const int8_t eurexUploadTESTradeRequestPacket::NO_SRQSRELATED_TRADE_IDS_NO_VALUE = 0xFF;
const char eurexUploadTESTradeRequestPacket::PAD1_NO_VALUE[1] = {0x00};
const size_t eurexUploadTESTradeRequestPacket::PAD1_MAX_LENGTH = 1;
const int16_t eurexUploadTESTradeRequestPacket::TRD_TYPE_MIN = 1;
const int16_t eurexUploadTESTradeRequestPacket::TRD_TYPE_MAX = 1010;
const int16_t eurexUploadTESTradeRequestPacket::TRD_TYPE_NO_VALUE = 0xFFFF;
const int8_t eurexUploadTESTradeRequestPacket::PRODUCT_COMPLEX_MIN = 1;
const int8_t eurexUploadTESTradeRequestPacket::PRODUCT_COMPLEX_MAX = 10;
const int8_t eurexUploadTESTradeRequestPacket::PRODUCT_COMPLEX_NO_VALUE = 0xFF;
const int8_t eurexUploadTESTradeRequestPacket::TRADE_REPORT_TYPE_MIN = 0;
const int8_t eurexUploadTESTradeRequestPacket::TRADE_REPORT_TYPE_MAX = 13;
const int8_t eurexUploadTESTradeRequestPacket::TRADE_REPORT_TYPE_NO_VALUE = 0xFF;
const int8_t eurexUploadTESTradeRequestPacket::TRADE_PUBLISH_INDICATOR_MIN = 0;
const int8_t eurexUploadTESTradeRequestPacket::TRADE_PUBLISH_INDICATOR_MAX = 3;
const int8_t eurexUploadTESTradeRequestPacket::TRADE_PUBLISH_INDICATOR_NO_VALUE = 0xFF;
const int8_t eurexUploadTESTradeRequestPacket::NO_SIDE_ALLOCS_MIN = 1;
const int8_t eurexUploadTESTradeRequestPacket::NO_SIDE_ALLOCS_MAX = 30;
const int8_t eurexUploadTESTradeRequestPacket::NO_SIDE_ALLOCS_NO_VALUE = 0xFF;
const int8_t eurexUploadTESTradeRequestPacket::NO_LEGS_MIN = 0;
const int8_t eurexUploadTESTradeRequestPacket::NO_LEGS_MAX = 20;
const int8_t eurexUploadTESTradeRequestPacket::NO_LEGS_NO_VALUE = 0xFF;
const int8_t eurexUploadTESTradeRequestPacket::NO_EVENTS_MIN = 0;
const int8_t eurexUploadTESTradeRequestPacket::NO_EVENTS_MAX = 2;
const int8_t eurexUploadTESTradeRequestPacket::NO_EVENTS_NO_VALUE = 0xFF;
const int8_t eurexUploadTESTradeRequestPacket::NO_INSTR_ATTRIB_MIN = 0;
const int8_t eurexUploadTESTradeRequestPacket::NO_INSTR_ATTRIB_MAX = 6;
const int8_t eurexUploadTESTradeRequestPacket::NO_INSTR_ATTRIB_NO_VALUE = 0xFF;
const int8_t eurexUploadTESTradeRequestPacket::NO_UNDERLYING_STIPS_MIN = 0;
const int8_t eurexUploadTESTradeRequestPacket::NO_UNDERLYING_STIPS_MAX = 1;
const int8_t eurexUploadTESTradeRequestPacket::NO_UNDERLYING_STIPS_NO_VALUE = 0xFF;
const int8_t eurexUploadTESTradeRequestPacket::SKIP_VALIDATIONS_MIN = 0;
const int8_t eurexUploadTESTradeRequestPacket::SKIP_VALIDATIONS_MAX = 1;
const int8_t eurexUploadTESTradeRequestPacket::SKIP_VALIDATIONS_NO_VALUE = 0xFF;
const int8_t eurexUploadTESTradeRequestPacket::TRD_RPT_STATUS_MIN = 0;
const int8_t eurexUploadTESTradeRequestPacket::TRD_RPT_STATUS_MAX = 9;
const int8_t eurexUploadTESTradeRequestPacket::TRD_RPT_STATUS_NO_VALUE = 0xFF;
const int8_t eurexUploadTESTradeRequestPacket::TRADE_PLATFORM_MIN = 0;
const int8_t eurexUploadTESTradeRequestPacket::TRADE_PLATFORM_MAX = 1;
const int8_t eurexUploadTESTradeRequestPacket::TRADE_PLATFORM_NO_VALUE = 0xFF;
const int8_t eurexUploadTESTradeRequestPacket::HEDGE_TYPE_MIN = 0;
const int8_t eurexUploadTESTradeRequestPacket::HEDGE_TYPE_MAX = 2;
const int8_t eurexUploadTESTradeRequestPacket::HEDGE_TYPE_NO_VALUE = 0xFF;
const int8_t eurexUploadTESTradeRequestPacket::PARTY_IDSETTLEMENT_LOCATION_MIN = 1;
const int8_t eurexUploadTESTradeRequestPacket::PARTY_IDSETTLEMENT_LOCATION_MAX = 4;
const int8_t eurexUploadTESTradeRequestPacket::PARTY_IDSETTLEMENT_LOCATION_NO_VALUE = 0xFF;
const char eurexUploadTESTradeRequestPacket::TRADE_REPORT_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexUploadTESTradeRequestPacket::TRADE_REPORT_ID_MAX_LENGTH = 20;
const char eurexUploadTESTradeRequestPacket::TRADE_REPORT_TEXT_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexUploadTESTradeRequestPacket::TRADE_REPORT_TEXT_MAX_LENGTH = 20;
const char eurexUploadTESTradeRequestPacket::UNDERLYING_SECURITY_ID_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexUploadTESTradeRequestPacket::UNDERLYING_SECURITY_ID_MAX_LENGTH = 12;
const char eurexUploadTESTradeRequestPacket::UNDERLYING_SECURITY_DESC_NO_VALUE[30] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexUploadTESTradeRequestPacket::UNDERLYING_SECURITY_DESC_MAX_LENGTH = 30;
const char eurexUploadTESTradeRequestPacket::UNDERLYING_CURRENCY_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t eurexUploadTESTradeRequestPacket::UNDERLYING_CURRENCY_MAX_LENGTH = 3;
const char eurexUploadTESTradeRequestPacket::UNDERLYING_ISSUER_NO_VALUE[30] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexUploadTESTradeRequestPacket::UNDERLYING_ISSUER_MAX_LENGTH = 30;
const char eurexUploadTESTradeRequestPacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t eurexUploadTESTradeRequestPacket::PAD4_MAX_LENGTH = 4;
const size_t eurexUploadTESTradeRequestPacket::SIDE_ALLOC_EXT_GRP_MIN = 1;
const size_t eurexUploadTESTradeRequestPacket::SIDE_ALLOC_EXT_GRP_MAX = 30;
const size_t eurexUploadTESTradeRequestPacket::TRD_INSTRMNT_LEG_GRP_MIN = 0;
const size_t eurexUploadTESTradeRequestPacket::TRD_INSTRMNT_LEG_GRP_MAX = 20;
const size_t eurexUploadTESTradeRequestPacket::INSTRUMENT_EVENT_GRP_MIN = 0;
const size_t eurexUploadTESTradeRequestPacket::INSTRUMENT_EVENT_GRP_MAX = 2;
const size_t eurexUploadTESTradeRequestPacket::INSTRUMENT_ATTRIBUTE_GRP_MIN = 0;
const size_t eurexUploadTESTradeRequestPacket::INSTRUMENT_ATTRIBUTE_GRP_MAX = 6;
const size_t eurexUploadTESTradeRequestPacket::SRQSRELATED_TRADE_IDGRP_MIN = 0;
const size_t eurexUploadTESTradeRequestPacket::SRQSRELATED_TRADE_IDGRP_MAX = 12;


} // namespace neueda

#endif // EUREX_UPLOADTESTRADEREQUEST_PACKET_H
