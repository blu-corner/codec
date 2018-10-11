/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef JSE_LOGONRESPONSE_PACKET_H
#define JSE_LOGONRESPONSE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "JseHeaderPacket.h"

namespace neueda
{

PACKED(class JseLogonResponse
{
    public:
        JseHeader mHeader;

        int32_t mRejectCode;
        int32_t mPasswordExpiry;

        JseLogonResponse ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (JseLogonResponse) - ((int16_t)sizeof (JseHeader) - 1);
            mHeader.mMessageType = 'B';

            mRejectCode = 0;
            mPasswordExpiry = 0;
        }

        bool setRejectCode (int32_t v)
        {
            mRejectCode = v;
            return true;
        }

        int32_t getRejectCode ()
        {
            return mRejectCode;
        }

        bool setPasswordExpiry (int32_t v)
        {
            mPasswordExpiry = v;
            return true;
        }

        int32_t getPasswordExpiry ()
        {
            return mPasswordExpiry;
        }

        string toString ()
        {
            stringstream ss;
            ss << "LogonResponse::"
               << "[RejectCode=" << getRejectCode () << "],"
               << "[PasswordExpiry=" << getPasswordExpiry () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
