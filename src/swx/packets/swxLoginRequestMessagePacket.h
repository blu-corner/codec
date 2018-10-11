/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef SWX_LOGINREQUESTMESSAGE_PACKET_H
#define SWX_LOGINREQUESTMESSAGE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "swxPacketUtils.h"
#include "swxHeaderPacket.h"

namespace neueda
{

PACKED(class swxLoginRequestMessage
{
    public:
        swxHeader mHeader;

        char mUsername[6];
        char mPassword[10];
        char mRequestedSession[10];
        char mRequestedSequenceNumber[20];

        swxLoginRequestMessage ()
        {
            mHeader.mMessageLength = htons(sizeof (swxLoginRequestMessage) - 2);
            mHeader.mMessageType = 'L';

            memset (mUsername, ' ', 6);
            memset (mPassword, ' ', 10);
            memset (mRequestedSession, ' ', 10);
            memset (mRequestedSequenceNumber, ' ', 20);
        }

        bool setUsername (const string& v)
        {
            return setRightPaddedStringBuf (v, mUsername, 6, ' ');
        }

        string getUsername ()
        {
            std::string output;
            getRightPaddedString (mUsername, 6, ' ', output);
            return output;
        }

        bool setPassword (const string& v)
        {
            return setRightPaddedStringBuf (v, mPassword, 10, ' ');
        }

        string getPassword ()
        {
            std::string output;
            getRightPaddedString (mPassword, 10, ' ', output);
            return output;
        }

        bool setRequestedSession (const string& v)
        {
            return setRightPaddedStringBuf (v, mRequestedSession, 10, ' ');
        }

        string getRequestedSession ()
        {
            std::string output;
            getRightPaddedString (mRequestedSession, 10, ' ', output);
            return output;
        }

        bool setRequestedSequenceNumber (int v)
        {
            std::ostringstream oss;
            oss << v;
            if (oss.bad ())
                return false;
            std::string stringValue = oss.str ();
            return setLeftPaddedStringBuf (stringValue, mRequestedSequenceNumber, 20, ' ');
        }

        int getRequestedSequenceNumber ()
        {
            std::string output;
            getLeftPaddedString (mRequestedSequenceNumber, 20, ' ', output);
            std::istringstream iss(output);
            int value;
            iss >> value;
            return value;
        }

        string toString ()
        {
            stringstream ss;
            ss << "LoginRequestMessage::"
               << "[Username=" << getUsername () << "],"
               << "[Password=" << getPassword () << "],"
               << "[RequestedSession=" << getRequestedSession () << "],"
               << "[RequestedSequenceNumber=" << getRequestedSequenceNumber () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
