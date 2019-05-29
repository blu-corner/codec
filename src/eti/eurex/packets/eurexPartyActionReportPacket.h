/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_PARTYACTIONREPORT_PACKET_H
#define EUREX_PARTYACTIONREPORT_PACKET_H

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

class eurexPartyActionReportPacket
{
    public:
        // no value constants
        static const uint64_t TRANSACT_TIME_MIN;
        static const uint64_t TRANSACT_TIME_MAX;
        static const uint64_t TRANSACT_TIME_NO_VALUE;
        static const int32_t TRADE_DATE_MIN;
        static const int32_t TRADE_DATE_MAX;
        static const int32_t TRADE_DATE_NO_VALUE;
        static const uint32_t REQUESTING_PARTY_IDEXECUTING_TRADER_MIN;
        static const uint32_t REQUESTING_PARTY_IDEXECUTING_TRADER_MAX;
        static const uint32_t REQUESTING_PARTY_IDEXECUTING_TRADER_NO_VALUE;
        static const uint32_t PARTY_IDEXECUTING_UNIT_MIN;
        static const uint32_t PARTY_IDEXECUTING_UNIT_MAX;
        static const uint32_t PARTY_IDEXECUTING_UNIT_NO_VALUE;
        static const uint32_t PARTY_IDEXECUTING_TRADER_MIN;
        static const uint32_t PARTY_IDEXECUTING_TRADER_MAX;
        static const uint32_t PARTY_IDEXECUTING_TRADER_NO_VALUE;
        static const uint32_t REQUESTING_PARTY_IDEXECUTING_SYSTEM_MIN;
        static const uint32_t REQUESTING_PARTY_IDEXECUTING_SYSTEM_MAX;
        static const uint32_t REQUESTING_PARTY_IDEXECUTING_SYSTEM_NO_VALUE;
        static const int16_t MARKET_ID_MIN;
        static const int16_t MARKET_ID_MAX;
        static const int16_t MARKET_ID_NO_VALUE;
        static const int8_t PARTY_ACTION_TYPE_MIN;
        static const int8_t PARTY_ACTION_TYPE_MAX;
        static const int8_t PARTY_ACTION_TYPE_NO_VALUE;
        static const int8_t REQUESTING_PARTY_IDENTERING_FIRM_MIN;
        static const int8_t REQUESTING_PARTY_IDENTERING_FIRM_MAX;
        static const int8_t REQUESTING_PARTY_IDENTERING_FIRM_NO_VALUE;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexRBCHeaderCompPacket mRBCHeader;
        uint64_t mTransactTime;
        int32_t mTradeDate;
        uint32_t mRequestingPartyIDExecutingTrader;
        uint32_t mPartyIDExecutingUnit;
        uint32_t mPartyIDExecutingTrader;
        uint32_t mRequestingPartyIDExecutingSystem;
        int16_t mMarketID;
        int8_t mPartyActionType;
        int8_t mRequestingPartyIDEnteringFirm;

        // constructor
        eurexPartyActionReportPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10042;
            mTransactTime = TRANSACT_TIME_NO_VALUE;
            mTradeDate = TRADE_DATE_NO_VALUE;
            mRequestingPartyIDExecutingTrader = REQUESTING_PARTY_IDEXECUTING_TRADER_NO_VALUE;
            mPartyIDExecutingUnit = PARTY_IDEXECUTING_UNIT_NO_VALUE;
            mPartyIDExecutingTrader = PARTY_IDEXECUTING_TRADER_NO_VALUE;
            mRequestingPartyIDExecutingSystem = REQUESTING_PARTY_IDEXECUTING_SYSTEM_NO_VALUE;
            mMarketID = MARKET_ID_NO_VALUE;
            mPartyActionType = PARTY_ACTION_TYPE_NO_VALUE;
            mRequestingPartyIDEnteringFirm = REQUESTING_PARTY_IDENTERING_FIRM_NO_VALUE;
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

        int32_t getTradeDate () const
        {
            return mTradeDate;
        }

        bool setTradeDate (int32_t v)
        {
            mTradeDate = v;
            return ((TRADE_DATE_MIN <= mTradeDate && mTradeDate <= TRADE_DATE_MAX) || mTradeDate == TRADE_DATE_NO_VALUE);
        }

        bool isTradeDateValid () const
        {
            return (mTradeDate != TRADE_DATE_NO_VALUE);
        }

        void resetTradeDate ()
        {
            mTradeDate = TRADE_DATE_NO_VALUE;
        }

        uint32_t getRequestingPartyIDExecutingTrader () const
        {
            return mRequestingPartyIDExecutingTrader;
        }

        bool setRequestingPartyIDExecutingTrader (uint32_t v)
        {
            mRequestingPartyIDExecutingTrader = v;
            return ((REQUESTING_PARTY_IDEXECUTING_TRADER_MIN <= mRequestingPartyIDExecutingTrader && mRequestingPartyIDExecutingTrader <= REQUESTING_PARTY_IDEXECUTING_TRADER_MAX) || mRequestingPartyIDExecutingTrader == REQUESTING_PARTY_IDEXECUTING_TRADER_NO_VALUE);
        }

        bool isRequestingPartyIDExecutingTraderValid () const
        {
            return (mRequestingPartyIDExecutingTrader != REQUESTING_PARTY_IDEXECUTING_TRADER_NO_VALUE);
        }

        void resetRequestingPartyIDExecutingTrader ()
        {
            mRequestingPartyIDExecutingTrader = REQUESTING_PARTY_IDEXECUTING_TRADER_NO_VALUE;
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

        uint32_t getRequestingPartyIDExecutingSystem () const
        {
            return mRequestingPartyIDExecutingSystem;
        }

        bool setRequestingPartyIDExecutingSystem (uint32_t v)
        {
            mRequestingPartyIDExecutingSystem = v;
            return ((REQUESTING_PARTY_IDEXECUTING_SYSTEM_MIN <= mRequestingPartyIDExecutingSystem && mRequestingPartyIDExecutingSystem <= REQUESTING_PARTY_IDEXECUTING_SYSTEM_MAX) || mRequestingPartyIDExecutingSystem == REQUESTING_PARTY_IDEXECUTING_SYSTEM_NO_VALUE);
        }

        bool isRequestingPartyIDExecutingSystemValid () const
        {
            return (mRequestingPartyIDExecutingSystem != REQUESTING_PARTY_IDEXECUTING_SYSTEM_NO_VALUE);
        }

        void resetRequestingPartyIDExecutingSystem ()
        {
            mRequestingPartyIDExecutingSystem = REQUESTING_PARTY_IDEXECUTING_SYSTEM_NO_VALUE;
        }

        int16_t getMarketID () const
        {
            return mMarketID;
        }

        bool setMarketID (int16_t v)
        {
            mMarketID = v;
            return ((MARKET_ID_MIN <= mMarketID && mMarketID <= MARKET_ID_MAX) || mMarketID == MARKET_ID_NO_VALUE);
        }

        bool isMarketIDValid () const
        {
            return (mMarketID != MARKET_ID_NO_VALUE);
        }

        void resetMarketID ()
        {
            mMarketID = MARKET_ID_NO_VALUE;
        }

        int8_t getPartyActionType () const
        {
            return mPartyActionType;
        }

        bool setPartyActionType (int8_t v)
        {
            mPartyActionType = v;
            return ((PARTY_ACTION_TYPE_MIN <= mPartyActionType && mPartyActionType <= PARTY_ACTION_TYPE_MAX) || mPartyActionType == PARTY_ACTION_TYPE_NO_VALUE);
        }

        bool isPartyActionTypeValid () const
        {
            return (mPartyActionType != PARTY_ACTION_TYPE_NO_VALUE);
        }

        void resetPartyActionType ()
        {
            mPartyActionType = PARTY_ACTION_TYPE_NO_VALUE;
        }

        int8_t getRequestingPartyIDEnteringFirm () const
        {
            return mRequestingPartyIDEnteringFirm;
        }

        bool setRequestingPartyIDEnteringFirm (int8_t v)
        {
            mRequestingPartyIDEnteringFirm = v;
            return ((REQUESTING_PARTY_IDENTERING_FIRM_MIN <= mRequestingPartyIDEnteringFirm && mRequestingPartyIDEnteringFirm <= REQUESTING_PARTY_IDENTERING_FIRM_MAX) || mRequestingPartyIDEnteringFirm == REQUESTING_PARTY_IDENTERING_FIRM_NO_VALUE);
        }

        bool isRequestingPartyIDEnteringFirmValid () const
        {
            return (mRequestingPartyIDEnteringFirm != REQUESTING_PARTY_IDENTERING_FIRM_NO_VALUE);
        }

        void resetRequestingPartyIDEnteringFirm ()
        {
            mRequestingPartyIDEnteringFirm = REQUESTING_PARTY_IDENTERING_FIRM_NO_VALUE;
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeader.getRawSize()
                + sizeof (mTransactTime)
                + sizeof (mTradeDate)
                + sizeof (mRequestingPartyIDExecutingTrader)
                + sizeof (mPartyIDExecutingUnit)
                + sizeof (mPartyIDExecutingTrader)
                + sizeof (mRequestingPartyIDExecutingSystem)
                + sizeof (mMarketID)
                + sizeof (mPartyActionType)
                + sizeof (mRequestingPartyIDEnteringFirm);
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
            state = eti::serialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradeDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRequestingPartyIDExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDExecutingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRequestingPartyIDExecutingSystem, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyActionType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRequestingPartyIDEnteringFirm, buf, len, used);
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
            state = eti::deserialize (mTransactTime, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradeDate, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRequestingPartyIDExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDExecutingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRequestingPartyIDExecutingSystem, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyActionType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRequestingPartyIDEnteringFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "PartyActionReport::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeader=" << mRBCHeader.toString () << "],"
                << "[TransactTime=" << getTransactTime () << "],"
                << "[TradeDate=" << getTradeDate () << "],"
                << "[RequestingPartyIDExecutingTrader=" << getRequestingPartyIDExecutingTrader () << "],"
                << "[PartyIDExecutingUnit=" << getPartyIDExecutingUnit () << "],"
                << "[PartyIDExecutingTrader=" << getPartyIDExecutingTrader () << "],"
                << "[RequestingPartyIDExecutingSystem=" << getRequestingPartyIDExecutingSystem () << "],"
                << "[MarketID=" << getMarketID () << "],"
                << "[PartyActionType=" << getPartyActionType () << "],"
                << "[RequestingPartyIDEnteringFirm=" << getRequestingPartyIDEnteringFirm () << "]";
            return sss.str();
        }
};

const uint64_t eurexPartyActionReportPacket::TRANSACT_TIME_MIN = 0UL;
const uint64_t eurexPartyActionReportPacket::TRANSACT_TIME_MAX = 18446744073709551614UL;
const uint64_t eurexPartyActionReportPacket::TRANSACT_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int32_t eurexPartyActionReportPacket::TRADE_DATE_MIN = 0;
const int32_t eurexPartyActionReportPacket::TRADE_DATE_MAX = 99991231;
const int32_t eurexPartyActionReportPacket::TRADE_DATE_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexPartyActionReportPacket::REQUESTING_PARTY_IDEXECUTING_TRADER_MIN = 0;
const uint32_t eurexPartyActionReportPacket::REQUESTING_PARTY_IDEXECUTING_TRADER_MAX = 4294967294;
const uint32_t eurexPartyActionReportPacket::REQUESTING_PARTY_IDEXECUTING_TRADER_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexPartyActionReportPacket::PARTY_IDEXECUTING_UNIT_MIN = 0;
const uint32_t eurexPartyActionReportPacket::PARTY_IDEXECUTING_UNIT_MAX = 4294967294;
const uint32_t eurexPartyActionReportPacket::PARTY_IDEXECUTING_UNIT_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexPartyActionReportPacket::PARTY_IDEXECUTING_TRADER_MIN = 0;
const uint32_t eurexPartyActionReportPacket::PARTY_IDEXECUTING_TRADER_MAX = 4294967294;
const uint32_t eurexPartyActionReportPacket::PARTY_IDEXECUTING_TRADER_NO_VALUE = 0xFFFFFFFF;
const uint32_t eurexPartyActionReportPacket::REQUESTING_PARTY_IDEXECUTING_SYSTEM_MIN = 0;
const uint32_t eurexPartyActionReportPacket::REQUESTING_PARTY_IDEXECUTING_SYSTEM_MAX = 4294967294;
const uint32_t eurexPartyActionReportPacket::REQUESTING_PARTY_IDEXECUTING_SYSTEM_NO_VALUE = 0xFFFFFFFF;
const int16_t eurexPartyActionReportPacket::MARKET_ID_MIN = 1;
const int16_t eurexPartyActionReportPacket::MARKET_ID_MAX = 255;
const int16_t eurexPartyActionReportPacket::MARKET_ID_NO_VALUE = 0xFFFF;
const int8_t eurexPartyActionReportPacket::PARTY_ACTION_TYPE_MIN = 1;
const int8_t eurexPartyActionReportPacket::PARTY_ACTION_TYPE_MAX = 2;
const int8_t eurexPartyActionReportPacket::PARTY_ACTION_TYPE_NO_VALUE = 0xFF;
const int8_t eurexPartyActionReportPacket::REQUESTING_PARTY_IDENTERING_FIRM_MIN = 1;
const int8_t eurexPartyActionReportPacket::REQUESTING_PARTY_IDENTERING_FIRM_MAX = 2;
const int8_t eurexPartyActionReportPacket::REQUESTING_PARTY_IDENTERING_FIRM_NO_VALUE = 0xFF;


} // namespace neueda

#endif // EUREX_PARTYACTIONREPORT_PACKET_H
