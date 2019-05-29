/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_BASKETSIDEALLOCGRPCOMP_PACKET_H
#define EUREX_BASKETSIDEALLOCGRPCOMP_PACKET_H

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

class eurexBasketSideAllocGrpCompPacket
{
    public:
        // no value constants
        static const double ALLOC_QTY_MIN;
        static const double ALLOC_QTY_MAX;
        static const int64_t ALLOC_QTY_NO_VALUE;
        static const uint32_t INDIVIDUAL_ALLOC_ID_MIN;
        static const uint32_t INDIVIDUAL_ALLOC_ID_MAX;
        static const uint32_t INDIVIDUAL_ALLOC_ID_NO_VALUE;
        static const int16_t PARTY_SUB_IDTYPE_MIN;
        static const int16_t PARTY_SUB_IDTYPE_MAX;
        static const int16_t PARTY_SUB_IDTYPE_NO_VALUE;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const int8_t INSTRMT_MATCH_SIDE_ID_MIN;
        static const int8_t INSTRMT_MATCH_SIDE_ID_MAX;
        static const int8_t INSTRMT_MATCH_SIDE_ID_NO_VALUE;
        static const int8_t TRADE_ALLOC_STATUS_MIN;
        static const int8_t TRADE_ALLOC_STATUS_MAX;
        static const int8_t TRADE_ALLOC_STATUS_NO_VALUE;
        static const char PARTY_EXECUTING_FIRM_NO_VALUE[5];
        static const size_t PARTY_EXECUTING_FIRM_MAX_LENGTH;
        static const char PARTY_EXECUTING_TRADER_NO_VALUE[6];
        static const size_t PARTY_EXECUTING_TRADER_MAX_LENGTH;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;

        // fields (use with care)
        int64_t mAllocQty;
        uint32_t mIndividualAllocID;
        int16_t mPartySubIDType;
        int8_t mSide;
        int8_t mInstrmtMatchSideID;
        int8_t mTradeAllocStatus;
        char mPartyExecutingFirm[5];
        char mPartyExecutingTrader[6];
        char mPad4[4];

        // constructor
        eurexBasketSideAllocGrpCompPacket ()
        {
            mAllocQty = ALLOC_QTY_NO_VALUE;
            mIndividualAllocID = INDIVIDUAL_ALLOC_ID_NO_VALUE;
            mPartySubIDType = PARTY_SUB_IDTYPE_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            mInstrmtMatchSideID = INSTRMT_MATCH_SIDE_ID_NO_VALUE;
            mTradeAllocStatus = TRADE_ALLOC_STATUS_NO_VALUE;
            memcpy(mPartyExecutingFirm, PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mPartyExecutingFirm));
            memcpy(mPartyExecutingTrader, PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mPartyExecutingTrader));
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

        uint32_t getIndividualAllocID () const
        {
            return mIndividualAllocID;
        }

        bool setIndividualAllocID (uint32_t v)
        {
            mIndividualAllocID = v;
            return ((INDIVIDUAL_ALLOC_ID_MIN <= mIndividualAllocID && mIndividualAllocID <= INDIVIDUAL_ALLOC_ID_MAX) || mIndividualAllocID == INDIVIDUAL_ALLOC_ID_NO_VALUE);
        }

        bool isIndividualAllocIDValid () const
        {
            return (mIndividualAllocID != INDIVIDUAL_ALLOC_ID_NO_VALUE);
        }

        void resetIndividualAllocID ()
        {
            mIndividualAllocID = INDIVIDUAL_ALLOC_ID_NO_VALUE;
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

        int8_t getInstrmtMatchSideID () const
        {
            return mInstrmtMatchSideID;
        }

        bool setInstrmtMatchSideID (int8_t v)
        {
            mInstrmtMatchSideID = v;
            return ((INSTRMT_MATCH_SIDE_ID_MIN <= mInstrmtMatchSideID && mInstrmtMatchSideID <= INSTRMT_MATCH_SIDE_ID_MAX) || mInstrmtMatchSideID == INSTRMT_MATCH_SIDE_ID_NO_VALUE);
        }

        bool isInstrmtMatchSideIDValid () const
        {
            return (mInstrmtMatchSideID != INSTRMT_MATCH_SIDE_ID_NO_VALUE);
        }

        void resetInstrmtMatchSideID ()
        {
            mInstrmtMatchSideID = INSTRMT_MATCH_SIDE_ID_NO_VALUE;
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
                + sizeof (mIndividualAllocID)
                + sizeof (mPartySubIDType)
                + sizeof (mSide)
                + sizeof (mInstrmtMatchSideID)
                + sizeof (mTradeAllocStatus)
                + sizeof (mPartyExecutingFirm)
                + sizeof (mPartyExecutingTrader)
                + sizeof (mPad4);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::serialize (mAllocQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mIndividualAllocID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartySubIDType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mInstrmtMatchSideID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTradeAllocStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::deserialize (mAllocQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mIndividualAllocID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartySubIDType, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mInstrmtMatchSideID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTradeAllocStatus, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "BasketSideAllocGrpComp::"
                << "[AllocQty=" << getAllocQty () << "],"
                << "[IndividualAllocID=" << getIndividualAllocID () << "],"
                << "[PartySubIDType=" << getPartySubIDType () << "],"
                << "[Side=" << getSide () << "],"
                << "[InstrmtMatchSideID=" << getInstrmtMatchSideID () << "],"
                << "[TradeAllocStatus=" << getTradeAllocStatus () << "],"
                << "[PartyExecutingFirm=" << getPartyExecutingFirm () << "],"
                << "[PartyExecutingTrader=" << getPartyExecutingTrader () << "],"
                << "[Pad4=" << getPad4 () << "]";
            return sss.str();
        }
};

const double eurexBasketSideAllocGrpCompPacket::ALLOC_QTY_MIN = -922337203685477.5807;
const double eurexBasketSideAllocGrpCompPacket::ALLOC_QTY_MAX = 922337203685477.5807;
const int64_t eurexBasketSideAllocGrpCompPacket::ALLOC_QTY_NO_VALUE = 0x8000000000000000;
const uint32_t eurexBasketSideAllocGrpCompPacket::INDIVIDUAL_ALLOC_ID_MIN = 0;
const uint32_t eurexBasketSideAllocGrpCompPacket::INDIVIDUAL_ALLOC_ID_MAX = 4294967294;
const uint32_t eurexBasketSideAllocGrpCompPacket::INDIVIDUAL_ALLOC_ID_NO_VALUE = 0xFFFFFFFF;
const int16_t eurexBasketSideAllocGrpCompPacket::PARTY_SUB_IDTYPE_MIN = 14001;
const int16_t eurexBasketSideAllocGrpCompPacket::PARTY_SUB_IDTYPE_MAX = 14002;
const int16_t eurexBasketSideAllocGrpCompPacket::PARTY_SUB_IDTYPE_NO_VALUE = 0xFFFF;
const int8_t eurexBasketSideAllocGrpCompPacket::SIDE_MIN = 1;
const int8_t eurexBasketSideAllocGrpCompPacket::SIDE_MAX = 2;
const int8_t eurexBasketSideAllocGrpCompPacket::SIDE_NO_VALUE = 0xFF;
const int8_t eurexBasketSideAllocGrpCompPacket::INSTRMT_MATCH_SIDE_ID_MIN = 1;
const int8_t eurexBasketSideAllocGrpCompPacket::INSTRMT_MATCH_SIDE_ID_MAX = 99;
const int8_t eurexBasketSideAllocGrpCompPacket::INSTRMT_MATCH_SIDE_ID_NO_VALUE = 0xFF;
const int8_t eurexBasketSideAllocGrpCompPacket::TRADE_ALLOC_STATUS_MIN = 0;
const int8_t eurexBasketSideAllocGrpCompPacket::TRADE_ALLOC_STATUS_MAX = 5;
const int8_t eurexBasketSideAllocGrpCompPacket::TRADE_ALLOC_STATUS_NO_VALUE = 0xFF;
const char eurexBasketSideAllocGrpCompPacket::PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketSideAllocGrpCompPacket::PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char eurexBasketSideAllocGrpCompPacket::PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketSideAllocGrpCompPacket::PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;
const char eurexBasketSideAllocGrpCompPacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t eurexBasketSideAllocGrpCompPacket::PAD4_MAX_LENGTH = 4;


} // namespace neueda

#endif // EUREX_BASKETSIDEALLOCGRPCOMP_PACKET_H
