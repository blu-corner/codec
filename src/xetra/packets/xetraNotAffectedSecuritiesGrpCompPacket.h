/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef XETRA_NOTAFFECTEDSECURITIESGRPCOMP_PACKET_H
#define XETRA_NOTAFFECTEDSECURITIESGRPCOMP_PACKET_H

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

class xetraNotAffectedSecuritiesGrpCompPacket
{
    public:
        // no value constants
        static const uint64_t NOT_AFFECTED_SECURITY_ID_MIN;
        static const uint64_t NOT_AFFECTED_SECURITY_ID_MAX;
        static const uint64_t NOT_AFFECTED_SECURITY_ID_NO_VALUE;

        // fields (use with care)
        uint64_t mNotAffectedSecurityID;

        // constructor
        xetraNotAffectedSecuritiesGrpCompPacket ()
        {
            mNotAffectedSecurityID = NOT_AFFECTED_SECURITY_ID_NO_VALUE;
        }

        // getters & setters
        uint64_t getNotAffectedSecurityID () const
        {
            return mNotAffectedSecurityID;
        }

        bool setNotAffectedSecurityID (uint64_t v)
        {
            mNotAffectedSecurityID = v;
            return ((NOT_AFFECTED_SECURITY_ID_MIN <= mNotAffectedSecurityID && mNotAffectedSecurityID <= NOT_AFFECTED_SECURITY_ID_MAX) || mNotAffectedSecurityID == NOT_AFFECTED_SECURITY_ID_NO_VALUE);
        }

        bool isNotAffectedSecurityIDValid () const
        {
            return (mNotAffectedSecurityID != NOT_AFFECTED_SECURITY_ID_NO_VALUE);
        }

        void resetNotAffectedSecurityID ()
        {
            mNotAffectedSecurityID = NOT_AFFECTED_SECURITY_ID_NO_VALUE;
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = sizeof (mNotAffectedSecurityID);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::serialize (mNotAffectedSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::deserialize (mNotAffectedSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "NotAffectedSecuritiesGrpComp::"
                << "[NotAffectedSecurityID=" << getNotAffectedSecurityID () << "]";
            return sss.str();
        }
};

const uint64_t xetraNotAffectedSecuritiesGrpCompPacket::NOT_AFFECTED_SECURITY_ID_MIN = 0UL;
const uint64_t xetraNotAffectedSecuritiesGrpCompPacket::NOT_AFFECTED_SECURITY_ID_MAX = 18446744073709551614UL;
const uint64_t xetraNotAffectedSecuritiesGrpCompPacket::NOT_AFFECTED_SECURITY_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;


} // namespace neueda

#endif // XETRA_NOTAFFECTEDSECURITIESGRPCOMP_PACKET_H
