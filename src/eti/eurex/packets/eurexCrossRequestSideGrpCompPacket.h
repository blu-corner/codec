/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_CROSSREQUESTSIDEGRPCOMP_PACKET_H
#define EUREX_CROSSREQUESTSIDEGRPCOMP_PACKET_H

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

class eurexCrossRequestSideGrpCompPacket
{
    public:
        // no value constants
        static const uint64_t PARTY_IDCLIENT_ID_MIN;
        static const uint64_t PARTY_IDCLIENT_ID_MAX;
        static const uint64_t PARTY_IDCLIENT_ID_NO_VALUE;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_MIN;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_MAX;
        static const uint64_t PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE;
        static const uint64_t EXECUTING_TRADER_MIN;
        static const uint64_t EXECUTING_TRADER_MAX;
        static const uint64_t EXECUTING_TRADER_NO_VALUE;
        static const double MAXIMUM_PRICE_MIN;
        static const double MAXIMUM_PRICE_MAX;
        static const int64_t MAXIMUM_PRICE_NO_VALUE;
        static const int8_t INPUT_SOURCE_MIN;
        static const int8_t INPUT_SOURCE_MAX;
        static const int8_t INPUT_SOURCE_NO_VALUE;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const int8_t TRADING_CAPACITY_MIN;
        static const int8_t TRADING_CAPACITY_MAX;
        static const int8_t TRADING_CAPACITY_NO_VALUE;
        static const int8_t EXECUTING_TRADER_QUALIFIER_MIN;
        static const int8_t EXECUTING_TRADER_QUALIFIER_MAX;
        static const int8_t EXECUTING_TRADER_QUALIFIER_NO_VALUE;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MIN;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MAX;
        static const int8_t ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE;
        static const int8_t PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MIN;
        static const int8_t PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MAX;
        static const int8_t PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE;
        static const char POSITION_EFFECT_NO_VALUE[1];
        static const size_t POSITION_EFFECT_MAX_LENGTH;
        static const char CUST_ORDER_HANDLING_INST_NO_VALUE[1];
        static const size_t CUST_ORDER_HANDLING_INST_MAX_LENGTH;
        static const char ACCOUNT_NO_VALUE[2];
        static const size_t ACCOUNT_MAX_LENGTH;
        static const char PARTY_IDPOSITION_ACCOUNT_NO_VALUE[32];
        static const size_t PARTY_IDPOSITION_ACCOUNT_MAX_LENGTH;
        static const char FREE_TEXT1_NO_VALUE[12];
        static const size_t FREE_TEXT1_MAX_LENGTH;
        static const char FREE_TEXT2_NO_VALUE[12];
        static const size_t FREE_TEXT2_MAX_LENGTH;
        static const char FREE_TEXT3_NO_VALUE[12];
        static const size_t FREE_TEXT3_MAX_LENGTH;
        static const char PARTY_IDORDER_ORIGINATION_FIRM_NO_VALUE[7];
        static const size_t PARTY_IDORDER_ORIGINATION_FIRM_MAX_LENGTH;
        static const char PARTY_IDBENEFICIARY_NO_VALUE[9];
        static const size_t PARTY_IDBENEFICIARY_MAX_LENGTH;
        static const char PARTY_IDTAKE_UP_TRADING_FIRM_NO_VALUE[5];
        static const size_t PARTY_IDTAKE_UP_TRADING_FIRM_MAX_LENGTH;
        static const char SIDE_COMPLIANCE_TEXT_NO_VALUE[20];
        static const size_t SIDE_COMPLIANCE_TEXT_MAX_LENGTH;
        static const char PARTY_IDLOCATION_ID_NO_VALUE[2];
        static const size_t PARTY_IDLOCATION_ID_MAX_LENGTH;
        static const char PAD7_NO_VALUE[7];
        static const size_t PAD7_MAX_LENGTH;

        // fields (use with care)
        uint64_t mPartyIDClientID;
        uint64_t mPartyIdInvestmentDecisionMaker;
        uint64_t mExecutingTrader;
        int64_t mMaximumPrice;
        int8_t mInputSource;
        int8_t mSide;
        int8_t mTradingCapacity;
        int8_t mExecutingTraderQualifier;
        int8_t mOrderAttributeLiquidityProvision;
        int8_t mPartyIdInvestmentDecisionMakerQualifier;
        char mPositionEffect[1];
        char mCustOrderHandlingInst[1];
        char mAccount[2];
        char mPartyIDPositionAccount[32];
        char mFreeText1[12];
        char mFreeText2[12];
        char mFreeText3[12];
        char mPartyIDOrderOriginationFirm[7];
        char mPartyIDBeneficiary[9];
        char mPartyIDTakeUpTradingFirm[5];
        char mSideComplianceText[20];
        char mPartyIDLocationID[2];
        char mPad7[7];

        // constructor
        eurexCrossRequestSideGrpCompPacket ()
        {
            mPartyIDClientID = PARTY_IDCLIENT_ID_NO_VALUE;
            mPartyIdInvestmentDecisionMaker = PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE;
            mExecutingTrader = EXECUTING_TRADER_NO_VALUE;
            mMaximumPrice = MAXIMUM_PRICE_NO_VALUE;
            mInputSource = INPUT_SOURCE_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            mTradingCapacity = TRADING_CAPACITY_NO_VALUE;
            mExecutingTraderQualifier = EXECUTING_TRADER_QUALIFIER_NO_VALUE;
            mOrderAttributeLiquidityProvision = ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE;
            mPartyIdInvestmentDecisionMakerQualifier = PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE;
            memcpy(mPositionEffect, POSITION_EFFECT_NO_VALUE, sizeof (mPositionEffect));
            memcpy(mCustOrderHandlingInst, CUST_ORDER_HANDLING_INST_NO_VALUE, sizeof (mCustOrderHandlingInst));
            memcpy(mAccount, ACCOUNT_NO_VALUE, sizeof (mAccount));
            memcpy(mPartyIDPositionAccount, PARTY_IDPOSITION_ACCOUNT_NO_VALUE, sizeof (mPartyIDPositionAccount));
            memcpy(mFreeText1, FREE_TEXT1_NO_VALUE, sizeof (mFreeText1));
            memcpy(mFreeText2, FREE_TEXT2_NO_VALUE, sizeof (mFreeText2));
            memcpy(mFreeText3, FREE_TEXT3_NO_VALUE, sizeof (mFreeText3));
            memcpy(mPartyIDOrderOriginationFirm, PARTY_IDORDER_ORIGINATION_FIRM_NO_VALUE, sizeof (mPartyIDOrderOriginationFirm));
            memcpy(mPartyIDBeneficiary, PARTY_IDBENEFICIARY_NO_VALUE, sizeof (mPartyIDBeneficiary));
            memcpy(mPartyIDTakeUpTradingFirm, PARTY_IDTAKE_UP_TRADING_FIRM_NO_VALUE, sizeof (mPartyIDTakeUpTradingFirm));
            memcpy(mSideComplianceText, SIDE_COMPLIANCE_TEXT_NO_VALUE, sizeof (mSideComplianceText));
            memcpy(mPartyIDLocationID, PARTY_IDLOCATION_ID_NO_VALUE, sizeof (mPartyIDLocationID));
            memcpy(mPad7, PAD7_NO_VALUE, sizeof (mPad7));
        }

        // getters & setters
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

        double getMaximumPrice () const
        {
            return mMaximumPrice / 100000000.0;
        }

        bool setMaximumPrice (double v)
        {
            mMaximumPrice = v * 100000000.0;
            return ((MAXIMUM_PRICE_MIN <= v && v <= MAXIMUM_PRICE_MAX) || mMaximumPrice == MAXIMUM_PRICE_NO_VALUE);
        }

        bool isMaximumPriceValid () const
        {
            return (mMaximumPrice != MAXIMUM_PRICE_NO_VALUE);
        }

        void resetMaximumPrice ()
        {
            mMaximumPrice = MAXIMUM_PRICE_NO_VALUE;
        }

        int8_t getInputSource () const
        {
            return mInputSource;
        }

        bool setInputSource (int8_t v)
        {
            mInputSource = v;
            return ((INPUT_SOURCE_MIN <= mInputSource && mInputSource <= INPUT_SOURCE_MAX) || mInputSource == INPUT_SOURCE_NO_VALUE);
        }

        bool isInputSourceValid () const
        {
            return (mInputSource != INPUT_SOURCE_NO_VALUE);
        }

        void resetInputSource ()
        {
            mInputSource = INPUT_SOURCE_NO_VALUE;
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

        string getSideComplianceText () const
        {
            return string (mSideComplianceText, SIDE_COMPLIANCE_TEXT_MAX_LENGTH);
        }

        bool setSideComplianceText (const string& v)
        {
            memset (mSideComplianceText, '\0', sizeof (mSideComplianceText));
            size_t size = min ((size_t) v.size (), (size_t) SIDE_COMPLIANCE_TEXT_MAX_LENGTH);
            strncpy (mSideComplianceText, v.c_str (), size);
            return (v.size () <= SIDE_COMPLIANCE_TEXT_MAX_LENGTH);
        }

        bool isSideComplianceTextValid () const
        {
            return (memcmp (mSideComplianceText, SIDE_COMPLIANCE_TEXT_NO_VALUE, sizeof (mSideComplianceText)) != 0);
        }

        void resetSideComplianceText ()
        {
            memcpy (mSideComplianceText, SIDE_COMPLIANCE_TEXT_NO_VALUE, sizeof (mSideComplianceText));
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


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = sizeof (mPartyIDClientID)
                + sizeof (mPartyIdInvestmentDecisionMaker)
                + sizeof (mExecutingTrader)
                + sizeof (mMaximumPrice)
                + sizeof (mInputSource)
                + sizeof (mSide)
                + sizeof (mTradingCapacity)
                + sizeof (mExecutingTraderQualifier)
                + sizeof (mOrderAttributeLiquidityProvision)
                + sizeof (mPartyIdInvestmentDecisionMakerQualifier)
                + sizeof (mPositionEffect)
                + sizeof (mCustOrderHandlingInst)
                + sizeof (mAccount)
                + sizeof (mPartyIDPositionAccount)
                + sizeof (mFreeText1)
                + sizeof (mFreeText2)
                + sizeof (mFreeText3)
                + sizeof (mPartyIDOrderOriginationFirm)
                + sizeof (mPartyIDBeneficiary)
                + sizeof (mPartyIDTakeUpTradingFirm)
                + sizeof (mSideComplianceText)
                + sizeof (mPartyIDLocationID)
                + sizeof (mPad7);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::serialize (mPartyIDClientID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIdInvestmentDecisionMaker, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMaximumPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mInputSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecutingTraderQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrderAttributeLiquidityProvision, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIdInvestmentDecisionMakerQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPositionEffect, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mCustOrderHandlingInst, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDPositionAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDOrderOriginationFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDBeneficiary, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDTakeUpTradingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSideComplianceText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDLocationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::deserialize (mPartyIDClientID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIdInvestmentDecisionMaker, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMaximumPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mInputSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecutingTraderQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrderAttributeLiquidityProvision, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIdInvestmentDecisionMakerQualifier, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPositionEffect, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mCustOrderHandlingInst, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDPositionAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDOrderOriginationFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDBeneficiary, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDTakeUpTradingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSideComplianceText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDLocationID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "CrossRequestSideGrpComp::"
                << "[PartyIDClientID=" << getPartyIDClientID () << "],"
                << "[PartyIdInvestmentDecisionMaker=" << getPartyIdInvestmentDecisionMaker () << "],"
                << "[ExecutingTrader=" << getExecutingTrader () << "],"
                << "[MaximumPrice=" << getMaximumPrice () << "],"
                << "[InputSource=" << getInputSource () << "],"
                << "[Side=" << getSide () << "],"
                << "[TradingCapacity=" << getTradingCapacity () << "],"
                << "[ExecutingTraderQualifier=" << getExecutingTraderQualifier () << "],"
                << "[OrderAttributeLiquidityProvision=" << getOrderAttributeLiquidityProvision () << "],"
                << "[PartyIdInvestmentDecisionMakerQualifier=" << getPartyIdInvestmentDecisionMakerQualifier () << "],"
                << "[PositionEffect=" << getPositionEffect () << "],"
                << "[CustOrderHandlingInst=" << getCustOrderHandlingInst () << "],"
                << "[Account=" << getAccount () << "],"
                << "[PartyIDPositionAccount=" << getPartyIDPositionAccount () << "],"
                << "[FreeText1=" << getFreeText1 () << "],"
                << "[FreeText2=" << getFreeText2 () << "],"
                << "[FreeText3=" << getFreeText3 () << "],"
                << "[PartyIDOrderOriginationFirm=" << getPartyIDOrderOriginationFirm () << "],"
                << "[PartyIDBeneficiary=" << getPartyIDBeneficiary () << "],"
                << "[PartyIDTakeUpTradingFirm=" << getPartyIDTakeUpTradingFirm () << "],"
                << "[SideComplianceText=" << getSideComplianceText () << "],"
                << "[PartyIDLocationID=" << getPartyIDLocationID () << "],"
                << "[Pad7=" << getPad7 () << "]";
            return sss.str();
        }
};

const uint64_t eurexCrossRequestSideGrpCompPacket::PARTY_IDCLIENT_ID_MIN = 0UL;
const uint64_t eurexCrossRequestSideGrpCompPacket::PARTY_IDCLIENT_ID_MAX = 18446744073709551614UL;
const uint64_t eurexCrossRequestSideGrpCompPacket::PARTY_IDCLIENT_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexCrossRequestSideGrpCompPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_MIN = 0UL;
const uint64_t eurexCrossRequestSideGrpCompPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_MAX = 18446744073709551614UL;
const uint64_t eurexCrossRequestSideGrpCompPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexCrossRequestSideGrpCompPacket::EXECUTING_TRADER_MIN = 0UL;
const uint64_t eurexCrossRequestSideGrpCompPacket::EXECUTING_TRADER_MAX = 18446744073709551614UL;
const uint64_t eurexCrossRequestSideGrpCompPacket::EXECUTING_TRADER_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const double eurexCrossRequestSideGrpCompPacket::MAXIMUM_PRICE_MIN = -92233720368.54775807;
const double eurexCrossRequestSideGrpCompPacket::MAXIMUM_PRICE_MAX = 92233720368.54775807;
const int64_t eurexCrossRequestSideGrpCompPacket::MAXIMUM_PRICE_NO_VALUE = 0x8000000000000000;
const int8_t eurexCrossRequestSideGrpCompPacket::INPUT_SOURCE_MIN = 1;
const int8_t eurexCrossRequestSideGrpCompPacket::INPUT_SOURCE_MAX = 2;
const int8_t eurexCrossRequestSideGrpCompPacket::INPUT_SOURCE_NO_VALUE = 0xFF;
const int8_t eurexCrossRequestSideGrpCompPacket::SIDE_MIN = 1;
const int8_t eurexCrossRequestSideGrpCompPacket::SIDE_MAX = 2;
const int8_t eurexCrossRequestSideGrpCompPacket::SIDE_NO_VALUE = 0xFF;
const int8_t eurexCrossRequestSideGrpCompPacket::TRADING_CAPACITY_MIN = 1;
const int8_t eurexCrossRequestSideGrpCompPacket::TRADING_CAPACITY_MAX = 9;
const int8_t eurexCrossRequestSideGrpCompPacket::TRADING_CAPACITY_NO_VALUE = 0xFF;
const int8_t eurexCrossRequestSideGrpCompPacket::EXECUTING_TRADER_QUALIFIER_MIN = 22;
const int8_t eurexCrossRequestSideGrpCompPacket::EXECUTING_TRADER_QUALIFIER_MAX = 24;
const int8_t eurexCrossRequestSideGrpCompPacket::EXECUTING_TRADER_QUALIFIER_NO_VALUE = 0xFF;
const int8_t eurexCrossRequestSideGrpCompPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MIN = 0;
const int8_t eurexCrossRequestSideGrpCompPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_MAX = 1;
const int8_t eurexCrossRequestSideGrpCompPacket::ORDER_ATTRIBUTE_LIQUIDITY_PROVISION_NO_VALUE = 0xFF;
const int8_t eurexCrossRequestSideGrpCompPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MIN = 22;
const int8_t eurexCrossRequestSideGrpCompPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_MAX = 24;
const int8_t eurexCrossRequestSideGrpCompPacket::PARTY_ID_INVESTMENT_DECISION_MAKER_QUALIFIER_NO_VALUE = 0xFF;
const char eurexCrossRequestSideGrpCompPacket::POSITION_EFFECT_NO_VALUE[1] = {0x00};
const size_t eurexCrossRequestSideGrpCompPacket::POSITION_EFFECT_MAX_LENGTH = 1;
const char eurexCrossRequestSideGrpCompPacket::CUST_ORDER_HANDLING_INST_NO_VALUE[1] = {0x00};
const size_t eurexCrossRequestSideGrpCompPacket::CUST_ORDER_HANDLING_INST_MAX_LENGTH = 1;
const char eurexCrossRequestSideGrpCompPacket::ACCOUNT_NO_VALUE[2] = {0x00, 0x00};
const size_t eurexCrossRequestSideGrpCompPacket::ACCOUNT_MAX_LENGTH = 2;
const char eurexCrossRequestSideGrpCompPacket::PARTY_IDPOSITION_ACCOUNT_NO_VALUE[32] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexCrossRequestSideGrpCompPacket::PARTY_IDPOSITION_ACCOUNT_MAX_LENGTH = 32;
const char eurexCrossRequestSideGrpCompPacket::FREE_TEXT1_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexCrossRequestSideGrpCompPacket::FREE_TEXT1_MAX_LENGTH = 12;
const char eurexCrossRequestSideGrpCompPacket::FREE_TEXT2_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexCrossRequestSideGrpCompPacket::FREE_TEXT2_MAX_LENGTH = 12;
const char eurexCrossRequestSideGrpCompPacket::FREE_TEXT3_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexCrossRequestSideGrpCompPacket::FREE_TEXT3_MAX_LENGTH = 12;
const char eurexCrossRequestSideGrpCompPacket::PARTY_IDORDER_ORIGINATION_FIRM_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexCrossRequestSideGrpCompPacket::PARTY_IDORDER_ORIGINATION_FIRM_MAX_LENGTH = 7;
const char eurexCrossRequestSideGrpCompPacket::PARTY_IDBENEFICIARY_NO_VALUE[9] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexCrossRequestSideGrpCompPacket::PARTY_IDBENEFICIARY_MAX_LENGTH = 9;
const char eurexCrossRequestSideGrpCompPacket::PARTY_IDTAKE_UP_TRADING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexCrossRequestSideGrpCompPacket::PARTY_IDTAKE_UP_TRADING_FIRM_MAX_LENGTH = 5;
const char eurexCrossRequestSideGrpCompPacket::SIDE_COMPLIANCE_TEXT_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexCrossRequestSideGrpCompPacket::SIDE_COMPLIANCE_TEXT_MAX_LENGTH = 20;
const char eurexCrossRequestSideGrpCompPacket::PARTY_IDLOCATION_ID_NO_VALUE[2] = {0x00, 0x00};
const size_t eurexCrossRequestSideGrpCompPacket::PARTY_IDLOCATION_ID_MAX_LENGTH = 2;
const char eurexCrossRequestSideGrpCompPacket::PAD7_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexCrossRequestSideGrpCompPacket::PAD7_MAX_LENGTH = 7;


} // namespace neueda

#endif // EUREX_CROSSREQUESTSIDEGRPCOMP_PACKET_H
