/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 04/02/2019
 */
#ifndef XETRA_TESBROADCAST_PACKET_H
#define XETRA_TESBROADCAST_PACKET_H

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

class xetraTESBroadcastPacket
{
    public:
        // no value constants
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const double LAST_PX_MIN;
        static const double LAST_PX_MAX;
        static const int64_t LAST_PX_NO_VALUE;
        static const uint64_t TRANSACT_TIME_MIN;
        static const uint64_t TRANSACT_TIME_MAX;
        static const uint64_t TRANSACT_TIME_NO_VALUE;
        static const uint64_t TRANS_BKD_TIME_MIN;
        static const uint64_t TRANS_BKD_TIME_MAX;
        static const uint64_t TRANS_BKD_TIME_NO_VALUE;
        static const double SETTL_CURR_FX_RATE_MIN;
        static const double SETTL_CURR_FX_RATE_MAX;
        static const int64_t SETTL_CURR_FX_RATE_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const uint32_t PACKAGE_ID_MIN;
        static const uint32_t PACKAGE_ID_MAX;
        static const uint32_t PACKAGE_ID_NO_VALUE;
        static const uint32_t TESEXEC_ID_MIN;
        static const uint32_t TESEXEC_ID_MAX;
        static const uint32_t TESEXEC_ID_NO_VALUE;
        static const int32_t SETTL_DATE_MIN;
        static const int32_t SETTL_DATE_MAX;
        static const int32_t SETTL_DATE_NO_VALUE;
        static const int16_t TRD_TYPE_MIN;
        static const int16_t TRD_TYPE_MAX;
        static const int16_t TRD_TYPE_NO_VALUE;
        static const int8_t TRADE_REPORT_TYPE_MIN;
        static const int8_t TRADE_REPORT_TYPE_MAX;
        static const int8_t TRADE_REPORT_TYPE_NO_VALUE;
        static const int8_t NO_SIDE_ALLOCS_MIN;
        static const int8_t NO_SIDE_ALLOCS_MAX;
        static const int8_t NO_SIDE_ALLOCS_NO_VALUE;
        static const char MESSAGE_EVENT_SOURCE_NO_VALUE[1];
        static const size_t MESSAGE_EVENT_SOURCE_MAX_LENGTH;
        static const char TRADE_REPORT_TEXT_NO_VALUE[20];
        static const size_t TRADE_REPORT_TEXT_MAX_LENGTH;
        static const char TRADE_REPORT_ID_NO_VALUE[20];
        static const size_t TRADE_REPORT_ID_MAX_LENGTH;
        static const char ROOT_PARTY_EXECUTING_FIRM_NO_VALUE[5];
        static const size_t ROOT_PARTY_EXECUTING_FIRM_MAX_LENGTH;
        static const char ROOT_PARTY_EXECUTING_TRADER_NO_VALUE[6];
        static const size_t ROOT_PARTY_EXECUTING_TRADER_MAX_LENGTH;
        static const size_t SIDE_ALLOC_GRP_BC_MIN;
        static const size_t SIDE_ALLOC_GRP_BC_MAX;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraRBCHeaderCompPacket mRBCHeader;
        int64_t mSecurityID;
        int64_t mLastPx;
        uint64_t mTransactTime;
        uint64_t mTransBkdTime;
        int64_t mSettlCurrFxRate;
        int32_t mMarketSegmentID;
        uint32_t mPackageID;
        uint32_t mTESExecID;
        int32_t mSettlDate;
        int16_t mTrdType;
        int8_t mTradeReportType;
        int8_t mNoSideAllocs;
        char mMessageEventSource[1];
        char mTradeReportText[20];
        char mTradeReportID[20];
        char mRootPartyExecutingFirm[5];
        char mRootPartyExecutingTrader[6];
        vector<xetraSideAllocGrpBCCompPacket> mSideAllocGrpBC;

        // constructor
        xetraTESBroadcastPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10604;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mLastPx = LAST_PX_NO_VALUE;
            mTransactTime = TRANSACT_TIME_NO_VALUE;
            mTransBkdTime = TRANS_BKD_TIME_NO_VALUE;
            mSettlCurrFxRate = SETTL_CURR_FX_RATE_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mPackageID = PACKAGE_ID_NO_VALUE;
            mTESExecID = TESEXEC_ID_NO_VALUE;
            mSettlDate = SETTL_DATE_NO_VALUE;
            mTrdType = TRD_TYPE_NO_VALUE;
            mTradeReportType = TRADE_REPORT_TYPE_NO_VALUE;
            mNoSideAllocs = NO_SIDE_ALLOCS_NO_VALUE;
            memcpy(mMessageEventSource, MESSAGE_EVENT_SOURCE_NO_VALUE, sizeof (mMessageEventSource));
            memcpy(mTradeReportText, TRADE_REPORT_TEXT_NO_VALUE, sizeof (mTradeReportText));
            memcpy(mTradeReportID, TRADE_REPORT_ID_NO_VALUE, sizeof (mTradeReportID));
            memcpy(mRootPartyExecutingFirm, ROOT_PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mRootPartyExecutingFirm));
            memcpy(mRootPartyExecutingTrader, ROOT_PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mRootPartyExecutingTrader));
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

        string getMessageEventSource () const
        {
            return string (mMessageEventSource, MESSAGE_EVENT_SOURCE_MAX_LENGTH);
        }

        bool setMessageEventSource (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) MESSAGE_EVENT_SOURCE_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mMessageEventSource[i] = v[i];
            memset (&mMessageEventSource[size], '\0', MESSAGE_EVENT_SOURCE_MAX_LENGTH-size);
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

        string getTradeReportText () const
        {
            return string (mTradeReportText, TRADE_REPORT_TEXT_MAX_LENGTH);
        }

        bool setTradeReportText (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) TRADE_REPORT_TEXT_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mTradeReportText[i] = v[i];
            memset (&mTradeReportText[size], '\0', TRADE_REPORT_TEXT_MAX_LENGTH-size);
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

        string getTradeReportID () const
        {
            return string (mTradeReportID, TRADE_REPORT_ID_MAX_LENGTH);
        }

        bool setTradeReportID (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) TRADE_REPORT_ID_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mTradeReportID[i] = v[i];
            memset (&mTradeReportID[size], '\0', TRADE_REPORT_ID_MAX_LENGTH-size);
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

        const vector<xetraSideAllocGrpBCCompPacket>& getSideAllocGrpBC () const
        {
            return mSideAllocGrpBC;
        }

        bool setSideAllocGrpBC (const vector<xetraSideAllocGrpBCCompPacket>& v)
        {
            mSideAllocGrpBC = v;
            mNoSideAllocs = v.size ();
            return (SIDE_ALLOC_GRP_BC_MIN <= v.size () && v.size () <= SIDE_ALLOC_GRP_BC_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeader.getRawSize()
                + sizeof (mSecurityID)
                + sizeof (mLastPx)
                + sizeof (mTransactTime)
                + sizeof (mTransBkdTime)
                + sizeof (mSettlCurrFxRate)
                + sizeof (mMarketSegmentID)
                + sizeof (mPackageID)
                + sizeof (mTESExecID)
                + sizeof (mSettlDate)
                + sizeof (mTrdType)
                + sizeof (mTradeReportType)
                + sizeof (mNoSideAllocs)
                + sizeof (mMessageEventSource)
                + sizeof (mTradeReportText)
                + sizeof (mTradeReportID)
                + sizeof (mRootPartyExecutingFirm)
                + sizeof (mRootPartyExecutingTrader)
                + xetra::getRawSize (mSideAllocGrpBC);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoSideAllocs = mSideAllocGrpBC.size ();
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTransBkdTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSettlCurrFxRate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPackageID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTESExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSettlDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mNoSideAllocs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMessageEventSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTradeReportText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mRootPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mSideAllocGrpBC.size (); i++)
            {
                state = mSideAllocGrpBC[i].serialize (buf, len, used);
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
            state = xetra::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mLastPx, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTransBkdTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSettlCurrFxRate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPackageID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTESExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSettlDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mNoSideAllocs, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mMessageEventSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTradeReportText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mRootPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mSideAllocGrpBC.resize (mNoSideAllocs);
            for (vector<xetraSideAllocGrpBCCompPacket>::iterator it = mSideAllocGrpBC.begin (); it != mSideAllocGrpBC.end (); ++it)
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
            sss << "TESBroadcast::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeader=" << mRBCHeader.toString () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[LastPx=" << getLastPx () << "],"
                << "[TransactTime=" << getTransactTime () << "],"
                << "[TransBkdTime=" << getTransBkdTime () << "],"
                << "[SettlCurrFxRate=" << getSettlCurrFxRate () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[PackageID=" << getPackageID () << "],"
                << "[TESExecID=" << getTESExecID () << "],"
                << "[SettlDate=" << getSettlDate () << "],"
                << "[TrdType=" << getTrdType () << "],"
                << "[TradeReportType=" << getTradeReportType () << "],"
                << "[NoSideAllocs=" << getNoSideAllocs () << "],"
                << "[MessageEventSource=" << getMessageEventSource () << "],"
                << "[TradeReportText=" << getTradeReportText () << "],"
                << "[TradeReportID=" << getTradeReportID () << "],"
                << "[RootPartyExecutingFirm=" << getRootPartyExecutingFirm () << "],"
                << "[RootPartyExecutingTrader=" << getRootPartyExecutingTrader () << "],"
                << "[SideAllocGrpBC=" << xetra::toString (getSideAllocGrpBC ()) << "]";
            return sss.str();
        }
};

const int64_t xetraTESBroadcastPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraTESBroadcastPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraTESBroadcastPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double xetraTESBroadcastPacket::LAST_PX_MIN = -92233720368.54775807;
const double xetraTESBroadcastPacket::LAST_PX_MAX = 92233720368.54775807;
const int64_t xetraTESBroadcastPacket::LAST_PX_NO_VALUE = 0x8000000000000000;
const uint64_t xetraTESBroadcastPacket::TRANSACT_TIME_MIN = 0UL;
const uint64_t xetraTESBroadcastPacket::TRANSACT_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraTESBroadcastPacket::TRANSACT_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraTESBroadcastPacket::TRANS_BKD_TIME_MIN = 0UL;
const uint64_t xetraTESBroadcastPacket::TRANS_BKD_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraTESBroadcastPacket::TRANS_BKD_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const double xetraTESBroadcastPacket::SETTL_CURR_FX_RATE_MIN = -92233720368.54775807;
const double xetraTESBroadcastPacket::SETTL_CURR_FX_RATE_MAX = 92233720368.54775807;
const int64_t xetraTESBroadcastPacket::SETTL_CURR_FX_RATE_NO_VALUE = 0x8000000000000000;
const int32_t xetraTESBroadcastPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraTESBroadcastPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraTESBroadcastPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t xetraTESBroadcastPacket::PACKAGE_ID_MIN = 0;
const uint32_t xetraTESBroadcastPacket::PACKAGE_ID_MAX = 4294967294;
const uint32_t xetraTESBroadcastPacket::PACKAGE_ID_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraTESBroadcastPacket::TESEXEC_ID_MIN = 0;
const uint32_t xetraTESBroadcastPacket::TESEXEC_ID_MAX = 4294967294;
const uint32_t xetraTESBroadcastPacket::TESEXEC_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t xetraTESBroadcastPacket::SETTL_DATE_MIN = 0;
const int32_t xetraTESBroadcastPacket::SETTL_DATE_MAX = 99991231;
const int32_t xetraTESBroadcastPacket::SETTL_DATE_NO_VALUE = 0xFFFFFFFF;
const int16_t xetraTESBroadcastPacket::TRD_TYPE_MIN = 1;
const int16_t xetraTESBroadcastPacket::TRD_TYPE_MAX = 1005;
const int16_t xetraTESBroadcastPacket::TRD_TYPE_NO_VALUE = 0xFFFF;
const int8_t xetraTESBroadcastPacket::TRADE_REPORT_TYPE_MIN = 0;
const int8_t xetraTESBroadcastPacket::TRADE_REPORT_TYPE_MAX = 13;
const int8_t xetraTESBroadcastPacket::TRADE_REPORT_TYPE_NO_VALUE = 0xFF;
const int8_t xetraTESBroadcastPacket::NO_SIDE_ALLOCS_MIN = 1;
const int8_t xetraTESBroadcastPacket::NO_SIDE_ALLOCS_MAX = 30;
const int8_t xetraTESBroadcastPacket::NO_SIDE_ALLOCS_NO_VALUE = 0xFF;
const char xetraTESBroadcastPacket::MESSAGE_EVENT_SOURCE_NO_VALUE[1] = {0x00};
const size_t xetraTESBroadcastPacket::MESSAGE_EVENT_SOURCE_MAX_LENGTH = 1;
const char xetraTESBroadcastPacket::TRADE_REPORT_TEXT_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTESBroadcastPacket::TRADE_REPORT_TEXT_MAX_LENGTH = 20;
const char xetraTESBroadcastPacket::TRADE_REPORT_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTESBroadcastPacket::TRADE_REPORT_ID_MAX_LENGTH = 20;
const char xetraTESBroadcastPacket::ROOT_PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTESBroadcastPacket::ROOT_PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char xetraTESBroadcastPacket::ROOT_PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraTESBroadcastPacket::ROOT_PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const size_t xetraTESBroadcastPacket::SIDE_ALLOC_GRP_BC_MIN = 1;
const size_t xetraTESBroadcastPacket::SIDE_ALLOC_GRP_BC_MAX = 30;


} // namespace neueda

#endif // XETRA_TESBROADCAST_PACKET_H
