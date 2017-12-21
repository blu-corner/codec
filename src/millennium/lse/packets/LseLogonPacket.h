/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 20/12/2017
 */
#ifndef LSE_LOGON_PACKET_H
#define LSE_LOGON_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "LsePacketUtils.h"

namespace LsePackets
{

PACKED(class LseLogon
{
    public:
        char mUserName[25];
        char mPassword[25];
        char mNewPassword[25];
        uint8_t mMessageVersion;

        LseLogon ()
        {
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

        bool setMessageVersion (uint8_t v)
        {
            mMessageVersion = v;
            return true;
        }

        uint8_t getMessageVersion ()
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
               << "[MessageVersion=" << unsigned(getMessageVersion ()) << "]";
            return ss.str ();
        }
});

}

#endif
