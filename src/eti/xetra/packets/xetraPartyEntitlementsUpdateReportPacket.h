/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 08/03/2020
 */
#ifndef XETRA_PARTYENTITLEMENTSUPDATEREPORT_PACKET_H
#define XETRA_PARTYENTITLEMENTSUPDATEREPORT_PACKET_H

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

class xetraPartyEntitlementsUpdateReportPacket
{
    public:
        // no value constants
        static const uint64_t TRANSACT_TIME_MIN;
        static const uint64_t TRANSACT_TIME_MAX;
        static const uint64_t TRANSACT_TIME_NO_VALUE;
        static const int32_t TRADE_DATE_MIN;
        static const int32_t TRADE_DATE_MAX;
        static const int32_t TRADE_DATE_NO_VALUE;
        static const uint32_t PARTY_DETAIL_IDEXECUTING_UNIT_MIN;
        static const uint32_t PARTY_DETAIL_IDEXECUTING_UNIT_MAX;
        static const uint32_t PARTY_DETAIL_IDEXECUTING_UNIT_NO_VALUE;
        static const uint32_t REQUESTING_PARTY_IDEXECUTING_SYSTEM_MIN;
        static const uint32_t REQUESTING_PARTY_IDEXECUTING_SYSTEM_MAX;
        static const uint32_t REQUESTING_PARTY_IDEXECUTING_SYSTEM_NO_VALUE;
        static const int16_t MARKET_ID_MIN;
        static const int16_t MARKET_ID_MAX;
        static const int16_t MARKET_ID_NO_VALUE;
        static const char LIST_UPDATE_ACTION_NO_VALUE[1];
        static const size_t LIST_UPDATE_ACTION_MAX_LENGTH;
        static const char REQUESTING_PARTY_ENTERING_FIRM_NO_VALUE[9];
        static const size_t REQUESTING_PARTY_ENTERING_FIRM_MAX_LENGTH;
        static const char REQUESTING_PARTY_CLEARING_FIRM_NO_VALUE[9];
        static const size_t REQUESTING_PARTY_CLEARING_FIRM_MAX_LENGTH;
        static const int8_t PARTY_DETAIL_STATUS_MIN;
        static const int8_t PARTY_DETAIL_STATUS_MAX;
        static const int8_t PARTY_DETAIL_STATUS_NO_VALUE;
        static const char PAD6_NO_VALUE[6];
        static const size_t PAD6_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraRBCHeaderCompPacket mRBCHeader;
        uint64_t mTransactTime;
        int32_t mTradeDate;
        uint32_t mPartyDetailIDExecutingUnit;
        uint32_t mRequestingPartyIDExecutingSystem;
        int16_t mMarketID;
        char mListUpdateAction[1];
        char mRequestingPartyEnteringFirm[9];
        char mRequestingPartyClearingFirm[9];
        int8_t mPartyDetailStatus;
        char mPad6[6];

        // constructor
        xetraPartyEntitlementsUpdateReportPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10034;
            mTransactTime = TRANSACT_TIME_NO_VALUE;
            mTradeDate = TRADE_DATE_NO_VALUE;
            mPartyDetailIDExecutingUnit = PARTY_DETAIL_IDEXECUTING_UNIT_NO_VALUE;
            mRequestingPartyIDExecutingSystem = REQUESTING_PARTY_IDEXECUTING_SYSTEM_NO_VALUE;
            mMarketID = MARKET_ID_NO_VALUE;
            memcpy(mListUpdateAction, LIST_UPDATE_ACTION_NO_VALUE, sizeof (mListUpdateAction));
            memcpy(mRequestingPartyEnteringFirm, REQUESTING_PARTY_ENTERING_FIRM_NO_VALUE, sizeof (mRequestingPartyEnteringFirm));
            memcpy(mRequestingPartyClearingFirm, REQUESTING_PARTY_CLEARING_FIRM_NO_VALUE, sizeof (mRequestingPartyClearingFirm));
            mPartyDetailStatus = PARTY_DETAIL_STATUS_NO_VALUE;
            memcpy(mPad6, PAD6_NO_VALUE, sizeof (mPad6));
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

        uint32_t getPartyDetailIDExecutingUnit () const
        {
            return mPartyDetailIDExecutingUnit;
        }

        bool setPartyDetailIDExecutingUnit (uint32_t v)
        {
            mPartyDetailIDExecutingUnit = v;
            return ((PARTY_DETAIL_IDEXECUTING_UNIT_MIN <= mPartyDetailIDExecutingUnit && mPartyDetailIDExecutingUnit <= PARTY_DETAIL_IDEXECUTING_UNIT_MAX) || mPartyDetailIDExecutingUnit == PARTY_DETAIL_IDEXECUTING_UNIT_NO_VALUE);
        }

        bool isPartyDetailIDExecutingUnitValid () const
        {
            return (mPartyDetailIDExecutingUnit != PARTY_DETAIL_IDEXECUTING_UNIT_NO_VALUE);
        }

        void resetPartyDetailIDExecutingUnit ()
        {
            mPartyDetailIDExecutingUnit = PARTY_DETAIL_IDEXECUTING_UNIT_NO_VALUE;
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

        string getListUpdateAction () const
        {
            return string (mListUpdateAction, LIST_UPDATE_ACTION_MAX_LENGTH);
        }

        bool setListUpdateAction (const string& v)
        {
            memset (mListUpdateAction, '\0', sizeof (mListUpdateAction));
            size_t size = min ((size_t) v.size (), (size_t) LIST_UPDATE_ACTION_MAX_LENGTH);
            strncpy (mListUpdateAction, v.c_str (), size);
            return (v.size () <= LIST_UPDATE_ACTION_MAX_LENGTH);
        }

        bool isListUpdateActionValid () const
        {
            return (memcmp (mListUpdateAction, LIST_UPDATE_ACTION_NO_VALUE, sizeof (mListUpdateAction)) != 0);
        }

        void resetListUpdateAction ()
        {
            memcpy (mListUpdateAction, LIST_UPDATE_ACTION_NO_VALUE, sizeof (mListUpdateAction));
        }

        string getRequestingPartyEnteringFirm () const
        {
            return string (mRequestingPartyEnteringFirm, REQUESTING_PARTY_ENTERING_FIRM_MAX_LENGTH);
        }

        bool setRequestingPartyEnteringFirm (const string& v)
        {
            memset (mRequestingPartyEnteringFirm, '\0', sizeof (mRequestingPartyEnteringFirm));
            size_t size = min ((size_t) v.size (), (size_t) REQUESTING_PARTY_ENTERING_FIRM_MAX_LENGTH);
            strncpy (mRequestingPartyEnteringFirm, v.c_str (), size);
            return (v.size () <= REQUESTING_PARTY_ENTERING_FIRM_MAX_LENGTH);
        }

        bool isRequestingPartyEnteringFirmValid () const
        {
            return (memcmp (mRequestingPartyEnteringFirm, REQUESTING_PARTY_ENTERING_FIRM_NO_VALUE, sizeof (mRequestingPartyEnteringFirm)) != 0);
        }

        void resetRequestingPartyEnteringFirm ()
        {
            memcpy (mRequestingPartyEnteringFirm, REQUESTING_PARTY_ENTERING_FIRM_NO_VALUE, sizeof (mRequestingPartyEnteringFirm));
        }

        string getRequestingPartyClearingFirm () const
        {
            return string (mRequestingPartyClearingFirm, REQUESTING_PARTY_CLEARING_FIRM_MAX_LENGTH);
        }

        bool setRequestingPartyClearingFirm (const string& v)
        {
            memset (mRequestingPartyClearingFirm, '\0', sizeof (mRequestingPartyClearingFirm));
            size_t size = min ((size_t) v.size (), (size_t) REQUESTING_PARTY_CLEARING_FIRM_MAX_LENGTH);
            strncpy (mRequestingPartyClearingFirm, v.c_str (), size);
            return (v.size () <= REQUESTING_PARTY_CLEARING_FIRM_MAX_LENGTH);
        }

        bool isRequestingPartyClearingFirmValid () const
        {
            return (memcmp (mRequestingPartyClearingFirm, REQUESTING_PARTY_CLEARING_FIRM_NO_VALUE, sizeof (mRequestingPartyClearingFirm)) != 0);
        }

        void resetRequestingPartyClearingFirm ()
        {
            memcpy (mRequestingPartyClearingFirm, REQUESTING_PARTY_CLEARING_FIRM_NO_VALUE, sizeof (mRequestingPartyClearingFirm));
        }

        int8_t getPartyDetailStatus () const
        {
            return mPartyDetailStatus;
        }

        bool setPartyDetailStatus (int8_t v)
        {
            mPartyDetailStatus = v;
            return ((PARTY_DETAIL_STATUS_MIN <= mPartyDetailStatus && mPartyDetailStatus <= PARTY_DETAIL_STATUS_MAX) || mPartyDetailStatus == PARTY_DETAIL_STATUS_NO_VALUE);
        }

        bool isPartyDetailStatusValid () const
        {
            return (mPartyDetailStatus != PARTY_DETAIL_STATUS_NO_VALUE);
        }

        void resetPartyDetailStatus ()
        {
            mPartyDetailStatus = PARTY_DETAIL_STATUS_NO_VALUE;
        }

        string getPad6 () const
        {
            return string (mPad6, PAD6_MAX_LENGTH);
        }

        bool setPad6 (const string& v)
        {
            memset (mPad6, '\0', sizeof (mPad6));
            size_t size = min ((size_t) v.size (), (size_t) PAD6_MAX_LENGTH);
            strncpy (mPad6, v.c_str (), size);
            return (v.size () <= PAD6_MAX_LENGTH);
        }

        bool isPad6Valid () const
        {
            return (memcmp (mPad6, PAD6_NO_VALUE, sizeof (mPad6)) != 0);
        }

        void resetPad6 ()
        {
            memcpy (mPad6, PAD6_NO_VALUE, sizeof (mPad6));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeader.getRawSize()
                + sizeof (mTransactTime)
                + sizeof (mTradeDate)
                + sizeof (mPartyDetailIDExecutingUnit)
                + sizeof (mRequestingPartyIDExecutingSystem)
                + sizeof (mMarketID)
                + sizeof (mListUpdateAction)
                + sizeof (mRequestingPartyEnteringFirm)
                + sizeof (mRequestingPartyClearingFirm)
                + sizeof (mPartyDetailStatus)
                + sizeof (mPad6);
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
            state = eti::serialize (mPartyDetailIDExecutingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRequestingPartyIDExecutingSystem, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mListUpdateAction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRequestingPartyEnteringFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRequestingPartyClearingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyDetailStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad6, buf, len, used);
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
            state = eti::deserialize (mPartyDetailIDExecutingUnit, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRequestingPartyIDExecutingSystem, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mListUpdateAction, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRequestingPartyEnteringFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRequestingPartyClearingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyDetailStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "PartyEntitlementsUpdateReport::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeader=" << mRBCHeader.toString () << "],"
                << "[TransactTime=" << getTransactTime () << "],"
                << "[TradeDate=" << getTradeDate () << "],"
                << "[PartyDetailIDExecutingUnit=" << getPartyDetailIDExecutingUnit () << "],"
                << "[RequestingPartyIDExecutingSystem=" << getRequestingPartyIDExecutingSystem () << "],"
                << "[MarketID=" << getMarketID () << "],"
                << "[ListUpdateAction=" << getListUpdateAction () << "],"
                << "[RequestingPartyEnteringFirm=" << getRequestingPartyEnteringFirm () << "],"
                << "[RequestingPartyClearingFirm=" << getRequestingPartyClearingFirm () << "],"
                << "[PartyDetailStatus=" << getPartyDetailStatus () << "],"
                << "[Pad6=" << getPad6 () << "]";
            return sss.str();
        }
};

const uint64_t xetraPartyEntitlementsUpdateReportPacket::TRANSACT_TIME_MIN = 0UL;
const uint64_t xetraPartyEntitlementsUpdateReportPacket::TRANSACT_TIME_MAX = 18446744073709551614UL;
const uint64_t xetraPartyEntitlementsUpdateReportPacket::TRANSACT_TIME_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int32_t xetraPartyEntitlementsUpdateReportPacket::TRADE_DATE_MIN = 0;
const int32_t xetraPartyEntitlementsUpdateReportPacket::TRADE_DATE_MAX = 99991231;
const int32_t xetraPartyEntitlementsUpdateReportPacket::TRADE_DATE_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraPartyEntitlementsUpdateReportPacket::PARTY_DETAIL_IDEXECUTING_UNIT_MIN = 0;
const uint32_t xetraPartyEntitlementsUpdateReportPacket::PARTY_DETAIL_IDEXECUTING_UNIT_MAX = 4294967294;
const uint32_t xetraPartyEntitlementsUpdateReportPacket::PARTY_DETAIL_IDEXECUTING_UNIT_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraPartyEntitlementsUpdateReportPacket::REQUESTING_PARTY_IDEXECUTING_SYSTEM_MIN = 0;
const uint32_t xetraPartyEntitlementsUpdateReportPacket::REQUESTING_PARTY_IDEXECUTING_SYSTEM_MAX = 4294967294;
const uint32_t xetraPartyEntitlementsUpdateReportPacket::REQUESTING_PARTY_IDEXECUTING_SYSTEM_NO_VALUE = 0xFFFFFFFF;
const int16_t xetraPartyEntitlementsUpdateReportPacket::MARKET_ID_MIN = 1;
const int16_t xetraPartyEntitlementsUpdateReportPacket::MARKET_ID_MAX = 255;
const int16_t xetraPartyEntitlementsUpdateReportPacket::MARKET_ID_NO_VALUE = 0xFFFF;
const char xetraPartyEntitlementsUpdateReportPacket::LIST_UPDATE_ACTION_NO_VALUE[1] = {0x00};
const size_t xetraPartyEntitlementsUpdateReportPacket::LIST_UPDATE_ACTION_MAX_LENGTH = 1;
const char xetraPartyEntitlementsUpdateReportPacket::REQUESTING_PARTY_ENTERING_FIRM_NO_VALUE[9] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraPartyEntitlementsUpdateReportPacket::REQUESTING_PARTY_ENTERING_FIRM_MAX_LENGTH = 9;
const char xetraPartyEntitlementsUpdateReportPacket::REQUESTING_PARTY_CLEARING_FIRM_NO_VALUE[9] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraPartyEntitlementsUpdateReportPacket::REQUESTING_PARTY_CLEARING_FIRM_MAX_LENGTH = 9;
const int8_t xetraPartyEntitlementsUpdateReportPacket::PARTY_DETAIL_STATUS_MIN = 0;
const int8_t xetraPartyEntitlementsUpdateReportPacket::PARTY_DETAIL_STATUS_MAX = 1;
const int8_t xetraPartyEntitlementsUpdateReportPacket::PARTY_DETAIL_STATUS_NO_VALUE = 0xFF;
const char xetraPartyEntitlementsUpdateReportPacket::PAD6_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraPartyEntitlementsUpdateReportPacket::PAD6_MAX_LENGTH = 6;


} // namespace neueda

#endif // XETRA_PARTYENTITLEMENTSUPDATEREPORT_PACKET_H
