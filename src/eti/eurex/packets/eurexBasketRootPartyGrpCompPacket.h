/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_BASKETROOTPARTYGRPCOMP_PACKET_H
#define EUREX_BASKETROOTPARTYGRPCOMP_PACKET_H

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

class eurexBasketRootPartyGrpCompPacket
{
    public:
        // no value constants
        static const int16_t ROOT_PARTY_SUB_IDTYPE_MIN;
        static const int16_t ROOT_PARTY_SUB_IDTYPE_MAX;
        static const int16_t ROOT_PARTY_SUB_IDTYPE_NO_VALUE;
        static const char ROOT_PARTY_CONTRA_FIRM_NO_VALUE[5];
        static const size_t ROOT_PARTY_CONTRA_FIRM_MAX_LENGTH;
        static const char ROOT_PARTY_CONTRA_TRADER_NO_VALUE[6];
        static const size_t ROOT_PARTY_CONTRA_TRADER_MAX_LENGTH;
        static const char BASKET_SIDE_TRADE_REPORT_ID_NO_VALUE[20];
        static const size_t BASKET_SIDE_TRADE_REPORT_ID_MAX_LENGTH;
        static const char PAD7_NO_VALUE[7];
        static const size_t PAD7_MAX_LENGTH;

        // fields (use with care)
        int16_t mRootPartySubIDType;
        char mRootPartyContraFirm[5];
        char mRootPartyContraTrader[6];
        char mBasketSideTradeReportID[20];
        char mPad7[7];

        // constructor
        eurexBasketRootPartyGrpCompPacket ()
        {
            mRootPartySubIDType = ROOT_PARTY_SUB_IDTYPE_NO_VALUE;
            memcpy(mRootPartyContraFirm, ROOT_PARTY_CONTRA_FIRM_NO_VALUE, sizeof (mRootPartyContraFirm));
            memcpy(mRootPartyContraTrader, ROOT_PARTY_CONTRA_TRADER_NO_VALUE, sizeof (mRootPartyContraTrader));
            memcpy(mBasketSideTradeReportID, BASKET_SIDE_TRADE_REPORT_ID_NO_VALUE, sizeof (mBasketSideTradeReportID));
            memcpy(mPad7, PAD7_NO_VALUE, sizeof (mPad7));
        }

        // getters & setters
        int16_t getRootPartySubIDType () const
        {
            return mRootPartySubIDType;
        }

        bool setRootPartySubIDType (int16_t v)
        {
            mRootPartySubIDType = v;
            return ((ROOT_PARTY_SUB_IDTYPE_MIN <= mRootPartySubIDType && mRootPartySubIDType <= ROOT_PARTY_SUB_IDTYPE_MAX) || mRootPartySubIDType == ROOT_PARTY_SUB_IDTYPE_NO_VALUE);
        }

        bool isRootPartySubIDTypeValid () const
        {
            return (mRootPartySubIDType != ROOT_PARTY_SUB_IDTYPE_NO_VALUE);
        }

        void resetRootPartySubIDType ()
        {
            mRootPartySubIDType = ROOT_PARTY_SUB_IDTYPE_NO_VALUE;
        }

        string getRootPartyContraFirm () const
        {
            return string (mRootPartyContraFirm, ROOT_PARTY_CONTRA_FIRM_MAX_LENGTH);
        }

        bool setRootPartyContraFirm (const string& v)
        {
            memset (mRootPartyContraFirm, '\0', sizeof (mRootPartyContraFirm));
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_CONTRA_FIRM_MAX_LENGTH);
            strncpy (mRootPartyContraFirm, v.c_str (), size);
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

        string getRootPartyContraTrader () const
        {
            return string (mRootPartyContraTrader, ROOT_PARTY_CONTRA_TRADER_MAX_LENGTH);
        }

        bool setRootPartyContraTrader (const string& v)
        {
            memset (mRootPartyContraTrader, '\0', sizeof (mRootPartyContraTrader));
            size_t size = min ((size_t) v.size (), (size_t) ROOT_PARTY_CONTRA_TRADER_MAX_LENGTH);
            strncpy (mRootPartyContraTrader, v.c_str (), size);
            return (v.size () <= ROOT_PARTY_CONTRA_TRADER_MAX_LENGTH);
        }

        bool isRootPartyContraTraderValid () const
        {
            return (memcmp (mRootPartyContraTrader, ROOT_PARTY_CONTRA_TRADER_NO_VALUE, sizeof (mRootPartyContraTrader)) != 0);
        }

        void resetRootPartyContraTrader ()
        {
            memcpy (mRootPartyContraTrader, ROOT_PARTY_CONTRA_TRADER_NO_VALUE, sizeof (mRootPartyContraTrader));
        }

        string getBasketSideTradeReportID () const
        {
            return string (mBasketSideTradeReportID, BASKET_SIDE_TRADE_REPORT_ID_MAX_LENGTH);
        }

        bool setBasketSideTradeReportID (const string& v)
        {
            memset (mBasketSideTradeReportID, '\0', sizeof (mBasketSideTradeReportID));
            size_t size = min ((size_t) v.size (), (size_t) BASKET_SIDE_TRADE_REPORT_ID_MAX_LENGTH);
            strncpy (mBasketSideTradeReportID, v.c_str (), size);
            return (v.size () <= BASKET_SIDE_TRADE_REPORT_ID_MAX_LENGTH);
        }

        bool isBasketSideTradeReportIDValid () const
        {
            return (memcmp (mBasketSideTradeReportID, BASKET_SIDE_TRADE_REPORT_ID_NO_VALUE, sizeof (mBasketSideTradeReportID)) != 0);
        }

        void resetBasketSideTradeReportID ()
        {
            memcpy (mBasketSideTradeReportID, BASKET_SIDE_TRADE_REPORT_ID_NO_VALUE, sizeof (mBasketSideTradeReportID));
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
            size_t result = sizeof (mRootPartySubIDType)
                + sizeof (mRootPartyContraFirm)
                + sizeof (mRootPartyContraTrader)
                + sizeof (mBasketSideTradeReportID)
                + sizeof (mPad7);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::serialize (mRootPartySubIDType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRootPartyContraFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mRootPartyContraTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mBasketSideTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::deserialize (mRootPartySubIDType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRootPartyContraFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mRootPartyContraTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mBasketSideTradeReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad7, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "BasketRootPartyGrpComp::"
                << "[RootPartySubIDType=" << getRootPartySubIDType () << "],"
                << "[RootPartyContraFirm=" << getRootPartyContraFirm () << "],"
                << "[RootPartyContraTrader=" << getRootPartyContraTrader () << "],"
                << "[BasketSideTradeReportID=" << getBasketSideTradeReportID () << "],"
                << "[Pad7=" << getPad7 () << "]";
            return sss.str();
        }
};

const int16_t eurexBasketRootPartyGrpCompPacket::ROOT_PARTY_SUB_IDTYPE_MIN = 4001;
const int16_t eurexBasketRootPartyGrpCompPacket::ROOT_PARTY_SUB_IDTYPE_MAX = 4003;
const int16_t eurexBasketRootPartyGrpCompPacket::ROOT_PARTY_SUB_IDTYPE_NO_VALUE = 0xFFFF;
const char eurexBasketRootPartyGrpCompPacket::ROOT_PARTY_CONTRA_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketRootPartyGrpCompPacket::ROOT_PARTY_CONTRA_FIRM_MAX_LENGTH = 5;
const char eurexBasketRootPartyGrpCompPacket::ROOT_PARTY_CONTRA_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketRootPartyGrpCompPacket::ROOT_PARTY_CONTRA_TRADER_MAX_LENGTH = 6;
const char eurexBasketRootPartyGrpCompPacket::BASKET_SIDE_TRADE_REPORT_ID_NO_VALUE[20] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketRootPartyGrpCompPacket::BASKET_SIDE_TRADE_REPORT_ID_MAX_LENGTH = 20;
const char eurexBasketRootPartyGrpCompPacket::PAD7_NO_VALUE[7] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketRootPartyGrpCompPacket::PAD7_MAX_LENGTH = 7;


} // namespace neueda

#endif // EUREX_BASKETROOTPARTYGRPCOMP_PACKET_H
