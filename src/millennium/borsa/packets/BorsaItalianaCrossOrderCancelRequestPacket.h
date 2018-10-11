/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef BORSAITALIANA_CROSSORDERCANCELREQUEST_PACKET_H
#define BORSAITALIANA_CROSSORDERCANCELREQUEST_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "BorsaItalianaHeaderPacket.h"

namespace neueda
{

PACKED(class BorsaItalianaCrossOrderCancelRequest
{
    public:
        BorsaItalianaHeader mHeader;

        char mCrossID[20];
        char mOriginalCrossID[20];
        uint8_t mCrossType;
        char mBuySideOriginalCIOrdID[20];
        uint64_t mBuySideOrderQuantity;
        char mSellSideCIOrdID[20];
        uint64_t mSellSideOrderQuantity;
        int32_t mInstrumentID;
        char mClientOrderID[20];

        BorsaItalianaCrossOrderCancelRequest ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (BorsaItalianaCrossOrderCancelRequest) - ((int16_t)sizeof (BorsaItalianaHeader) - 1);
            mHeader.mMessageType = 'H';

            memset (mCrossID, '\0', 20);
            memset (mOriginalCrossID, '\0', 20);
            mCrossType = 0;
            memset (mBuySideOriginalCIOrdID, '\0', 20);
            mBuySideOrderQuantity = 0;
            memset (mSellSideCIOrdID, '\0', 20);
            mSellSideOrderQuantity = 0;
            mInstrumentID = 0;
            memset (mClientOrderID, '\0', 20);
        }

        bool setCrossID (const string& v)
        {
            return setString (mCrossID, v, 20);
        }

        string getCrossID ()
        {
            return getString (mCrossID, 20);
        }

        bool setOriginalCrossID (const string& v)
        {
            return setString (mOriginalCrossID, v, 20);
        }

        string getOriginalCrossID ()
        {
            return getString (mOriginalCrossID, 20);
        }

        bool setCrossType (uint8_t v)
        {
            mCrossType = v;
            return true;
        }

        uint8_t getCrossType ()
        {
            return mCrossType;
        }

        bool setBuySideOriginalCIOrdID (const string& v)
        {
            return setString (mBuySideOriginalCIOrdID, v, 20);
        }

        string getBuySideOriginalCIOrdID ()
        {
            return getString (mBuySideOriginalCIOrdID, 20);
        }

        bool setBuySideOrderQuantity (uint64_t v)
        {
            mBuySideOrderQuantity = v;
            return true;
        }

        uint64_t getBuySideOrderQuantity ()
        {
            return mBuySideOrderQuantity;
        }

        bool setSellSideCIOrdID (const string& v)
        {
            return setString (mSellSideCIOrdID, v, 20);
        }

        string getSellSideCIOrdID ()
        {
            return getString (mSellSideCIOrdID, 20);
        }

        bool setSellSideOrderQuantity (uint64_t v)
        {
            mSellSideOrderQuantity = v;
            return true;
        }

        uint64_t getSellSideOrderQuantity ()
        {
            return mSellSideOrderQuantity;
        }

        bool setInstrumentID (int32_t v)
        {
            mInstrumentID = v;
            return true;
        }

        int32_t getInstrumentID ()
        {
            return mInstrumentID;
        }

        bool setClientOrderID (const string& v)
        {
            return setString (mClientOrderID, v, 20);
        }

        string getClientOrderID ()
        {
            return getString (mClientOrderID, 20);
        }

        string toString ()
        {
            stringstream ss;
            ss << "CrossOrderCancelRequest::"
               << "[CrossID=" << getCrossID () << "],"
               << "[OriginalCrossID=" << getOriginalCrossID () << "],"
               << "[CrossType=" << unsigned(getCrossType ()) << "],"
               << "[BuySideOriginalCIOrdID=" << getBuySideOriginalCIOrdID () << "],"
               << "[BuySideOrderQuantity=" << getBuySideOrderQuantity () << "],"
               << "[SellSideCIOrdID=" << getSellSideCIOrdID () << "],"
               << "[SellSideOrderQuantity=" << getSellSideOrderQuantity () << "],"
               << "[InstrumentID=" << getInstrumentID () << "],"
               << "[ClientOrderID=" << getClientOrderID () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
