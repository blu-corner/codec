/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef JSE_RFQQUOTE_PACKET_H
#define JSE_RFQQUOTE_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "JseHeaderPacket.h"

namespace neueda
{

PACKED(class JseRFQQuote
{
    public:
        JseHeader mHeader;

        uint8_t mPartitionID;
        int32_t mSequenceNumber;
        char mQuoteMsgID[10];
        char mRFQID[10];
        int32_t mSecurityID;
        char mTraderMnemonic[17];
        char mAccount[10];
        int64_t mBidPrice;
        int32_t mBidQuantity;
        int64_t mOfferPrice;
        int32_t mOfferQuantity;
        int32_t mMinimumQuantity;
        char mValidUntilTime[17];
        uint8_t mCancelOnDisconnect;
        char mMarketMakerFirm[11];
        char mBidID[12];
        char mOfferID[12];
        int64_t mRate;
        uint32_t mStartDate;
        uint32_t mEndDate;
        int64_t mAllinPrice;
        int64_t mLeg1ReferencePrice;

        JseRFQQuote ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (JseRFQQuote) - ((int16_t)sizeof (JseHeader) - 1);
            mHeader.mMessageType = 'd';

            mPartitionID = 0;
            mSequenceNumber = 0;
            memset (mQuoteMsgID, '\0', 10);
            memset (mRFQID, '\0', 10);
            mSecurityID = 0;
            memset (mTraderMnemonic, '\0', 17);
            memset (mAccount, '\0', 10);
            mBidPrice = 0;
            mBidQuantity = 0;
            mOfferPrice = 0;
            mOfferQuantity = 0;
            mMinimumQuantity = 0;
            memset (mValidUntilTime, '\0', 17);
            mCancelOnDisconnect = 0;
            memset (mMarketMakerFirm, '\0', 11);
            memset (mBidID, '\0', 12);
            memset (mOfferID, '\0', 12);
            mRate = 0;
            mStartDate = 0;
            mEndDate = 0;
            mAllinPrice = 0;
            mLeg1ReferencePrice = 0;
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

        bool setQuoteMsgID (const string& v)
        {
            return setString (mQuoteMsgID, v, 10);
        }

        string getQuoteMsgID ()
        {
            return getString (mQuoteMsgID, 10);
        }

        bool setRFQID (const string& v)
        {
            return setString (mRFQID, v, 10);
        }

        string getRFQID ()
        {
            return getString (mRFQID, 10);
        }

        bool setSecurityID (int32_t v)
        {
            mSecurityID = v;
            return true;
        }

        int32_t getSecurityID ()
        {
            return mSecurityID;
        }

        bool setTraderMnemonic (const string& v)
        {
            return setString (mTraderMnemonic, v, 17);
        }

        string getTraderMnemonic ()
        {
            return getString (mTraderMnemonic, 17);
        }

        bool setAccount (const string& v)
        {
            return setString (mAccount, v, 10);
        }

        string getAccount ()
        {
            return getString (mAccount, 10);
        }

        bool setBidPrice (int64_t v)
        {
            mBidPrice = v;
            return true;
        }

        int64_t getBidPrice ()
        {
            return mBidPrice;
        }

        bool setBidQuantity (int32_t v)
        {
            mBidQuantity = v;
            return true;
        }

        int32_t getBidQuantity ()
        {
            return mBidQuantity;
        }

        bool setOfferPrice (int64_t v)
        {
            mOfferPrice = v;
            return true;
        }

        int64_t getOfferPrice ()
        {
            return mOfferPrice;
        }

        bool setOfferQuantity (int32_t v)
        {
            mOfferQuantity = v;
            return true;
        }

        int32_t getOfferQuantity ()
        {
            return mOfferQuantity;
        }

        bool setMinimumQuantity (int32_t v)
        {
            mMinimumQuantity = v;
            return true;
        }

        int32_t getMinimumQuantity ()
        {
            return mMinimumQuantity;
        }

        bool setValidUntilTime (const string& v)
        {
            return setString (mValidUntilTime, v, 17);
        }

        string getValidUntilTime ()
        {
            return getString (mValidUntilTime, 17);
        }

        bool setCancelOnDisconnect (uint8_t v)
        {
            mCancelOnDisconnect = v;
            return true;
        }

        uint8_t getCancelOnDisconnect ()
        {
            return mCancelOnDisconnect;
        }

        bool setMarketMakerFirm (const string& v)
        {
            return setString (mMarketMakerFirm, v, 11);
        }

        string getMarketMakerFirm ()
        {
            return getString (mMarketMakerFirm, 11);
        }

        bool setBidID (const string& v)
        {
            return setString (mBidID, v, 12);
        }

        string getBidID ()
        {
            return getString (mBidID, 12);
        }

        bool setOfferID (const string& v)
        {
            return setString (mOfferID, v, 12);
        }

        string getOfferID ()
        {
            return getString (mOfferID, 12);
        }

        bool setRate (int64_t v)
        {
            mRate = v;
            return true;
        }

        int64_t getRate ()
        {
            return mRate;
        }

        bool setStartDate (uint32_t v)
        {
            mStartDate = v;
            return true;
        }

        uint32_t getStartDate ()
        {
            return mStartDate;
        }

        bool setEndDate (uint32_t v)
        {
            mEndDate = v;
            return true;
        }

        uint32_t getEndDate ()
        {
            return mEndDate;
        }

        bool setAllinPrice (int64_t v)
        {
            mAllinPrice = v;
            return true;
        }

        int64_t getAllinPrice ()
        {
            return mAllinPrice;
        }

        bool setLeg1ReferencePrice (int64_t v)
        {
            mLeg1ReferencePrice = v;
            return true;
        }

        int64_t getLeg1ReferencePrice ()
        {
            return mLeg1ReferencePrice;
        }

        string toString ()
        {
            stringstream ss;
            ss << "RFQQuote::"
               << "[PartitionID=" << unsigned(getPartitionID ()) << "],"
               << "[SequenceNumber=" << getSequenceNumber () << "],"
               << "[QuoteMsgID=" << getQuoteMsgID () << "],"
               << "[RFQID=" << getRFQID () << "],"
               << "[SecurityID=" << getSecurityID () << "],"
               << "[TraderMnemonic=" << getTraderMnemonic () << "],"
               << "[Account=" << getAccount () << "],"
               << "[BidPrice=" << getBidPrice () << "],"
               << "[BidQuantity=" << getBidQuantity () << "],"
               << "[OfferPrice=" << getOfferPrice () << "],"
               << "[OfferQuantity=" << getOfferQuantity () << "],"
               << "[MinimumQuantity=" << getMinimumQuantity () << "],"
               << "[ValidUntilTime=" << getValidUntilTime () << "],"
               << "[CancelOnDisconnect=" << unsigned(getCancelOnDisconnect ()) << "],"
               << "[MarketMakerFirm=" << getMarketMakerFirm () << "],"
               << "[BidID=" << getBidID () << "],"
               << "[OfferID=" << getOfferID () << "],"
               << "[Rate=" << getRate () << "],"
               << "[StartDate=" << getStartDate () << "],"
               << "[EndDate=" << getEndDate () << "],"
               << "[AllinPrice=" << getAllinPrice () << "],"
               << "[Leg1ReferencePrice=" << getLeg1ReferencePrice () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
