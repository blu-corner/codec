/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef BORSAITALIANA_RFQEXECUTIONREPORT_PACKET_H
#define BORSAITALIANA_RFQEXECUTIONREPORT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "BorsaItalianaHeaderPacket.h"

namespace neueda
{

PACKED(class BorsaItalianaRFQExecutionReport
{
    public:
        BorsaItalianaHeader mHeader;

        uint8_t mPartitionID;
        int32_t mSequenceNumber;
        char mExecutionID[12];
        char mRFQID[10];
        char mOrderID[12];
        char mExecutionType[1];
        uint64_t mTradeMatchID;
        uint8_t mSide;
        uint64_t mExecutedQuantity;
        int64_t mExecutedPrice;
        int64_t mLastParPrice;
        int64_t mYield;
        int64_t mAccruedInterestAmt;
        uint8_t mOrderStatus;
        uint64_t mLeavesQuantity;
        int32_t mInstrumentID;
        int64_t mParPrice;
        int64_t mConvertedYield;
        char mContraFirm[11];
        uint8_t mCapacity;
        uint8_t mClearingAccount;
        uint8_t mWaiverFlags;

        BorsaItalianaRFQExecutionReport ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (BorsaItalianaRFQExecutionReport) - ((int16_t)sizeof (BorsaItalianaHeader) - 1);
            mHeader.mMessageType = 'g';

            mPartitionID = 0;
            mSequenceNumber = 0;
            memset (mExecutionID, '\0', 12);
            memset (mRFQID, '\0', 10);
            memset (mOrderID, '\0', 12);
            memset (mExecutionType, '\0', 1);
            mTradeMatchID = 0;
            mSide = 0;
            mExecutedQuantity = 0;
            mExecutedPrice = 0;
            mLastParPrice = 0;
            mYield = 0;
            mAccruedInterestAmt = 0;
            mOrderStatus = 0;
            mLeavesQuantity = 0;
            mInstrumentID = 0;
            mParPrice = 0;
            mConvertedYield = 0;
            memset (mContraFirm, '\0', 11);
            mCapacity = 0;
            mClearingAccount = 0;
            mWaiverFlags = 0;
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

        bool setExecutionID (const string& v)
        {
            return setString (mExecutionID, v, 12);
        }

        string getExecutionID ()
        {
            return getString (mExecutionID, 12);
        }

        bool setRFQID (const string& v)
        {
            return setString (mRFQID, v, 10);
        }

        string getRFQID ()
        {
            return getString (mRFQID, 10);
        }

        bool setOrderID (const string& v)
        {
            return setString (mOrderID, v, 12);
        }

        string getOrderID ()
        {
            return getString (mOrderID, 12);
        }

        bool setExecutionType (const string& v)
        {
            return setString (mExecutionType, v, 1);
        }

        string getExecutionType ()
        {
            return getString (mExecutionType, 1);
        }

        bool setTradeMatchID (uint64_t v)
        {
            mTradeMatchID = v;
            return true;
        }

        uint64_t getTradeMatchID ()
        {
            return mTradeMatchID;
        }

        bool setSide (uint8_t v)
        {
            mSide = v;
            return true;
        }

        uint8_t getSide ()
        {
            return mSide;
        }

        bool setExecutedQuantity (uint64_t v)
        {
            mExecutedQuantity = v;
            return true;
        }

        uint64_t getExecutedQuantity ()
        {
            return mExecutedQuantity;
        }

        bool setExecutedPrice (int64_t v)
        {
            mExecutedPrice = v;
            return true;
        }

        int64_t getExecutedPrice ()
        {
            return mExecutedPrice;
        }

        bool setLastParPrice (int64_t v)
        {
            mLastParPrice = v;
            return true;
        }

        int64_t getLastParPrice ()
        {
            return mLastParPrice;
        }

        bool setYield (int64_t v)
        {
            mYield = v;
            return true;
        }

        int64_t getYield ()
        {
            return mYield;
        }

        bool setAccruedInterestAmt (int64_t v)
        {
            mAccruedInterestAmt = v;
            return true;
        }

        int64_t getAccruedInterestAmt ()
        {
            return mAccruedInterestAmt;
        }

        bool setOrderStatus (uint8_t v)
        {
            mOrderStatus = v;
            return true;
        }

        uint8_t getOrderStatus ()
        {
            return mOrderStatus;
        }

        bool setLeavesQuantity (uint64_t v)
        {
            mLeavesQuantity = v;
            return true;
        }

        uint64_t getLeavesQuantity ()
        {
            return mLeavesQuantity;
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

        bool setParPrice (int64_t v)
        {
            mParPrice = v;
            return true;
        }

        int64_t getParPrice ()
        {
            return mParPrice;
        }

        bool setConvertedYield (int64_t v)
        {
            mConvertedYield = v;
            return true;
        }

        int64_t getConvertedYield ()
        {
            return mConvertedYield;
        }

        bool setContraFirm (const string& v)
        {
            return setString (mContraFirm, v, 11);
        }

        string getContraFirm ()
        {
            return getString (mContraFirm, 11);
        }

        bool setCapacity (uint8_t v)
        {
            mCapacity = v;
            return true;
        }

        uint8_t getCapacity ()
        {
            return mCapacity;
        }

        bool setClearingAccount (uint8_t v)
        {
            mClearingAccount = v;
            return true;
        }

        uint8_t getClearingAccount ()
        {
            return mClearingAccount;
        }

        bool setWaiverFlags (uint8_t v)
        {
            mWaiverFlags = v;
            return true;
        }

        uint8_t getWaiverFlags ()
        {
            return mWaiverFlags;
        }

        string toString ()
        {
            stringstream ss;
            ss << "RFQExecutionReport::"
               << "[PartitionID=" << unsigned(getPartitionID ()) << "],"
               << "[SequenceNumber=" << getSequenceNumber () << "],"
               << "[ExecutionID=" << getExecutionID () << "],"
               << "[RFQID=" << getRFQID () << "],"
               << "[OrderID=" << getOrderID () << "],"
               << "[ExecutionType=" << getExecutionType () << "],"
               << "[TradeMatchID=" << getTradeMatchID () << "],"
               << "[Side=" << unsigned(getSide ()) << "],"
               << "[ExecutedQuantity=" << getExecutedQuantity () << "],"
               << "[ExecutedPrice=" << getExecutedPrice () << "],"
               << "[LastParPrice=" << getLastParPrice () << "],"
               << "[Yield=" << getYield () << "],"
               << "[AccruedInterestAmt=" << getAccruedInterestAmt () << "],"
               << "[OrderStatus=" << unsigned(getOrderStatus ()) << "],"
               << "[LeavesQuantity=" << getLeavesQuantity () << "],"
               << "[InstrumentID=" << getInstrumentID () << "],"
               << "[ParPrice=" << getParPrice () << "],"
               << "[ConvertedYield=" << getConvertedYield () << "],"
               << "[ContraFirm=" << getContraFirm () << "],"
               << "[Capacity=" << unsigned(getCapacity ()) << "],"
               << "[ClearingAccount=" << unsigned(getClearingAccount ()) << "],"
               << "[WaiverFlags=" << unsigned(getWaiverFlags ()) << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
