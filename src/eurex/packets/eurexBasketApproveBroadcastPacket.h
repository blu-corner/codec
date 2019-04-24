/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_BASKETAPPROVEBROADCAST_PACKET_H
#define EUREX_BASKETAPPROVEBROADCAST_PACKET_H

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

class eurexBasketApproveBroadcastPacket
{
    public:
        // no value constants
        static const uint64_t BASKET_TRD_MATCH_ID_MIN;
        static const uint64_t BASKET_TRD_MATCH_ID_MAX;
        static const uint64_t BASKET_TRD_MATCH_ID_NO_VALUE;
        static const uint64_t TRANSACT_TIME_MIN;
        static const uint64_t TRANSACT_TIME_MAX;
        static const uint64_t TRANSACT_TIME_NO_VALUE;
        static const uint32_t BASKET_EXEC_ID_MIN;
        static const uint32_t BASKET_EXEC_ID_MAX;
        static const uint32_t BASKET_EXEC_ID_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const int16_t TRD_TYPE_MIN;
        static const int16_t TRD_TYPE_MAX;
        static const int16_t TRD_TYPE_NO_VALUE;
        static const int8_t TRADE_REPORT_TYPE_MIN;
        static const int8_t TRADE_REPORT_TYPE_MAX;
        static const int8_t TRADE_REPORT_TYPE_NO_VALUE;
        static const int8_t BASKET_TRADE_REPORT_TYPE_MIN;
        static const int8_t BASKET_TRADE_REPORT_TYPE_MAX;
        static const int8_t BASKET_TRADE_REPORT_TYPE_NO_VALUE;
        static const char MESSAGE_EVENT_SOURCE_NO_VALUE[1];
        static const size_t MESSAGE_EVENT_SOURCE_MAX_LENGTH;
        static const uint8_t NO_BASKET_SIDE_ALLOC_MIN;
        static const uint8_t NO_BASKET_SIDE_ALLOC_MAX;
        static const uint8_t NO_BASKET_SIDE_ALLOC_NO_VALUE;
        static const int8_t NO_BASKET_ROOT_PARTY_GRPS_MIN;
        static const int8_t NO_BASKET_ROOT_PARTY_GRPS_MAX;
        static const int8_t NO_BASKET_ROOT_PARTY_GRPS_NO_VALUE;
        static const int8_t PARTY_IDENTERING_FIRM_MIN;
        static const int8_t PARTY_IDENTERING_FIRM_MAX;
        static const int8_t PARTY_IDENTERING_FIRM_NO_VALUE;
        static const char PARTY_ENTERING_TRADER_NO_VALUE[6];
        static const size_t PARTY_ENTERING_TRADER_MAX_LENGTH;
        static const char BASKET_TRADE_REPORT_TEXT_NO_VALUE[20];
        static const size_t BASKET_TRADE_REPORT_TEXT_MAX_LENGTH;
        static const char TRADE_REPORT_ID_NO_VALUE[20];
        static const size_t TRADE_REPORT_ID_MAX_LENGTH;
        static const char PAD2_NO_VALUE[2];
        static const size_t PAD2_MAX_LENGTH;
        static const size_t BASKET_ROOT_PARTY_GRP_MIN;
        static const size_t BASKET_ROOT_PARTY_GRP_MAX;
        static const size_t BASKET_SIDE_ALLOC_EXT_BCGRP_MIN;
        static const size_t BASKET_SIDE_ALLOC_EXT_BCGRP_MAX;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexRBCHeaderCompPacket mRBCHeader;
        uint64_t mBasketTrdMatchID;
        uint64_t mTransactTime;
        uint32_t mBasketExecID;
        int32_t mMarketSegmentID;
        int16_t mTrdType;
        int8_t mTradeReportType;
        int8_t mBasketTradeReportType;
        char mMessageEventSource[1];
        uint8_t mNoBasketSideAlloc;
        int8_t mNoBasketRootPartyGrps;
        int8_t mPartyIDEnteringFirm;
        char mPartyEnteringTrader[6];
        char mBasketTradeReportText[20];
        char mTradeReportID[20];
        char mPad2[2];
        vector<eurexBasketRootPartyGrpCompPacket> mBasketRootPartyGrp;
        vector<eurexBasketSideAllocExtBCGrpCompPacket> mBasketSideAllocExtBCGrp;

        // constructor
        eurexBasketApproveBroadcastPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10627;
            mBasketTrdMatchID = BASKET_TRD_MATCH_ID_NO_VALUE;
            mTransactTime = TRANSACT_TIME_NO_VALUE;
            mBasketExecID = BASKET_EXEC_ID_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mTrdType = TRD_TYPE_NO_VALUE;
            mTradeReportType = TRADE_REPORT_TYPE_NO_VALUE;
            mBasketTradeReportType = BASKET_TRADE_REPORT_TYPE_NO_VALUE;
            memcpy(mMessageEventSource, MESSAGE_EVENT_SOURCE_NO_VALUE, sizeof (mMessageEventSource));
            mNoBasketSideAlloc = NO_BASKET_SIDE_ALLOC_NO_VALUE;
            mNoBasketRootPartyGrps = NO_BASKET_ROOT_PARTY_GRPS_NO_VALUE;
            mPartyIDEnteringFirm = PARTY_IDENTERING_FIRM_NO_VALUE;
            memcpy(mPartyEnteringTrader, PARTY_ENTERING_TRADER_NO_VALUE, sizeof (mPartyEnteringTrader));
            memcpy(mBasketTradeReportText, BASKET_TRADE_REPORT_TEXT_NO_VALUE, sizeof (mBasketTradeReportText));
            memcpy(mTradeReportID, TRADE_REPORT_ID_NO_VALUE, sizeof (mTradeReportID));
            memcpy(mPad2, PAD2_NO_VALUE, sizeof (mPad2));
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

        uint64_t getBasketTrdMatchID () const
        {
            return mBasketTrdMatchID;
        }

        bool setBasketTrdMatchID (uint64_t v)
        {
            mBasketTrdMatchID = v;
            return ((BASKET_TRD_MATCH_ID_MIN <= mBasketTrdMatchID && mBasketTrdMatchID <= BASKET_TRD_MATCH_ID_MAX) || mBasketTrdMatchID == BASKET_TRD_MATCH_ID_NO_VALUE);
        }

        bool isBasketTrdMatchIDValid () const
        {
            return (mBasketTrdMatchID != BASKET_TRD_MATCH_ID_NO_VALUE);
        }

        void resetBasketTrdMatchID ()
        {
            mBasketTrdMatchID = BASKET_TRD_MATCH_ID_NO_VALUE;
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

        uint32_t getBasketExecID () const
        {
            return mBasketExecID;
        }

        bool setBasketExecID (uint32_t v)
        {
            mBasketExecID = v;
            return ((BASKET_EXEC_ID_MIN <= mBasketExecID && mBasketExecID <= BASKET_EXEC_ID_MAX) || mBasketExecID == BASKET_EXEC_ID_NO_VALUE);
        }

        bool isBasketExecIDValid () const
        {
            return (mBasketExecID != BASKET_EXEC_ID_NO_VALUE);
        }

        void resetBasketExecID ()
        {
            mBasketExecID = BASKET_EXEC_ID_NO_VALUE;
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

        int8_t getBasketTradeReportType () const
        {
            return mBasketTradeReportType;
        }

        bool setBasketTradeReportType (int8_t v)
        {
            mBasketTradeReportType = v;
            return ((BASKET_TRADE_REPORT_TYPE_MIN <= mBasketTradeReportType && mBasketTradeReportType <= BASKET_TRADE_REPORT_TYPE_MAX) || mBasketTradeReportType == BASKET_TRADE_REPORT_TYPE_NO_VALUE);
        }

        bool isBasketTradeReportTypeValid () const
        {
            return (mBasketTradeReportType != BASKET_TRADE_REPORT_TYPE_NO_VALUE);
        }

        void resetBasketTradeReportType ()
        {
            mBasketTradeReportType = BASKET_TRADE_REPORT_TYPE_NO_VALUE;
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

        uint8_t getNoBasketSideAlloc () const
        {
            return mNoBasketSideAlloc;
        }

        bool setNoBasketSideAlloc (uint8_t v)
        {
            mNoBasketSideAlloc = v;
            return ((NO_BASKET_SIDE_ALLOC_MIN <= mNoBasketSideAlloc && mNoBasketSideAlloc <= NO_BASKET_SIDE_ALLOC_MAX) || mNoBasketSideAlloc == NO_BASKET_SIDE_ALLOC_NO_VALUE);
        }

        bool isNoBasketSideAllocValid () const
        {
            return (mNoBasketSideAlloc != NO_BASKET_SIDE_ALLOC_NO_VALUE);
        }

        void resetNoBasketSideAlloc ()
        {
            mNoBasketSideAlloc = NO_BASKET_SIDE_ALLOC_NO_VALUE;
        }

        int8_t getNoBasketRootPartyGrps () const
        {
            return mNoBasketRootPartyGrps;
        }

        bool setNoBasketRootPartyGrps (int8_t v)
        {
            mNoBasketRootPartyGrps = v;
            return ((NO_BASKET_ROOT_PARTY_GRPS_MIN <= mNoBasketRootPartyGrps && mNoBasketRootPartyGrps <= NO_BASKET_ROOT_PARTY_GRPS_MAX) || mNoBasketRootPartyGrps == NO_BASKET_ROOT_PARTY_GRPS_NO_VALUE);
        }

        bool isNoBasketRootPartyGrpsValid () const
        {
            return (mNoBasketRootPartyGrps != NO_BASKET_ROOT_PARTY_GRPS_NO_VALUE);
        }

        void resetNoBasketRootPartyGrps ()
        {
            mNoBasketRootPartyGrps = NO_BASKET_ROOT_PARTY_GRPS_NO_VALUE;
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

        string getBasketTradeReportText () const
        {
            return string (mBasketTradeReportText, BASKET_TRADE_REPORT_TEXT_MAX_LENGTH);
        }

        bool setBasketTradeReportText (const string& v)
        {
            memset (mBasketTradeReportText, '\0', sizeof (mBasketTradeReportText));
            size_t size = min ((size_t) v.size (), (size_t) BASKET_TRADE_REPORT_TEXT_MAX_LENGTH);
            strncpy (mBasketTradeReportText, v.c_str (), size);
            return (v.size () <= BASKET_TRADE_REPORT_TEXT_MAX_LENGTH);
        }

        bool isBasketTradeReportTextValid () const
        {
            return (memcmp (mBasketTradeReportText, BASKET_TRADE_REPORT_TEXT_NO_VALUE, sizeof (mBasketTradeReportText)) != 0);
        }

        void resetBasketTradeReportText ()
        {
            memcpy (mBasketTradeReportText, BASKET_TRADE_REPORT_TEXT_NO_VALUE, sizeof (mBasketTradeReportText));
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

        const vector<eurexBasketRootPartyGrpCompPacket>& getBasketRootPartyGrp () const
        {
            return mBasketRootPartyGrp;
        }

        bool setBasketRootPartyGrp (const vector<eurexBasketRootPartyGrpCompPacket>& v)
        {
            mBasketRootPartyGrp = v;
            mNoBasketRootPartyGrps = v.size ();
            return (BASKET_ROOT_PARTY_GRP_MIN <= v.size () && v.size () <= BASKET_ROOT_PARTY_GRP_MAX);
        }

        const vector<eurexBasketSideAllocExtBCGrpCompPacket>& getBasketSideAllocExtBCGrp () const
        {
            return mBasketSideAllocExtBCGrp;
        }

        bool setBasketSideAllocExtBCGrp (const vector<eurexBasketSideAllocExtBCGrpCompPacket>& v)
        {
            mBasketSideAllocExtBCGrp = v;
            mNoBasketSideAlloc = v.size ();
            return (BASKET_SIDE_ALLOC_EXT_BCGRP_MIN <= v.size () && v.size () <= BASKET_SIDE_ALLOC_EXT_BCGRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeader.getRawSize()
                + sizeof (mBasketTrdMatchID)
                + sizeof (mTransactTime)
                + sizeof (mBasketExecID)
                + sizeof (mMarketSegmentID)
                + sizeof (mTrdType)
                + sizeof (mTradeReportType)
                + sizeof (mBasketTradeReportType)
                + sizeof (mMessageEventSource)
                + sizeof (mNoBasketSideAlloc)
                + sizeof (mNoBasketRootPartyGrps)
                + sizeof (mPartyIDEnteringFirm)
                + sizeof (mPartyEnteringTrader)
                + sizeof (mBasketTradeReportText)
                + sizeof (mTradeReportID)
                + sizeof (mPad2)
                + eurex::getRawSize (mBasketRootPartyGrp)
                + eurex::getRawSize (mBasketSideAllocExtBCGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoBasketRootPartyGrps = mBasketRootPartyGrp.size ();
            mNoBasketSideAlloc = mBasketSideAllocExtBCGrp.size ();
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mBasketTrdMatchID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mBasketExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mBasketTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mMessageEventSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mNoBasketSideAlloc, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mNoBasketRootPartyGrps, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPartyIDEnteringFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPartyEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mBasketTradeReportText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mBasketRootPartyGrp.size (); i++)
            {
                state = mBasketRootPartyGrp[i].serialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            for (size_t i = 0; i < mBasketSideAllocExtBCGrp.size (); i++)
            {
                state = mBasketSideAllocExtBCGrp[i].serialize (buf, len, used);
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
            state = eurex::deserialize (mBasketTrdMatchID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mBasketExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTrdType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mBasketTradeReportType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mMessageEventSource, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mNoBasketSideAlloc, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mNoBasketRootPartyGrps, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPartyIDEnteringFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPartyEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mBasketTradeReportText, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPad2, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mBasketRootPartyGrp.resize (mNoBasketRootPartyGrps);
            for (vector<eurexBasketRootPartyGrpCompPacket>::iterator it = mBasketRootPartyGrp.begin (); it != mBasketRootPartyGrp.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            mBasketSideAllocExtBCGrp.resize (mNoBasketSideAlloc);
            for (vector<eurexBasketSideAllocExtBCGrpCompPacket>::iterator it = mBasketSideAllocExtBCGrp.begin (); it != mBasketSideAllocExtBCGrp.end (); ++it)
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
            sss << "BasketApproveBroadcast::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeader=" << mRBCHeader.toString () << "],"
                << "[BasketTrdMatchID=" << getBasketTrdMatchID () << "],"
                << "[TransactTime=" << getTransactTime () << "],"
                << "[BasketExecID=" << getBasketExecID () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[TrdType=" << getTrdType () << "],"
                << "[TradeReportType=" << getTradeReportType () << "],"
                << "[BasketTradeReportType=" << getBasketTradeReportType () << "],"
                << "[MessageEventSource=" << getMessageEventSource () << "],"
                << "[NoBasketSideAlloc=" << getNoBasketSideAlloc () << "],"
                << "[NoBasketRootPartyGrps=" << getNoBasketRootPartyGrps () << "],"
                << "[PartyIDEnteringFirm=" << getPartyIDEnteringFirm () << "],"
                << "[PartyEnteringTrader=" << getPartyEnteringTrader () << "],"
                << "[BasketTradeReportText=" << getBasketTradeReportText () << "],"
                << "[TradeReportID=" << getTradeReportID () << "],"
                << "[Pad2=" << getPad2 () << "],"
                << "[BasketRootPartyGrp=" << eurex::toString (getBasketRootPartyGrp ()) << "],"
                << "[BasketSideAllocExtBCGrp=" << eurex::toString (getBasketSideAllocExtBCGrp ()) << "]";
            return sss.str();
        }
};

const uint64_t eurexBasketApproveBroadcastPacket::BASKET_TRD_MATCH_ID_MIN = 0UL;
const uint64_t eurexBasketApproveBroadcastPacket::BASKET_TRD_MATCH_ID_MAX = 18446744073709551614UL;
const uint64_t eurexBasketApproveBroadcastPacket::BASKET_TRD_MATCH_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexBasketApproveBroadcastPacket::TRANSACT_TIME_MIN = 0UL;
const uint64_t eurexBasketApproveBroadcastPacket::TRANSACT_TIME_MAX = 18446744073709551614UL;
const uint64_t eurexBasketApproveBroadcastPacket::TRANSACT_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint32_t eurexBasketApproveBroadcastPacket::BASKET_EXEC_ID_MIN = 0;
const uint32_t eurexBasketApproveBroadcastPacket::BASKET_EXEC_ID_MAX = 4294967294;
const uint32_t eurexBasketApproveBroadcastPacket::BASKET_EXEC_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t eurexBasketApproveBroadcastPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t eurexBasketApproveBroadcastPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t eurexBasketApproveBroadcastPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const int16_t eurexBasketApproveBroadcastPacket::TRD_TYPE_MIN = 1;
const int16_t eurexBasketApproveBroadcastPacket::TRD_TYPE_MAX = 1010;
const int16_t eurexBasketApproveBroadcastPacket::TRD_TYPE_NO_VALUE = 0xFFFF;
const int8_t eurexBasketApproveBroadcastPacket::TRADE_REPORT_TYPE_MIN = 0;
const int8_t eurexBasketApproveBroadcastPacket::TRADE_REPORT_TYPE_MAX = 13;
const int8_t eurexBasketApproveBroadcastPacket::TRADE_REPORT_TYPE_NO_VALUE = 0xFF;
const int8_t eurexBasketApproveBroadcastPacket::BASKET_TRADE_REPORT_TYPE_MIN = 0;
const int8_t eurexBasketApproveBroadcastPacket::BASKET_TRADE_REPORT_TYPE_MAX = 5;
const int8_t eurexBasketApproveBroadcastPacket::BASKET_TRADE_REPORT_TYPE_NO_VALUE = 0xFF;
const char eurexBasketApproveBroadcastPacket::MESSAGE_EVENT_SOURCE_NO_VALUE[1] = {0x00};
const size_t eurexBasketApproveBroadcastPacket::MESSAGE_EVENT_SOURCE_MAX_LENGTH = 1;
const uint8_t eurexBasketApproveBroadcastPacket::NO_BASKET_SIDE_ALLOC_MIN = 1;
const uint8_t eurexBasketApproveBroadcastPacket::NO_BASKET_SIDE_ALLOC_MAX = 198;
const uint8_t eurexBasketApproveBroadcastPacket::NO_BASKET_SIDE_ALLOC_NO_VALUE = 0xFF;
const int8_t eurexBasketApproveBroadcastPacket::NO_BASKET_ROOT_PARTY_GRPS_MIN = 2;
const int8_t eurexBasketApproveBroadcastPacket::NO_BASKET_ROOT_PARTY_GRPS_MAX = 2;
const int8_t eurexBasketApproveBroadcastPacket::NO_BASKET_ROOT_PARTY_GRPS_NO_VALUE = 0xFF;
const int8_t eurexBasketApproveBroadcastPacket::PARTY_IDENTERING_FIRM_MIN = 1;
const int8_t eurexBasketApproveBroadcastPacket::PARTY_IDENTERING_FIRM_MAX = 2;
const int8_t eurexBasketApproveBroadcastPacket::PARTY_IDENTERING_FIRM_NO_VALUE = 0xFF;
const char eurexBasketApproveBroadcastPacket::PARTY_ENTERING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketApproveBroadcastPacket::PARTY_ENTERING_TRADER_MAX_LENGTH = 6;
const char eurexBasketApproveBroadcastPacket::BASKET_TRADE_REPORT_TEXT_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketApproveBroadcastPacket::BASKET_TRADE_REPORT_TEXT_MAX_LENGTH = 20;
const char eurexBasketApproveBroadcastPacket::TRADE_REPORT_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketApproveBroadcastPacket::TRADE_REPORT_ID_MAX_LENGTH = 20;
const char eurexBasketApproveBroadcastPacket::PAD2_NO_VALUE[2] = {0x00, 0x00};
const size_t eurexBasketApproveBroadcastPacket::PAD2_MAX_LENGTH = 2;
const size_t eurexBasketApproveBroadcastPacket::BASKET_ROOT_PARTY_GRP_MIN = 2;
const size_t eurexBasketApproveBroadcastPacket::BASKET_ROOT_PARTY_GRP_MAX = 2;
const size_t eurexBasketApproveBroadcastPacket::BASKET_SIDE_ALLOC_EXT_BCGRP_MIN = 1;
const size_t eurexBasketApproveBroadcastPacket::BASKET_SIDE_ALLOC_EXT_BCGRP_MAX = 198;


} // namespace neueda

#endif // EUREX_BASKETAPPROVEBROADCAST_PACKET_H
