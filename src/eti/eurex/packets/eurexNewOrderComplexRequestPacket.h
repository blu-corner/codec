/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_NEWORDERCOMPLEXREQUEST_PACKET_H
#define EUREX_NEWORDERCOMPLEXREQUEST_PACKET_H

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

class eurexNewOrderComplexRequestPacket
{
    public:
        // no value constants
        static const uint64_t CL_ORD_ID_MIN;
        static const uint64_t CL_ORD_ID_MAX;
        static const uint64_t CL_ORD_ID_NO_VALUE;
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const double PRICE_MIN;
        static const double PRICE_MAX;
        static const int64_t PRICE_NO_VALUE;
        static const double ORDER_QTY_MIN;
        static const double ORDER_QTY_MAX;
        static const int64_t ORDER_QTY_NO_VALUE;
        static const uint64_t PARTY_IDCLIENT_ID_MIN;
        static const uint64_t PARTY_IDCLIENT_ID_MAX;
        static const uint64_t PARTY_IDCLIENT_ID_NO_VALUE;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_MIN;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_MAX;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE;
        static const uint64_t EXECUTING_TRADER_MIN;
        static const uint64_t EXECUTING_TRADER_MAX;
        static const uint64_t EXECUTING_TRADER_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int32_t EXPIRE_DATE_MIN;
        static const int32_t EXPIRE_DATE_MAX;
        static const int32_t EXPIRE_DATE_NO_VALUE;
        static const uint32_t MATCH_INST_CROSS_ID_MIN;
        static const uint32_t MATCH_INST_CROSS_ID_MAX;
        static const uint32_t MATCH_INST_CROSS_ID_NO_VALUE;
        static const char PARTY_IDTAKE_UP_TRADING_FIRM_NO_VALUE[5];
        static const size_t PARTY_IDTAKE_UP_TRADING_FIRM_MAX_LENGTH;
        static const char PARTY_IDORDER_ORIGINATION_FIRM_NO_VALUE[7];
        static const size_t PARTY_IDORDER_ORIGINATION_FIRM_MAX_LENGTH;
        static const char PARTY_IDBENEFICIARY_NO_VALUE[9];
        static const size_t PARTY_IDBENEFICIARY_MAX_LENGTH;
        static const int8_t APPL_SEQ_INDICATOR_MIN;
        static const int8_t APPL_SEQ_INDICATOR_MAX;
        static const int8_t APPL_SEQ_INDICATOR_NO_VALUE;
        static const int8_t PRODUCT_COMPLEX_MIN;
        static const int8_t PRODUCT_COMPLEX_MAX;
        static const int8_t PRODUCT_COMPLEX_NO_VALUE;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const int8_t ORD_TYPE_MIN;
        static const int8_t ORD_TYPE_MAX;
        static const int8_t ORD_TYPE_NO_VALUE;
        static const int8_t PRICE_VALIDITY_CHECK_TYPE_MIN;
        static const int8_t PRICE_VALIDITY_CHECK_TYPE_MAX;
        static const int8_t PRICE_VALIDITY_CHECK_TYPE_NO_VALUE;
        static const int8_t VALUE_CHECK_TYPE_VALUE_MIN;
        static const int8_t VALUE_CHECK_TYPE_VALUE_MAX;
        static const int8_t VALUE_CHECK_TYPE_VALUE_NO_VALUE;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MIN;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MAX;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE;
        static const int8_t ORDER_ATTRIBUTE_RISK_REDUCTION_MIN;
        static const int8_t ORDER_ATTRIBUTE_RISK_REDUCTION_MAX;
        static const int8_t ORDER_ATTRIBUTE_RISK_REDUCTION_NO_VALUE;
        static const int8_t EXEC_INST_MIN;
        static const int8_t EXEC_INST_MAX;
        static const int8_t EXEC_INST_NO_VALUE;
        static const int8_t TIME_IN_FORCE_MIN;
        static const int8_t TIME_IN_FORCE_MAX;
        static const int8_t TIME_IN_FORCE_NO_VALUE;
        static const int8_t TRADING_CAPACITY_MIN;
        static const int8_t TRADING_CAPACITY_MAX;
        static const int8_t TRADING_CAPACITY_NO_VALUE;
        static const int8_t PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MIN;
        static const int8_t PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MAX;
        static const int8_t PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE;
        static const int8_t EXECUTING_TRADER_QUALIFIER_MIN;
        static const int8_t EXECUTING_TRADER_QUALIFIER_MAX;
        static const int8_t EXECUTING_TRADER_QUALIFIER_NO_VALUE;
        static const char PARTY_IDLOCATION_ID_NO_VALUE[2];
        static const size_t PARTY_IDLOCATION_ID_MAX_LENGTH;
        static const char COMPLIANCE_TEXT_NO_VALUE[20];
        static const size_t COMPLIANCE_TEXT_MAX_LENGTH;
        static const char CUST_ORDER_HANDLING_INST_NO_VALUE[1];
        static const size_t CUST_ORDER_HANDLING_INST_MAX_LENGTH;
        static const char PARTY_IDPOSITION_ACCOUNT_NO_VALUE[32];
        static const size_t PARTY_IDPOSITION_ACCOUNT_MAX_LENGTH;
        static const char FREE_TEXT1_NO_VALUE[12];
        static const size_t FREE_TEXT1_MAX_LENGTH;
        static const char FREE_TEXT2_NO_VALUE[12];
        static const size_t FREE_TEXT2_MAX_LENGTH;
        static const char FREE_TEXT3_NO_VALUE[12];
        static const size_t FREE_TEXT3_MAX_LENGTH;
        static const char FIXCL_ORD_ID_NO_VALUE[20];
        static const size_t FIXCL_ORD_ID_MAX_LENGTH;
        static const int8_t NO_LEGS_MIN;
        static const int8_t NO_LEGS_MAX;
        static const int8_t NO_LEGS_NO_VALUE;
        static const char PAD2_NO_VALUE[2];
        static const size_t PAD2_MAX_LENGTH;
        static const size_t LEG_ORD_GRP_MIN;
        static const size_t LEG_ORD_GRP_MAX;

        // fields (use with care)
        eurexMessageHeaderInCompPacket mMessageHeaderIn;
        eurexRequestHeaderCompPacket mRequestHeader;
        uint64_t mClOrdID;
        int64_t mSecurityID;
        int64_t mPrice;
        int64_t mOrderQty;
        uint64_t mPartyIDClientID;
        uint64_t mPartyIdInvestmentDecisionMaker;
        uint64_t mExecutingTrader;
        int32_t mMarketSegmentID;
        int32_t mExpireDate;
        uint32_t mMatchInstCrossID;
        char mPartyIDTakeUpTradingFirm[5];
        char mPartyIDOrderOriginationFirm[7];
        char mPartyIDBeneficiary[9];
        int8_t mApplSeqIndicator;
        int8_t mProductComplex;
        int8_t mSide;
        int8_t mOrdType;
        int8_t mPriceValidityCheckType;
        int8_t mValueCheckTypeValue;
        int8_t mOrderAttributeLiquidityProvision;
        int8_t mOrderAttributeRiskReduction;
        int8_t mExecInst;
        int8_t mTimeInForce;
        int8_t mTradingCapacity;
        int8_t mPartyIdInvestmentDecisionMakerQualifier;
        int8_t mExecutingTraderQualifier;
        char mPartyIDLocationID[2];
        char mComplianceText[20];
        char mCustOrderHandlingInst[1];
        char mPartyIDPositionAccount[32];
        char mFreeText1[12];
        char mFreeText2[12];
        char mFreeText3[12];
        char mFIXClOrdID[20];
        int8_t mNoLegs;
        char mPad2[2];
        vector<eurexLegOrdGrpCompPacket> mLegOrdGrp;

        // constructor
        eurexNewOrderComplexRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10113;
            mClOrdID = CL_ORD_ID_NO_VALUE;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mPrice = PRICE_NO_VALUE;
            mOrderQty = ORDER_QTY_NO_VALUE;
            mPartyIDClientID = PARTY_IDCLIENT_ID_NO_VALUE;
            mPartyIdInvestmentDecisionMaker = PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE;
            mExecutingTrader = EXECUTING_TRADER_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mExpireDate = EXPIRE_DATE_NO_VALUE;
            mMatchInstCrossID = MATCH_INST_CROSS_ID_NO_VALUE;
            memcpy(mPartyIDTakeUpTradingFirm, PARTY_IDTAKE_UP_TRADING_FIRM_NO_VALUE, sizeof (mPartyIDTakeUpTradingFirm));
            memcpy(mPartyIDOrderOriginationFirm, PARTY_IDORDER_ORIGINATION_FIRM_NO_VALUE, sizeof (mPartyIDOrderOriginationFirm));
            memcpy(mPartyIDBeneficiary, PARTY_IDBENEFICIARY_NO_VALUE, sizeof (mPartyIDBeneficiary));
            mApplSeqIndicator = APPL_SEQ_INDICATOR_NO_VALUE;
            mProductComplex = PRODUCT_COMPLEX_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            mOrdType = ORD_TYPE_NO_VALUE;
            mPriceValidityCheckType = PRICE_VALIDITY_CHECK_TYPE_NO_VALUE;
            mValueCheckTypeValue = VALUE_CHECK_TYPE_VALUE_NO_VALUE;
            mOrderAttributeLiquidityProvision = ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE;
            mOrderAttributeRiskReduction = ORDER_ATTRIBUTE_RISK_REDUCTION_NO_VALUE;
            mExecInst = EXEC_INST_NO_VALUE;
            mTimeInForce = TIME_IN_FORCE_NO_VALUE;
            mTradingCapacity = TRADING_CAPACITY_NO_VALUE;
            mPartyIdInvestmentDecisionMakerQualifier = PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE;
            mExecutingTraderQualifier = EXECUTING_TRADER_QUALIFIER_NO_VALUE;
            memcpy(mPartyIDLocationID, PARTY_IDLOCATION_ID_NO_VALUE, sizeof (mPartyIDLocationID));
            memcpy(mComplianceText, COMPLIANCE_TEXT_NO_VALUE, sizeof (mComplianceText));
            memcpy(mCustOrderHandlingInst, CUST_ORDER_HANDLING_INST_NO_VALUE, sizeof (mCustOrderHandlingInst));
            memcpy(mPartyIDPositionAccount, PARTY_IDPOSITION_ACCOUNT_NO_VALUE, sizeof (mPartyIDPositionAccount));
            memcpy(mFreeText1, FREE_TEXT1_NO_VALUE, sizeof (mFreeText1));
            memcpy(mFreeText2, FREE_TEXT2_NO_VALUE, sizeof (mFreeText2));
            memcpy(mFreeText3, FREE_TEXT3_NO_VALUE, sizeof (mFreeText3));
            memcpy(mFIXClOrdID, FIXCL_ORD_ID_NO_VALUE, sizeof (mFIXClOrdID));
            mNoLegs = NO_LEGS_NO_VALUE;
            memcpy(mPad2, PAD2_NO_VALUE, sizeof (mPad2));
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

        uint64_t getClOrdID () const
        {
            return mClOrdID;
        }

        bool setClOrdID (uint64_t v)
        {
            mClOrdID = v;
            return ((CL_ORD_ID_MIN <= mClOrdID && mClOrdID <= CL_ORD_ID_MAX) || mClOrdID == CL_ORD_ID_NO_VALUE);
        }

        bool isClOrdIDValid () const
        {
            return (mClOrdID != CL_ORD_ID_NO_VALUE);
        }

        void resetClOrdID ()
        {
            mClOrdID = CL_ORD_ID_NO_VALUE;
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

        double getPrice () const
        {
            return mPrice / 100000000.0;
        }

        bool setPrice (double v)
        {
            mPrice = v * 100000000.0;
            return ((PRICE_MIN <= v && v <= PRICE_MAX) || mPrice == PRICE_NO_VALUE);
        }

        bool isPriceValid () const
        {
            return (mPrice != PRICE_NO_VALUE);
        }

        void resetPrice ()
        {
            mPrice = PRICE_NO_VALUE;
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

        int32_t getExpireDate () const
        {
            return mExpireDate;
        }

        bool setExpireDate (int32_t v)
        {
            mExpireDate = v;
            return ((EXPIRE_DATE_MIN <= mExpireDate && mExpireDate <= EXPIRE_DATE_MAX) || mExpireDate == EXPIRE_DATE_NO_VALUE);
        }

        bool isExpireDateValid () const
        {
            return (mExpireDate != EXPIRE_DATE_NO_VALUE);
        }

        void resetExpireDate ()
        {
            mExpireDate = EXPIRE_DATE_NO_VALUE;
        }

        uint32_t getMatchInstCrossID () const
        {
            return mMatchInstCrossID;
        }

        bool setMatchInstCrossID (uint32_t v)
        {
            mMatchInstCrossID = v;
            return ((MATCH_INST_CROSS_ID_MIN <= mMatchInstCrossID && mMatchInstCrossID <= MATCH_INST_CROSS_ID_MAX) || mMatchInstCrossID == MATCH_INST_CROSS_ID_NO_VALUE);
        }

        bool isMatchInstCrossIDValid () const
        {
            return (mMatchInstCrossID != MATCH_INST_CROSS_ID_NO_VALUE);
        }

        void resetMatchInstCrossID ()
        {
            mMatchInstCrossID = MATCH_INST_CROSS_ID_NO_VALUE;
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

        int8_t getApplSeqIndicator () const
        {
            return mApplSeqIndicator;
        }

        bool setApplSeqIndicator (int8_t v)
        {
            mApplSeqIndicator = v;
            return ((APPL_SEQ_INDICATOR_MIN <= mApplSeqIndicator && mApplSeqIndicator <= APPL_SEQ_INDICATOR_MAX) || mApplSeqIndicator == APPL_SEQ_INDICATOR_NO_VALUE);
        }

        bool isApplSeqIndicatorValid () const
        {
            return (mApplSeqIndicator != APPL_SEQ_INDICATOR_NO_VALUE);
        }

        void resetApplSeqIndicator ()
        {
            mApplSeqIndicator = APPL_SEQ_INDICATOR_NO_VALUE;
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

        int8_t getOrdType () const
        {
            return mOrdType;
        }

        bool setOrdType (int8_t v)
        {
            mOrdType = v;
            return ((ORD_TYPE_MIN <= mOrdType && mOrdType <= ORD_TYPE_MAX) || mOrdType == ORD_TYPE_NO_VALUE);
        }

        bool isOrdTypeValid () const
        {
            return (mOrdType != ORD_TYPE_NO_VALUE);
        }

        void resetOrdType ()
        {
            mOrdType = ORD_TYPE_NO_VALUE;
        }

        int8_t getPriceValidityCheckType () const
        {
            return mPriceValidityCheckType;
        }

        bool setPriceValidityCheckType (int8_t v)
        {
            mPriceValidityCheckType = v;
            return ((PRICE_VALIDITY_CHECK_TYPE_MIN <= mPriceValidityCheckType && mPriceValidityCheckType <= PRICE_VALIDITY_CHECK_TYPE_MAX) || mPriceValidityCheckType == PRICE_VALIDITY_CHECK_TYPE_NO_VALUE);
        }

        bool isPriceValidityCheckTypeValid () const
        {
            return (mPriceValidityCheckType != PRICE_VALIDITY_CHECK_TYPE_NO_VALUE);
        }

        void resetPriceValidityCheckType ()
        {
            mPriceValidityCheckType = PRICE_VALIDITY_CHECK_TYPE_NO_VALUE;
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

        int8_t getOrderAttributeRiskReduction () const
        {
            return mOrderAttributeRiskReduction;
        }

        bool setOrderAttributeRiskReduction (int8_t v)
        {
            mOrderAttributeRiskReduction = v;
            return ((ORDER_ATTRIBUTE_RISK_REDUCTION_MIN <= mOrderAttributeRiskReduction && mOrderAttributeRiskReduction <= ORDER_ATTRIBUTE_RISK_REDUCTION_MAX) || mOrderAttributeRiskReduction == ORDER_ATTRIBUTE_RISK_REDUCTION_NO_VALUE);
        }

        bool isOrderAttributeRiskReductionValid () const
        {
            return (mOrderAttributeRiskReduction != ORDER_ATTRIBUTE_RISK_REDUCTION_NO_VALUE);
        }

        void resetOrderAttributeRiskReduction ()
        {
            mOrderAttributeRiskReduction = ORDER_ATTRIBUTE_RISK_REDUCTION_NO_VALUE;
        }

        int8_t getExecInst () const
        {
            return mExecInst;
        }

        bool setExecInst (int8_t v)
        {
            mExecInst = v;
            return ((EXEC_INST_MIN <= mExecInst && mExecInst <= EXEC_INST_MAX) || mExecInst == EXEC_INST_NO_VALUE);
        }

        bool isExecInstValid () const
        {
            return (mExecInst != EXEC_INST_NO_VALUE);
        }

        void resetExecInst ()
        {
            mExecInst = EXEC_INST_NO_VALUE;
        }

        int8_t getTimeInForce () const
        {
            return mTimeInForce;
        }

        bool setTimeInForce (int8_t v)
        {
            mTimeInForce = v;
            return ((TIME_IN_FORCE_MIN <= mTimeInForce && mTimeInForce <= TIME_IN_FORCE_MAX) || mTimeInForce == TIME_IN_FORCE_NO_VALUE);
        }

        bool isTimeInForceValid () const
        {
            return (mTimeInForce != TIME_IN_FORCE_NO_VALUE);
        }

        void resetTimeInForce ()
        {
            mTimeInForce = TIME_IN_FORCE_NO_VALUE;
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

        string getFIXClOrdID () const
        {
            return string (mFIXClOrdID, FIXCL_ORD_ID_MAX_LENGTH);
        }

        bool setFIXClOrdID (const string& v)
        {
            memset (mFIXClOrdID, '\0', sizeof (mFIXClOrdID));
            size_t size = min ((size_t) v.size (), (size_t) FIXCL_ORD_ID_MAX_LENGTH);
            strncpy (mFIXClOrdID, v.c_str (), size);
            return (v.size () <= FIXCL_ORD_ID_MAX_LENGTH);
        }

        bool isFIXClOrdIDValid () const
        {
            return (memcmp (mFIXClOrdID, FIXCL_ORD_ID_NO_VALUE, sizeof (mFIXClOrdID)) != 0);
        }

        void resetFIXClOrdID ()
        {
            memcpy (mFIXClOrdID, FIXCL_ORD_ID_NO_VALUE, sizeof (mFIXClOrdID));
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

        string getPad2 () const
        {
            return string (mPad2, PAD2_MAX_LENGTH);
        }

        bool setPad2 (const string& v)
        {
            memset (mPad2, '\0', sizeof (mPad2));
            size_t size = min ((size_t) v.size (), (size_t) PAD2_MAX_LENGTH);
            strncpy (mPad2, v.c_str (), size);
            return (v.size () <= PAD2_MAX_LENGTH);
        }

        bool isPad2Valid () const
        {
            return (memcmp (mPad2, PAD2_NO_VALUE, sizeof (mPad2)) != 0);
        }

        void resetPad2 ()
        {
            memcpy (mPad2, PAD2_NO_VALUE, sizeof (mPad2));
        }

        const vector<eurexLegOrdGrpCompPacket>& getLegOrdGrp () const
        {
            return mLegOrdGrp;
        }

        bool setLegOrdGrp (const vector<eurexLegOrdGrpCompPacket>& v)
        {
            mLegOrdGrp = v;
            mNoLegs = v.size ();
            return (LEG_ORD_GRP_MIN <= v.size () && v.size () <= LEG_ORD_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mClOrdID)
                + sizeof (mSecurityID)
                + sizeof (mPrice)
                + sizeof (mOrderQty)
                + sizeof (mPartyIDClientID)
                + sizeof (mPartyIdInvestmentDecisionMaker)
                + sizeof (mExecutingTrader)
                + sizeof (mMarketSegmentID)
                + sizeof (mExpireDate)
                + sizeof (mMatchInstCrossID)
                + sizeof (mPartyIDTakeUpTradingFirm)
                + sizeof (mPartyIDOrderOriginationFirm)
                + sizeof (mPartyIDBeneficiary)
                + sizeof (mApplSeqIndicator)
                + sizeof (mProductComplex)
                + sizeof (mSide)
                + sizeof (mOrdType)
                + sizeof (mPriceValidityCheckType)
                + sizeof (mValueCheckTypeValue)
                + sizeof (mOrderAttributeLiquidityProvision)
                + sizeof (mOrderAttributeRiskReduction)
                + sizeof (mExecInst)
                + sizeof (mTimeInForce)
                + sizeof (mTradingCapacity)
                + sizeof (mPartyIdInvestmentDecisionMakerQualifier)
                + sizeof (mExecutingTraderQualifier)
                + sizeof (mPartyIDLocationID)
                + sizeof (mComplianceText)
                + sizeof (mCustOrderHandlingInst)
                + sizeof (mPartyIDPositionAccount)
                + sizeof (mFreeText1)
                + sizeof (mFreeText2)
                + sizeof (mFreeText3)
                + sizeof (mFIXClOrdID)
                + sizeof (mNoLegs)
                + sizeof (mPad2)
                + eti::getRawSize (mLegOrdGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoLegs = mLegOrdGrp.size ();
            mMessageHeaderIn.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderIn.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrderQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDClientID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIdInvestmentDecisionMaker, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExpireDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMatchInstCrossID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDTakeUpTradingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDOrderOriginationFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDBeneficiary, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mApplSeqIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPriceValidityCheckType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mValueCheckTypeValue, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrderAttributeLiquidityProvision, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrderAttributeRiskReduction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecInst, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTimeInForce, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIdInvestmentDecisionMakerQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecutingTraderQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDLocationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mComplianceText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mCustOrderHandlingInst, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDPositionAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFIXClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoLegs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mLegOrdGrp.size (); i++)
            {
                state = mLegOrdGrp[i].serialize (buf, len, used);
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
            state = eti::deserialize (mClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrderQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDClientID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIdInvestmentDecisionMaker, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExpireDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMatchInstCrossID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDTakeUpTradingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDOrderOriginationFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDBeneficiary, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mApplSeqIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mProductComplex, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPriceValidityCheckType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mValueCheckTypeValue, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrderAttributeLiquidityProvision, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrderAttributeRiskReduction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecInst, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTimeInForce, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIdInvestmentDecisionMakerQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecutingTraderQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDLocationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mComplianceText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mCustOrderHandlingInst, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDPositionAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFIXClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoLegs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mLegOrdGrp.resize (mNoLegs);
            for (vector<eurexLegOrdGrpCompPacket>::iterator it = mLegOrdGrp.begin (); it != mLegOrdGrp.end (); ++it)
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
            sss << "NewOrderComplexRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[ClOrdID=" << getClOrdID () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[Price=" << getPrice () << "],"
                << "[OrderQty=" << getOrderQty () << "],"
                << "[PartyIDClientID=" << getPartyIDClientID () << "],"
                << "[PartyIdInvestmentDecisionMaker=" << getPartyIdInvestmentDecisionMaker () << "],"
                << "[ExecutingTrader=" << getExecutingTrader () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[ExpireDate=" << getExpireDate () << "],"
                << "[MatchInstCrossID=" << getMatchInstCrossID () << "],"
                << "[PartyIDTakeUpTradingFirm=" << getPartyIDTakeUpTradingFirm () << "],"
                << "[PartyIDOrderOriginationFirm=" << getPartyIDOrderOriginationFirm () << "],"
                << "[PartyIDBeneficiary=" << getPartyIDBeneficiary () << "],"
                << "[ApplSeqIndicator=" << getApplSeqIndicator () << "],"
                << "[ProductComplex=" << getProductComplex () << "],"
                << "[Side=" << getSide () << "],"
                << "[OrdType=" << getOrdType () << "],"
                << "[PriceValidityCheckType=" << getPriceValidityCheckType () << "],"
                << "[ValueCheckTypeValue=" << getValueCheckTypeValue () << "],"
                << "[OrderAttributeLiquidityProvision=" << getOrderAttributeLiquidityProvision () << "],"
                << "[OrderAttributeRiskReduction=" << getOrderAttributeRiskReduction () << "],"
                << "[ExecInst=" << getExecInst () << "],"
                << "[TimeInForce=" << getTimeInForce () << "],"
                << "[TradingCapacity=" << getTradingCapacity () << "],"
                << "[PartyIdInvestmentDecisionMakerQualifier=" << getPartyIdInvestmentDecisionMakerQualifier () << "],"
                << "[ExecutingTraderQualifier=" << getExecutingTraderQualifier () << "],"
                << "[PartyIDLocationID=" << getPartyIDLocationID () << "],"
                << "[ComplianceText=" << getComplianceText () << "],"
                << "[CustOrderHandlingInst=" << getCustOrderHandlingInst () << "],"
                << "[PartyIDPositionAccount=" << getPartyIDPositionAccount () << "],"
                << "[FreeText1=" << getFreeText1 () << "],"
                << "[FreeText2=" << getFreeText2 () << "],"
                << "[FreeText3=" << getFreeText3 () << "],"
                << "[FIXClOrdID=" << getFIXClOrdID () << "],"
                << "[NoLegs=" << getNoLegs () << "],"
                << "[Pad2=" << getPad2 () << "],"
                << "[LegOrdGrp=" << eti::toString (getLegOrdGrp ()) << "]";
            return sss.str();
        }
};

const uint64_t eurexNewOrderComplexRequestPacket::CL_ORD_ID_MIN = 0UL;
const uint64_t eurexNewOrderComplexRequestPacket::CL_ORD_ID_MAX = 18446744073709551614UL;
const uint64_t eurexNewOrderComplexRequestPacket::CL_ORD_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int64_t eurexNewOrderComplexRequestPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t eurexNewOrderComplexRequestPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t eurexNewOrderComplexRequestPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double eurexNewOrderComplexRequestPacket::PRICE_MIN = -92233720368.54775807;
const double eurexNewOrderComplexRequestPacket::PRICE_MAX = 92233720368.54775807;
const int64_t eurexNewOrderComplexRequestPacket::PRICE_NO_VALUE = 0x8000000000000000;
const double eurexNewOrderComplexRequestPacket::ORDER_QTY_MIN = -922337203685477.5807;
const double eurexNewOrderComplexRequestPacket::ORDER_QTY_MAX = 922337203685477.5807;
const int64_t eurexNewOrderComplexRequestPacket::ORDER_QTY_NO_VALUE = 0x8000000000000000;
const uint64_t eurexNewOrderComplexRequestPacket::PARTY_IDCLIENT_ID_MIN = 0UL;
const uint64_t eurexNewOrderComplexRequestPacket::PARTY_IDCLIENT_ID_MAX = 18446744073709551614UL;
const uint64_t eurexNewOrderComplexRequestPacket::PARTY_IDCLIENT_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexNewOrderComplexRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_MIN = 0UL;
const uint64_t eurexNewOrderComplexRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_MAX = 18446744073709551614UL;
const uint64_t eurexNewOrderComplexRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexNewOrderComplexRequestPacket::EXECUTING_TRADER_MIN = 0UL;
const uint64_t eurexNewOrderComplexRequestPacket::EXECUTING_TRADER_MAX = 18446744073709551614UL;
const uint64_t eurexNewOrderComplexRequestPacket::EXECUTING_TRADER_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int32_t eurexNewOrderComplexRequestPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexNewOrderComplexRequestPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexNewOrderComplexRequestPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int32_t eurexNewOrderComplexRequestPacket::EXPIRE_DATE_MIN = 0;
const int32_t eurexNewOrderComplexRequestPacket::EXPIRE_DATE_MAX = 99991231;
const int32_t eurexNewOrderComplexRequestPacket::EXPIRE_DATE_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexNewOrderComplexRequestPacket::MATCH_INST_CROSS_ID_MIN = 0;
const uint32_t eurexNewOrderComplexRequestPacket::MATCH_INST_CROSS_ID_MAX = 4294967294;
const uint32_t eurexNewOrderComplexRequestPacket::MATCH_INST_CROSS_ID_NO_VALUE = 0xFFFFFFFF;
const char eurexNewOrderComplexRequestPacket::PARTY_IDTAKE_UP_TRADING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexNewOrderComplexRequestPacket::PARTY_IDTAKE_UP_TRADING_FIRM_MAX_LENGTH = 5;
const char eurexNewOrderComplexRequestPacket::PARTY_IDORDER_ORIGINATION_FIRM_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexNewOrderComplexRequestPacket::PARTY_IDORDER_ORIGINATION_FIRM_MAX_LENGTH = 7;
const char eurexNewOrderComplexRequestPacket::PARTY_IDBENEFICIARY_NO_VALUE[9] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexNewOrderComplexRequestPacket::PARTY_IDBENEFICIARY_MAX_LENGTH = 9;
const int8_t eurexNewOrderComplexRequestPacket::APPL_SEQ_INDICATOR_MIN = 0;
const int8_t eurexNewOrderComplexRequestPacket::APPL_SEQ_INDICATOR_MAX = 1;
const int8_t eurexNewOrderComplexRequestPacket::APPL_SEQ_INDICATOR_NO_VALUE = 0xFF;
const int8_t eurexNewOrderComplexRequestPacket::PRODUCT_COMPLEX_MIN = 1;
const int8_t eurexNewOrderComplexRequestPacket::PRODUCT_COMPLEX_MAX = 10;
const int8_t eurexNewOrderComplexRequestPacket::PRODUCT_COMPLEX_NO_VALUE = 0xFF;
const int8_t eurexNewOrderComplexRequestPacket::SIDE_MIN = 1;
const int8_t eurexNewOrderComplexRequestPacket::SIDE_MAX = 2;
const int8_t eurexNewOrderComplexRequestPacket::SIDE_NO_VALUE = 0xFF;
const int8_t eurexNewOrderComplexRequestPacket::ORD_TYPE_MIN = 1;
const int8_t eurexNewOrderComplexRequestPacket::ORD_TYPE_MAX = 4;
const int8_t eurexNewOrderComplexRequestPacket::ORD_TYPE_NO_VALUE = 0xFF;
const int8_t eurexNewOrderComplexRequestPacket::PRICE_VALIDITY_CHECK_TYPE_MIN = 0;
const int8_t eurexNewOrderComplexRequestPacket::PRICE_VALIDITY_CHECK_TYPE_MAX = 2;
const int8_t eurexNewOrderComplexRequestPacket::PRICE_VALIDITY_CHECK_TYPE_NO_VALUE = 0xFF;
const int8_t eurexNewOrderComplexRequestPacket::VALUE_CHECK_TYPE_VALUE_MIN = 0;
const int8_t eurexNewOrderComplexRequestPacket::VALUE_CHECK_TYPE_VALUE_MAX = 1;
const int8_t eurexNewOrderComplexRequestPacket::VALUE_CHECK_TYPE_VALUE_NO_VALUE = 0xFF;
const int8_t eurexNewOrderComplexRequestPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MIN = 0;
const int8_t eurexNewOrderComplexRequestPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MAX = 1;
const int8_t eurexNewOrderComplexRequestPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE = 0xFF;
const int8_t eurexNewOrderComplexRequestPacket::ORDER_ATTRIBUTE_RISK_REDUCTION_MIN = 0;
const int8_t eurexNewOrderComplexRequestPacket::ORDER_ATTRIBUTE_RISK_REDUCTION_MAX = 1;
const int8_t eurexNewOrderComplexRequestPacket::ORDER_ATTRIBUTE_RISK_REDUCTION_NO_VALUE = 0xFF;
const int8_t eurexNewOrderComplexRequestPacket::EXEC_INST_MIN = 1;
const int8_t eurexNewOrderComplexRequestPacket::EXEC_INST_MAX = 6;
const int8_t eurexNewOrderComplexRequestPacket::EXEC_INST_NO_VALUE = 0xFF;
const int8_t eurexNewOrderComplexRequestPacket::TIME_IN_FORCE_MIN = 0;
const int8_t eurexNewOrderComplexRequestPacket::TIME_IN_FORCE_MAX = 6;
const int8_t eurexNewOrderComplexRequestPacket::TIME_IN_FORCE_NO_VALUE = 0xFF;
const int8_t eurexNewOrderComplexRequestPacket::TRADING_CAPACITY_MIN = 1;
const int8_t eurexNewOrderComplexRequestPacket::TRADING_CAPACITY_MAX = 9;
const int8_t eurexNewOrderComplexRequestPacket::TRADING_CAPACITY_NO_VALUE = 0xFF;
const int8_t eurexNewOrderComplexRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MIN = 22;
const int8_t eurexNewOrderComplexRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MAX = 24;
const int8_t eurexNewOrderComplexRequestPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE = 0xFF;
const int8_t eurexNewOrderComplexRequestPacket::EXECUTING_TRADER_QUALIFIER_MIN = 22;
const int8_t eurexNewOrderComplexRequestPacket::EXECUTING_TRADER_QUALIFIER_MAX = 24;
const int8_t eurexNewOrderComplexRequestPacket::EXECUTING_TRADER_QUALIFIER_NO_VALUE = 0xFF;
const char eurexNewOrderComplexRequestPacket::PARTY_IDLOCATION_ID_NO_VALUE[2] = {0x00, 0x00};
const size_t eurexNewOrderComplexRequestPacket::PARTY_IDLOCATION_ID_MAX_LENGTH = 2;
const char eurexNewOrderComplexRequestPacket::COMPLIANCE_TEXT_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexNewOrderComplexRequestPacket::COMPLIANCE_TEXT_MAX_LENGTH = 20;
const char eurexNewOrderComplexRequestPacket::CUST_ORDER_HANDLING_INST_NO_VALUE[1] = {0x00};
const size_t eurexNewOrderComplexRequestPacket::CUST_ORDER_HANDLING_INST_MAX_LENGTH = 1;
const char eurexNewOrderComplexRequestPacket::PARTY_IDPOSITION_ACCOUNT_NO_VALUE[32] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexNewOrderComplexRequestPacket::PARTY_IDPOSITION_ACCOUNT_MAX_LENGTH = 32;
const char eurexNewOrderComplexRequestPacket::FREE_TEXT1_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexNewOrderComplexRequestPacket::FREE_TEXT1_MAX_LENGTH = 12;
const char eurexNewOrderComplexRequestPacket::FREE_TEXT2_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexNewOrderComplexRequestPacket::FREE_TEXT2_MAX_LENGTH = 12;
const char eurexNewOrderComplexRequestPacket::FREE_TEXT3_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexNewOrderComplexRequestPacket::FREE_TEXT3_MAX_LENGTH = 12;
const char eurexNewOrderComplexRequestPacket::FIXCL_ORD_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexNewOrderComplexRequestPacket::FIXCL_ORD_ID_MAX_LENGTH = 20;
const int8_t eurexNewOrderComplexRequestPacket::NO_LEGS_MIN = 0;
const int8_t eurexNewOrderComplexRequestPacket::NO_LEGS_MAX = 20;
const int8_t eurexNewOrderComplexRequestPacket::NO_LEGS_NO_VALUE = 0xFF;
const char eurexNewOrderComplexRequestPacket::PAD2_NO_VALUE[2] = {0x00, 0x00};
const size_t eurexNewOrderComplexRequestPacket::PAD2_MAX_LENGTH = 2;
const size_t eurexNewOrderComplexRequestPacket::LEG_ORD_GRP_MIN = 0;
const size_t eurexNewOrderComplexRequestPacket::LEG_ORD_GRP_MAX = 20;


} // namespace neueda

#endif // EUREX_NEWORDERCOMPLEXREQUEST_PACKET_H
