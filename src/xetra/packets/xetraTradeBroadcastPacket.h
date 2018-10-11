/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef XETRA_TRADEBROADCAST_PACKET_H
#define XETRA_TRADEBROADCAST_PACKET_H

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

class xetraTradeBroadcastPacket
{
    public:
        // no value constants
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const double PRICE_MIN;
        static const double PRICE_MAX;
        static const int64_t PRICE_NO_VALUE;
        static const double LAST_PX_MIN;
        static const double LAST_PX_MAX;
        static const int64_t LAST_PX_NO_VALUE;
        static const double SETTL_CURR_AMT_MIN;
        static const double SETTL_CURR_AMT_MAX;
        static const int64_t SETTL_CURR_AMT_NO_VALUE;
        static const double SETTL_CURR_FX_RATE_MIN;
        static const double SETTL_CURR_FX_RATE_MAX;
        static const int64_t SETTL_CURR_FX_RATE_NO_VALUE;
        static const uint64_t TRANSACT_TIME_MIN;
        static const uint64_t TRANSACT_TIME_MAX;
        static const uint64_t TRANSACT_TIME_NO_VALUE;
        static const uint64_t ORDER_ID_MIN;
        static const uint64_t ORDER_ID_MAX;
        static const uint64_t ORDER_ID_NO_VALUE;
        static const uint64_t CL_ORD_ID_MIN;
        static const uint64_t CL_ORD_ID_MAX;
        static const uint64_t CL_ORD_ID_NO_VALUE;
        static const uint32_t TRADE_ID_MIN;
        static const uint32_t TRADE_ID_MAX;
        static const uint32_t TRADE_ID_NO_VALUE;
        static const uint32_t ORIG_TRADE_ID_MIN;
        static const uint32_t ORIG_TRADE_ID_MAX;
        static const uint32_t ORIG_TRADE_ID_NO_VALUE;
        static const uint32_t ROOT_PARTY_IDEXECUTING_UNIT_MIN;
        static const uint32_t ROOT_PARTY_IDEXECUTING_UNIT_MAX;
        static const uint32_t ROOT_PARTY_IDEXECUTING_UNIT_NO_VALUE;
        static const uint32_t ROOT_PARTY_IDSESSION_ID_MIN;
        static const uint32_t ROOT_PARTY_IDSESSION_ID_MAX;
        static const uint32_t ROOT_PARTY_IDSESSION_ID_NO_VALUE;
        static const uint32_t ROOT_PARTY_IDEXECUTING_TRADER_MIN;
        static const uint32_t ROOT_PARTY_IDEXECUTING_TRADER_MAX;
        static const uint32_t ROOT_PARTY_IDEXECUTING_TRADER_NO_VALUE;
        static const uint32_t ROOT_PARTY_IDSETTLEMENT_UNIT_MIN;
        static const uint32_t ROOT_PARTY_IDSETTLEMENT_UNIT_MAX;
        static const uint32_t ROOT_PARTY_IDSETTLEMENT_UNIT_NO_VALUE;
        static const uint32_t ROOT_PARTY_IDCLEARING_UNIT_MIN;
        static const uint32_t ROOT_PARTY_IDCLEARING_UNIT_MAX;
        static const uint32_t ROOT_PARTY_IDCLEARING_UNIT_NO_VALUE;
        static const uint32_t ROOT_PARTY_IDCONTRA_UNIT_MIN;
        static const uint32_t ROOT_PARTY_IDCONTRA_UNIT_MAX;
        static const uint32_t ROOT_PARTY_IDCONTRA_UNIT_NO_VALUE;
        static const uint32_t ROOT_PARTY_IDCONTRA_SETTLEMENT_UNIT_MIN;
        static const uint32_t ROOT_PARTY_IDCONTRA_SETTLEMENT_UNIT_MAX;
        static const uint32_t ROOT_PARTY_IDCONTRA_SETTLEMENT_UNIT_NO_VALUE;
        static const uint32_t ORDER_IDSFX_MIN;
        static const uint32_t ORDER_IDSFX_MAX;
        static const uint32_t ORDER_IDSFX_NO_VALUE;
        static const int32_t CUM_QTY_MIN;
        static const int32_t CUM_QTY_MAX;
        static const int32_t CUM_QTY_NO_VALUE;
        static const int32_t LEAVES_QTY_MIN;
        static const int32_t LEAVES_QTY_MAX;
        static const int32_t LEAVES_QTY_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int32_t LAST_QTY_MIN;
        static const int32_t LAST_QTY_MAX;
        static const int32_t LAST_QTY_NO_VALUE;
        static const uint32_t SIDE_TRADE_ID_MIN;
        static const uint32_t SIDE_TRADE_ID_MAX;
        static const uint32_t SIDE_TRADE_ID_NO_VALUE;
        static const uint32_t SIDE_TRADE_REPORT_ID_MIN;
        static const uint32_t SIDE_TRADE_REPORT_ID_MAX;
        static const uint32_t SIDE_TRADE_REPORT_ID_NO_VALUE;
        static const uint32_t TRADE_NUMBER_MIN;
        static const uint32_t TRADE_NUMBER_MAX;
        static const uint32_t TRADE_NUMBER_NO_VALUE;
        static const int32_t MATCH_DATE_MIN;
        static const int32_t MATCH_DATE_MAX;
        static const int32_t MATCH_DATE_NO_VALUE;
        static const int32_t SETTL_DATE_MIN;
        static const int32_t SETTL_DATE_MAX;
        static const int32_t SETTL_DATE_NO_VALUE;
        static const uint32_t TRD_MATCH_ID_MIN;
        static const uint32_t TRD_MATCH_ID_MAX;
        static const uint32_t TRD_MATCH_ID_NO_VALUE;
        static const int16_t LAST_MKT_MIN;
        static const int16_t LAST_MKT_MAX;
        static const int16_t LAST_MKT_NO_VALUE;
        static const int8_t TRADE_REPORT_TYPE_MIN;
        static const int8_t TRADE_REPORT_TYPE_MAX;
        static const int8_t TRADE_REPORT_TYPE_NO_VALUE;
        static const int8_t TRANSFER_REASON_MIN;
        static const int8_t TRANSFER_REASON_MAX;
        static const int8_t TRANSFER_REASON_NO_VALUE;
        static const int8_t MATCH_TYPE_MIN;
        static const int8_t MATCH_TYPE_MAX;
        static const int8_t MATCH_TYPE_NO_VALUE;
        static const int8_t MATCH_SUB_TYPE_MIN;
        static const int8_t MATCH_SUB_TYPE_MAX;
        static const int8_t MATCH_SUB_TYPE_NO_VALUE;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const int8_t SIDE_LIQUIDITY_IND_MIN;
        static const int8_t SIDE_LIQUIDITY_IND_MAX;
        static const int8_t SIDE_LIQUIDITY_IND_NO_VALUE;
        static const int8_t DELIVERY_TYPE_MIN;
        static const int8_t DELIVERY_TYPE_MAX;
        static const int8_t DELIVERY_TYPE_NO_VALUE;
        static const int8_t TRADING_CAPACITY_MIN;
        static const int8_t TRADING_CAPACITY_MAX;
        static const int8_t TRADING_CAPACITY_NO_VALUE;
        static const char ACCOUNT_NO_VALUE[2];
        static const size_t ACCOUNT_MAX_LENGTH;
        static const char SETTL_CURRENCY_NO_VALUE[3];
        static const size_t SETTL_CURRENCY_MAX_LENGTH;
        static const char CURRENCY_NO_VALUE[3];
        static const size_t CURRENCY_MAX_LENGTH;
        static const char FREE_TEXT1_NO_VALUE[12];
        static const size_t FREE_TEXT1_MAX_LENGTH;
        static const char FREE_TEXT2_NO_VALUE[12];
        static const size_t FREE_TEXT2_MAX_LENGTH;
        static const char FREE_TEXT4_NO_VALUE[16];
        static const size_t FREE_TEXT4_MAX_LENGTH;
        static const char ORDER_CATEGORY_NO_VALUE[1];
        static const size_t ORDER_CATEGORY_MAX_LENGTH;
        static const int8_t ORD_TYPE_MIN;
        static const int8_t ORD_TYPE_MAX;
        static const int8_t ORD_TYPE_NO_VALUE;
        static const char ROOT_PARTY_EXECUTING_FIRM_NO_VALUE[5];
        static const size_t ROOT_PARTY_EXECUTING_FIRM_MAX_LENGTH;
        static const char ROOT_PARTY_EXECUTING_TRADER_NO_VALUE[6];
        static const size_t ROOT_PARTY_EXECUTING_TRADER_MAX_LENGTH;
        static const char ROOT_PARTY_CLEARING_FIRM_NO_VALUE[5];
        static const size_t ROOT_PARTY_CLEARING_FIRM_MAX_LENGTH;
        static const char ROOT_PARTY_EXECUTING_FIRM_KVNUMBER_NO_VALUE[4];
        static const size_t ROOT_PARTY_EXECUTING_FIRM_KVNUMBER_MAX_LENGTH;
        static const char ROOT_PARTY_SETTLEMENT_ACCOUNT_NO_VALUE[35];
        static const size_t ROOT_PARTY_SETTLEMENT_ACCOUNT_MAX_LENGTH;
        static const char ROOT_PARTY_SETTLEMENT_LOCATION_NO_VALUE[3];
        static const size_t ROOT_PARTY_SETTLEMENT_LOCATION_MAX_LENGTH;
        static const char ROOT_PARTY_SETTLEMENT_FIRM_NO_VALUE[5];
        static const size_t ROOT_PARTY_SETTLEMENT_FIRM_MAX_LENGTH;
        static const char ROOT_PARTY_CONTRA_FIRM_NO_VALUE[5];
        static const size_t ROOT_PARTY_CONTRA_FIRM_MAX_LENGTH;
        static const char ROOT_PARTY_CONTRA_SETTLEMENT_FIRM_NO_VALUE[5];
        static const size_t ROOT_PARTY_CONTRA_SETTLEMENT_FIRM_MAX_LENGTH;
        static const char ROOT_PARTY_CONTRA_FIRM_KVNUMBER_NO_VALUE[4];
        static const size_t ROOT_PARTY_CONTRA_FIRM_KVNUMBER_MAX_LENGTH;
        static const char ROOT_PARTY_CONTRA_SETTLEMENT_ACCOUNT_NO_VALUE[35];
        static const size_t ROOT_PARTY_CONTRA_SETTLEMENT_ACCOUNT_MAX_LENGTH;
        static const char ROOT_PARTY_CONTRA_SETTLEMENT_LOCATION_NO_VALUE[3];
        static const size_t ROOT_PARTY_CONTRA_SETTLEMENT_LOCATION_MAX_LENGTH;
        static const char PAD1_NO_VALUE[1];
        static const size_t PAD1_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraRBCHeaderCompPacket mRBCHeader;
        int64_t mSecurityID;
        int64_t mPrice;
        int64_t mLastPx;
        int64_t mSettlCurrAmt;
        int64_t mSettlCurrFxRate;
        uint64_t mTransactTime;
        uint64_t mOrderID;
        uint64_t mClOrdID;
        uint32_t mTradeID;
        uint32_t mOrigTradeID;
        uint32_t mRootPartyIDExecutingUnit;
        uint32_t mRootPartyIDSessionID;
        uint32_t mRootPartyIDExecutingTrader;
        uint32_t mRootPartyIDSettlementUnit;
        uint32_t mRootPartyIDClearingUnit;
        uint32_t mRootPartyIDContraUnit;
        uint32_t mRootPartyIDContraSettlementUnit;
        uint32_t mOrderIDSfx;
        int32_t mCumQty;
        int32_t mLeavesQty;
        int32_t mMarketSegmentID;
        int32_t mLastQty;
        uint32_t mSideTradeID;
        uint32_t mSideTradeReportID;
        uint32_t mTradeNumber;
        int32_t mMatchDate;
        int32_t mSettlDate;
        uint32_t mTrdMatchID;
        int16_t mLastMkt;
        int8_t mTradeReportType;
        int8_t mTransferReason;
        int8_t mMatchType;
        int8_t mMatchSubType;
        int8_t mSide;
        int8_t mSideLiquidityInd;
        int8_t mDeliveryType;
        int8_t mTradingCapacity;
        char mAccount[2];
        char mSettlCurrency[3];
        char mCurrency[3];
        char mFreeText1[12];
        char mFreeText2[12];
        char mFreeText4[16];
        char mOrderCategory[1];
        int8_t mOrdType;
        char mRootPartyExecutingFirm[5];
        char mRootPartyExecutingTrader[6];
        char mRootPartyClearingFirm[5];
        char mRootPartyExecutingFirmKVNumber[4];
        char mRootPartySettlementAccount[35];
        char mRootPartySettlementLocation[3];
        char mRootPartySettlementFirm[5];
        char mRootPartyContraFirm[5];
        char mRootPartyContraSettlementFirm[5];
        char mRootPartyContraFirmKVNumber[4];
        char mRootPartyContraSettlementAccount[35];
        char mRootPartyContraSettlementLocation[3];
        char mPad1[1];

        // constructor
        xetraTradeBroadcastPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10500;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mPrice = PRICE_NO_VALUE;
            mLastPx = LAST_PX_NO_VALUE;
            mSettlCurrAmt = SETTL_CURR_AMT_NO_VALUE;
            mSettlCurrFxRate = SETTL_CURR_FX_RATE_NO_VALUE;
            mTransactTime = TRANSACT_TIME_NO_VALUE;
            mOrderID = ORDER_ID_NO_VALUE;
            mClOrdID = CL_ORD_ID_NO_VALUE;
            mTradeID = TRADE_ID_NO_VALUE;
            mOrigTradeID = ORIG_TRADE_ID_NO_VALUE;
            mRootPartyIDExecutingUnit = ROOT_PARTY_IDEXECUTING_UNIT_NO_VALUE;
            mRootPartyIDSessionID = ROOT_PARTY_IDSESSION_ID_NO_VALUE;
            mRootPartyIDExecutingTrader = ROOT_PARTY_IDEXECUTING_TRADER_NO_VALUE;
            mRootPartyIDSettlementUnit = ROOT_PARTY_IDSETTLEMENT_UNIT_NO_VALUE;
            mRootPartyIDClearingUnit = ROOT_PARTY_IDCLEARING_UNIT_NO_VALUE;
            mRootPartyIDContraUnit = ROOT_PARTY_IDCONTRA_UNIT_NO_VALUE;
            mRootPartyIDContraSettlementUnit = ROOT_PARTY_IDCONTRA_SETTLEMENT_UNIT_NO_VALUE;
            mOrderIDSfx = ORDER_IDSFX_NO_VALUE;
            mCumQty = CUM_QTY_NO_VALUE;
            mLeavesQty = LEAVES_QTY_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mLastQty = LAST_QTY_NO_VALUE;
            mSideTradeID = SIDE_TRADE_ID_NO_VALUE;
            mSideTradeReportID = SIDE_TRADE_REPORT_ID_NO_VALUE;
            mTradeNumber = TRADE_NUMBER_NO_VALUE;
            mMatchDate = MATCH_DATE_NO_VALUE;
            mSettlDate = SETTL_DATE_NO_VALUE;
            mTrdMatchID = TRD_MATCH_ID_NO_VALUE;
            mLastMkt = LAST_MKT_NO_VALUE;
            mTradeReportType = TRADE_REPORT_TYPE_NO_VALUE;
            mTransferReason = TRANSFER_REASON_NO_VALUE;
            mMatchType = MATCH_TYPE_NO_VALUE;
            mMatchSubType = MATCH_SUB_TYPE_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            mSideLiquidityInd = SIDE_LIQUIDITY_IND_NO_VALUE;
            mDeliveryType = DELIVERY_TYPE_NO_VALUE;
            mTradingCapacity = TRADING_CAPACITY_NO_VALUE;
            memcpy(mAccount, ACCOUNT_NO_VALUE, sizeof (mAccount));
            memcpy(mSettlCurrency, SETTL_CURRENCY_NO_VALUE, sizeof (mSettlCurrency));
            memcpy(mCurrency, CURRENCY_NO_VALUE, sizeof (mCurrency));
            memcpy(mFreeText1, FREE_TEXT1_NO_VALUE, sizeof (mFreeText1));
            memcpy(mFreeText2, FREE_TEXT2_NO_VALUE, sizeof (mFreeText2));
            memcpy(mFreeText4, FREE_TEXT4_NO_VALUE, sizeof (mFreeText4));
            memcpy(mOrderCategory, ORDER_CATEGORY_NO_VALUE, sizeof (mOrderCategory));
            mOrdType = ORD_TYPE_NO_VALUE;
            memcpy(mRootPartyExecutingFirm, ROOT_PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mRootPartyExecutingFirm));
            memcpy(mRootPartyExecutingTrader, ROOT_PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mRootPartyExecutingTrader));
            memcpy(mRootPartyClearingFirm, ROOT_PARTY_CLEARING_FIRM_NO_VALUE, sizeof (mRootPartyClearingFirm));
            memcpy(mRootPartyExecutingFirmKVNumber, ROOT_PARTY_EXECUTING_FIRM_KVNUMBER_NO_VALUE, sizeof (mRootPartyExecutingFirmKVNumber));
            memcpy(mRootPartySettlementAccount, ROOT_PARTY_SETTLEMENT_ACCOUNT_NO_VALUE, sizeof (mRootPartySettlementAccount));
            memcpy(mRootPartySettlementLocation, ROOT_PARTY_SETTLEMENT_LOCATION_NO_VALUE, sizeof (mRootPartySettlementLocation));
            memcpy(mRootPartySettlementFirm, ROOT_PARTY_SETTLEMENT_FIRM_NO_VALUE, sizeof (mRootPartySettlementFirm));
            memcpy(mRootPartyContraFirm, ROOT_PARTY_CONTRA_FIRM_NO_VALUE, sizeof (mRootPartyContraFirm));
            memcpy(mRootPartyContraSettlementFirm, ROOT_PARTY_CONTRA_SETTLEMENT_FIRM_NO_VALUE, sizeof (mRootPartyContraSettlementFirm));
            memcpy(mRootPartyContraFirmKVNumber, ROOT_PARTY_CONTRA_FIRM_KVNUMBER_NO_VALUE, sizeof (mRootPartyContraFirmKVNumber));
            memcpy(mRootPartyContraSettlementAccount, ROOT_PARTY_CONTRA_SETTLEMENT_ACCOUNT_NO_VALUE, sizeof (mRootPartyContraSettlementAccount));
            memcpy(mRootPartyContraSettlementLocation, ROOT_PARTY_CONTRA_SETTLEMENT_LOCATION_NO_VALUE, sizeof (mRootPartyContraSettlementLocation));
            memcpy(mPad1, PAD1_NO_VALUE, sizeof (mPad1));
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

        double getSettlCurrAmt () const
        {
            return mSettlCurrAmt / 100000000.0;
        }

        bool setSettlCurrAmt (double v)
        {
            mSettlCurrAmt = v * 100000000.0;
            return ((SETTL_CURR_AMT_MIN <= v && v <= SETTL_CURR_AMT_MAX) || mSettlCurrAmt == SETTL_CURR_AMT_NO_VALUE);
        }

        bool isSettlCurrAmtValid () const
        {
            return (mSettlCurrAmt != SETTL_CURR_AMT_NO_VALUE);
        }

        void resetSettlCurrAmt ()
        {
            mSettlCurrAmt = SETTL_CURR_AMT_NO_VALUE;
        }

        double getSettlCurrFxRate () const
        {
            return mSettlCurrFxRate / 100000000.0;
        }

        bool setSettlCurrFxRate (double v)
        {
            mSettlCurrFxRate = v * 100000000.0;
            return ((SETTL_CURR_FX_RATE_MIN <= v && v <= SETTL_CURR_FX_RATE_MAX) || mSettlCurrFxRate == SETTL_CURR_FX_RATE_NO_VALUE);
        }

        bool isSettlCurrFxRateValid () const
        {
            return (mSettlCurrFxRate != SETTL_CURR_FX_RATE_NO_VALUE);
        }

        void resetSettlCurrFxRate ()
        {
            mSettlCurrFxRate = SETTL_CURR_FX_RATE_NO_VALUE;
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

        uint64_t getOrderID () const
        {
            return mOrderID;
        }

        bool setOrderID (uint64_t v)
        {
            mOrderID = v;
            return ((ORDER_ID_MIN <= mOrderID && mOrderID <= ORDER_ID_MAX) || mOrderID == ORDER_ID_NO_VALUE);
        }

        bool isOrderIDValid () const
        {
            return (mOrderID != ORDER_ID_NO_VALUE);
        }

        void resetOrderID ()
        {
            mOrderID = ORDER_ID_NO_VALUE;
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

        uint32_t getRootPartyIDExecutingUnit () const
        {
            return mRootPartyIDExecutingUnit;
        }

        bool setRootPartyIDExecutingUnit (uint32_t v)
        {
            mRootPartyIDExecutingUnit = v;
            return ((ROOT_PARTY_IDEXECUTING_UNIT_MIN <= mRootPartyIDExecutingUnit && mRootPartyIDExecutingUnit <= ROOT_PARTY_IDEXECUTING_UNIT_MAX) || mRootPartyIDExecutingUnit == ROOT_PARTY_IDEXECUTING_UNIT_NO_VALUE);
        }

        bool isRootPartyIDExecutingUnitValid () const
        {
            return (mRootPartyIDExecutingUnit != ROOT_PARTY_IDEXECUTING_UNIT_NO_VALUE);
        }

        void resetRootPartyIDExecutingUnit ()
        {
            mRootPartyIDExecutingUnit = ROOT_PARTY_IDEXECUTING_UNIT_NO_VALUE;
        }

        uint32_t getRootPartyIDSessionID () const
        {
            return mRootPartyIDSessionID;
        }

        bool setRootPartyIDSessionID (uint32_t v)
        {
            mRootPartyIDSessionID = v;
            return ((ROOT_PARTY_IDSESSION_ID_MIN <= mRootPartyIDSessionID && mRootPartyIDSessionID <= ROOT_PARTY_IDSESSION_ID_MAX) || mRootPartyIDSessionID == ROOT_PARTY_IDSESSION_ID_NO_VALUE);
        }

        bool isRootPartyIDSessionIDValid () const
        {
            return (mRootPartyIDSessionID != ROOT_PARTY_IDSESSION_ID_NO_VALUE);
        }

        void resetRootPartyIDSessionID ()
        {
            mRootPartyIDSessionID = ROOT_PARTY_IDSESSION_ID_NO_VALUE;
        }

        uint32_t getRootPartyIDExecutingTrader () const
        {
            return mRootPartyIDExecutingTrader;
        }

        bool setRootPartyIDExecutingTrader (uint32_t v)
        {
            mRootPartyIDExecutingTrader = v;
            return ((ROOT_PARTY_IDEXECUTING_TRADER_MIN <= mRootPartyIDExecutingTrader && mRootPartyIDExecutingTrader <= ROOT_PARTY_IDEXECUTING_TRADER_MAX) || mRootPartyIDExecutingTrader == ROOT_PARTY_IDEXECUTING_TRADER_NO_VALUE);
        }

        bool isRootPartyIDExecutingTraderValid () const
        {
            return (mRootPartyIDExecutingTrader != ROOT_PARTY_IDEXECUTING_TRADER_NO_VALUE);
        }

        void resetRootPartyIDExecutingTrader ()
        {
            mRootPartyIDExecutingTrader = ROOT_PARTY_IDEXECUTING_TRADER_NO_VALUE;
        }

        uint32_t getRootPartyIDSettlementUnit () const
        {
            return mRootPartyIDSettlementUnit;
        }

        bool setRootPartyIDSettlementUnit (uint32_t v)
        {
            mRootPartyIDSettlementUnit = v;
            return ((ROOT_PARTY_IDSETTLEMENT_UNIT_MIN <= mRootPartyIDSettlementUnit && mRootPartyIDSettlementUnit <= ROOT_PARTY_IDSETTLEMENT_UNIT_MAX) || mRootPartyIDSettlementUnit == ROOT_PARTY_IDSETTLEMENT_UNIT_NO_VALUE);
        }

        bool isRootPartyIDSettlementUnitValid () const
        {
            return (mRootPartyIDSettlementUnit != ROOT_PARTY_IDSETTLEMENT_UNIT_NO_VALUE);
        }

        void resetRootPartyIDSettlementUnit ()
        {
            mRootPartyIDSettlementUnit = ROOT_PARTY_IDSETTLEMENT_UNIT_NO_VALUE;
        }

        uint32_t getRootPartyIDClearingUnit () const
        {
            return mRootPartyIDClearingUnit;
        }

        bool setRootPartyIDClearingUnit (uint32_t v)
        {
            mRootPartyIDClearingUnit = v;
            return ((ROOT_PARTY_IDCLEARING_UNIT_MIN <= mRootPartyIDClearingUnit && mRootPartyIDClearingUnit <= ROOT_PARTY_IDCLEARING_UNIT_MAX) || mRootPartyIDClearingUnit == ROOT_PARTY_IDCLEARING_UNIT_NO_VALUE);
        }

        bool isRootPartyIDClearingUnitValid () const
        {
            return (mRootPartyIDClearingUnit != ROOT_PARTY_IDCLEARING_UNIT_NO_VALUE);
        }

        void resetRootPartyIDClearingUnit ()
        {
            mRootPartyIDClearingUnit = ROOT_PARTY_IDCLEARING_UNIT_NO_VALUE;
        }

        uint32_t getRootPartyIDContraUnit () const
        {
            return mRootPartyIDContraUnit;
        }

        bool setRootPartyIDContraUnit (uint32_t v)
        {
            mRootPartyIDContraUnit = v;
            return ((ROOT_PARTY_IDCONTRA_UNIT_MIN <= mRootPartyIDContraUnit && mRootPartyIDContraUnit <= ROOT_PARTY_IDCONTRA_UNIT_MAX) || mRootPartyIDContraUnit == ROOT_PARTY_IDCONTRA_UNIT_NO_VALUE);
        }

        bool isRootPartyIDContraUnitValid () const
        {
            return (mRootPartyIDContraUnit != ROOT_PARTY_IDCONTRA_UNIT_NO_VALUE);
        }

        void resetRootPartyIDContraUnit ()
        {
            mRootPartyIDContraUnit = ROOT_PARTY_IDCONTRA_UNIT_NO_VALUE;
        }

        uint32_t getRootPartyIDContraSettlementUnit () const
        {
            return mRootPartyIDContraSettlementUnit;
        }

        bool setRootPartyIDContraSettlementUnit (uint32_t v)
        {
            mRootPartyIDContraSettlementUnit = v;
            return ((ROOT_PARTY_IDCONTRA_SETTLEMENT_UNIT_MIN <= mRootPartyIDContraSettlementUnit && mRootPartyIDContraSettlementUnit <= ROOT_PARTY_IDCONTRA_SETTLEMENT_UNIT_MAX) || mRootPartyIDContraSettlementUnit == ROOT_PARTY_IDCONTRA_SETTLEMENT_UNIT_NO_VALUE);
        }

        bool isRootPartyIDContraSettlementUnitValid () const
        {
            return (mRootPartyIDContraSettlementUnit != ROOT_PARTY_IDCONTRA_SETTLEMENT_UNIT_NO_VALUE);
        }

        void resetRootPartyIDContraSettlementUnit ()
        {
            mRootPartyIDContraSettlementUnit = ROOT_PARTY_IDCONTRA_SETTLEMENT_UNIT_NO_VALUE;
        }

        uint32_t getOrderIDSfx () const
        {
            return mOrderIDSfx;
        }

        bool setOrderIDSfx (uint32_t v)
        {
            mOrderIDSfx = v;
            return ((ORDER_IDSFX_MIN <= mOrderIDSfx && mOrderIDSfx <= ORDER_IDSFX_MAX) || mOrderIDSfx == ORDER_IDSFX_NO_VALUE);
        }

        bool isOrderIDSfxValid () const
        {
            return (mOrderIDSfx != ORDER_IDSFX_NO_VALUE);
        }

        void resetOrderIDSfx ()
        {
            mOrderIDSfx = ORDER_IDSFX_NO_VALUE;
        }

        int32_t getCumQty () const
        {
            return mCumQty;
        }

        bool setCumQty (int32_t v)
        {
            mCumQty = v;
            return ((CUM_QTY_MIN <= mCumQty && mCumQty <= CUM_QTY_MAX) || mCumQty == CUM_QTY_NO_VALUE);
        }

        bool isCumQtyValid () const
        {
            return (mCumQty != CUM_QTY_NO_VALUE);
        }

        void resetCumQty ()
        {
            mCumQty = CUM_QTY_NO_VALUE;
        }

        int32_t getLeavesQty () const
        {
            return mLeavesQty;
        }

        bool setLeavesQty (int32_t v)
        {
            mLeavesQty = v;
            return ((LEAVES_QTY_MIN <= mLeavesQty && mLeavesQty <= LEAVES_QTY_MAX) || mLeavesQty == LEAVES_QTY_NO_VALUE);
        }

        bool isLeavesQtyValid () const
        {
            return (mLeavesQty != LEAVES_QTY_NO_VALUE);
        }

        void resetLeavesQty ()
        {
            mLeavesQty = LEAVES_QTY_NO_VALUE;
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

        int32_t getLastQty () const
        {
            return mLastQty;
        }

        bool setLastQty (int32_t v)
        {
            mLastQty = v;
            return ((LAST_QTY_MIN <= mLastQty && mLastQty <= LAST_QTY_MAX) || mLastQty == LAST_QTY_NO_VALUE);
        }

        bool isLastQtyValid () const
        {
            return (mLastQty != LAST_QTY_NO_VALUE);
        }

        void resetLastQty ()
        {
            mLastQty = LAST_QTY_NO_VALUE;
        }

        uint32_t getSideTradeID () const
        {
            return mSideTradeID;
        }

        bool setSideTradeID (uint32_t v)
        {
            mSideTradeID = v;
            return ((SIDE_TRADE_ID_MIN <= mSideTradeID && mSideTradeID <= SIDE_TRADE_ID_MAX) || mSideTradeID == SIDE_TRADE_ID_NO_VALUE);
        }

        bool isSideTradeIDValid () const
        {
            return (mSideTradeID != SIDE_TRADE_ID_NO_VALUE);
        }

        void resetSideTradeID ()
        {
            mSideTradeID = SIDE_TRADE_ID_NO_VALUE;
        }

        uint32_t getSideTradeReportID () const
        {
            return mSideTradeReportID;
        }

        bool setSideTradeReportID (uint32_t v)
        {
            mSideTradeReportID = v;
            return ((SIDE_TRADE_REPORT_ID_MIN <= mSideTradeReportID && mSideTradeReportID <= SIDE_TRADE_REPORT_ID_MAX) || mSideTradeReportID == SIDE_TRADE_REPORT_ID_NO_VALUE);
        }

        bool isSideTradeReportIDValid () const
        {
            return (mSideTradeReportID != SIDE_TRADE_REPORT_ID_NO_VALUE);
        }

        void resetSideTradeReportID ()
        {
            mSideTradeReportID = SIDE_TRADE_REPORT_ID_NO_VALUE;
        }

        uint32_t getTradeNumber () const
        {
            return mTradeNumber;
        }

        bool setTradeNumber (uint32_t v)
        {
            mTradeNumber = v;
            return ((TRADE_NUMBER_MIN <= mTradeNumber && mTradeNumber <= TRADE_NUMBER_MAX) || mTradeNumber == TRADE_NUMBER_NO_VALUE);
        }

        bool isTradeNumberValid () const
        {
            return (mTradeNumber != TRADE_NUMBER_NO_VALUE);
        }

        void resetTradeNumber ()
        {
            mTradeNumber = TRADE_NUMBER_NO_VALUE;
        }

        int32_t getMatchDate () const
        {
            return mMatchDate;
        }

        bool setMatchDate (int32_t v)
        {
            mMatchDate = v;
            return ((MATCH_DATE_MIN <= mMatchDate && mMatchDate <= MATCH_DATE_MAX) || mMatchDate == MATCH_DATE_NO_VALUE);
        }

        bool isMatchDateValid () const
        {
            return (mMatchDate != MATCH_DATE_NO_VALUE);
        }

        void resetMatchDate ()
        {
            mMatchDate = MATCH_DATE_NO_VALUE;
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

        uint32_t getTrdMatchID () const
        {
            return mTrdMatchID;
        }

        bool setTrdMatchID (uint32_t v)
        {
            mTrdMatchID = v;
            return ((TRD_MATCH_ID_MIN <= mTrdMatchID && mTrdMatchID <= TRD_MATCH_ID_MAX) || mTrdMatchID == TRD_MATCH_ID_NO_VALUE);
        }

        bool isTrdMatchIDValid () const
        {
            return (mTrdMatchID != TRD_MATCH_ID_NO_VALUE);
        }

        void resetTrdMatchID ()
        {
            mTrdMatchID = TRD_MATCH_ID_NO_VALUE;
        }

        int16_t getLastMkt () const
        {
            return mLastMkt;
        }

        bool setLastMkt (int16_t v)
        {
            mLastMkt = v;
            return ((LAST_MKT_MIN <= mLastMkt && mLastMkt <= LAST_MKT_MAX) || mLastMkt == LAST_MKT_NO_VALUE);
        }

        bool isLastMktValid () const
        {
            return (mLastMkt != LAST_MKT_NO_VALUE);
        }

        void resetLastMkt ()
        {
            mLastMkt = LAST_MKT_NO_VALUE;
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

        int8_t getTransferReason () const
        {
            return mTransferReason;
        }

        bool setTransferReason (int8_t v)
        {
            mTransferReason = v;
            return ((TRANSFER_REASON_MIN <= mTransferReason && mTransferReason <= TRANSFER_REASON_MAX) || mTransferReason == TRANSFER_REASON_NO_VALUE);
        }

        bool isTransferReasonValid () const
        {
            return (mTransferReason != TRANSFER_REASON_NO_VALUE);
        }

        void resetTransferReason ()
        {
            mTransferReason = TRANSFER_REASON_NO_VALUE;
        }

        int8_t getMatchType () const
        {
            return mMatchType;
        }

        bool setMatchType (int8_t v)
        {
            mMatchType = v;
            return ((MATCH_TYPE_MIN <= mMatchType && mMatchType <= MATCH_TYPE_MAX) || mMatchType == MATCH_TYPE_NO_VALUE);
        }

        bool isMatchTypeValid () const
        {
            return (mMatchType != MATCH_TYPE_NO_VALUE);
        }

        void resetMatchType ()
        {
            mMatchType = MATCH_TYPE_NO_VALUE;
        }

        int8_t getMatchSubType () const
        {
            return mMatchSubType;
        }

        bool setMatchSubType (int8_t v)
        {
            mMatchSubType = v;
            return ((MATCH_SUB_TYPE_MIN <= mMatchSubType && mMatchSubType <= MATCH_SUB_TYPE_MAX) || mMatchSubType == MATCH_SUB_TYPE_NO_VALUE);
        }

        bool isMatchSubTypeValid () const
        {
            return (mMatchSubType != MATCH_SUB_TYPE_NO_VALUE);
        }

        void resetMatchSubType ()
        {
            mMatchSubType = MATCH_SUB_TYPE_NO_VALUE;
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

        int8_t getSideLiquidityInd () const
        {
            return mSideLiquidityInd;
        }

        bool setSideLiquidityInd (int8_t v)
        {
            mSideLiquidityInd = v;
            return ((SIDE_LIQUIDITY_IND_MIN <= mSideLiquidityInd && mSideLiquidityInd <= SIDE_LIQUIDITY_IND_MAX) || mSideLiquidityInd == SIDE_LIQUIDITY_IND_NO_VALUE);
        }

        bool isSideLiquidityIndValid () const
        {
            return (mSideLiquidityInd != SIDE_LIQUIDITY_IND_NO_VALUE);
        }

        void resetSideLiquidityInd ()
        {
            mSideLiquidityInd = SIDE_LIQUIDITY_IND_NO_VALUE;
        }

        int8_t getDeliveryType () const
        {
            return mDeliveryType;
        }

        bool setDeliveryType (int8_t v)
        {
            mDeliveryType = v;
            return ((DELIVERY_TYPE_MIN <= mDeliveryType && mDeliveryType <= DELIVERY_TYPE_MAX) || mDeliveryType == DELIVERY_TYPE_NO_VALUE);
        }

        bool isDeliveryTypeValid () const
        {
            return (mDeliveryType != DELIVERY_TYPE_NO_VALUE);
        }

        void resetDeliveryType ()
        {
            mDeliveryType = DELIVERY_TYPE_NO_VALUE;
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

        string getAccount () const
        {
            return string (mAccount, ACCOUNT_MAX_LENGTH);
        }

        bool setAccount (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) ACCOUNT_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mAccount[i] = v[i];
            memset (&mAccount[size], '\0', ACCOUNT_MAX_LENGTH-size);
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

        string getSettlCurrency () const
        {
            return string (mSettlCurrency, SETTL_CURRENCY_MAX_LENGTH);
        }

        bool setSettlCurrency (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) SETTL_CURRENCY_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mSettlCurrency[i] = v[i];
            memset (&mSettlCurrency[size], '\0', SETTL_CURRENCY_MAX_LENGTH-size);
            return (v.size () <= SETTL_CURRENCY_MAX_LENGTH);
        }

        bool isSettlCurrencyValid () const
        {
            return (memcmp (mSettlCurrency, SETTL_CURRENCY_NO_VALUE, sizeof (mSettlCurrency)) != 0);
        }

        void resetSettlCurrency ()
        {
            memcpy (mSettlCurrency, SETTL_CURRENCY_NO_VALUE, sizeof (mSettlCurrency));
        }

        string getCurrency () const
        {
            return string (mCurrency, CURRENCY_MAX_LENGTH);
        }

        bool setCurrency (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) CURRENCY_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mCurrency[i] = v[i];
            memset (&mCurrency[size], '\0', CURRENCY_MAX_LENGTH-size);
            return (v.size () <= CURRENCY_MAX_LENGTH);
        }

        bool isCurrencyValid () const
        {
            return (memcmp (mCurrency, CURRENCY_NO_VALUE, sizeof (mCurrency)) != 0);
        }

        void resetCurrency ()
        {
            memcpy (mCurrency, CURRENCY_NO_VALUE, sizeof (mCurrency));
        }

        string getFreeText1 () const
        {
            return string (mFreeText1, FREE_TEXT1_MAX_LENGTH);
        }

        bool setFreeText1 (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) FREE_TEXT1_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mFreeText1[i] = v[i];
            memset (&mFreeText1[size], '\0', FREE_TEXT1_MAX_LENGTH-size);
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
            size_t size = min ((size_t) v.size (), (size_t) FREE_TEXT2_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mFreeText2[i] = v[i];
            memset (&mFreeText2[size], '\0', FREE_TEXT2_MAX_LENGTH-size);
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
            size_t size = min ((size_t) v.size (), (size_t) FREE_TEXT4_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mFreeText4[i] = v[i];
            memset (&mFreeText4[size], '\0', FREE_TEXT4_MAX_LENGTH-size);
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

        string getOrderCategory () const
        {
            return string (mOrderCategory, ORDER_CATEGORY_MAX_LENGTH);
        }

        bool setOrderCategory (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) ORDER_CATEGORY_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mOrderCategory[i] = v[i];
            memset (&mOrderCategory[size], '\0', ORDER_CATEGORY_MAX_LENGTH-size);
            return (v.size () <= ORDER_CATEGORY_MAX_LENGTH);
        }

        bool isOrderCategoryValid () const
        {
            return (memcmp (mOrderCategory, ORDER_CATEGORY_NO_VALUE, sizeof (mOrderCategory)) != 0);
        }

        void resetOrderCategory ()
        {
            memcpy (mOrderCategory, ORDER_CATEGORY_NO_VALUE, sizeof (mOrderCategory));
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

        string getRootPartyExecutingFirm () const
        {
            return string (mRootPartyExecutingFirm, ROOT_PARTY_EXECUTING_FIRM_MAX_LENGTH);
        }

        bool setRootPartyExecutingFirm (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_EXECUTING_FIRM_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mRootPartyExecutingFirm[i] = v[i];
            memset (&mRootPartyExecutingFirm[size], '\0', ROOT_PARTY_EXECUTING_FIRM_MAX_LENGTH-size);
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
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_EXECUTING_TRADER_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mRootPartyExecutingTrader[i] = v[i];
            memset (&mRootPartyExecutingTrader[size], '\0', ROOT_PARTY_EXECUTING_TRADER_MAX_LENGTH-size);
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

        string getRootPartyClearingFirm () const
        {
            return string (mRootPartyClearingFirm, ROOT_PARTY_CLEARING_FIRM_MAX_LENGTH);
        }

        bool setRootPartyClearingFirm (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_CLEARING_FIRM_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mRootPartyClearingFirm[i] = v[i];
            memset (&mRootPartyClearingFirm[size], '\0', ROOT_PARTY_CLEARING_FIRM_MAX_LENGTH-size);
            return (v.size () <= ROOT_PARTY_CLEARING_FIRM_MAX_LENGTH);
        }

        bool isRootPartyClearingFirmValid () const
        {
            return (memcmp (mRootPartyClearingFirm, ROOT_PARTY_CLEARING_FIRM_NO_VALUE, sizeof (mRootPartyClearingFirm)) != 0);
        }

        void resetRootPartyClearingFirm ()
        {
            memcpy (mRootPartyClearingFirm, ROOT_PARTY_CLEARING_FIRM_NO_VALUE, sizeof (mRootPartyClearingFirm));
        }

        string getRootPartyExecutingFirmKVNumber () const
        {
            return string (mRootPartyExecutingFirmKVNumber, ROOT_PARTY_EXECUTING_FIRM_KVNUMBER_MAX_LENGTH);
        }

        bool setRootPartyExecutingFirmKVNumber (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_EXECUTING_FIRM_KVNUMBER_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mRootPartyExecutingFirmKVNumber[i] = v[i];
            memset (&mRootPartyExecutingFirmKVNumber[size], '\0', ROOT_PARTY_EXECUTING_FIRM_KVNUMBER_MAX_LENGTH-size);
            return (v.size () <= ROOT_PARTY_EXECUTING_FIRM_KVNUMBER_MAX_LENGTH);
        }

        bool isRootPartyExecutingFirmKVNumberValid () const
        {
            return (memcmp (mRootPartyExecutingFirmKVNumber, ROOT_PARTY_EXECUTING_FIRM_KVNUMBER_NO_VALUE, sizeof (mRootPartyExecutingFirmKVNumber)) != 0);
        }

        void resetRootPartyExecutingFirmKVNumber ()
        {
            memcpy (mRootPartyExecutingFirmKVNumber, ROOT_PARTY_EXECUTING_FIRM_KVNUMBER_NO_VALUE, sizeof (mRootPartyExecutingFirmKVNumber));
        }

        string getRootPartySettlementAccount () const
        {
            return string (mRootPartySettlementAccount, ROOT_PARTY_SETTLEMENT_ACCOUNT_MAX_LENGTH);
        }

        bool setRootPartySettlementAccount (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_SETTLEMENT_ACCOUNT_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mRootPartySettlementAccount[i] = v[i];
            memset (&mRootPartySettlementAccount[size], '\0', ROOT_PARTY_SETTLEMENT_ACCOUNT_MAX_LENGTH-size);
            return (v.size () <= ROOT_PARTY_SETTLEMENT_ACCOUNT_MAX_LENGTH);
        }

        bool isRootPartySettlementAccountValid () const
        {
            return (memcmp (mRootPartySettlementAccount, ROOT_PARTY_SETTLEMENT_ACCOUNT_NO_VALUE, sizeof (mRootPartySettlementAccount)) != 0);
        }

        void resetRootPartySettlementAccount ()
        {
            memcpy (mRootPartySettlementAccount, ROOT_PARTY_SETTLEMENT_ACCOUNT_NO_VALUE, sizeof (mRootPartySettlementAccount));
        }

        string getRootPartySettlementLocation () const
        {
            return string (mRootPartySettlementLocation, ROOT_PARTY_SETTLEMENT_LOCATION_MAX_LENGTH);
        }

        bool setRootPartySettlementLocation (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_SETTLEMENT_LOCATION_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mRootPartySettlementLocation[i] = v[i];
            memset (&mRootPartySettlementLocation[size], '\0', ROOT_PARTY_SETTLEMENT_LOCATION_MAX_LENGTH-size);
            return (v.size () <= ROOT_PARTY_SETTLEMENT_LOCATION_MAX_LENGTH);
        }

        bool isRootPartySettlementLocationValid () const
        {
            return (memcmp (mRootPartySettlementLocation, ROOT_PARTY_SETTLEMENT_LOCATION_NO_VALUE, sizeof (mRootPartySettlementLocation)) != 0);
        }

        void resetRootPartySettlementLocation ()
        {
            memcpy (mRootPartySettlementLocation, ROOT_PARTY_SETTLEMENT_LOCATION_NO_VALUE, sizeof (mRootPartySettlementLocation));
        }

        string getRootPartySettlementFirm () const
        {
            return string (mRootPartySettlementFirm, ROOT_PARTY_SETTLEMENT_FIRM_MAX_LENGTH);
        }

        bool setRootPartySettlementFirm (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_SETTLEMENT_FIRM_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mRootPartySettlementFirm[i] = v[i];
            memset (&mRootPartySettlementFirm[size], '\0', ROOT_PARTY_SETTLEMENT_FIRM_MAX_LENGTH-size);
            return (v.size () <= ROOT_PARTY_SETTLEMENT_FIRM_MAX_LENGTH);
        }

        bool isRootPartySettlementFirmValid () const
        {
            return (memcmp (mRootPartySettlementFirm, ROOT_PARTY_SETTLEMENT_FIRM_NO_VALUE, sizeof (mRootPartySettlementFirm)) != 0);
        }

        void resetRootPartySettlementFirm ()
        {
            memcpy (mRootPartySettlementFirm, ROOT_PARTY_SETTLEMENT_FIRM_NO_VALUE, sizeof (mRootPartySettlementFirm));
        }

        string getRootPartyContraFirm () const
        {
            return string (mRootPartyContraFirm, ROOT_PARTY_CONTRA_FIRM_MAX_LENGTH);
        }

        bool setRootPartyContraFirm (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_CONTRA_FIRM_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mRootPartyContraFirm[i] = v[i];
            memset (&mRootPartyContraFirm[size], '\0', ROOT_PARTY_CONTRA_FIRM_MAX_LENGTH-size);
            return (v.size () <= ROOT_PARTY_CONTRA_FIRM_MAX_LENGTH);
        }

        bool isRootPartyContraFirmValid () const
        {
            return (memcmp (mRootPartyContraFirm, ROOT_PARTY_CONTRA_FIRM_NO_VALUE, sizeof (mRootPartyContraFirm)) != 0);
        }

        void resetRootPartyContraFirm ()
        {
            memcpy (mRootPartyContraFirm, ROOT_PARTY_CONTRA_FIRM_NO_VALUE, sizeof (mRootPartyContraFirm));
        }

        string getRootPartyContraSettlementFirm () const
        {
            return string (mRootPartyContraSettlementFirm, ROOT_PARTY_CONTRA_SETTLEMENT_FIRM_MAX_LENGTH);
        }

        bool setRootPartyContraSettlementFirm (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_CONTRA_SETTLEMENT_FIRM_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mRootPartyContraSettlementFirm[i] = v[i];
            memset (&mRootPartyContraSettlementFirm[size], '\0', ROOT_PARTY_CONTRA_SETTLEMENT_FIRM_MAX_LENGTH-size);
            return (v.size () <= ROOT_PARTY_CONTRA_SETTLEMENT_FIRM_MAX_LENGTH);
        }

        bool isRootPartyContraSettlementFirmValid () const
        {
            return (memcmp (mRootPartyContraSettlementFirm, ROOT_PARTY_CONTRA_SETTLEMENT_FIRM_NO_VALUE, sizeof (mRootPartyContraSettlementFirm)) != 0);
        }

        void resetRootPartyContraSettlementFirm ()
        {
            memcpy (mRootPartyContraSettlementFirm, ROOT_PARTY_CONTRA_SETTLEMENT_FIRM_NO_VALUE, sizeof (mRootPartyContraSettlementFirm));
        }

        string getRootPartyContraFirmKVNumber () const
        {
            return string (mRootPartyContraFirmKVNumber, ROOT_PARTY_CONTRA_FIRM_KVNUMBER_MAX_LENGTH);
        }

        bool setRootPartyContraFirmKVNumber (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_CONTRA_FIRM_KVNUMBER_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mRootPartyContraFirmKVNumber[i] = v[i];
            memset (&mRootPartyContraFirmKVNumber[size], '\0', ROOT_PARTY_CONTRA_FIRM_KVNUMBER_MAX_LENGTH-size);
            return (v.size () <= ROOT_PARTY_CONTRA_FIRM_KVNUMBER_MAX_LENGTH);
        }

        bool isRootPartyContraFirmKVNumberValid () const
        {
            return (memcmp (mRootPartyContraFirmKVNumber, ROOT_PARTY_CONTRA_FIRM_KVNUMBER_NO_VALUE, sizeof (mRootPartyContraFirmKVNumber)) != 0);
        }

        void resetRootPartyContraFirmKVNumber ()
        {
            memcpy (mRootPartyContraFirmKVNumber, ROOT_PARTY_CONTRA_FIRM_KVNUMBER_NO_VALUE, sizeof (mRootPartyContraFirmKVNumber));
        }

        string getRootPartyContraSettlementAccount () const
        {
            return string (mRootPartyContraSettlementAccount, ROOT_PARTY_CONTRA_SETTLEMENT_ACCOUNT_MAX_LENGTH);
        }

        bool setRootPartyContraSettlementAccount (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_CONTRA_SETTLEMENT_ACCOUNT_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mRootPartyContraSettlementAccount[i] = v[i];
            memset (&mRootPartyContraSettlementAccount[size], '\0', ROOT_PARTY_CONTRA_SETTLEMENT_ACCOUNT_MAX_LENGTH-size);
            return (v.size () <= ROOT_PARTY_CONTRA_SETTLEMENT_ACCOUNT_MAX_LENGTH);
        }

        bool isRootPartyContraSettlementAccountValid () const
        {
            return (memcmp (mRootPartyContraSettlementAccount, ROOT_PARTY_CONTRA_SETTLEMENT_ACCOUNT_NO_VALUE, sizeof (mRootPartyContraSettlementAccount)) != 0);
        }

        void resetRootPartyContraSettlementAccount ()
        {
            memcpy (mRootPartyContraSettlementAccount, ROOT_PARTY_CONTRA_SETTLEMENT_ACCOUNT_NO_VALUE, sizeof (mRootPartyContraSettlementAccount));
        }

        string getRootPartyContraSettlementLocation () const
        {
            return string (mRootPartyContraSettlementLocation, ROOT_PARTY_CONTRA_SETTLEMENT_LOCATION_MAX_LENGTH);
        }

        bool setRootPartyContraSettlementLocation (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_CONTRA_SETTLEMENT_LOCATION_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mRootPartyContraSettlementLocation[i] = v[i];
            memset (&mRootPartyContraSettlementLocation[size], '\0', ROOT_PARTY_CONTRA_SETTLEMENT_LOCATION_MAX_LENGTH-size);
            return (v.size () <= ROOT_PARTY_CONTRA_SETTLEMENT_LOCATION_MAX_LENGTH);
        }

        bool isRootPartyContraSettlementLocationValid () const
        {
            return (memcmp (mRootPartyContraSettlementLocation, ROOT_PARTY_CONTRA_SETTLEMENT_LOCATION_NO_VALUE, sizeof (mRootPartyContraSettlementLocation)) != 0);
        }

        void resetRootPartyContraSettlementLocation ()
        {
            memcpy (mRootPartyContraSettlementLocation, ROOT_PARTY_CONTRA_SETTLEMENT_LOCATION_NO_VALUE, sizeof (mRootPartyContraSettlementLocation));
        }

        string getPad1 () const
        {
            return string (mPad1, PAD1_MAX_LENGTH);
        }

        bool setPad1 (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) PAD1_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mPad1[i] = v[i];
            memset (&mPad1[size], '\0', PAD1_MAX_LENGTH-size);
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


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeader.getRawSize()
                + sizeof (mSecurityID)
                + sizeof (mPrice)
                + sizeof (mLastPx)
                + sizeof (mSettlCurrAmt)
                + sizeof (mSettlCurrFxRate)
                + sizeof (mTransactTime)
                + sizeof (mOrderID)
                + sizeof (mClOrdID)
                + sizeof (mTradeID)
                + sizeof (mOrigTradeID)
                + sizeof (mRootPartyIDExecutingUnit)
                + sizeof (mRootPartyIDSessionID)
                + sizeof (mRootPartyIDExecutingTrader)
                + sizeof (mRootPartyIDSettlementUnit)
                + sizeof (mRootPartyIDClearingUnit)
                + sizeof (mRootPartyIDContraUnit)
                + sizeof (mRootPartyIDContraSettlementUnit)
                + sizeof (mOrderIDSfx)
                + sizeof (mCumQty)
                + sizeof (mLeavesQty)
                + sizeof (mMarketSegmentID)
                + sizeof (mLastQty)
                + sizeof (mSideTradeID)
                + sizeof (mSideTradeReportID)
                + sizeof (mTradeNumber)
                + sizeof (mMatchDate)
                + sizeof (mSettlDate)
                + sizeof (mTrdMatchID)
                + sizeof (mLastMkt)
                + sizeof (mTradeReportType)
                + sizeof (mTransferReason)
                + sizeof (mMatchType)
                + sizeof (mMatchSubType)
                + sizeof (mSide)
                + sizeof (mSideLiquidityInd)
                + sizeof (mDeliveryType)
                + sizeof (mTradingCapacity)
                + sizeof (mAccount)
                + sizeof (mSettlCurrency)
                + sizeof (mCurrency)
                + sizeof (mFreeText1)
                + sizeof (mFreeText2)
                + sizeof (mFreeText4)
                + sizeof (mOrderCategory)
                + sizeof (mOrdType)
                + sizeof (mRootPartyExecutingFirm)
                + sizeof (mRootPartyExecutingTrader)
                + sizeof (mRootPartyClearingFirm)
                + sizeof (mRootPartyExecutingFirmKVNumber)
                + sizeof (mRootPartySettlementAccount)
                + sizeof (mRootPartySettlementLocation)
                + sizeof (mRootPartySettlementFirm)
                + sizeof (mRootPartyContraFirm)
                + sizeof (mRootPartyContraSettlementFirm)
                + sizeof (mRootPartyContraFirmKVNumber)
                + sizeof (mRootPartyContraSettlementAccount)
                + sizeof (mRootPartyContraSettlementLocation)
                + sizeof (mPad1);
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
            state = xetra::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSettlCurrAmt, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSettlCurrFxRate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOrigTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyIDExecutingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyIDExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyIDSettlementUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyIDClearingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyIDContraUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyIDContraSettlementUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOrderIDSfx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mCumQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mLeavesQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mLastQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSideTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSideTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTradeNumber, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMatchDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSettlDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTrdMatchID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mLastMkt, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTransferReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMatchType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMatchSubType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSideLiquidityInd, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mDeliveryType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSettlCurrency, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mCurrency, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFreeText4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOrderCategory, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyClearingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyExecutingFirmKVNumber, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartySettlementAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartySettlementLocation, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartySettlementFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyContraFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyContraSettlementFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyContraFirmKVNumber, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyContraSettlementAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyContraSettlementLocation, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad1, buf, len, used);
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
            state = xetra::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSettlCurrAmt, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSettlCurrFxRate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOrigTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyIDExecutingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyIDExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyIDSettlementUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyIDClearingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyIDContraUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyIDContraSettlementUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOrderIDSfx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mCumQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mLeavesQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mLastQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSideTradeID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSideTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTradeNumber, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMatchDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSettlDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTrdMatchID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mLastMkt, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTransferReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMatchType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMatchSubType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSideLiquidityInd, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mDeliveryType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSettlCurrency, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mCurrency, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFreeText4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOrderCategory, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyClearingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyExecutingFirmKVNumber, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartySettlementAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartySettlementLocation, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartySettlementFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyContraFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyContraSettlementFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyContraFirmKVNumber, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyContraSettlementAccount, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyContraSettlementLocation, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "TradeBroadcast::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeader=" << mRBCHeader.toString () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[Price=" << getPrice () << "],"
                << "[LastPx=" << getLastPx () << "],"
                << "[SettlCurrAmt=" << getSettlCurrAmt () << "],"
                << "[SettlCurrFxRate=" << getSettlCurrFxRate () << "],"
                << "[TransactTime=" << getTransactTime () << "],"
                << "[OrderID=" << getOrderID () << "],"
                << "[ClOrdID=" << getClOrdID () << "],"
                << "[TradeID=" << getTradeID () << "],"
                << "[OrigTradeID=" << getOrigTradeID () << "],"
                << "[RootPartyIDExecutingUnit=" << getRootPartyIDExecutingUnit () << "],"
                << "[RootPartyIDSessionID=" << getRootPartyIDSessionID () << "],"
                << "[RootPartyIDExecutingTrader=" << getRootPartyIDExecutingTrader () << "],"
                << "[RootPartyIDSettlementUnit=" << getRootPartyIDSettlementUnit () << "],"
                << "[RootPartyIDClearingUnit=" << getRootPartyIDClearingUnit () << "],"
                << "[RootPartyIDContraUnit=" << getRootPartyIDContraUnit () << "],"
                << "[RootPartyIDContraSettlementUnit=" << getRootPartyIDContraSettlementUnit () << "],"
                << "[OrderIDSfx=" << getOrderIDSfx () << "],"
                << "[CumQty=" << getCumQty () << "],"
                << "[LeavesQty=" << getLeavesQty () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[LastQty=" << getLastQty () << "],"
                << "[SideTradeID=" << getSideTradeID () << "],"
                << "[SideTradeReportID=" << getSideTradeReportID () << "],"
                << "[TradeNumber=" << getTradeNumber () << "],"
                << "[MatchDate=" << getMatchDate () << "],"
                << "[SettlDate=" << getSettlDate () << "],"
                << "[TrdMatchID=" << getTrdMatchID () << "],"
                << "[LastMkt=" << getLastMkt () << "],"
                << "[TradeReportType=" << getTradeReportType () << "],"
                << "[TransferReason=" << getTransferReason () << "],"
                << "[MatchType=" << getMatchType () << "],"
                << "[MatchSubType=" << getMatchSubType () << "],"
                << "[Side=" << getSide () << "],"
                << "[SideLiquidityInd=" << getSideLiquidityInd () << "],"
                << "[DeliveryType=" << getDeliveryType () << "],"
                << "[TradingCapacity=" << getTradingCapacity () << "],"
                << "[Account=" << getAccount () << "],"
                << "[SettlCurrency=" << getSettlCurrency () << "],"
                << "[Currency=" << getCurrency () << "],"
                << "[FreeText1=" << getFreeText1 () << "],"
                << "[FreeText2=" << getFreeText2 () << "],"
                << "[FreeText4=" << getFreeText4 () << "],"
                << "[OrderCategory=" << getOrderCategory () << "],"
                << "[OrdType=" << getOrdType () << "],"
                << "[RootPartyExecutingFirm=" << getRootPartyExecutingFirm () << "],"
                << "[RootPartyExecutingTrader=" << getRootPartyExecutingTrader () << "],"
                << "[RootPartyClearingFirm=" << getRootPartyClearingFirm () << "],"
                << "[RootPartyExecutingFirmKVNumber=" << getRootPartyExecutingFirmKVNumber () << "],"
                << "[RootPartySettlementAccount=" << getRootPartySettlementAccount () << "],"
                << "[RootPartySettlementLocation=" << getRootPartySettlementLocation () << "],"
                << "[RootPartySettlementFirm=" << getRootPartySettlementFirm () << "],"
                << "[RootPartyContraFirm=" << getRootPartyContraFirm () << "],"
                << "[RootPartyContraSettlementFirm=" << getRootPartyContraSettlementFirm () << "],"
                << "[RootPartyContraFirmKVNumber=" << getRootPartyContraFirmKVNumber () << "],"
                << "[RootPartyContraSettlementAccount=" << getRootPartyContraSettlementAccount () << "],"
                << "[RootPartyContraSettlementLocation=" << getRootPartyContraSettlementLocation () << "],"
                << "[Pad1=" << getPad1 () << "]";
            return sss.str();
        }
};

const int64_t xetraTradeBroadcastPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraTradeBroadcastPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraTradeBroadcastPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double xetraTradeBroadcastPacket::PRICE_MIN = -92233720368.54775807;
const double xetraTradeBroadcastPacket::PRICE_MAX = 92233720368.54775807;
const int64_t xetraTradeBroadcastPacket::PRICE_NO_VALUE = 0x8000000000000000;
const double xetraTradeBroadcastPacket::LAST_PX_MIN = -92233720368.54775807;
const double xetraTradeBroadcastPacket::LAST_PX_MAX = 92233720368.54775807;
const int64_t xetraTradeBroadcastPacket::LAST_PX_NO_VALUE = 0x8000000000000000;
const double xetraTradeBroadcastPacket::SETTL_CURR_AMT_MIN = -92233720368.54775807;
const double xetraTradeBroadcastPacket::SETTL_CURR_AMT_MAX = 92233720368.54775807;
const int64_t xetraTradeBroadcastPacket::SETTL_CURR_AMT_NO_VALUE = 0x8000000000000000;
const double xetraTradeBroadcastPacket::SETTL_CURR_FX_RATE_MIN = -92233720368.54775807;
const double xetraTradeBroadcastPacket::SETTL_CURR_FX_RATE_MAX = 92233720368.54775807;
const int64_t xetraTradeBroadcastPacket::SETTL_CURR_FX_RATE_NO_VALUE = 0x8000000000000000;
const uint64_t xetraTradeBroadcastPacket::TRANSACT_TIME_MIN = 0UL;
const uint64_t xetraTradeBroadcastPacket::TRANSACT_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraTradeBroadcastPacket::TRANSACT_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraTradeBroadcastPacket::ORDER_ID_MIN = 0UL;
const uint64_t xetraTradeBroadcastPacket::ORDER_ID_MAX = 18446744073709551614UL;
const uint64_t xetraTradeBroadcastPacket::ORDER_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraTradeBroadcastPacket::CL_ORD_ID_MIN = 0UL;
const uint64_t xetraTradeBroadcastPacket::CL_ORD_ID_MAX = 18446744073709551614UL;
const uint64_t xetraTradeBroadcastPacket::CL_ORD_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint32_t xetraTradeBroadcastPacket::TRADE_ID_MIN = 0;
const uint32_t xetraTradeBroadcastPacket::TRADE_ID_MAX = 4294967294;
const uint32_t xetraTradeBroadcastPacket::TRADE_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraTradeBroadcastPacket::ORIG_TRADE_ID_MIN = 0;
const uint32_t xetraTradeBroadcastPacket::ORIG_TRADE_ID_MAX = 4294967294;
const uint32_t xetraTradeBroadcastPacket::ORIG_TRADE_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraTradeBroadcastPacket::ROOT_PARTY_IDEXECUTING_UNIT_MIN = 0;
const uint32_t xetraTradeBroadcastPacket::ROOT_PARTY_IDEXECUTING_UNIT_MAX = 4294967294;
const uint32_t xetraTradeBroadcastPacket::ROOT_PARTY_IDEXECUTING_UNIT_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraTradeBroadcastPacket::ROOT_PARTY_IDSESSION_ID_MIN = 0;
const uint32_t xetraTradeBroadcastPacket::ROOT_PARTY_IDSESSION_ID_MAX = 4294967294;
const uint32_t xetraTradeBroadcastPacket::ROOT_PARTY_IDSESSION_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraTradeBroadcastPacket::ROOT_PARTY_IDEXECUTING_TRADER_MIN = 0;
const uint32_t xetraTradeBroadcastPacket::ROOT_PARTY_IDEXECUTING_TRADER_MAX = 4294967294;
const uint32_t xetraTradeBroadcastPacket::ROOT_PARTY_IDEXECUTING_TRADER_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraTradeBroadcastPacket::ROOT_PARTY_IDSETTLEMENT_UNIT_MIN = 0;
const uint32_t xetraTradeBroadcastPacket::ROOT_PARTY_IDSETTLEMENT_UNIT_MAX = 4294967294;
const uint32_t xetraTradeBroadcastPacket::ROOT_PARTY_IDSETTLEMENT_UNIT_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraTradeBroadcastPacket::ROOT_PARTY_IDCLEARING_UNIT_MIN = 0;
const uint32_t xetraTradeBroadcastPacket::ROOT_PARTY_IDCLEARING_UNIT_MAX = 4294967294;
const uint32_t xetraTradeBroadcastPacket::ROOT_PARTY_IDCLEARING_UNIT_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraTradeBroadcastPacket::ROOT_PARTY_IDCONTRA_UNIT_MIN = 0;
const uint32_t xetraTradeBroadcastPacket::ROOT_PARTY_IDCONTRA_UNIT_MAX = 4294967294;
const uint32_t xetraTradeBroadcastPacket::ROOT_PARTY_IDCONTRA_UNIT_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraTradeBroadcastPacket::ROOT_PARTY_IDCONTRA_SETTLEMENT_UNIT_MIN = 0;
const uint32_t xetraTradeBroadcastPacket::ROOT_PARTY_IDCONTRA_SETTLEMENT_UNIT_MAX = 4294967294;
const uint32_t xetraTradeBroadcastPacket::ROOT_PARTY_IDCONTRA_SETTLEMENT_UNIT_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraTradeBroadcastPacket::ORDER_IDSFX_MIN = 0;
const uint32_t xetraTradeBroadcastPacket::ORDER_IDSFX_MAX = 4294967294;
const uint32_t xetraTradeBroadcastPacket::ORDER_IDSFX_NO_VALUE = 0xFFFFFFFF;
const int32_t xetraTradeBroadcastPacket::CUM_QTY_MIN = -2147483647;
const int32_t xetraTradeBroadcastPacket::CUM_QTY_MAX = 2147483647;
const int32_t xetraTradeBroadcastPacket::CUM_QTY_NO_VALUE = 0x80000000;
const int32_t xetraTradeBroadcastPacket::LEAVES_QTY_MIN = -2147483647;
const int32_t xetraTradeBroadcastPacket::LEAVES_QTY_MAX = 2147483647;
const int32_t xetraTradeBroadcastPacket::LEAVES_QTY_NO_VALUE = 0x80000000;
const int32_t xetraTradeBroadcastPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraTradeBroadcastPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraTradeBroadcastPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int32_t xetraTradeBroadcastPacket::LAST_QTY_MIN = -2147483647;
const int32_t xetraTradeBroadcastPacket::LAST_QTY_MAX = 2147483647;
const int32_t xetraTradeBroadcastPacket::LAST_QTY_NO_VALUE = 0x80000000;
const uint32_t xetraTradeBroadcastPacket::SIDE_TRADE_ID_MIN = 0;
const uint32_t xetraTradeBroadcastPacket::SIDE_TRADE_ID_MAX = 4294967294;
const uint32_t xetraTradeBroadcastPacket::SIDE_TRADE_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraTradeBroadcastPacket::SIDE_TRADE_REPORT_ID_MIN = 0;
const uint32_t xetraTradeBroadcastPacket::SIDE_TRADE_REPORT_ID_MAX = 4294967294;
const uint32_t xetraTradeBroadcastPacket::SIDE_TRADE_REPORT_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraTradeBroadcastPacket::TRADE_NUMBER_MIN = 0;
const uint32_t xetraTradeBroadcastPacket::TRADE_NUMBER_MAX = 4294967294;
const uint32_t xetraTradeBroadcastPacket::TRADE_NUMBER_NO_VALUE = 0xFFFFFFFF;
const int32_t xetraTradeBroadcastPacket::MATCH_DATE_MIN = 0;
const int32_t xetraTradeBroadcastPacket::MATCH_DATE_MAX = 99991231;
const int32_t xetraTradeBroadcastPacket::MATCH_DATE_NO_VALUE = 0xFFFFFFFF;
const int32_t xetraTradeBroadcastPacket::SETTL_DATE_MIN = 0;
const int32_t xetraTradeBroadcastPacket::SETTL_DATE_MAX = 99991231;
const int32_t xetraTradeBroadcastPacket::SETTL_DATE_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraTradeBroadcastPacket::TRD_MATCH_ID_MIN = 0;
const uint32_t xetraTradeBroadcastPacket::TRD_MATCH_ID_MAX = 4294967294;
const uint32_t xetraTradeBroadcastPacket::TRD_MATCH_ID_NO_VALUE = 0xFFFFFFFF;
const int16_t xetraTradeBroadcastPacket::LAST_MKT_MIN = 1;
const int16_t xetraTradeBroadcastPacket::LAST_MKT_MAX = 255;
const int16_t xetraTradeBroadcastPacket::LAST_MKT_NO_VALUE = 0xFFFF;
const int8_t xetraTradeBroadcastPacket::TRADE_REPORT_TYPE_MIN = 0;
const int8_t xetraTradeBroadcastPacket::TRADE_REPORT_TYPE_MAX = 13;
const int8_t xetraTradeBroadcastPacket::TRADE_REPORT_TYPE_NO_VALUE = 0xFF;
const int8_t xetraTradeBroadcastPacket::TRANSFER_REASON_MIN = 1;
const int8_t xetraTradeBroadcastPacket::TRANSFER_REASON_MAX = 5;
const int8_t xetraTradeBroadcastPacket::TRANSFER_REASON_NO_VALUE = 0xFF;
const int8_t xetraTradeBroadcastPacket::MATCH_TYPE_MIN = 0;
const int8_t xetraTradeBroadcastPacket::MATCH_TYPE_MAX = 12;
const int8_t xetraTradeBroadcastPacket::MATCH_TYPE_NO_VALUE = 0xFF;
const int8_t xetraTradeBroadcastPacket::MATCH_SUB_TYPE_MIN = 1;
const int8_t xetraTradeBroadcastPacket::MATCH_SUB_TYPE_MAX = 4;
const int8_t xetraTradeBroadcastPacket::MATCH_SUB_TYPE_NO_VALUE = 0xFF;
const int8_t xetraTradeBroadcastPacket::SIDE_MIN = 1;
const int8_t xetraTradeBroadcastPacket::SIDE_MAX = 2;
const int8_t xetraTradeBroadcastPacket::SIDE_NO_VALUE = 0xFF;
const int8_t xetraTradeBroadcastPacket::SIDE_LIQUIDITY_IND_MIN = 1;
const int8_t xetraTradeBroadcastPacket::SIDE_LIQUIDITY_IND_MAX = 4;
const int8_t xetraTradeBroadcastPacket::SIDE_LIQUIDITY_IND_NO_VALUE = 0xFF;
const int8_t xetraTradeBroadcastPacket::DELIVERY_TYPE_MIN = 1;
const int8_t xetraTradeBroadcastPacket::DELIVERY_TYPE_MAX = 4;
const int8_t xetraTradeBroadcastPacket::DELIVERY_TYPE_NO_VALUE = 0xFF;
const int8_t xetraTradeBroadcastPacket::TRADING_CAPACITY_MIN = 1;
const int8_t xetraTradeBroadcastPacket::TRADING_CAPACITY_MAX = 9;
const int8_t xetraTradeBroadcastPacket::TRADING_CAPACITY_NO_VALUE = 0xFF;
const char xetraTradeBroadcastPacket::ACCOUNT_NO_VALUE[2] = {0x00, 0x00};
const size_t xetraTradeBroadcastPacket::ACCOUNT_MAX_LENGTH = 2;
const char xetraTradeBroadcastPacket::SETTL_CURRENCY_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t xetraTradeBroadcastPacket::SETTL_CURRENCY_MAX_LENGTH = 3;
const char xetraTradeBroadcastPacket::CURRENCY_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t xetraTradeBroadcastPacket::CURRENCY_MAX_LENGTH = 3;
const char xetraTradeBroadcastPacket::FREE_TEXT1_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTradeBroadcastPacket::FREE_TEXT1_MAX_LENGTH = 12;
const char xetraTradeBroadcastPacket::FREE_TEXT2_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTradeBroadcastPacket::FREE_TEXT2_MAX_LENGTH = 12;
const char xetraTradeBroadcastPacket::FREE_TEXT4_NO_VALUE[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTradeBroadcastPacket::FREE_TEXT4_MAX_LENGTH = 16;
const char xetraTradeBroadcastPacket::ORDER_CATEGORY_NO_VALUE[1] = {0x00};
const size_t xetraTradeBroadcastPacket::ORDER_CATEGORY_MAX_LENGTH = 1;
const int8_t xetraTradeBroadcastPacket::ORD_TYPE_MIN = 1;
const int8_t xetraTradeBroadcastPacket::ORD_TYPE_MAX = 4;
const int8_t xetraTradeBroadcastPacket::ORD_TYPE_NO_VALUE = 0xFF;
const char xetraTradeBroadcastPacket::ROOT_PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTradeBroadcastPacket::ROOT_PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char xetraTradeBroadcastPacket::ROOT_PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTradeBroadcastPacket::ROOT_PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const char xetraTradeBroadcastPacket::ROOT_PARTY_CLEARING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTradeBroadcastPacket::ROOT_PARTY_CLEARING_FIRM_MAX_LENGTH = 5;
const char xetraTradeBroadcastPacket::ROOT_PARTY_EXECUTING_FIRM_KVNUMBER_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t xetraTradeBroadcastPacket::ROOT_PARTY_EXECUTING_FIRM_KVNUMBER_MAX_LENGTH = 4;
const char xetraTradeBroadcastPacket::ROOT_PARTY_SETTLEMENT_ACCOUNT_NO_VALUE[35] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTradeBroadcastPacket::ROOT_PARTY_SETTLEMENT_ACCOUNT_MAX_LENGTH = 35;
const char xetraTradeBroadcastPacket::ROOT_PARTY_SETTLEMENT_LOCATION_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t xetraTradeBroadcastPacket::ROOT_PARTY_SETTLEMENT_LOCATION_MAX_LENGTH = 3;
const char xetraTradeBroadcastPacket::ROOT_PARTY_SETTLEMENT_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTradeBroadcastPacket::ROOT_PARTY_SETTLEMENT_FIRM_MAX_LENGTH = 5;
const char xetraTradeBroadcastPacket::ROOT_PARTY_CONTRA_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTradeBroadcastPacket::ROOT_PARTY_CONTRA_FIRM_MAX_LENGTH = 5;
const char xetraTradeBroadcastPacket::ROOT_PARTY_CONTRA_SETTLEMENT_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTradeBroadcastPacket::ROOT_PARTY_CONTRA_SETTLEMENT_FIRM_MAX_LENGTH = 5;
const char xetraTradeBroadcastPacket::ROOT_PARTY_CONTRA_FIRM_KVNUMBER_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t xetraTradeBroadcastPacket::ROOT_PARTY_CONTRA_FIRM_KVNUMBER_MAX_LENGTH = 4;
const char xetraTradeBroadcastPacket::ROOT_PARTY_CONTRA_SETTLEMENT_ACCOUNT_NO_VALUE[35] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTradeBroadcastPacket::ROOT_PARTY_CONTRA_SETTLEMENT_ACCOUNT_MAX_LENGTH = 35;
const char xetraTradeBroadcastPacket::ROOT_PARTY_CONTRA_SETTLEMENT_LOCATION_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t xetraTradeBroadcastPacket::ROOT_PARTY_CONTRA_SETTLEMENT_LOCATION_MAX_LENGTH = 3;
const char xetraTradeBroadcastPacket::PAD1_NO_VALUE[1] = {0x00};
const size_t xetraTradeBroadcastPacket::PAD1_MAX_LENGTH = 1;


} // namespace neueda

#endif // XETRA_TRADEBROADCAST_PACKET_H
