/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef EUREX_TRDINSTRMNTLEGGRPCOMP_PACKET_H
#define EUREX_TRDINSTRMNTLEGGRPCOMP_PACKET_H

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

class eurexTrdInstrmntLegGrpCompPacket
{
    public:
        // no value constants
        static const int64_t LEG_SECURITY_ID_MIN;
        static const int64_t LEG_SECURITY_ID_MAX;
        static const int64_t LEG_SECURITY_ID_NO_VALUE;
        static const double LEG_PRICE_MIN;
        static const double LEG_PRICE_MAX;
        static const int64_t LEG_PRICE_NO_VALUE;

        // fields (use with care)
        int64_t mLegSecurityID;
        int64_t mLegPrice;

        // constructor
        eurexTrdInstrmntLegGrpCompPacket ()
        {
            mLegSecurityID = LEG_SECURITY_ID_NO_VALUE;
            mLegPrice = LEG_PRICE_NO_VALUE;
        }

        // getters & setters
        int64_t getLegSecurityID () const
        {
            return mLegSecurityID;
        }

        bool setLegSecurityID (int64_t v)
        {
            mLegSecurityID = v;
            return ((LEG_SECURITY_ID_MIN <= mLegSecurityID && mLegSecurityID <= LEG_SECURITY_ID_MAX) || mLegSecurityID == LEG_SECURITY_ID_NO_VALUE);
        }

        bool isLegSecurityIDValid () const
        {
            return (mLegSecurityID != LEG_SECURITY_ID_NO_VALUE);
        }

        void resetLegSecurityID ()
        {
            mLegSecurityID = LEG_SECURITY_ID_NO_VALUE;
        }

        double getLegPrice () const
        {
            return mLegPrice / 100000000.0;
        }

        bool setLegPrice (double v)
        {
            mLegPrice = v * 100000000.0;
            return ((LEG_PRICE_MIN <= v && v <= LEG_PRICE_MAX) || mLegPrice == LEG_PRICE_NO_VALUE);
        }

        bool isLegPriceValid () const
        {
            return (mLegPrice != LEG_PRICE_NO_VALUE);
        }

        void resetLegPrice ()
        {
            mLegPrice = LEG_PRICE_NO_VALUE;
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = sizeof (mLegSecurityID)
                + sizeof (mLegPrice);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::serialize (mLegSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mLegPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::deserialize (mLegSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mLegPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "TrdInstrmntLegGrpComp::"
                << "[LegSecurityID=" << getLegSecurityID () << "],"
                << "[LegPrice=" << getLegPrice () << "]";
            return sss.str();
        }
};

const int64_t eurexTrdInstrmntLegGrpCompPacket::LEG_SECURITY_ID_MIN = -9223372036854775807L;
const int64_t eurexTrdInstrmntLegGrpCompPacket::LEG_SECURITY_ID_MAX = 9223372036854775807L;
const int64_t eurexTrdInstrmntLegGrpCompPacket::LEG_SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double eurexTrdInstrmntLegGrpCompPacket::LEG_PRICE_MIN = -92233720368.54775807;
const double eurexTrdInstrmntLegGrpCompPacket::LEG_PRICE_MAX = 92233720368.54775807;
const int64_t eurexTrdInstrmntLegGrpCompPacket::LEG_PRICE_NO_VALUE = 0x8000000000000000;


} // namespace neueda

#endif // EUREX_TRDINSTRMNTLEGGRPCOMP_PACKET_H
