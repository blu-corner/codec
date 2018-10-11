/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef JSE_LOGON_PACKET_H
#define JSE_LOGON_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "JseHeaderPacket.h"

namespace neueda
{

PACKED(class JseLogon
{
    public:
        JseHeader mHeader;

        char mCompID[6];
        char mPassword[10];
        char mNewPassword[10];

        JseLogon ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (JseLogon) - ((int16_t)sizeof (JseHeader) - 1);
            mHeader.mMessageType = 'A';

            memset (mCompID, '\0', 6);
            memset (mPassword, '\0', 10);
            memset (mNewPassword, '\0', 10);
        }

        bool setCompID (const string& v)
        {
            return setString (mCompID, v, 6);
        }

        string getCompID ()
        {
            return getString (mCompID, 6);
        }

        bool setPassword (const string& v)
        {
            return setString (mPassword, v, 10);
        }

        string getPassword ()
        {
            return getString (mPassword, 10);
        }

        bool setNewPassword (const string& v)
        {
            return setString (mNewPassword, v, 10);
        }

        string getNewPassword ()
        {
            return getString (mNewPassword, 10);
        }

        string toString ()
        {
            stringstream ss;
            ss << "Logon::"
               << "[CompID=" << getCompID () << "],"
               << "[Password=" << getPassword () << "],"
               << "[NewPassword=" << getNewPassword () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
