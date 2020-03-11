/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 08/03/2020
 */
#ifndef XETRA_AFFECTEDORDGRPCOMP_PACKET_H
#define XETRA_AFFECTEDORDGRPCOMP_PACKET_H

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

class xetraAffectedOrdGrpCompPacket
{
    public:
        // no value constants
        static const uint64_t AFFECTED_ORDER_ID_MIN;
        static const uint64_t AFFECTED_ORDER_ID_MAX;
        static const uint64_t AFFECTED_ORDER_ID_NO_VALUE;
        static const uint64_t AFFECTED_ORIG_CL_ORD_ID_MIN;
        static const uint64_t AFFECTED_ORIG_CL_ORD_ID_MAX;
        static const uint64_t AFFECTED_ORIG_CL_ORD_ID_NO_VALUE;

        // fields (use with care)
        uint64_t mAffectedOrderID;
        uint64_t mAffectedOrigClOrdID;

        // constructor
        xetraAffectedOrdGrpCompPacket ()
        {
            mAffectedOrderID = AFFECTED_ORDER_ID_NO_VALUE;
            mAffectedOrigClOrdID = AFFECTED_ORIG_CL_ORD_ID_NO_VALUE;
        }

        // getters & setters
        uint64_t getAffectedOrderID () const
        {
            return mAffectedOrderID;
        }

        bool setAffectedOrderID (uint64_t v)
        {
            mAffectedOrderID = v;
            return ((AFFECTED_ORDER_ID_MIN <= mAffectedOrderID && mAffectedOrderID <= AFFECTED_ORDER_ID_MAX) || mAffectedOrderID == AFFECTED_ORDER_ID_NO_VALUE);
        }

        bool isAffectedOrderIDValid () const
        {
            return (mAffectedOrderID != AFFECTED_ORDER_ID_NO_VALUE);
        }

        void resetAffectedOrderID ()
        {
            mAffectedOrderID = AFFECTED_ORDER_ID_NO_VALUE;
        }

        uint64_t getAffectedOrigClOrdID () const
        {
            return mAffectedOrigClOrdID;
        }

        bool setAffectedOrigClOrdID (uint64_t v)
        {
            mAffectedOrigClOrdID = v;
            return ((AFFECTED_ORIG_CL_ORD_ID_MIN <= mAffectedOrigClOrdID && mAffectedOrigClOrdID <= AFFECTED_ORIG_CL_ORD_ID_MAX) || mAffectedOrigClOrdID == AFFECTED_ORIG_CL_ORD_ID_NO_VALUE);
        }

        bool isAffectedOrigClOrdIDValid () const
        {
            return (mAffectedOrigClOrdID != AFFECTED_ORIG_CL_ORD_ID_NO_VALUE);
        }

        void resetAffectedOrigClOrdID ()
        {
            mAffectedOrigClOrdID = AFFECTED_ORIG_CL_ORD_ID_NO_VALUE;
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = sizeof (mAffectedOrderID)
                + sizeof (mAffectedOrigClOrdID);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::serialize (mAffectedOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mAffectedOrigClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::deserialize (mAffectedOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mAffectedOrigClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "AffectedOrdGrpComp::"
                << "[AffectedOrderID=" << getAffectedOrderID () << "],"
                << "[AffectedOrigClOrdID=" << getAffectedOrigClOrdID () << "]";
            return sss.str();
        }
};

const uint64_t xetraAffectedOrdGrpCompPacket::AFFECTED_ORDER_ID_MIN = 0UL;
const uint64_t xetraAffectedOrdGrpCompPacket::AFFECTED_ORDER_ID_MAX = 18446744073709551614UL;
const uint64_t xetraAffectedOrdGrpCompPacket::AFFECTED_ORDER_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t xetraAffectedOrdGrpCompPacket::AFFECTED_ORIG_CL_ORD_ID_MIN = 0UL;
const uint64_t xetraAffectedOrdGrpCompPacket::AFFECTED_ORIG_CL_ORD_ID_MAX = 18446744073709551614UL;
const uint64_t xetraAffectedOrdGrpCompPacket::AFFECTED_ORIG_CL_ORD_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;


} // namespace neueda

#endif // XETRA_AFFECTEDORDGRPCOMP_PACKET_H
