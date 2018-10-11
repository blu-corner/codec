/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef SWX_LOGINACCEPTEDMESSAGE_PACKET_H
#define SWX_LOGINACCEPTEDMESSAGE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "swxPacketUtils.h"
#include "swxHeaderPacket.h"

namespace neueda
{

PACKED(class swxLoginAcceptedMessage
{
    public:
        swxHeader mHeader;

        char mSession[10];
        char mSequenceNumber[20];

        swxLoginAcceptedMessage ()
        {
            mHeader.mMessageLength = htons(sizeof (swxLoginAcceptedMessage) - 2);
            mHeader.mMessageType = 'A';

            memset (mSession, ' ', 10);
            memset (mSequenceNumber, ' ', 20);
        }

        bool setSession (const string& v)
        {
            return setRightPaddedStringBuf (v, mSession, 10, ' ');
        }

        string getSession ()
        {
            std::string output;
            getRightPaddedString (mSession, 10, ' ', output);
            return output;
        }

        bool setSequenceNumber (int v)
        {
            std::ostringstream oss;
            oss << v;
            if (oss.bad ())
                return false;
            std::string stringValue = oss.str ();
            return setLeftPaddedStringBuf (stringValue, mSequenceNumber, 20, ' ');
        }

        int getSequenceNumber ()
        {
            std::string output;
            getLeftPaddedString (mSequenceNumber, 20, ' ', output);
            std::istringstream iss(output);
            int value;
            iss >> value;
            return value;
        }

        string toString ()
        {
            stringstream ss;
            ss << "LoginAcceptedMessage::"
               << "[Session=" << getSession () << "],"
               << "[SequenceNumber=" << getSequenceNumber () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
