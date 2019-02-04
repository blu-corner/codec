/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 04/02/2019
 */
#ifndef XETRA_RFQRESPONSE_PACKET_H
#define XETRA_RFQRESPONSE_PACKET_H

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

class xetraRFQResponsePacket
{
    public:
        // no value constants
        static const uint64_t EXEC_ID_MIN;
        static const uint64_t EXEC_ID_MAX;
        static const uint64_t EXEC_ID_NO_VALUE;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraNRResponseHeaderMECompPacket mNRResponseHeaderME;
        uint64_t mExecID;

        // constructor
        xetraRFQResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10402;
            mExecID = EXEC_ID_NO_VALUE;
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

        const xetraNRResponseHeaderMECompPacket& getNRResponseHeaderME () const
        {
            return mNRResponseHeaderME;
        }

        bool setNRResponseHeaderME (const xetraNRResponseHeaderMECompPacket& v)
        {
            mNRResponseHeaderME = v;
            return true;
        }

        uint64_t getExecID () const
        {
            return mExecID;
        }

        bool setExecID (uint64_t v)
        {
            mExecID = v;
            return ((EXEC_ID_MIN <= mExecID && mExecID <= EXEC_ID_MAX) || mExecID == EXEC_ID_NO_VALUE);
        }

        bool isExecIDValid () const
        {
            return (mExecID != EXEC_ID_NO_VALUE);
        }

        void resetExecID ()
        {
            mExecID = EXEC_ID_NO_VALUE;
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mNRResponseHeaderME.getRawSize()
                + sizeof (mExecID);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mNRResponseHeaderME.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = mMessageHeaderOut.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mNRResponseHeaderME.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mExecID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "RFQResponse::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[NRResponseHeaderME=" << mNRResponseHeaderME.toString () << "],"
                << "[ExecID=" << getExecID () << "]";
            return sss.str();
        }
};

const uint64_t xetraRFQResponsePacket::EXEC_ID_MIN = 0UL;
const uint64_t xetraRFQResponsePacket::EXEC_ID_MAX = 18446744073709551614UL;
const uint64_t xetraRFQResponsePacket::EXEC_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;


} // namespace neueda

#endif // XETRA_RFQRESPONSE_PACKET_H
