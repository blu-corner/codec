/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef TURQUOISE_LOGONREPLY_PACKET_H
#define TURQUOISE_LOGONREPLY_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "TurquoiseHeaderPacket.h"

namespace neueda
{

PACKED(class TurquoiseLogonReply
{
    public:
        TurquoiseHeader mHeader;

        int32_t mRejectCode;
        char mPasswordExpiryDayCount[30];

        TurquoiseLogonReply ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (TurquoiseLogonReply) - ((int16_t)sizeof (TurquoiseHeader) - 1);
            mHeader.mMessageType = 'B';

            mRejectCode = 0;
            memset (mPasswordExpiryDayCount, '\0', 30);
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

        bool setPasswordExpiryDayCount (const string& v)
        {
            return setString (mPasswordExpiryDayCount, v, 30);
        }

        string getPasswordExpiryDayCount ()
        {
            return getString (mPasswordExpiryDayCount, 30);
        }

        string toString ()
        {
            stringstream ss;
            ss << "LogonReply::"
               << "[RejectCode=" << getRejectCode () << "],"
               << "[PasswordExpiryDayCount=" << getPasswordExpiryDayCount () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
