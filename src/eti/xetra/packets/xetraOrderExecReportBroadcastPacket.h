/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef XETRA_ORDEREXECREPORTBROADCAST_PACKET_H
#define XETRA_ORDEREXECREPORTBROADCAST_PACKET_H

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

class xetraOrderExecReportBroadcastPacket
{
    public:
        // no value constants
        static const uint64_t ORDER_ID_MIN;
        static const uint64_t ORDER_ID_MAX;
        static const uint64_t ORDER_ID_NO_VALUE;
        static const uint64_t CL_ORD_ID_MIN;
        static const uint64_t CL_ORD_ID_MAX;
        static const uint64_t CL_ORD_ID_NO_VALUE;
        static const uint64_t ORIG_CL_ORD_ID_MIN;
        static const uint64_t ORIG_CL_ORD_ID_MAX;
        static const uint64_t ORIG_CL_ORD_ID_NO_VALUE;
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const uint64_t EXEC_ID_MIN;
        static const uint64_t EXEC_ID_MAX;
        static const uint64_t EXEC_ID_NO_VALUE;
        static const uint64_t TRD_REG_TSENTRY_TIME_MIN;
        static const uint64_t TRD_REG_TSENTRY_TIME_MAX;
        static const uint64_t TRD_REG_TSENTRY_TIME_NO_VALUE;
        static const uint64_t TRD_REG_TSTIME_PRIORITY_MIN;
        static const uint64_t TRD_REG_TSTIME_PRIORITY_MAX;
        static const uint64_t TRD_REG_TSTIME_PRIORITY_NO_VALUE;
        static const double PRICE_MIN;
        static const double PRICE_MAX;
        static const int64_t PRICE_NO_VALUE;
        static const double LEAVES_QTY_MIN;
        static const double LEAVES_QTY_MAX;
        static const int64_t LEAVES_QTY_NO_VALUE;
        static const double CUM_QTY_MIN;
        static const double CUM_QTY_MAX;
        static const int64_t CUM_QTY_NO_VALUE;
        static const double CXL_QTY_MIN;
        static const double CXL_QTY_MAX;
        static const int64_t CXL_QTY_NO_VALUE;
        static const double ORDER_QTY_MIN;
        static const double ORDER_QTY_MAX;
        static const int64_t ORDER_QTY_NO_VALUE;
        static const double DISPLAY_QTY_MIN;
        static const double DISPLAY_QTY_MAX;
        static const int64_t DISPLAY_QTY_NO_VALUE;
        static const double DISPLAY_LOW_QTY_MIN;
        static const double DISPLAY_LOW_QTY_MAX;
        static const int64_t DISPLAY_LOW_QTY_NO_VALUE;
        static const double DISPLAY_HIGH_QTY_MIN;
        static const double DISPLAY_HIGH_QTY_MAX;
        static const int64_t DISPLAY_HIGH_QTY_NO_VALUE;
        static const double STOP_PX_MIN;
        static const double STOP_PX_MAX;
        static const int64_t STOP_PX_NO_VALUE;
        static const double VOLUME_DISCOVERY_PRICE_MIN;
        static const double VOLUME_DISCOVERY_PRICE_MAX;
        static const int64_t VOLUME_DISCOVERY_PRICE_NO_VALUE;
        static const double PEG_OFFSET_VALUE_ABS_MIN;
        static const double PEG_OFFSET_VALUE_ABS_MAX;
        static const int64_t PEG_OFFSET_VALUE_ABS_NO_VALUE;
        static const double PEG_OFFSET_VALUE_PCT_MIN;
        static const double PEG_OFFSET_VALUE_PCT_MAX;
        static const int64_t PEG_OFFSET_VALUE_PCT_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const uint32_t ORDER_IDSFX_MIN;
        static const uint32_t ORDER_IDSFX_MAX;
        static const uint32_t ORDER_IDSFX_NO_VALUE;
        static const int32_t EXPIRE_DATE_MIN;
        static const int32_t EXPIRE_DATE_MAX;
        static const int32_t EXPIRE_DATE_NO_VALUE;
        static const uint32_t MATCH_INST_CROSS_ID_MIN;
        static const uint32_t MATCH_INST_CROSS_ID_MAX;
        static const uint32_t MATCH_INST_CROSS_ID_NO_VALUE;
        static const uint32_t PARTY_IDEXECUTING_UNIT_MIN;
        static const uint32_t PARTY_IDEXECUTING_UNIT_MAX;
        static const uint32_t PARTY_IDEXECUTING_UNIT_NO_VALUE;
        static const uint32_t PARTY_IDSESSION_ID_MIN;
        static const uint32_t PARTY_IDSESSION_ID_MAX;
        static const uint32_t PARTY_IDSESSION_ID_NO_VALUE;
        static const uint32_t PARTY_IDEXECUTING_TRADER_MIN;
        static const uint32_t PARTY_IDEXECUTING_TRADER_MAX;
        static const uint32_t PARTY_IDEXECUTING_TRADER_NO_VALUE;
        static const uint32_t PARTY_IDENTERING_TRADER_MIN;
        static const uint32_t PARTY_IDENTERING_TRADER_MAX;
        static const uint32_t PARTY_IDENTERING_TRADER_NO_VALUE;
        static const int16_t EXEC_RESTATEMENT_REASON_MIN;
        static const int16_t EXEC_RESTATEMENT_REASON_MAX;
        static const int16_t EXEC_RESTATEMENT_REASON_NO_VALUE;
        static const int8_t PARTY_IDENTERING_FIRM_MIN;
        static const int8_t PARTY_IDENTERING_FIRM_MAX;
        static const int8_t PARTY_IDENTERING_FIRM_NO_VALUE;
        static const char ORD_STATUS_NO_VALUE[1];
        static const size_t ORD_STATUS_MAX_LENGTH;
        static const char EXEC_TYPE_NO_VALUE[1];
        static const size_t EXEC_TYPE_MAX_LENGTH;
        static const int8_t MATCH_TYPE_MIN;
        static const int8_t MATCH_TYPE_MAX;
        static const int8_t MATCH_TYPE_NO_VALUE;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const int8_t ORD_TYPE_MIN;
        static const int8_t ORD_TYPE_MAX;
        static const int8_t ORD_TYPE_NO_VALUE;
        static const int8_t TRADING_CAPACITY_MIN;
        static const int8_t TRADING_CAPACITY_MAX;
        static const int8_t TRADING_CAPACITY_NO_VALUE;
        static const int8_t TIME_IN_FORCE_MIN;
        static const int8_t TIME_IN_FORCE_MAX;
        static const int8_t TIME_IN_FORCE_NO_VALUE;
        static const int8_t EXEC_INST_MIN;
        static const int8_t EXEC_INST_MAX;
        static const int8_t EXEC_INST_NO_VALUE;
        static const int8_t TRADING_SESSION_SUB_ID_MIN;
        static const int8_t TRADING_SESSION_SUB_ID_MAX;
        static const int8_t TRADING_SESSION_SUB_ID_NO_VALUE;
        static const int8_t APPL_SEQ_INDICATOR_MIN;
        static const int8_t APPL_SEQ_INDICATOR_MAX;
        static const int8_t APPL_SEQ_INDICATOR_NO_VALUE;
        static const int8_t EX_DESTINATION_TYPE_MIN;
        static const int8_t EX_DESTINATION_TYPE_MAX;
        static const int8_t EX_DESTINATION_TYPE_NO_VALUE;
        static const char FREE_TEXT1_NO_VALUE[12];
        static const size_t FREE_TEXT1_MAX_LENGTH;
        static const char FREE_TEXT2_NO_VALUE[12];
        static const size_t FREE_TEXT2_MAX_LENGTH;
        static const char FREE_TEXT4_NO_VALUE[16];
        static const size_t FREE_TEXT4_MAX_LENGTH;
        static const char FIXCL_ORD_ID_NO_VALUE[20];
        static const size_t FIXCL_ORD_ID_MAX_LENGTH;
        static const int8_t NO_FILLS_MIN;
        static const int8_t NO_FILLS_MAX;
        static const int8_t NO_FILLS_NO_VALUE;
        static const int8_t TRIGGERED_MIN;
        static const int8_t TRIGGERED_MAX;
        static const int8_t TRIGGERED_NO_VALUE;
        static const int8_t CROSSED_INDICATOR_MIN;
        static const int8_t CROSSED_INDICATOR_MAX;
        static const int8_t CROSSED_INDICATOR_NO_VALUE;
        static const char PAD3_NO_VALUE[3];
        static const size_t PAD3_MAX_LENGTH;
        static const size_t FILLS_GRP_MIN;
        static const size_t FILLS_GRP_MAX;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraRBCHeaderMECompPacket mRBCHeaderME;
        uint64_t mOrderID;
        uint64_t mClOrdID;
        uint64_t mOrigClOrdID;
        int64_t mSecurityID;
        uint64_t mExecID;
        uint64_t mTrdRegTSEntryTime;
        uint64_t mTrdRegTSTimePriority;
        int64_t mPrice;
        int64_t mLeavesQty;
        int64_t mCumQty;
        int64_t mCxlQty;
        int64_t mOrderQty;
        int64_t mDisplayQty;
        int64_t mDisplayLowQty;
        int64_t mDisplayHighQty;
        int64_t mStopPx;
        int64_t mVolumeDiscoveryPrice;
        int64_t mPegOffsetValueAbs;
        int64_t mPegOffsetValuePct;
        int32_t mMarketSegmentID;
        uint32_t mOrderIDSfx;
        int32_t mExpireDate;
        uint32_t mMatchInstCrossID;
        uint32_t mPartyIDExecutingUnit;
        uint32_t mPartyIDSessionID;
        uint32_t mPartyIDExecutingTrader;
        uint32_t mPartyIDEnteringTrader;
        int16_t mExecRestatementReason;
        int8_t mPartyIDEnteringFirm;
        char mOrdStatus[1];
        char mExecType[1];
        int8_t mMatchType;
        int8_t mSide;
        int8_t mOrdType;
        int8_t mTradingCapacity;
        int8_t mTimeInForce;
        int8_t mExecInst;
        int8_t mTradingSessionSubID;
        int8_t mApplSeqIndicator;
        int8_t mExDestinationType;
        char mFreeText1[12];
        char mFreeText2[12];
        char mFreeText4[16];
        char mFIXClOrdID[20];
        int8_t mNoFills;
        int8_t mTriggered;
        int8_t mCrossedIndicator;
        char mPad3[3];
        vector<xetraFillsGrpCompPacket> mFillsGrp;

        // constructor
        xetraOrderExecReportBroadcastPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10117;
            mOrderID = ORDER_ID_NO_VALUE;
            mClOrdID = CL_ORD_ID_NO_VALUE;
            mOrigClOrdID = ORIG_CL_ORD_ID_NO_VALUE;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mExecID = EXEC_ID_NO_VALUE;
            mTrdRegTSEntryTime = TRD_REG_TSENTRY_TIME_NO_VALUE;
            mTrdRegTSTimePriority = TRD_REG_TSTIME_PRIORITY_NO_VALUE;
            mPrice = PRICE_NO_VALUE;
            mLeavesQty = LEAVES_QTY_NO_VALUE;
            mCumQty = CUM_QTY_NO_VALUE;
            mCxlQty = CXL_QTY_NO_VALUE;
            mOrderQty = ORDER_QTY_NO_VALUE;
            mDisplayQty = DISPLAY_QTY_NO_VALUE;
            mDisplayLowQty = DISPLAY_LOW_QTY_NO_VALUE;
            mDisplayHighQty = DISPLAY_HIGH_QTY_NO_VALUE;
            mStopPx = STOP_PX_NO_VALUE;
            mVolumeDiscoveryPrice = VOLUME_DISCOVERY_PRICE_NO_VALUE;
            mPegOffsetValueAbs = PEG_OFFSET_VALUE_ABS_NO_VALUE;
            mPegOffsetValuePct = PEG_OFFSET_VALUE_PCT_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mOrderIDSfx = ORDER_IDSFX_NO_VALUE;
            mExpireDate = EXPIRE_DATE_NO_VALUE;
            mMatchInstCrossID = MATCH_INST_CROSS_ID_NO_VALUE;
            mPartyIDExecutingUnit = PARTY_IDEXECUTING_UNIT_NO_VALUE;
            mPartyIDSessionID = PARTY_IDSESSION_ID_NO_VALUE;
            mPartyIDExecutingTrader = PARTY_IDEXECUTING_TRADER_NO_VALUE;
            mPartyIDEnteringTrader = PARTY_IDENTERING_TRADER_NO_VALUE;
            mExecRestatementReason = EXEC_RESTATEMENT_REASON_NO_VALUE;
            mPartyIDEnteringFirm = PARTY_IDENTERING_FIRM_NO_VALUE;
            memcpy(mOrdStatus, ORD_STATUS_NO_VALUE, sizeof (mOrdStatus));
            memcpy(mExecType, EXEC_TYPE_NO_VALUE, sizeof (mExecType));
            mMatchType = MATCH_TYPE_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            mOrdType = ORD_TYPE_NO_VALUE;
            mTradingCapacity = TRADING_CAPACITY_NO_VALUE;
            mTimeInForce = TIME_IN_FORCE_NO_VALUE;
            mExecInst = EXEC_INST_NO_VALUE;
            mTradingSessionSubID = TRADING_SESSION_SUB_ID_NO_VALUE;
            mApplSeqIndicator = APPL_SEQ_INDICATOR_NO_VALUE;
            mExDestinationType = EX_DESTINATION_TYPE_NO_VALUE;
            memcpy(mFreeText1, FREE_TEXT1_NO_VALUE, sizeof (mFreeText1));
            memcpy(mFreeText2, FREE_TEXT2_NO_VALUE, sizeof (mFreeText2));
            memcpy(mFreeText4, FREE_TEXT4_NO_VALUE, sizeof (mFreeText4));
            memcpy(mFIXClOrdID, FIXCL_ORD_ID_NO_VALUE, sizeof (mFIXClOrdID));
            mNoFills = NO_FILLS_NO_VALUE;
            mTriggered = TRIGGERED_NO_VALUE;
            mCrossedIndicator = CROSSED_INDICATOR_NO_VALUE;
            memcpy(mPad3, PAD3_NO_VALUE, sizeof (mPad3));
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

        const xetraRBCHeaderMECompPacket& getRBCHeaderME () const
        {
            return mRBCHeaderME;
        }

        bool setRBCHeaderME (const xetraRBCHeaderMECompPacket& v)
        {
            mRBCHeaderME = v;
            return true;
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

        uint64_t getOrigClOrdID () const
        {
            return mOrigClOrdID;
        }

        bool setOrigClOrdID (uint64_t v)
        {
            mOrigClOrdID = v;
            return ((ORIG_CL_ORD_ID_MIN <= mOrigClOrdID && mOrigClOrdID <= ORIG_CL_ORD_ID_MAX) || mOrigClOrdID == ORIG_CL_ORD_ID_NO_VALUE);
        }

        bool isOrigClOrdIDValid () const
        {
            return (mOrigClOrdID != ORIG_CL_ORD_ID_NO_VALUE);
        }

        void resetOrigClOrdID ()
        {
            mOrigClOrdID = ORIG_CL_ORD_ID_NO_VALUE;
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

        uint64_t getExecID () const
        {
            return mExecID;
        }

        bool setExecID (uint64_t v)
        {
            mExecID = v;
            return ((EXEC_ID_MIN <= mExecID && mExecID <= EXEC_ID_MAX) || mExecID == EXEC_ID_NO_VALUE);
        }

        bool isExecIDValid () const
        {
            return (mExecID != EXEC_ID_NO_VALUE);
        }

        void resetExecID ()
        {
            mExecID = EXEC_ID_NO_VALUE;
        }

        uint64_t getTrdRegTSEntryTime () const
        {
            return mTrdRegTSEntryTime;
        }

        bool setTrdRegTSEntryTime (uint64_t v)
        {
            mTrdRegTSEntryTime = v;
            return ((TRD_REG_TSENTRY_TIME_MIN <= mTrdRegTSEntryTime && mTrdRegTSEntryTime <= TRD_REG_TSENTRY_TIME_MAX) || mTrdRegTSEntryTime == TRD_REG_TSENTRY_TIME_NO_VALUE);
        }

        bool isTrdRegTSEntryTimeValid () const
        {
            return (mTrdRegTSEntryTime != TRD_REG_TSENTRY_TIME_NO_VALUE);
        }

        void resetTrdRegTSEntryTime ()
        {
            mTrdRegTSEntryTime = TRD_REG_TSENTRY_TIME_NO_VALUE;
        }

        uint64_t getTrdRegTSTimePriority () const
        {
            return mTrdRegTSTimePriority;
        }

        bool setTrdRegTSTimePriority (uint64_t v)
        {
            mTrdRegTSTimePriority = v;
            return ((TRD_REG_TSTIME_PRIORITY_MIN <= mTrdRegTSTimePriority && mTrdRegTSTimePriority <= TRD_REG_TSTIME_PRIORITY_MAX) || mTrdRegTSTimePriority == TRD_REG_TSTIME_PRIORITY_NO_VALUE);
        }

        bool isTrdRegTSTimePriorityValid () const
        {
            return (mTrdRegTSTimePriority != TRD_REG_TSTIME_PRIORITY_NO_VALUE);
        }

        void resetTrdRegTSTimePriority ()
        {
            mTrdRegTSTimePriority = TRD_REG_TSTIME_PRIORITY_NO_VALUE;
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

        double getCumQty () const
        {
            return mCumQty / 10000.0;
        }

        bool setCumQty (double v)
        {
            mCumQty = v * 10000.0;
            return ((CUM_QTY_MIN <= v && v <= CUM_QTY_MAX) || mCumQty == CUM_QTY_NO_VALUE);
        }

        bool isCumQtyValid () const
        {
            return (mCumQty != CUM_QTY_NO_VALUE);
        }

        void resetCumQty ()
        {
            mCumQty = CUM_QTY_NO_VALUE;
        }

        double getCxlQty () const
        {
            return mCxlQty / 10000.0;
        }

        bool setCxlQty (double v)
        {
            mCxlQty = v * 10000.0;
            return ((CXL_QTY_MIN <= v && v <= CXL_QTY_MAX) || mCxlQty == CXL_QTY_NO_VALUE);
        }

        bool isCxlQtyValid () const
        {
            return (mCxlQty != CXL_QTY_NO_VALUE);
        }

        void resetCxlQty ()
        {
            mCxlQty = CXL_QTY_NO_VALUE;
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

        double getDisplayQty () const
        {
            return mDisplayQty / 10000.0;
        }

        bool setDisplayQty (double v)
        {
            mDisplayQty = v * 10000.0;
            return ((DISPLAY_QTY_MIN <= v && v <= DISPLAY_QTY_MAX) || mDisplayQty == DISPLAY_QTY_NO_VALUE);
        }

        bool isDisplayQtyValid () const
        {
            return (mDisplayQty != DISPLAY_QTY_NO_VALUE);
        }

        void resetDisplayQty ()
        {
            mDisplayQty = DISPLAY_QTY_NO_VALUE;
        }

        double getDisplayLowQty () const
        {
            return mDisplayLowQty / 10000.0;
        }

        bool setDisplayLowQty (double v)
        {
            mDisplayLowQty = v * 10000.0;
            return ((DISPLAY_LOW_QTY_MIN <= v && v <= DISPLAY_LOW_QTY_MAX) || mDisplayLowQty == DISPLAY_LOW_QTY_NO_VALUE);
        }

        bool isDisplayLowQtyValid () const
        {
            return (mDisplayLowQty != DISPLAY_LOW_QTY_NO_VALUE);
        }

        void resetDisplayLowQty ()
        {
            mDisplayLowQty = DISPLAY_LOW_QTY_NO_VALUE;
        }

        double getDisplayHighQty () const
        {
            return mDisplayHighQty / 10000.0;
        }

        bool setDisplayHighQty (double v)
        {
            mDisplayHighQty = v * 10000.0;
            return ((DISPLAY_HIGH_QTY_MIN <= v && v <= DISPLAY_HIGH_QTY_MAX) || mDisplayHighQty == DISPLAY_HIGH_QTY_NO_VALUE);
        }

        bool isDisplayHighQtyValid () const
        {
            return (mDisplayHighQty != DISPLAY_HIGH_QTY_NO_VALUE);
        }

        void resetDisplayHighQty ()
        {
            mDisplayHighQty = DISPLAY_HIGH_QTY_NO_VALUE;
        }

        double getStopPx () const
        {
            return mStopPx / 100000000.0;
        }

        bool setStopPx (double v)
        {
            mStopPx = v * 100000000.0;
            return ((STOP_PX_MIN <= v && v <= STOP_PX_MAX) || mStopPx == STOP_PX_NO_VALUE);
        }

        bool isStopPxValid () const
        {
            return (mStopPx != STOP_PX_NO_VALUE);
        }

        void resetStopPx ()
        {
            mStopPx = STOP_PX_NO_VALUE;
        }

        double getVolumeDiscoveryPrice () const
        {
            return mVolumeDiscoveryPrice / 100000000.0;
        }

        bool setVolumeDiscoveryPrice (double v)
        {
            mVolumeDiscoveryPrice = v * 100000000.0;
            return ((VOLUME_DISCOVERY_PRICE_MIN <= v && v <= VOLUME_DISCOVERY_PRICE_MAX) || mVolumeDiscoveryPrice == VOLUME_DISCOVERY_PRICE_NO_VALUE);
        }

        bool isVolumeDiscoveryPriceValid () const
        {
            return (mVolumeDiscoveryPrice != VOLUME_DISCOVERY_PRICE_NO_VALUE);
        }

        void resetVolumeDiscoveryPrice ()
        {
            mVolumeDiscoveryPrice = VOLUME_DISCOVERY_PRICE_NO_VALUE;
        }

        double getPegOffsetValueAbs () const
        {
            return mPegOffsetValueAbs / 100000000.0;
        }

        bool setPegOffsetValueAbs (double v)
        {
            mPegOffsetValueAbs = v * 100000000.0;
            return ((PEG_OFFSET_VALUE_ABS_MIN <= v && v <= PEG_OFFSET_VALUE_ABS_MAX) || mPegOffsetValueAbs == PEG_OFFSET_VALUE_ABS_NO_VALUE);
        }

        bool isPegOffsetValueAbsValid () const
        {
            return (mPegOffsetValueAbs != PEG_OFFSET_VALUE_ABS_NO_VALUE);
        }

        void resetPegOffsetValueAbs ()
        {
            mPegOffsetValueAbs = PEG_OFFSET_VALUE_ABS_NO_VALUE;
        }

        double getPegOffsetValuePct () const
        {
            return mPegOffsetValuePct / 10000.0;
        }

        bool setPegOffsetValuePct (double v)
        {
            mPegOffsetValuePct = v * 10000.0;
            return ((PEG_OFFSET_VALUE_PCT_MIN <= v && v <= PEG_OFFSET_VALUE_PCT_MAX) || mPegOffsetValuePct == PEG_OFFSET_VALUE_PCT_NO_VALUE);
        }

        bool isPegOffsetValuePctValid () const
        {
            return (mPegOffsetValuePct != PEG_OFFSET_VALUE_PCT_NO_VALUE);
        }

        void resetPegOffsetValuePct ()
        {
            mPegOffsetValuePct = PEG_OFFSET_VALUE_PCT_NO_VALUE;
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

        uint32_t getPartyIDExecutingUnit () const
        {
            return mPartyIDExecutingUnit;
        }

        bool setPartyIDExecutingUnit (uint32_t v)
        {
            mPartyIDExecutingUnit = v;
            return ((PARTY_IDEXECUTING_UNIT_MIN <= mPartyIDExecutingUnit && mPartyIDExecutingUnit <= PARTY_IDEXECUTING_UNIT_MAX) || mPartyIDExecutingUnit == PARTY_IDEXECUTING_UNIT_NO_VALUE);
        }

        bool isPartyIDExecutingUnitValid () const
        {
            return (mPartyIDExecutingUnit != PARTY_IDEXECUTING_UNIT_NO_VALUE);
        }

        void resetPartyIDExecutingUnit ()
        {
            mPartyIDExecutingUnit = PARTY_IDEXECUTING_UNIT_NO_VALUE;
        }

        uint32_t getPartyIDSessionID () const
        {
            return mPartyIDSessionID;
        }

        bool setPartyIDSessionID (uint32_t v)
        {
            mPartyIDSessionID = v;
            return ((PARTY_IDSESSION_ID_MIN <= mPartyIDSessionID && mPartyIDSessionID <= PARTY_IDSESSION_ID_MAX) || mPartyIDSessionID == PARTY_IDSESSION_ID_NO_VALUE);
        }

        bool isPartyIDSessionIDValid () const
        {
            return (mPartyIDSessionID != PARTY_IDSESSION_ID_NO_VALUE);
        }

        void resetPartyIDSessionID ()
        {
            mPartyIDSessionID = PARTY_IDSESSION_ID_NO_VALUE;
        }

        uint32_t getPartyIDExecutingTrader () const
        {
            return mPartyIDExecutingTrader;
        }

        bool setPartyIDExecutingTrader (uint32_t v)
        {
            mPartyIDExecutingTrader = v;
            return ((PARTY_IDEXECUTING_TRADER_MIN <= mPartyIDExecutingTrader && mPartyIDExecutingTrader <= PARTY_IDEXECUTING_TRADER_MAX) || mPartyIDExecutingTrader == PARTY_IDEXECUTING_TRADER_NO_VALUE);
        }

        bool isPartyIDExecutingTraderValid () const
        {
            return (mPartyIDExecutingTrader != PARTY_IDEXECUTING_TRADER_NO_VALUE);
        }

        void resetPartyIDExecutingTrader ()
        {
            mPartyIDExecutingTrader = PARTY_IDEXECUTING_TRADER_NO_VALUE;
        }

        uint32_t getPartyIDEnteringTrader () const
        {
            return mPartyIDEnteringTrader;
        }

        bool setPartyIDEnteringTrader (uint32_t v)
        {
            mPartyIDEnteringTrader = v;
            return ((PARTY_IDENTERING_TRADER_MIN <= mPartyIDEnteringTrader && mPartyIDEnteringTrader <= PARTY_IDENTERING_TRADER_MAX) || mPartyIDEnteringTrader == PARTY_IDENTERING_TRADER_NO_VALUE);
        }

        bool isPartyIDEnteringTraderValid () const
        {
            return (mPartyIDEnteringTrader != PARTY_IDENTERING_TRADER_NO_VALUE);
        }

        void resetPartyIDEnteringTrader ()
        {
            mPartyIDEnteringTrader = PARTY_IDENTERING_TRADER_NO_VALUE;
        }

        int16_t getExecRestatementReason () const
        {
            return mExecRestatementReason;
        }

        bool setExecRestatementReason (int16_t v)
        {
            mExecRestatementReason = v;
            return ((EXEC_RESTATEMENT_REASON_MIN <= mExecRestatementReason && mExecRestatementReason <= EXEC_RESTATEMENT_REASON_MAX) || mExecRestatementReason == EXEC_RESTATEMENT_REASON_NO_VALUE);
        }

        bool isExecRestatementReasonValid () const
        {
            return (mExecRestatementReason != EXEC_RESTATEMENT_REASON_NO_VALUE);
        }

        void resetExecRestatementReason ()
        {
            mExecRestatementReason = EXEC_RESTATEMENT_REASON_NO_VALUE;
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

        string getOrdStatus () const
        {
            return string (mOrdStatus, ORD_STATUS_MAX_LENGTH);
        }

        bool setOrdStatus (const string& v)
        {
            memset (mOrdStatus, '\0', sizeof (mOrdStatus));
            size_t size = min ((size_t) v.size (), (size_t) ORD_STATUS_MAX_LENGTH);
            strncpy (mOrdStatus, v.c_str (), size);
            return (v.size () <= ORD_STATUS_MAX_LENGTH);
        }

        bool isOrdStatusValid () const
        {
            return (memcmp (mOrdStatus, ORD_STATUS_NO_VALUE, sizeof (mOrdStatus)) != 0);
        }

        void resetOrdStatus ()
        {
            memcpy (mOrdStatus, ORD_STATUS_NO_VALUE, sizeof (mOrdStatus));
        }

        string getExecType () const
        {
            return string (mExecType, EXEC_TYPE_MAX_LENGTH);
        }

        bool setExecType (const string& v)
        {
            memset (mExecType, '\0', sizeof (mExecType));
            size_t size = min ((size_t) v.size (), (size_t) EXEC_TYPE_MAX_LENGTH);
            strncpy (mExecType, v.c_str (), size);
            return (v.size () <= EXEC_TYPE_MAX_LENGTH);
        }

        bool isExecTypeValid () const
        {
            return (memcmp (mExecType, EXEC_TYPE_NO_VALUE, sizeof (mExecType)) != 0);
        }

        void resetExecType ()
        {
            memcpy (mExecType, EXEC_TYPE_NO_VALUE, sizeof (mExecType));
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

        int8_t getTradingSessionSubID () const
        {
            return mTradingSessionSubID;
        }

        bool setTradingSessionSubID (int8_t v)
        {
            mTradingSessionSubID = v;
            return ((TRADING_SESSION_SUB_ID_MIN <= mTradingSessionSubID && mTradingSessionSubID <= TRADING_SESSION_SUB_ID_MAX) || mTradingSessionSubID == TRADING_SESSION_SUB_ID_NO_VALUE);
        }

        bool isTradingSessionSubIDValid () const
        {
            return (mTradingSessionSubID != TRADING_SESSION_SUB_ID_NO_VALUE);
        }

        void resetTradingSessionSubID ()
        {
            mTradingSessionSubID = TRADING_SESSION_SUB_ID_NO_VALUE;
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

        int8_t getExDestinationType () const
        {
            return mExDestinationType;
        }

        bool setExDestinationType (int8_t v)
        {
            mExDestinationType = v;
            return ((EX_DESTINATION_TYPE_MIN <= mExDestinationType && mExDestinationType <= EX_DESTINATION_TYPE_MAX) || mExDestinationType == EX_DESTINATION_TYPE_NO_VALUE);
        }

        bool isExDestinationTypeValid () const
        {
            return (mExDestinationType != EX_DESTINATION_TYPE_NO_VALUE);
        }

        void resetExDestinationType ()
        {
            mExDestinationType = EX_DESTINATION_TYPE_NO_VALUE;
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

        int8_t getNoFills () const
        {
            return mNoFills;
        }

        bool setNoFills (int8_t v)
        {
            mNoFills = v;
            return ((NO_FILLS_MIN <= mNoFills && mNoFills <= NO_FILLS_MAX) || mNoFills == NO_FILLS_NO_VALUE);
        }

        bool isNoFillsValid () const
        {
            return (mNoFills != NO_FILLS_NO_VALUE);
        }

        void resetNoFills ()
        {
            mNoFills = NO_FILLS_NO_VALUE;
        }

        int8_t getTriggered () const
        {
            return mTriggered;
        }

        bool setTriggered (int8_t v)
        {
            mTriggered = v;
            return ((TRIGGERED_MIN <= mTriggered && mTriggered <= TRIGGERED_MAX) || mTriggered == TRIGGERED_NO_VALUE);
        }

        bool isTriggeredValid () const
        {
            return (mTriggered != TRIGGERED_NO_VALUE);
        }

        void resetTriggered ()
        {
            mTriggered = TRIGGERED_NO_VALUE;
        }

        int8_t getCrossedIndicator () const
        {
            return mCrossedIndicator;
        }

        bool setCrossedIndicator (int8_t v)
        {
            mCrossedIndicator = v;
            return ((CROSSED_INDICATOR_MIN <= mCrossedIndicator && mCrossedIndicator <= CROSSED_INDICATOR_MAX) || mCrossedIndicator == CROSSED_INDICATOR_NO_VALUE);
        }

        bool isCrossedIndicatorValid () const
        {
            return (mCrossedIndicator != CROSSED_INDICATOR_NO_VALUE);
        }

        void resetCrossedIndicator ()
        {
            mCrossedIndicator = CROSSED_INDICATOR_NO_VALUE;
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

        const vector<xetraFillsGrpCompPacket>& getFillsGrp () const
        {
            return mFillsGrp;
        }

        bool setFillsGrp (const vector<xetraFillsGrpCompPacket>& v)
        {
            mFillsGrp = v;
            mNoFills = v.size ();
            return (FILLS_GRP_MIN <= v.size () && v.size () <= FILLS_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeaderME.getRawSize()
                + sizeof (mOrderID)
                + sizeof (mClOrdID)
                + sizeof (mOrigClOrdID)
                + sizeof (mSecurityID)
                + sizeof (mExecID)
                + sizeof (mTrdRegTSEntryTime)
                + sizeof (mTrdRegTSTimePriority)
                + sizeof (mPrice)
                + sizeof (mLeavesQty)
                + sizeof (mCumQty)
                + sizeof (mCxlQty)
                + sizeof (mOrderQty)
                + sizeof (mDisplayQty)
                + sizeof (mDisplayLowQty)
                + sizeof (mDisplayHighQty)
                + sizeof (mStopPx)
                + sizeof (mVolumeDiscoveryPrice)
                + sizeof (mPegOffsetValueAbs)
                + sizeof (mPegOffsetValuePct)
                + sizeof (mMarketSegmentID)
                + sizeof (mOrderIDSfx)
                + sizeof (mExpireDate)
                + sizeof (mMatchInstCrossID)
                + sizeof (mPartyIDExecutingUnit)
                + sizeof (mPartyIDSessionID)
                + sizeof (mPartyIDExecutingTrader)
                + sizeof (mPartyIDEnteringTrader)
                + sizeof (mExecRestatementReason)
                + sizeof (mPartyIDEnteringFirm)
                + sizeof (mOrdStatus)
                + sizeof (mExecType)
                + sizeof (mMatchType)
                + sizeof (mSide)
                + sizeof (mOrdType)
                + sizeof (mTradingCapacity)
                + sizeof (mTimeInForce)
                + sizeof (mExecInst)
                + sizeof (mTradingSessionSubID)
                + sizeof (mApplSeqIndicator)
                + sizeof (mExDestinationType)
                + sizeof (mFreeText1)
                + sizeof (mFreeText2)
                + sizeof (mFreeText4)
                + sizeof (mFIXClOrdID)
                + sizeof (mNoFills)
                + sizeof (mTriggered)
                + sizeof (mCrossedIndicator)
                + sizeof (mPad3)
                + eti::getRawSize (mFillsGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoFills = mFillsGrp.size ();
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeaderME.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrigClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTrdRegTSEntryTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTrdRegTSTimePriority, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mLeavesQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mCumQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mCxlQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrderQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mDisplayQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mDisplayLowQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mDisplayHighQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mStopPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mVolumeDiscoveryPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPegOffsetValueAbs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPegOffsetValuePct, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrderIDSfx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExpireDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMatchInstCrossID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDExecutingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecRestatementReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDEnteringFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrdStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMatchType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mOrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTimeInForce, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecInst, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradingSessionSubID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mApplSeqIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExDestinationType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFreeText4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mFIXClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoFills, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTriggered, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mCrossedIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mFillsGrp.size (); i++)
            {
                state = mFillsGrp[i].serialize (buf, len, used);
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
            state = mRBCHeaderME.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrigClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTrdRegTSEntryTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTrdRegTSTimePriority, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mLeavesQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mCumQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mCxlQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrderQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mDisplayQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mDisplayLowQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mDisplayHighQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mStopPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mVolumeDiscoveryPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPegOffsetValueAbs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPegOffsetValuePct, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrderIDSfx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExpireDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMatchInstCrossID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDExecutingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecRestatementReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDEnteringFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrdStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMatchType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mOrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradingCapacity, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTimeInForce, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecInst, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradingSessionSubID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mApplSeqIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExDestinationType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText1, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFreeText4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mFIXClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoFills, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTriggered, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mCrossedIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mFillsGrp.resize (mNoFills);
            for (vector<xetraFillsGrpCompPacket>::iterator it = mFillsGrp.begin (); it != mFillsGrp.end (); ++it)
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
            sss << "OrderExecReportBroadcast::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeaderME=" << mRBCHeaderME.toString () << "],"
                << "[OrderID=" << getOrderID () << "],"
                << "[ClOrdID=" << getClOrdID () << "],"
                << "[OrigClOrdID=" << getOrigClOrdID () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[ExecID=" << getExecID () << "],"
                << "[TrdRegTSEntryTime=" << getTrdRegTSEntryTime () << "],"
                << "[TrdRegTSTimePriority=" << getTrdRegTSTimePriority () << "],"
                << "[Price=" << getPrice () << "],"
                << "[LeavesQty=" << getLeavesQty () << "],"
                << "[CumQty=" << getCumQty () << "],"
                << "[CxlQty=" << getCxlQty () << "],"
                << "[OrderQty=" << getOrderQty () << "],"
                << "[DisplayQty=" << getDisplayQty () << "],"
                << "[DisplayLowQty=" << getDisplayLowQty () << "],"
                << "[DisplayHighQty=" << getDisplayHighQty () << "],"
                << "[StopPx=" << getStopPx () << "],"
                << "[VolumeDiscoveryPrice=" << getVolumeDiscoveryPrice () << "],"
                << "[PegOffsetValueAbs=" << getPegOffsetValueAbs () << "],"
                << "[PegOffsetValuePct=" << getPegOffsetValuePct () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[OrderIDSfx=" << getOrderIDSfx () << "],"
                << "[ExpireDate=" << getExpireDate () << "],"
                << "[MatchInstCrossID=" << getMatchInstCrossID () << "],"
                << "[PartyIDExecutingUnit=" << getPartyIDExecutingUnit () << "],"
                << "[PartyIDSessionID=" << getPartyIDSessionID () << "],"
                << "[PartyIDExecutingTrader=" << getPartyIDExecutingTrader () << "],"
                << "[PartyIDEnteringTrader=" << getPartyIDEnteringTrader () << "],"
                << "[ExecRestatementReason=" << getExecRestatementReason () << "],"
                << "[PartyIDEnteringFirm=" << getPartyIDEnteringFirm () << "],"
                << "[OrdStatus=" << getOrdStatus () << "],"
                << "[ExecType=" << getExecType () << "],"
                << "[MatchType=" << getMatchType () << "],"
                << "[Side=" << getSide () << "],"
                << "[OrdType=" << getOrdType () << "],"
                << "[TradingCapacity=" << getTradingCapacity () << "],"
                << "[TimeInForce=" << getTimeInForce () << "],"
                << "[ExecInst=" << getExecInst () << "],"
                << "[TradingSessionSubID=" << getTradingSessionSubID () << "],"
                << "[ApplSeqIndicator=" << getApplSeqIndicator () << "],"
                << "[ExDestinationType=" << getExDestinationType () << "],"
                << "[FreeText1=" << getFreeText1 () << "],"
                << "[FreeText2=" << getFreeText2 () << "],"
                << "[FreeText4=" << getFreeText4 () << "],"
                << "[FIXClOrdID=" << getFIXClOrdID () << "],"
                << "[NoFills=" << getNoFills () << "],"
                << "[Triggered=" << getTriggered () << "],"
                << "[CrossedIndicator=" << getCrossedIndicator () << "],"
                << "[Pad3=" << getPad3 () << "],"
                << "[FillsGrp=" << eti::toString (getFillsGrp ()) << "]";
            return sss.str();
        }
};

const uint64_t xetraOrderExecReportBroadcastPacket::ORDER_ID_MIN = 0UL;
const uint64_t xetraOrderExecReportBroadcastPacket::ORDER_ID_MAX = 18446744073709551614UL;
const uint64_t xetraOrderExecReportBroadcastPacket::ORDER_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraOrderExecReportBroadcastPacket::CL_ORD_ID_MIN = 0UL;
const uint64_t xetraOrderExecReportBroadcastPacket::CL_ORD_ID_MAX = 18446744073709551614UL;
const uint64_t xetraOrderExecReportBroadcastPacket::CL_ORD_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraOrderExecReportBroadcastPacket::ORIG_CL_ORD_ID_MIN = 0UL;
const uint64_t xetraOrderExecReportBroadcastPacket::ORIG_CL_ORD_ID_MAX = 18446744073709551614UL;
const uint64_t xetraOrderExecReportBroadcastPacket::ORIG_CL_ORD_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int64_t xetraOrderExecReportBroadcastPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraOrderExecReportBroadcastPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraOrderExecReportBroadcastPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const uint64_t xetraOrderExecReportBroadcastPacket::EXEC_ID_MIN = 0UL;
const uint64_t xetraOrderExecReportBroadcastPacket::EXEC_ID_MAX = 18446744073709551614UL;
const uint64_t xetraOrderExecReportBroadcastPacket::EXEC_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraOrderExecReportBroadcastPacket::TRD_REG_TSENTRY_TIME_MIN = 0UL;
const uint64_t xetraOrderExecReportBroadcastPacket::TRD_REG_TSENTRY_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraOrderExecReportBroadcastPacket::TRD_REG_TSENTRY_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraOrderExecReportBroadcastPacket::TRD_REG_TSTIME_PRIORITY_MIN = 0UL;
const uint64_t xetraOrderExecReportBroadcastPacket::TRD_REG_TSTIME_PRIORITY_MAX = 18446744073709551614UL;
const uint64_t xetraOrderExecReportBroadcastPacket::TRD_REG_TSTIME_PRIORITY_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const double xetraOrderExecReportBroadcastPacket::PRICE_MIN = -92233720368.54775807;
const double xetraOrderExecReportBroadcastPacket::PRICE_MAX = 92233720368.54775807;
const int64_t xetraOrderExecReportBroadcastPacket::PRICE_NO_VALUE = 0x8000000000000000;
const double xetraOrderExecReportBroadcastPacket::LEAVES_QTY_MIN = -922337203685477.5807;
const double xetraOrderExecReportBroadcastPacket::LEAVES_QTY_MAX = 922337203685477.5807;
const int64_t xetraOrderExecReportBroadcastPacket::LEAVES_QTY_NO_VALUE = 0x8000000000000000;
const double xetraOrderExecReportBroadcastPacket::CUM_QTY_MIN = -922337203685477.5807;
const double xetraOrderExecReportBroadcastPacket::CUM_QTY_MAX = 922337203685477.5807;
const int64_t xetraOrderExecReportBroadcastPacket::CUM_QTY_NO_VALUE = 0x8000000000000000;
const double xetraOrderExecReportBroadcastPacket::CXL_QTY_MIN = -922337203685477.5807;
const double xetraOrderExecReportBroadcastPacket::CXL_QTY_MAX = 922337203685477.5807;
const int64_t xetraOrderExecReportBroadcastPacket::CXL_QTY_NO_VALUE = 0x8000000000000000;
const double xetraOrderExecReportBroadcastPacket::ORDER_QTY_MIN = -922337203685477.5807;
const double xetraOrderExecReportBroadcastPacket::ORDER_QTY_MAX = 922337203685477.5807;
const int64_t xetraOrderExecReportBroadcastPacket::ORDER_QTY_NO_VALUE = 0x8000000000000000;
const double xetraOrderExecReportBroadcastPacket::DISPLAY_QTY_MIN = -922337203685477.5807;
const double xetraOrderExecReportBroadcastPacket::DISPLAY_QTY_MAX = 922337203685477.5807;
const int64_t xetraOrderExecReportBroadcastPacket::DISPLAY_QTY_NO_VALUE = 0x8000000000000000;
const double xetraOrderExecReportBroadcastPacket::DISPLAY_LOW_QTY_MIN = -922337203685477.5807;
const double xetraOrderExecReportBroadcastPacket::DISPLAY_LOW_QTY_MAX = 922337203685477.5807;
const int64_t xetraOrderExecReportBroadcastPacket::DISPLAY_LOW_QTY_NO_VALUE = 0x8000000000000000;
const double xetraOrderExecReportBroadcastPacket::DISPLAY_HIGH_QTY_MIN = -922337203685477.5807;
const double xetraOrderExecReportBroadcastPacket::DISPLAY_HIGH_QTY_MAX = 922337203685477.5807;
const int64_t xetraOrderExecReportBroadcastPacket::DISPLAY_HIGH_QTY_NO_VALUE = 0x8000000000000000;
const double xetraOrderExecReportBroadcastPacket::STOP_PX_MIN = -92233720368.54775807;
const double xetraOrderExecReportBroadcastPacket::STOP_PX_MAX = 92233720368.54775807;
const int64_t xetraOrderExecReportBroadcastPacket::STOP_PX_NO_VALUE = 0x8000000000000000;
const double xetraOrderExecReportBroadcastPacket::VOLUME_DISCOVERY_PRICE_MIN = -92233720368.54775807;
const double xetraOrderExecReportBroadcastPacket::VOLUME_DISCOVERY_PRICE_MAX = 92233720368.54775807;
const int64_t xetraOrderExecReportBroadcastPacket::VOLUME_DISCOVERY_PRICE_NO_VALUE = 0x8000000000000000;
const double xetraOrderExecReportBroadcastPacket::PEG_OFFSET_VALUE_ABS_MIN = -92233720368.54775807;
const double xetraOrderExecReportBroadcastPacket::PEG_OFFSET_VALUE_ABS_MAX = 92233720368.54775807;
const int64_t xetraOrderExecReportBroadcastPacket::PEG_OFFSET_VALUE_ABS_NO_VALUE = 0x8000000000000000;
const double xetraOrderExecReportBroadcastPacket::PEG_OFFSET_VALUE_PCT_MIN = -922337203685477.5807;
const double xetraOrderExecReportBroadcastPacket::PEG_OFFSET_VALUE_PCT_MAX = 922337203685477.5807;
const int64_t xetraOrderExecReportBroadcastPacket::PEG_OFFSET_VALUE_PCT_NO_VALUE = 0x8000000000000000;
const int32_t xetraOrderExecReportBroadcastPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraOrderExecReportBroadcastPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraOrderExecReportBroadcastPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t xetraOrderExecReportBroadcastPacket::ORDER_IDSFX_MIN = 0;
const uint32_t xetraOrderExecReportBroadcastPacket::ORDER_IDSFX_MAX = 4294967294;
const uint32_t xetraOrderExecReportBroadcastPacket::ORDER_IDSFX_NO_VALUE = 0xFFFFFFFF;
const int32_t xetraOrderExecReportBroadcastPacket::EXPIRE_DATE_MIN = 0;
const int32_t xetraOrderExecReportBroadcastPacket::EXPIRE_DATE_MAX = 99991231;
const int32_t xetraOrderExecReportBroadcastPacket::EXPIRE_DATE_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraOrderExecReportBroadcastPacket::MATCH_INST_CROSS_ID_MIN = 0;
const uint32_t xetraOrderExecReportBroadcastPacket::MATCH_INST_CROSS_ID_MAX = 4294967294;
const uint32_t xetraOrderExecReportBroadcastPacket::MATCH_INST_CROSS_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraOrderExecReportBroadcastPacket::PARTY_IDEXECUTING_UNIT_MIN = 0;
const uint32_t xetraOrderExecReportBroadcastPacket::PARTY_IDEXECUTING_UNIT_MAX = 4294967294;
const uint32_t xetraOrderExecReportBroadcastPacket::PARTY_IDEXECUTING_UNIT_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraOrderExecReportBroadcastPacket::PARTY_IDSESSION_ID_MIN = 0;
const uint32_t xetraOrderExecReportBroadcastPacket::PARTY_IDSESSION_ID_MAX = 4294967294;
const uint32_t xetraOrderExecReportBroadcastPacket::PARTY_IDSESSION_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraOrderExecReportBroadcastPacket::PARTY_IDEXECUTING_TRADER_MIN = 0;
const uint32_t xetraOrderExecReportBroadcastPacket::PARTY_IDEXECUTING_TRADER_MAX = 4294967294;
const uint32_t xetraOrderExecReportBroadcastPacket::PARTY_IDEXECUTING_TRADER_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraOrderExecReportBroadcastPacket::PARTY_IDENTERING_TRADER_MIN = 0;
const uint32_t xetraOrderExecReportBroadcastPacket::PARTY_IDENTERING_TRADER_MAX = 4294967294;
const uint32_t xetraOrderExecReportBroadcastPacket::PARTY_IDENTERING_TRADER_NO_VALUE = 0xFFFFFFFF;
const int16_t xetraOrderExecReportBroadcastPacket::EXEC_RESTATEMENT_REASON_MIN = 0;
const int16_t xetraOrderExecReportBroadcastPacket::EXEC_RESTATEMENT_REASON_MAX = 344;
const int16_t xetraOrderExecReportBroadcastPacket::EXEC_RESTATEMENT_REASON_NO_VALUE = 0xFFFF;
const int8_t xetraOrderExecReportBroadcastPacket::PARTY_IDENTERING_FIRM_MIN = 1;
const int8_t xetraOrderExecReportBroadcastPacket::PARTY_IDENTERING_FIRM_MAX = 2;
const int8_t xetraOrderExecReportBroadcastPacket::PARTY_IDENTERING_FIRM_NO_VALUE = 0xFF;
const char xetraOrderExecReportBroadcastPacket::ORD_STATUS_NO_VALUE[1] = {0x00};
const size_t xetraOrderExecReportBroadcastPacket::ORD_STATUS_MAX_LENGTH = 1;
const char xetraOrderExecReportBroadcastPacket::EXEC_TYPE_NO_VALUE[1] = {0x00};
const size_t xetraOrderExecReportBroadcastPacket::EXEC_TYPE_MAX_LENGTH = 1;
const int8_t xetraOrderExecReportBroadcastPacket::MATCH_TYPE_MIN = 0;
const int8_t xetraOrderExecReportBroadcastPacket::MATCH_TYPE_MAX = 14;
const int8_t xetraOrderExecReportBroadcastPacket::MATCH_TYPE_NO_VALUE = 0xFF;
const int8_t xetraOrderExecReportBroadcastPacket::SIDE_MIN = 1;
const int8_t xetraOrderExecReportBroadcastPacket::SIDE_MAX = 2;
const int8_t xetraOrderExecReportBroadcastPacket::SIDE_NO_VALUE = 0xFF;
const int8_t xetraOrderExecReportBroadcastPacket::ORD_TYPE_MIN = 1;
const int8_t xetraOrderExecReportBroadcastPacket::ORD_TYPE_MAX = 4;
const int8_t xetraOrderExecReportBroadcastPacket::ORD_TYPE_NO_VALUE = 0xFF;
const int8_t xetraOrderExecReportBroadcastPacket::TRADING_CAPACITY_MIN = 1;
const int8_t xetraOrderExecReportBroadcastPacket::TRADING_CAPACITY_MAX = 9;
const int8_t xetraOrderExecReportBroadcastPacket::TRADING_CAPACITY_NO_VALUE = 0xFF;
const int8_t xetraOrderExecReportBroadcastPacket::TIME_IN_FORCE_MIN = 0;
const int8_t xetraOrderExecReportBroadcastPacket::TIME_IN_FORCE_MAX = 6;
const int8_t xetraOrderExecReportBroadcastPacket::TIME_IN_FORCE_NO_VALUE = 0xFF;
const int8_t xetraOrderExecReportBroadcastPacket::EXEC_INST_MIN = 1;
const int8_t xetraOrderExecReportBroadcastPacket::EXEC_INST_MAX = 6;
const int8_t xetraOrderExecReportBroadcastPacket::EXEC_INST_NO_VALUE = 0xFF;
const int8_t xetraOrderExecReportBroadcastPacket::TRADING_SESSION_SUB_ID_MIN = 1;
const int8_t xetraOrderExecReportBroadcastPacket::TRADING_SESSION_SUB_ID_MAX = 8;
const int8_t xetraOrderExecReportBroadcastPacket::TRADING_SESSION_SUB_ID_NO_VALUE = 0xFF;
const int8_t xetraOrderExecReportBroadcastPacket::APPL_SEQ_INDICATOR_MIN = 0;
const int8_t xetraOrderExecReportBroadcastPacket::APPL_SEQ_INDICATOR_MAX = 1;
const int8_t xetraOrderExecReportBroadcastPacket::APPL_SEQ_INDICATOR_NO_VALUE = 0xFF;
const int8_t xetraOrderExecReportBroadcastPacket::EX_DESTINATION_TYPE_MIN = 3;
const int8_t xetraOrderExecReportBroadcastPacket::EX_DESTINATION_TYPE_MAX = 3;
const int8_t xetraOrderExecReportBroadcastPacket::EX_DESTINATION_TYPE_NO_VALUE = 0xFF;
const char xetraOrderExecReportBroadcastPacket::FREE_TEXT1_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraOrderExecReportBroadcastPacket::FREE_TEXT1_MAX_LENGTH = 12;
const char xetraOrderExecReportBroadcastPacket::FREE_TEXT2_NO_VALUE[12] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraOrderExecReportBroadcastPacket::FREE_TEXT2_MAX_LENGTH = 12;
const char xetraOrderExecReportBroadcastPacket::FREE_TEXT4_NO_VALUE[16] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraOrderExecReportBroadcastPacket::FREE_TEXT4_MAX_LENGTH = 16;
const char xetraOrderExecReportBroadcastPacket::FIXCL_ORD_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraOrderExecReportBroadcastPacket::FIXCL_ORD_ID_MAX_LENGTH = 20;
const int8_t xetraOrderExecReportBroadcastPacket::NO_FILLS_MIN = 0;
const int8_t xetraOrderExecReportBroadcastPacket::NO_FILLS_MAX = 100;
const int8_t xetraOrderExecReportBroadcastPacket::NO_FILLS_NO_VALUE = 0xFF;
const int8_t xetraOrderExecReportBroadcastPacket::TRIGGERED_MIN = 0;
const int8_t xetraOrderExecReportBroadcastPacket::TRIGGERED_MAX = 2;
const int8_t xetraOrderExecReportBroadcastPacket::TRIGGERED_NO_VALUE = 0xFF;
const int8_t xetraOrderExecReportBroadcastPacket::CROSSED_INDICATOR_MIN = 0;
const int8_t xetraOrderExecReportBroadcastPacket::CROSSED_INDICATOR_MAX = 1;
const int8_t xetraOrderExecReportBroadcastPacket::CROSSED_INDICATOR_NO_VALUE = 0xFF;
const char xetraOrderExecReportBroadcastPacket::PAD3_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t xetraOrderExecReportBroadcastPacket::PAD3_MAX_LENGTH = 3;
const size_t xetraOrderExecReportBroadcastPacket::FILLS_GRP_MIN = 0;
const size_t xetraOrderExecReportBroadcastPacket::FILLS_GRP_MAX = 100;


} // namespace neueda

#endif // XETRA_ORDEREXECREPORTBROADCAST_PACKET_H
