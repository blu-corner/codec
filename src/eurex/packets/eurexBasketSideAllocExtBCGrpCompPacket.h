/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_BASKETSIDEALLOCEXTBCGRPCOMP_PACKET_H
#define EUREX_BASKETSIDEALLOCEXTBCGRPCOMP_PACKET_H

#include <string>
#include <vector>
#include <sstream>
#include <cstddef>
#include <stdint.h>
#include "eurexPackets.h"
#include "eurexPacketUtils.h"

namespace neueda
{

using namespace std;

class eurexBasketSideAllocExtBCGrpCompPacket
{
    public:
        // no value constants
        static const double ALLOC_QTY_MIN;
        static const double ALLOC_QTY_MAX;
        static const int64_t ALLOC_QTY_NO_VALUE;
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const double LAST_PX_MIN;
        static const double LAST_PX_MAX;
        static const int64_t LAST_PX_NO_VALUE;
        static const uint64_t TRANS_BKD_TIME_MIN;
        static const uint64_t TRANS_BKD_TIME_MAX;
        static const uint64_t TRANS_BKD_TIME_NO_VALUE;
        static const double RELATED_CLOSE_PRICE_MIN;
        static const double RELATED_CLOSE_PRICE_MAX;
        static const int64_t RELATED_CLOSE_PRICE_NO_VALUE;
        static const uint32_t PACKAGE_ID_MIN;
        static const uint32_t PACKAGE_ID_MAX;
        static const uint32_t PACKAGE_ID_NO_VALUE;
        static const int32_t SIDE_MARKET_SEGMENT_ID_MIN;
        static const int32_t SIDE_MARKET_SEGMENT_ID_MAX;
        static const int32_t SIDE_MARKET_SEGMENT_ID_NO_VALUE;
        static const uint32_t ALLOC_ID_MIN;
        static const uint32_t ALLOC_ID_MAX;
        static const uint32_t ALLOC_ID_NO_VALUE;
        static const uint32_t NEGOTIATION_ID_MIN;
        static const uint32_t NEGOTIATION_ID_MAX;
        static const uint32_t NEGOTIATION_ID_NO_VALUE;
        static const uint32_t SRQSRELATED_TRADE_ID_MIN;
        static const uint32_t SRQSRELATED_TRADE_ID_MAX;
        static const uint32_t SRQSRELATED_TRADE_ID_NO_VALUE;
        static const int16_t SIDE_TRD_SUB_TYP_MIN;
        static const int16_t SIDE_TRD_SUB_TYP_MAX;
        static const int16_t SIDE_TRD_SUB_TYP_NO_VALUE;
        static const int16_t PARTY_SUB_IDTYPE_MIN;
        static const int16_t PARTY_SUB_IDTYPE_MAX;
        static const int16_t PARTY_SUB_IDTYPE_NO_VALUE;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const char POSITION_EFFECT_NO_VALUE[1];
        static const size_t POSITION_EFFECT_MAX_LENGTH;
        static const int8_t EFFECT_ON_BASKET_MIN;
        static const int8_t EFFECT_ON_BASKET_MAX;
        static const int8_t EFFECT_ON_BASKET_NO_VALUE;
        static const int8_t TRADING_CAPACITY_MIN;
        static const int8_t TRADING_CAPACITY_MAX;
        static const int8_t TRADING_CAPACITY_NO_VALUE;
        static const int8_t TRADE_ALLOC_STATUS_MIN;
        static const int8_t TRADE_ALLOC_STATUS_MAX;
        static const int8_t TRADE_ALLOC_STATUS_NO_VALUE;
        static const int8_t PRODUCT_COMPLEX_MIN;
        static const int8_t PRODUCT_COMPLEX_MAX;
        static const int8_t PRODUCT_COMPLEX_NO_VALUE;
        static const int8_t TRADE_PUBLISH_INDICATOR_MIN;
        static const int8_t TRADE_PUBLISH_INDICATOR_MAX;
        static const int8_t TRADE_PUBLISH_INDICATOR_NO_VALUE;
        static const char PARTY_EXECUTING_FIRM_NO_VALUE[5];
        static const size_t PARTY_EXECUTING_FIRM_MAX_LENGTH;
        static const char PARTY_EXECUTING_TRADER_NO_VALUE[6];
        static const size_t PARTY_EXECUTING_TRADER_MAX_LENGTH;
        static const char ACCOUNT_NO_VALUE[2];
        static const size_t ACCOUNT_MAX_LENGTH;
        static const char FREE_TEXT1_NO_VALUE[12];
        static const size_t FREE_TEXT1_MAX_LENGTH;
        static const char FREE_TEXT2_NO_VALUE[12];
        static const size_t FREE_TEXT2_MAX_LENGTH;
        static const char FREE_TEXT3_NO_VALUE[12];
        static const size_t FREE_TEXT3_MAX_LENGTH;
        static const char PARTY_IDTAKE_UP_TRADING_FIRM_NO_VALUE[5];
        static const size_t PARTY_IDTAKE_UP_TRADING_FIRM_MAX_LENGTH;
        static const char PARTY_IDORDER_ORIGINATION_FIRM_NO_VALUE[7];
        static const size_t PARTY_IDORDER_ORIGINATION_FIRM_MAX_LENGTH;
        static const char PARTY_IDBENEFICIARY_NO_VALUE[9];
        static const size_t PARTY_IDBENEFICIARY_MAX_LENGTH;
        static const char PARTY_IDPOSITION_ACCOUNT_NO_VALUE[32];
        static const size_t PARTY_IDPOSITION_ACCOUNT_MAX_LENGTH;
        static const char PARTY_IDLOCATION_ID_NO_VALUE[2];
        static const size_t PARTY_IDLOCATION_ID_MAX_LENGTH;
        static const char CUST_ORDER_HANDLING_INST_NO_VALUE[1];
        static const size_t CUST_ORDER_HANDLING_INST_MAX_LENGTH;
        static const char COMPLIANCE_TEXT_NO_VALUE[20];
        static const size_t COMPLIANCE_TEXT_MAX_LENGTH;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;

        // fields (use with care)
        int64_t mAllocQty;
        int64_t mSecurityID;
        int64_t mLastPx;
        uint64_t mTransBkdTime;
        int64_t mRelatedClosePrice;
        uint32_t mPackageID;
        int32_t mSideMarketSegmentID;
        uint32_t mAllocID;
        uint32_t mNegotiationID;
        uint32_t mSRQSRelatedTradeID;
        int16_t mSideTrdSubTyp;
        int16_t mPartySubIDType;
        int8_t mSide;
        char mPositionEffect[1];
        int8_t mEffectOnBasket;
        int8_t mTradingCapacity;
        int8_t mTradeAllocStatus;
        int8_t mProductComplex;
        int8_t mTradePublishIndicator;
        char mPartyExecutingFirm[5];
        char mPartyExecutingTrader[6];
        char mAccount[2];
        char mFreeText1[12];
        char mFreeText2[12];
        char mFreeText3[12];
        char mPartyIDTakeUpTradingFirm[5];
        char mPartyIDOrderOriginationFirm[7];
        char mPartyIDBeneficiary[9];
        char mPartyIDPositionAccount[32];
        char mPartyIDLocationID[2];
        char mCustOrderHandlingInst[1];
        char mComplianceText[20];
        char mPad4[4];

        // constructor
        eurexBasketSideAllocExtBCGrpCompPacket ()
        {
            mAllocQty = ALLOC_QTY_NO_VALUE;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mLastPx = LAST_PX_NO_VALUE;
            mTransBkdTime = TRANS_BKD_TIME_NO_VALUE;
            mRelatedClosePrice = RELATED_CLOSE_PRICE_NO_VALUE;
            mPackageID = PACKAGE_ID_NO_VALUE;
            mSideMarketSegmentID = SIDE_MARKET_SEGMENT_ID_NO_VALUE;
            mAllocID = ALLOC_ID_NO_VALUE;
            mNegotiationID = NEGOTIATION_ID_NO_VALUE;
            mSRQSRelatedTradeID = SRQSRELATED_TRADE_ID_NO_VALUE;
            mSideTrdSubTyp = SIDE_TRD_SUB_TYP_NO_VALUE;
            mPartySubIDType = PARTY_SUB_IDTYPE_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            memcpy(mPositionEffect, POSITION_EFFECT_NO_VALUE, sizeof (mPositionEffect));
            mEffectOnBasket = EFFECT_ON_BASKET_NO_VALUE;
            mTradingCapacity = TRADING_CAPACITY_NO_VALUE;
            mTradeAllocStatus = TRADE_ALLOC_STATUS_NO_VALUE;
            mProductComplex = PRODUCT_COMPLEX_NO_VALUE;
            mTradePublishIndicator = TRADE_PUBLISH_INDICATOR_NO_VALUE;
            memcpy(mPartyExecutingFirm, PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mPartyExecutingFirm));
            memcpy(mPartyExecutingTrader, PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mPartyExecutingTrader));
            memcpy(mAccount, ACCOUNT_NO_VALUE, sizeof (mAccount));
            memcpy(mFreeText1, FREE_TEXT1_NO_VALUE, sizeof (mFreeText1));
            memcpy(mFreeText2, FREE_TEXT2_NO_VALUE, sizeof (mFreeText2));
            memcpy(mFreeText3, FREE_TEXT3_NO_VALUE, sizeof (mFreeText3));
            memcpy(mPartyIDTakeUpTradingFirm, PARTY_IDTAKE_UP_TRADING_FIRM_NO_VALUE, sizeof (mPartyIDTakeUpTradingFirm));
            memcpy(mPartyIDOrderOriginationFirm, PARTY_IDORDER_ORIGINATION_FIRM_NO_VALUE, sizeof (mPartyIDOrderOriginationFirm));
            memcpy(mPartyIDBeneficiary, PARTY_IDBENEFICIARY_NO_VALUE, sizeof (mPartyIDBeneficiary));
            memcpy(mPartyIDPositionAccount, PARTY_IDPOSITION_ACCOUNT_NO_VALUE, sizeof (mPartyIDPositionAccount));
            memcpy(mPartyIDLocationID, PARTY_IDLOCATION_ID_NO_VALUE, sizeof (mPartyIDLocationID));
            memcpy(mCustOrderHandlingInst, CUST_ORDER_HANDLING_INST_NO_VALUE, sizeof (mCustOrderHandlingInst));
            memcpy(mComplianceText, COMPLIANCE_TEXT_NO_VALUE, sizeof (mComplianceText));
            memcpy(mPad4, PAD4_NO_VALUE, sizeof (mPad4));
        }

        // getters & setters
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

        int32_t getSideMarketSegmentID () const
        {
            return mSideMarketSegmentID;
        }

        bool setSideMarketSegmentID (int32_t v)
        {
            mSideMarketSegmentID = v;
            return ((SIDE_MARKET_SEGMENT_ID_MIN <= mSideMarketSegmentID && mSideMarketSegmentID <= SIDE_MARKET_SEGMENT_ID_MAX) || mSideMarketSegmentID == SIDE_MARKET_SEGMENT_ID_NO_VALUE);
        }

        bool isSideMarketSegmentIDValid () const
        {
            return (mSideMarketSegmentID != SIDE_MARKET_SEGMENT_ID_NO_VALUE);
        }

        void resetSideMarketSegmentID ()
        {
            mSideMarketSegmentID = SIDE_MARKET_SEGMENT_ID_NO_VALUE;
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

        uint32_t getSRQSRelatedTradeID () const
        {
            return mSRQSRelatedTradeID;
        }

        bool setSRQSRelatedTradeID (uint32_t v)
        {
            mSRQSRelatedTradeID = v;
            return ((SRQSRELATED_TRADE_ID_MIN <= mSRQSRelatedTradeID && mSRQSRelatedTradeID <= SRQSRELATED_TRADE_ID_MAX) || mSRQSRelatedTradeID == SRQSRELATED_TRADE_ID_NO_VALUE);
        }

        bool isSRQSRelatedTradeIDValid () const
        {
            return (mSRQSRelatedTradeID != SRQSRELATED_TRADE_ID_NO_VALUE);
        }

        void resetSRQSRelatedTradeID ()
        {
            mSRQSRelatedTradeID = SRQSRELATED_TRADE_ID_NO_VALUE;
        }

        int16_t getSideTrdSubTyp () const
        {
            return mSideTrdSubTyp;
        }

        bool setSideTrdSubTyp (int16_t v)
        {
            mSideTrdSubTyp = v;
            return ((SIDE_TRD_SUB_TYP_MIN <= mSideTrdSubTyp && mSideTrdSubTyp <= SIDE_TRD_SUB_TYP_MAX) || mSideTrdSubTyp == SIDE_TRD_SUB_TYP_NO_VALUE);
        }

        bool isSideTrdSubTypValid () const
        {
            return (mSideTrdSubTyp != SIDE_TRD_SUB_TYP_NO_VALUE);
        }

        void resetSideTrdSubTyp ()
        {
            mSideTrdSubTyp = SIDE_TRD_SUB_TYP_NO_VALUE;
        }

        int16_t getPartySubIDType () const
        {
            return mPartySubIDType;
        }

        bool setPartySubIDType (int16_t v)
        {
            mPartySubIDType = v;
            return ((PARTY_SUB_IDTYPE_MIN <= mPartySubIDType && mPartySubIDType <= PARTY_SUB_IDTYPE_MAX) || mPartySubIDType == PARTY_SUB_IDTYPE_NO_VALUE);
        }

        bool isPartySubIDTypeValid () const
        {
            return (mPartySubIDType != PARTY_SUB_IDTYPE_NO_VALUE);
        }

        void resetPartySubIDType ()
        {
            mPartySubIDType = PARTY_SUB_IDTYPE_NO_VALUE;
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

        int8_t getEffectOnBasket () const
        {
            return mEffectOnBasket;
        }

        bool setEffectOnBasket (int8_t v)
        {
            mEffectOnBasket = v;
            return ((EFFECT_ON_BASKET_MIN <= mEffectOnBasket && mEffectOnBasket <= EFFECT_ON_BASKET_MAX) || mEffectOnBasket == EFFECT_ON_BASKET_NO_VALUE);
        }

        bool isEffectOnBasketValid () const
        {
            return (mEffectOnBasket != EFFECT_ON_BASKET_NO_VALUE);
        }

        void resetEffectOnBasket ()
        {
            mEffectOnBasket = EFFECT_ON_BASKET_NO_VALUE;
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
            size_t result = sizeof (mAllocQty)
                + sizeof (mSecurityID)
                + sizeof (mLastPx)
                + sizeof (mTransBkdTime)
                + sizeof (mRelatedClosePrice)
                + sizeof (mPackageID)
                + sizeof (mSideMarketSegmentID)
                + sizeof (mAllocID)
                + sizeof (mNegotiationID)
                + sizeof (mSRQSRelatedTradeID)
                + sizeof (mSideTrdSubTyp)
                + sizeof (mPartySubIDType)
                + sizeof (mSide)
                + sizeof (mPositionEffect)
                + sizeof (mEffectOnBasket)
                + sizeof (mTradingCapacity)
                + sizeof (mTradeAllocStatus)
                + sizeof (mProductComplex)
                + sizeof (mTradePublishIndicator)
                + sizeof (mPartyExecutingFirm)
                + sizeof (mPartyExecutingTrader)
                + sizeof (mAccount)
                + sizeof (mFreeText1)
                + sizeof (mFreeText2)
                + sizeof (mFreeText3)
                + sizeof (mPartyIDTakeUpTradingFirm)
                + sizeof (mPartyIDOrderOriginationFirm)
                + sizeof (mPartyIDBeneficiary)
                + sizeof (mPartyIDPositionAccount)
                + sizeof (mPartyIDLocationID)
                + sizeof (mCustOrderHandlingInst)
                + sizeof (mComplianceText)
                + sizeof (mPad4);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eurex::serialize (mAllocQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTransBkdTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mRelatedClosePrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPackageID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mSideMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mAllocID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mSRQSRelatedTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mSideTrdSubTyp, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPartySubIDType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPositionEffect, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mEffectOnBasket, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTradeAllocStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTradePublishIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mFreeText3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPartyIDTakeUpTradingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPartyIDOrderOriginationFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPartyIDBeneficiary, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPartyIDPositionAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPartyIDLocationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mCustOrderHandlingInst, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mComplianceText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eurex::deserialize (mAllocQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTransBkdTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mRelatedClosePrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPackageID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mSideMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mAllocID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mNegotiationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mSRQSRelatedTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mSideTrdSubTyp, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPartySubIDType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPositionEffect, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mEffectOnBasket, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTradeAllocStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTradePublishIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mFreeText3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPartyIDTakeUpTradingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPartyIDOrderOriginationFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPartyIDBeneficiary, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPartyIDPositionAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPartyIDLocationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mCustOrderHandlingInst, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mComplianceText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "BasketSideAllocExtBCGrpComp::"
                << "[AllocQty=" << getAllocQty () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[LastPx=" << getLastPx () << "],"
                << "[TransBkdTime=" << getTransBkdTime () << "],"
                << "[RelatedClosePrice=" << getRelatedClosePrice () << "],"
                << "[PackageID=" << getPackageID () << "],"
                << "[SideMarketSegmentID=" << getSideMarketSegmentID () << "],"
                << "[AllocID=" << getAllocID () << "],"
                << "[NegotiationID=" << getNegotiationID () << "],"
                << "[SRQSRelatedTradeID=" << getSRQSRelatedTradeID () << "],"
                << "[SideTrdSubTyp=" << getSideTrdSubTyp () << "],"
                << "[PartySubIDType=" << getPartySubIDType () << "],"
                << "[Side=" << getSide () << "],"
                << "[PositionEffect=" << getPositionEffect () << "],"
                << "[EffectOnBasket=" << getEffectOnBasket () << "],"
                << "[TradingCapacity=" << getTradingCapacity () << "],"
                << "[TradeAllocStatus=" << getTradeAllocStatus () << "],"
                << "[ProductComplex=" << getProductComplex () << "],"
                << "[TradePublishIndicator=" << getTradePublishIndicator () << "],"
                << "[PartyExecutingFirm=" << getPartyExecutingFirm () << "],"
                << "[PartyExecutingTrader=" << getPartyExecutingTrader () << "],"
                << "[Account=" << getAccount () << "],"
                << "[FreeText1=" << getFreeText1 () << "],"
                << "[FreeText2=" << getFreeText2 () << "],"
                << "[FreeText3=" << getFreeText3 () << "],"
                << "[PartyIDTakeUpTradingFirm=" << getPartyIDTakeUpTradingFirm () << "],"
                << "[PartyIDOrderOriginationFirm=" << getPartyIDOrderOriginationFirm () << "],"
                << "[PartyIDBeneficiary=" << getPartyIDBeneficiary () << "],"
                << "[PartyIDPositionAccount=" << getPartyIDPositionAccount () << "],"
                << "[PartyIDLocationID=" << getPartyIDLocationID () << "],"
                << "[CustOrderHandlingInst=" << getCustOrderHandlingInst () << "],"
                << "[ComplianceText=" << getComplianceText () << "],"
                << "[Pad4=" << getPad4 () << "]";
            return sss.str();
        }
};

const double eurexBasketSideAllocExtBCGrpCompPacket::ALLOC_QTY_MIN = -922337203685477.5807;
const double eurexBasketSideAllocExtBCGrpCompPacket::ALLOC_QTY_MAX = 922337203685477.5807;
const int64_t eurexBasketSideAllocExtBCGrpCompPacket::ALLOC_QTY_NO_VALUE = 0x8000000000000000;
const int64_t eurexBasketSideAllocExtBCGrpCompPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t eurexBasketSideAllocExtBCGrpCompPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t eurexBasketSideAllocExtBCGrpCompPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double eurexBasketSideAllocExtBCGrpCompPacket::LAST_PX_MIN = -92233720368.54775807;
const double eurexBasketSideAllocExtBCGrpCompPacket::LAST_PX_MAX = 92233720368.54775807;
const int64_t eurexBasketSideAllocExtBCGrpCompPacket::LAST_PX_NO_VALUE = 0x8000000000000000;
const uint64_t eurexBasketSideAllocExtBCGrpCompPacket::TRANS_BKD_TIME_MIN = 0UL;
const uint64_t eurexBasketSideAllocExtBCGrpCompPacket::TRANS_BKD_TIME_MAX = 18446744073709551614UL;
const uint64_t eurexBasketSideAllocExtBCGrpCompPacket::TRANS_BKD_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const double eurexBasketSideAllocExtBCGrpCompPacket::RELATED_CLOSE_PRICE_MIN = -9223372036854.775807;
const double eurexBasketSideAllocExtBCGrpCompPacket::RELATED_CLOSE_PRICE_MAX = 9223372036854.775807;
const int64_t eurexBasketSideAllocExtBCGrpCompPacket::RELATED_CLOSE_PRICE_NO_VALUE = 0x8000000000000000;
const uint32_t eurexBasketSideAllocExtBCGrpCompPacket::PACKAGE_ID_MIN = 0;
const uint32_t eurexBasketSideAllocExtBCGrpCompPacket::PACKAGE_ID_MAX = 4294967294;
const uint32_t eurexBasketSideAllocExtBCGrpCompPacket::PACKAGE_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t eurexBasketSideAllocExtBCGrpCompPacket::SIDE_MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexBasketSideAllocExtBCGrpCompPacket::SIDE_MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexBasketSideAllocExtBCGrpCompPacket::SIDE_MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t eurexBasketSideAllocExtBCGrpCompPacket::ALLOC_ID_MIN = 0;
const uint32_t eurexBasketSideAllocExtBCGrpCompPacket::ALLOC_ID_MAX = 4294967294;
const uint32_t eurexBasketSideAllocExtBCGrpCompPacket::ALLOC_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexBasketSideAllocExtBCGrpCompPacket::NEGOTIATION_ID_MIN = 0;
const uint32_t eurexBasketSideAllocExtBCGrpCompPacket::NEGOTIATION_ID_MAX = 4294967294;
const uint32_t eurexBasketSideAllocExtBCGrpCompPacket::NEGOTIATION_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexBasketSideAllocExtBCGrpCompPacket::SRQSRELATED_TRADE_ID_MIN = 0;
const uint32_t eurexBasketSideAllocExtBCGrpCompPacket::SRQSRELATED_TRADE_ID_MAX = 4294967294;
const uint32_t eurexBasketSideAllocExtBCGrpCompPacket::SRQSRELATED_TRADE_ID_NO_VALUE = 0xFFFFFFFF;
const int16_t eurexBasketSideAllocExtBCGrpCompPacket::SIDE_TRD_SUB_TYP_MIN = 2001;
const int16_t eurexBasketSideAllocExtBCGrpCompPacket::SIDE_TRD_SUB_TYP_MAX = 2004;
const int16_t eurexBasketSideAllocExtBCGrpCompPacket::SIDE_TRD_SUB_TYP_NO_VALUE = 0xFFFF;
const int16_t eurexBasketSideAllocExtBCGrpCompPacket::PARTY_SUB_IDTYPE_MIN = 14001;
const int16_t eurexBasketSideAllocExtBCGrpCompPacket::PARTY_SUB_IDTYPE_MAX = 14002;
const int16_t eurexBasketSideAllocExtBCGrpCompPacket::PARTY_SUB_IDTYPE_NO_VALUE = 0xFFFF;
const int8_t eurexBasketSideAllocExtBCGrpCompPacket::SIDE_MIN = 1;
const int8_t eurexBasketSideAllocExtBCGrpCompPacket::SIDE_MAX = 2;
const int8_t eurexBasketSideAllocExtBCGrpCompPacket::SIDE_NO_VALUE = 0xFF;
const char eurexBasketSideAllocExtBCGrpCompPacket::POSITION_EFFECT_NO_VALUE[1] = {0x00};
const size_t eurexBasketSideAllocExtBCGrpCompPacket::POSITION_EFFECT_MAX_LENGTH = 1;
const int8_t eurexBasketSideAllocExtBCGrpCompPacket::EFFECT_ON_BASKET_MIN = 1;
const int8_t eurexBasketSideAllocExtBCGrpCompPacket::EFFECT_ON_BASKET_MAX = 2;
const int8_t eurexBasketSideAllocExtBCGrpCompPacket::EFFECT_ON_BASKET_NO_VALUE = 0xFF;
const int8_t eurexBasketSideAllocExtBCGrpCompPacket::TRADING_CAPACITY_MIN = 1;
const int8_t eurexBasketSideAllocExtBCGrpCompPacket::TRADING_CAPACITY_MAX = 9;
const int8_t eurexBasketSideAllocExtBCGrpCompPacket::TRADING_CAPACITY_NO_VALUE = 0xFF;
const int8_t eurexBasketSideAllocExtBCGrpCompPacket::TRADE_ALLOC_STATUS_MIN = 0;
const int8_t eurexBasketSideAllocExtBCGrpCompPacket::TRADE_ALLOC_STATUS_MAX = 5;
const int8_t eurexBasketSideAllocExtBCGrpCompPacket::TRADE_ALLOC_STATUS_NO_VALUE = 0xFF;
const int8_t eurexBasketSideAllocExtBCGrpCompPacket::PRODUCT_COMPLEX_MIN = 1;
const int8_t eurexBasketSideAllocExtBCGrpCompPacket::PRODUCT_COMPLEX_MAX = 10;
const int8_t eurexBasketSideAllocExtBCGrpCompPacket::PRODUCT_COMPLEX_NO_VALUE = 0xFF;
const int8_t eurexBasketSideAllocExtBCGrpCompPacket::TRADE_PUBLISH_INDICATOR_MIN = 0;
const int8_t eurexBasketSideAllocExtBCGrpCompPacket::TRADE_PUBLISH_INDICATOR_MAX = 3;
const int8_t eurexBasketSideAllocExtBCGrpCompPacket::TRADE_PUBLISH_INDICATOR_NO_VALUE = 0xFF;
const char eurexBasketSideAllocExtBCGrpCompPacket::PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketSideAllocExtBCGrpCompPacket::PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char eurexBasketSideAllocExtBCGrpCompPacket::PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketSideAllocExtBCGrpCompPacket::PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const char eurexBasketSideAllocExtBCGrpCompPacket::ACCOUNT_NO_VALUE[2] = {0x00, 0x00};
const size_t eurexBasketSideAllocExtBCGrpCompPacket::ACCOUNT_MAX_LENGTH = 2;
const char eurexBasketSideAllocExtBCGrpCompPacket::FREE_TEXT1_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketSideAllocExtBCGrpCompPacket::FREE_TEXT1_MAX_LENGTH = 12;
const char eurexBasketSideAllocExtBCGrpCompPacket::FREE_TEXT2_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketSideAllocExtBCGrpCompPacket::FREE_TEXT2_MAX_LENGTH = 12;
const char eurexBasketSideAllocExtBCGrpCompPacket::FREE_TEXT3_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketSideAllocExtBCGrpCompPacket::FREE_TEXT3_MAX_LENGTH = 12;
const char eurexBasketSideAllocExtBCGrpCompPacket::PARTY_IDTAKE_UP_TRADING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketSideAllocExtBCGrpCompPacket::PARTY_IDTAKE_UP_TRADING_FIRM_MAX_LENGTH = 5;
const char eurexBasketSideAllocExtBCGrpCompPacket::PARTY_IDORDER_ORIGINATION_FIRM_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketSideAllocExtBCGrpCompPacket::PARTY_IDORDER_ORIGINATION_FIRM_MAX_LENGTH = 7;
const char eurexBasketSideAllocExtBCGrpCompPacket::PARTY_IDBENEFICIARY_NO_VALUE[9] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketSideAllocExtBCGrpCompPacket::PARTY_IDBENEFICIARY_MAX_LENGTH = 9;
const char eurexBasketSideAllocExtBCGrpCompPacket::PARTY_IDPOSITION_ACCOUNT_NO_VALUE[32] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketSideAllocExtBCGrpCompPacket::PARTY_IDPOSITION_ACCOUNT_MAX_LENGTH = 32;
const char eurexBasketSideAllocExtBCGrpCompPacket::PARTY_IDLOCATION_ID_NO_VALUE[2] = {0x00, 0x00};
const size_t eurexBasketSideAllocExtBCGrpCompPacket::PARTY_IDLOCATION_ID_MAX_LENGTH = 2;
const char eurexBasketSideAllocExtBCGrpCompPacket::CUST_ORDER_HANDLING_INST_NO_VALUE[1] = {0x00};
const size_t eurexBasketSideAllocExtBCGrpCompPacket::CUST_ORDER_HANDLING_INST_MAX_LENGTH = 1;
const char eurexBasketSideAllocExtBCGrpCompPacket::COMPLIANCE_TEXT_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketSideAllocExtBCGrpCompPacket::COMPLIANCE_TEXT_MAX_LENGTH = 20;
const char eurexBasketSideAllocExtBCGrpCompPacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketSideAllocExtBCGrpCompPacket::PAD4_MAX_LENGTH = 4;


} // namespace neueda

#endif // EUREX_BASKETSIDEALLOCEXTBCGRPCOMP_PACKET_H
