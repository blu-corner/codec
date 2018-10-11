/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef JSE_NEWS_PACKET_H
#define JSE_NEWS_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "JseHeaderPacket.h"

namespace neueda
{

PACKED(class JseNews
{
    public:
        JseHeader mHeader;

        uint8_t mPartitionID;
        int32_t mSequenceNumber;
        char mOrigTime[8];
        uint8_t mUrgency;
        char mHeadline[100];
        char mText[750];
        char mInstruments[100];
        char mUnderlyingInstruments[100];
        char mFirmList[54];
        char mUserList[54];

        JseNews ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (JseNews) - ((int16_t)sizeof (JseHeader) - 1);
            mHeader.mMessageType = 'Z';

            mPartitionID = 0;
            mSequenceNumber = 0;
            memset (mOrigTime, '\0', 8);
            mUrgency = 0;
            memset (mHeadline, '\0', 100);
            memset (mText, '\0', 750);
            memset (mInstruments, '\0', 100);
            memset (mUnderlyingInstruments, '\0', 100);
            memset (mFirmList, '\0', 54);
            memset (mUserList, '\0', 54);
        }

        bool setPartitionID (uint8_t v)
        {
            mPartitionID = v;
            return true;
        }

        uint8_t getPartitionID ()
        {
            return mPartitionID;
        }

        bool setSequenceNumber (int32_t v)
        {
            mSequenceNumber = v;
            return true;
        }

        int32_t getSequenceNumber ()
        {
            return mSequenceNumber;
        }

        bool setOrigTime (const string& v)
        {
            return setString (mOrigTime, v, 8);
        }

        string getOrigTime ()
        {
            return getString (mOrigTime, 8);
        }

        bool setUrgency (uint8_t v)
        {
            mUrgency = v;
            return true;
        }

        uint8_t getUrgency ()
        {
            return mUrgency;
        }

        bool setHeadline (const string& v)
        {
            return setString (mHeadline, v, 100);
        }

        string getHeadline ()
        {
            return getString (mHeadline, 100);
        }

        bool setText (const string& v)
        {
            return setString (mText, v, 750);
        }

        string getText ()
        {
            return getString (mText, 750);
        }

        bool setInstruments (const string& v)
        {
            return setString (mInstruments, v, 100);
        }

        string getInstruments ()
        {
            return getString (mInstruments, 100);
        }

        bool setUnderlyingInstruments (const string& v)
        {
            return setString (mUnderlyingInstruments, v, 100);
        }

        string getUnderlyingInstruments ()
        {
            return getString (mUnderlyingInstruments, 100);
        }

        bool setFirmList (const string& v)
        {
            return setString (mFirmList, v, 54);
        }

        string getFirmList ()
        {
            return getString (mFirmList, 54);
        }

        bool setUserList (const string& v)
        {
            return setString (mUserList, v, 54);
        }

        string getUserList ()
        {
            return getString (mUserList, 54);
        }

        string toString ()
        {
            stringstream ss;
            ss << "News::"
               << "[PartitionID=" << unsigned(getPartitionID ()) << "],"
               << "[SequenceNumber=" << getSequenceNumber () << "],"
               << "[OrigTime=" << getOrigTime () << "],"
               << "[Urgency=" << unsigned(getUrgency ()) << "],"
               << "[Headline=" << getHeadline () << "],"
               << "[Text=" << getText () << "],"
               << "[Instruments=" << getInstruments () << "],"
               << "[UnderlyingInstruments=" << getUnderlyingInstruments () << "],"
               << "[FirmList=" << getFirmList () << "],"
               << "[UserList=" << getUserList () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
