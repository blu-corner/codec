/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_NOTAFFECTEDORDERSGRPCOMP_PACKET_H
#define EUREX_NOTAFFECTEDORDERSGRPCOMP_PACKET_H

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

class eurexNotAffectedOrdersGrpCompPacket
{
    public:
        // no value constants
        static const uint64_t NOT_AFFECTED_ORDER_ID_MIN;
        static const uint64_t NOT_AFFECTED_ORDER_ID_MAX;
        static const uint64_t NOT_AFFECTED_ORDER_ID_NO_VALUE;
        static const uint64_t NOT_AFF_ORIG_CL_ORD_ID_MIN;
        static const uint64_t NOT_AFF_ORIG_CL_ORD_ID_MAX;
        static const uint64_t NOT_AFF_ORIG_CL_ORD_ID_NO_VALUE;

        // fields (use with care)
        uint64_t mNotAffectedOrderID;
        uint64_t mNotAffOrigClOrdID;

        // constructor
        eurexNotAffectedOrdersGrpCompPacket ()
        {
            mNotAffectedOrderID = NOT_AFFECTED_ORDER_ID_NO_VALUE;
            mNotAffOrigClOrdID = NOT_AFF_ORIG_CL_ORD_ID_NO_VALUE;
        }

        // getters & setters
        uint64_t getNotAffectedOrderID () const
        {
            return mNotAffectedOrderID;
        }

        bool setNotAffectedOrderID (uint64_t v)
        {
            mNotAffectedOrderID = v;
            return ((NOT_AFFECTED_ORDER_ID_MIN <= mNotAffectedOrderID && mNotAffectedOrderID <= NOT_AFFECTED_ORDER_ID_MAX) || mNotAffectedOrderID == NOT_AFFECTED_ORDER_ID_NO_VALUE);
        }

        bool isNotAffectedOrderIDValid () const
        {
            return (mNotAffectedOrderID != NOT_AFFECTED_ORDER_ID_NO_VALUE);
        }

        void resetNotAffectedOrderID ()
        {
            mNotAffectedOrderID = NOT_AFFECTED_ORDER_ID_NO_VALUE;
        }

        uint64_t getNotAffOrigClOrdID () const
        {
            return mNotAffOrigClOrdID;
        }

        bool setNotAffOrigClOrdID (uint64_t v)
        {
            mNotAffOrigClOrdID = v;
            return ((NOT_AFF_ORIG_CL_ORD_ID_MIN <= mNotAffOrigClOrdID && mNotAffOrigClOrdID <= NOT_AFF_ORIG_CL_ORD_ID_MAX) || mNotAffOrigClOrdID == NOT_AFF_ORIG_CL_ORD_ID_NO_VALUE);
        }

        bool isNotAffOrigClOrdIDValid () const
        {
            return (mNotAffOrigClOrdID != NOT_AFF_ORIG_CL_ORD_ID_NO_VALUE);
        }

        void resetNotAffOrigClOrdID ()
        {
            mNotAffOrigClOrdID = NOT_AFF_ORIG_CL_ORD_ID_NO_VALUE;
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = sizeof (mNotAffectedOrderID)
                + sizeof (mNotAffOrigClOrdID);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::serialize (mNotAffectedOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNotAffOrigClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::deserialize (mNotAffectedOrderID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNotAffOrigClOrdID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "NotAffectedOrdersGrpComp::"
                << "[NotAffectedOrderID=" << getNotAffectedOrderID () << "],"
                << "[NotAffOrigClOrdID=" << getNotAffOrigClOrdID () << "]";
            return sss.str();
        }
};

const uint64_t eurexNotAffectedOrdersGrpCompPacket::NOT_AFFECTED_ORDER_ID_MIN = 0UL;
const uint64_t eurexNotAffectedOrdersGrpCompPacket::NOT_AFFECTED_ORDER_ID_MAX = 18446744073709551614UL;
const uint64_t eurexNotAffectedOrdersGrpCompPacket::NOT_AFFECTED_ORDER_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const uint64_t eurexNotAffectedOrdersGrpCompPacket::NOT_AFF_ORIG_CL_ORD_ID_MIN = 0UL;
const uint64_t eurexNotAffectedOrdersGrpCompPacket::NOT_AFF_ORIG_CL_ORD_ID_MAX = 18446744073709551614UL;
const uint64_t eurexNotAffectedOrdersGrpCompPacket::NOT_AFF_ORIG_CL_ORD_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;


} // namespace neueda

#endif // EUREX_NOTAFFECTEDORDERSGRPCOMP_PACKET_H
