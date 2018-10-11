/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef TURQUOISE_LOGON_PACKET_H
#define TURQUOISE_LOGON_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "TurquoiseHeaderPacket.h"

namespace neueda
{

PACKED(class TurquoiseLogon
{
    public:
        TurquoiseHeader mHeader;

        char mCompID[25];
        char mPassword[25];
        char mNewPassword[25];
        int8_t mMessageVersion;

        TurquoiseLogon ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (TurquoiseLogon) - ((int16_t)sizeof (TurquoiseHeader) - 1);
            mHeader.mMessageType = 'A';

            memset (mCompID, '\0', 25);
            memset (mPassword, '\0', 25);
            memset (mNewPassword, '\0', 25);
            mMessageVersion = 0;
        }

        bool setCompID (const string& v)
        {
            return setString (mCompID, v, 25);
        }

        string getCompID ()
        {
            return getString (mCompID, 25);
        }

        bool setPassword (const string& v)
        {
            return setString (mPassword, v, 25);
        }

        string getPassword ()
        {
            return getString (mPassword, 25);
        }

        bool setNewPassword (const string& v)
        {
            return setString (mNewPassword, v, 25);
        }

        string getNewPassword ()
        {
            return getString (mNewPassword, 25);
        }

        bool setMessageVersion (int8_t v)
        {
            mMessageVersion = v;
            return true;
        }

        int8_t getMessageVersion ()
        {
            return mMessageVersion;
        }

        string toString ()
        {
            stringstream ss;
            ss << "Logon::"
               << "[CompID=" << getCompID () << "],"
               << "[Password=" << getPassword () << "],"
               << "[NewPassword=" << getNewPassword () << "],"
               << "[MessageVersion=" << getMessageVersion () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
