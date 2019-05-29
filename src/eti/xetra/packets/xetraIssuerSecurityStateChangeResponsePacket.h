/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef XETRA_ISSUERSECURITYSTATECHANGERESPONSE_PACKET_H
#define XETRA_ISSUERSECURITYSTATECHANGERESPONSE_PACKET_H

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

class xetraIssuerSecurityStateChangeResponsePacket
{
    public:
        // no value constants
        static const uint64_t SECURITY_STATUS_REPORT_ID_MIN;
        static const uint64_t SECURITY_STATUS_REPORT_ID_MAX;
        static const uint64_t SECURITY_STATUS_REPORT_ID_NO_VALUE;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraNRResponseHeaderMECompPacket mNRResponseHeaderME;
        uint64_t mSecurityStatusReportID;

        // constructor
        xetraIssuerSecurityStateChangeResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10315;
            mSecurityStatusReportID = SECURITY_STATUS_REPORT_ID_NO_VALUE;
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

        uint64_t getSecurityStatusReportID () const
        {
            return mSecurityStatusReportID;
        }

        bool setSecurityStatusReportID (uint64_t v)
        {
            mSecurityStatusReportID = v;
            return ((SECURITY_STATUS_REPORT_ID_MIN <= mSecurityStatusReportID && mSecurityStatusReportID <= SECURITY_STATUS_REPORT_ID_MAX) || mSecurityStatusReportID == SECURITY_STATUS_REPORT_ID_NO_VALUE);
        }

        bool isSecurityStatusReportIDValid () const
        {
            return (mSecurityStatusReportID != SECURITY_STATUS_REPORT_ID_NO_VALUE);
        }

        void resetSecurityStatusReportID ()
        {
            mSecurityStatusReportID = SECURITY_STATUS_REPORT_ID_NO_VALUE;
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mNRResponseHeaderME.getRawSize()
                + sizeof (mSecurityStatusReportID);
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
            state = eti::serialize (mSecurityStatusReportID, buf, len, used);
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
            state = eti::deserialize (mSecurityStatusReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "IssuerSecurityStateChangeResponse::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[NRResponseHeaderME=" << mNRResponseHeaderME.toString () << "],"
                << "[SecurityStatusReportID=" << getSecurityStatusReportID () << "]";
            return sss.str();
        }
};

const uint64_t xetraIssuerSecurityStateChangeResponsePacket::SECURITY_STATUS_REPORT_ID_MIN = 0UL;
const uint64_t xetraIssuerSecurityStateChangeResponsePacket::SECURITY_STATUS_REPORT_ID_MAX = 18446744073709551614UL;
const uint64_t xetraIssuerSecurityStateChangeResponsePacket::SECURITY_STATUS_REPORT_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;


} // namespace neueda

#endif // XETRA_ISSUERSECURITYSTATECHANGERESPONSE_PACKET_H
