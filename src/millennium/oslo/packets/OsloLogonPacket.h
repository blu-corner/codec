/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef OSLO_LOGON_PACKET_H
#define OSLO_LOGON_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "OsloHeaderPacket.h"

namespace neueda
{

PACKED(class OsloLogon
{
    public:
        OsloHeader mHeader;

        char mUserName[25];
        char mPassword[25];
        char mNewPassword[25];
        int8_t mMessageVersion;

        OsloLogon ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (OsloLogon) - ((int16_t)sizeof (OsloHeader) - 1);
            mHeader.mMessageType = 'A';

            memset (mUserName, '\0', 25);
            memset (mPassword, '\0', 25);
            memset (mNewPassword, '\0', 25);
            mMessageVersion = 0;
        }

        bool setUserName (const string& v)
        {
            return setString (mUserName, v, 25);
        }

        string getUserName ()
        {
            return getString (mUserName, 25);
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
               << "[UserName=" << getUserName () << "],"
               << "[Password=" << getPassword () << "],"
               << "[NewPassword=" << getNewPassword () << "],"
               << "[MessageVersion=" << getMessageVersion () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
