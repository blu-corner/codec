/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef LSE_CROSSORDERCANCELREQUEST_PACKET_H
#define LSE_CROSSORDERCANCELREQUEST_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "LseHeaderPacket.h"

namespace neueda
{

PACKED(class LseCrossOrderCancelRequest
{
    public:
        LseHeader mHeader;

        char mCrossID[20];
        char mOriginalCrossID[20];
        uint8_t mCrossType;
        char mBuySideOriginalClOrdID[20];
        uint64_t mBuySideOrderQuantity;
        char mSellSideOriginalClOrdID[20];
        uint64_t mSellSideOrderQuantity;
        int32_t mInstrumentID;
        char mClientOrderID[20];

        LseCrossOrderCancelRequest ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (LseCrossOrderCancelRequest) - ((int16_t)sizeof (LseHeader) - 1);
            mHeader.mMessageType = 'H';

            memset (mCrossID, '\0', 20);
            memset (mOriginalCrossID, '\0', 20);
            mCrossType = 0;
            memset (mBuySideOriginalClOrdID, '\0', 20);
            mBuySideOrderQuantity = 0;
            memset (mSellSideOriginalClOrdID, '\0', 20);
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

        bool setBuySideOriginalClOrdID (const string& v)
        {
            return setString (mBuySideOriginalClOrdID, v, 20);
        }

        string getBuySideOriginalClOrdID ()
        {
            return getString (mBuySideOriginalClOrdID, 20);
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

        bool setSellSideOriginalClOrdID (const string& v)
        {
            return setString (mSellSideOriginalClOrdID, v, 20);
        }

        string getSellSideOriginalClOrdID ()
        {
            return getString (mSellSideOriginalClOrdID, 20);
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
               << "[BuySideOriginalClOrdID=" << getBuySideOriginalClOrdID () << "],"
               << "[BuySideOrderQuantity=" << getBuySideOrderQuantity () << "],"
               << "[SellSideOriginalClOrdID=" << getSellSideOriginalClOrdID () << "],"
               << "[SellSideOrderQuantity=" << getSellSideOrderQuantity () << "],"
               << "[InstrumentID=" << getInstrumentID () << "],"
               << "[ClientOrderID=" << getClientOrderID () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
