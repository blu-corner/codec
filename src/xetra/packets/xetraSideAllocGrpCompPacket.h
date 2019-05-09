/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/04/2019
 */
#ifndef XETRA_SIDEALLOCGRPCOMP_PACKET_H
#define XETRA_SIDEALLOCGRPCOMP_PACKET_H

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

class xetraSideAllocGrpCompPacket
{
    public:
        // no value constants
        static const double ALLOC_QTY_MIN;
        static const double ALLOC_QTY_MAX;
        static const int64_t ALLOC_QTY_NO_VALUE;
        static const uint32_t INDIVIDUAL_ALLOC_ID_MIN;
        static const uint32_t INDIVIDUAL_ALLOC_ID_MAX;
        static const uint32_t INDIVIDUAL_ALLOC_ID_NO_VALUE;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const char PARTY_EXECUTING_FIRM_NO_VALUE[5];
        static const size_t PARTY_EXECUTING_FIRM_MAX_LENGTH;
        static const char PARTY_EXECUTING_TRADER_NO_VALUE[6];
        static const size_t PARTY_EXECUTING_TRADER_MAX_LENGTH;

        // fields (use with care)
        int64_t mAllocQty;
        uint32_t mIndividualAllocID;
        int8_t mSide;
        char mPartyExecutingFirm[5];
        char mPartyExecutingTrader[6];

        // constructor
        xetraSideAllocGrpCompPacket ()
        {
            mAllocQty = ALLOC_QTY_NO_VALUE;
            mIndividualAllocID = INDIVIDUAL_ALLOC_ID_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            memcpy(mPartyExecutingFirm, PARTY_EXECUTING_FIRM_NO_VALUE, sizeof (mPartyExecutingFirm));
            memcpy(mPartyExecutingTrader, PARTY_EXECUTING_TRADER_NO_VALUE, sizeof (mPartyExecutingTrader));
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


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = sizeof (mAllocQty)
                + sizeof (mIndividualAllocID)
                + sizeof (mSide)
                + sizeof (mPartyExecutingFirm)
                + sizeof (mPartyExecutingTrader);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::serialize (mAllocQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mIndividualAllocID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::deserialize (mAllocQty, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mIndividualAllocID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyExecutingFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "SideAllocGrpComp::"
                << "[AllocQty=" << getAllocQty () << "],"
                << "[IndividualAllocID=" << getIndividualAllocID () << "],"
                << "[Side=" << getSide () << "],"
                << "[PartyExecutingFirm=" << getPartyExecutingFirm () << "],"
                << "[PartyExecutingTrader=" << getPartyExecutingTrader () << "]";
            return sss.str();
        }
};

const double xetraSideAllocGrpCompPacket::ALLOC_QTY_MIN = -922337203685477.5807;
const double xetraSideAllocGrpCompPacket::ALLOC_QTY_MAX = 922337203685477.5807;
const int64_t xetraSideAllocGrpCompPacket::ALLOC_QTY_NO_VALUE = 0x8000000000000000;
const uint32_t xetraSideAllocGrpCompPacket::INDIVIDUAL_ALLOC_ID_MIN = 0;
const uint32_t xetraSideAllocGrpCompPacket::INDIVIDUAL_ALLOC_ID_MAX = 4294967294;
const uint32_t xetraSideAllocGrpCompPacket::INDIVIDUAL_ALLOC_ID_NO_VALUE = 0xFFFFFFFF;
const int8_t xetraSideAllocGrpCompPacket::SIDE_MIN = 1;
const int8_t xetraSideAllocGrpCompPacket::SIDE_MAX = 2;
const int8_t xetraSideAllocGrpCompPacket::SIDE_NO_VALUE = 0xFF;
const char xetraSideAllocGrpCompPacket::PARTY_EXECUTING_FIRM_NO_VALUE[5] = {0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraSideAllocGrpCompPacket::PARTY_EXECUTING_FIRM_MAX_LENGTH = 5;
const char xetraSideAllocGrpCompPacket::PARTY_EXECUTING_TRADER_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraSideAllocGrpCompPacket::PARTY_EXECUTING_TRADER_MAX_LENGTH = 6;


} // namespace neueda

#endif // XETRA_SIDEALLOCGRPCOMP_PACKET_H
