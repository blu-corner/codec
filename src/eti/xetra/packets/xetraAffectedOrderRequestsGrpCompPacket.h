/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 08/03/2020
 */
#ifndef XETRA_AFFECTEDORDERREQUESTSGRPCOMP_PACKET_H
#define XETRA_AFFECTEDORDERREQUESTSGRPCOMP_PACKET_H

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

class xetraAffectedOrderRequestsGrpCompPacket
{
    public:
        // no value constants
        static const uint32_t AFFECTED_ORDER_REQUEST_ID_MIN;
        static const uint32_t AFFECTED_ORDER_REQUEST_ID_MAX;
        static const uint32_t AFFECTED_ORDER_REQUEST_ID_NO_VALUE;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;

        // fields (use with care)
        uint32_t mAffectedOrderRequestID;
        char mPad4[4];

        // constructor
        xetraAffectedOrderRequestsGrpCompPacket ()
        {
            mAffectedOrderRequestID = AFFECTED_ORDER_REQUEST_ID_NO_VALUE;
            memcpy(mPad4, PAD4_NO_VALUE, sizeof (mPad4));
        }

        // getters & setters
        uint32_t getAffectedOrderRequestID () const
        {
            return mAffectedOrderRequestID;
        }

        bool setAffectedOrderRequestID (uint32_t v)
        {
            mAffectedOrderRequestID = v;
            return ((AFFECTED_ORDER_REQUEST_ID_MIN <= mAffectedOrderRequestID && mAffectedOrderRequestID <= AFFECTED_ORDER_REQUEST_ID_MAX) || mAffectedOrderRequestID == AFFECTED_ORDER_REQUEST_ID_NO_VALUE);
        }

        bool isAffectedOrderRequestIDValid () const
        {
            return (mAffectedOrderRequestID != AFFECTED_ORDER_REQUEST_ID_NO_VALUE);
        }

        void resetAffectedOrderRequestID ()
        {
            mAffectedOrderRequestID = AFFECTED_ORDER_REQUEST_ID_NO_VALUE;
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
            size_t result = sizeof (mAffectedOrderRequestID)
                + sizeof (mPad4);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::serialize (mAffectedOrderRequestID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = eti::deserialize (mAffectedOrderRequestID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "AffectedOrderRequestsGrpComp::"
                << "[AffectedOrderRequestID=" << getAffectedOrderRequestID () << "],"
                << "[Pad4=" << getPad4 () << "]";
            return sss.str();
        }
};

const uint32_t xetraAffectedOrderRequestsGrpCompPacket::AFFECTED_ORDER_REQUEST_ID_MIN = 0;
const uint32_t xetraAffectedOrderRequestsGrpCompPacket::AFFECTED_ORDER_REQUEST_ID_MAX = 4294967294;
const uint32_t xetraAffectedOrderRequestsGrpCompPacket::AFFECTED_ORDER_REQUEST_ID_NO_VALUE = 0xFFFFFFFF;
const char xetraAffectedOrderRequestsGrpCompPacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t xetraAffectedOrderRequestsGrpCompPacket::PAD4_MAX_LENGTH = 4;


} // namespace neueda

#endif // XETRA_AFFECTEDORDERREQUESTSGRPCOMP_PACKET_H
