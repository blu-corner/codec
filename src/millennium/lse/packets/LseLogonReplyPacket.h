/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 20/12/2017
 */
#ifndef LSE_LOGONREPLY_PACKET_H
#define LSE_LOGONREPLY_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "LsePacketUtils.h"

namespace LsePackets
{

PACKED(class LseLogonReply
{
    public:
        int32_t mRejectCode;
        char mPasswordExpiryDayCount[30];

        LseLogonReply ()
        {
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

}

#endif
