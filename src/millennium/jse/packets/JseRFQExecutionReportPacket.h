/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef JSE_RFQEXECUTIONREPORT_PACKET_H
#define JSE_RFQEXECUTIONREPORT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "JseHeaderPacket.h"

namespace neueda
{

PACKED(class JseRFQExecutionReport
{
    public:
        JseHeader mHeader;

        uint8_t mPartitionID;
        int32_t mSequenceNumber;
        char mExecutionID[21];
        char mRFQID[10];
        char mOrderID[12];
        char mExecutionType;
        char mTrdMatchID[10];
        uint8_t mSide;
        int32_t mExecutedQuantity;
        int64_t mExecutedPrice;
        int64_t mLastParPrice;
        int64_t mYield;
        int64_t mAccruedInterestAmt;
        uint8_t mOrderStatus;
        int32_t mLeavesQuantity;
        int32_t mSecurityID;
        char mTraderMnemonic[17];
        char mAccount[10];
        int64_t mCoverPrice;
        int64_t mParPrice;
        int64_t mConvertedYield;
        char mContraFirm[11];
        uint8_t mTradeSubType;
        int64_t mSpotPrice;
        uint32_t mStartDate;
        uint32_t mEndDate;
        int64_t mAllinPrice;
        int64_t mEndCash;

        JseRFQExecutionReport ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (JseRFQExecutionReport) - ((int16_t)sizeof (JseHeader) - 1);
            mHeader.mMessageType = 'g';

            mPartitionID = 0;
            mSequenceNumber = 0;
            memset (mExecutionID, '\0', 21);
            memset (mRFQID, '\0', 10);
            memset (mOrderID, '\0', 12);
            memset (mTrdMatchID, '\0', 10);
            mSide = 0;
            mExecutedQuantity = 0;
            mExecutedPrice = 0;
            mLastParPrice = 0;
            mYield = 0;
            mAccruedInterestAmt = 0;
            mOrderStatus = 0;
            mLeavesQuantity = 0;
            mSecurityID = 0;
            memset (mTraderMnemonic, '\0', 17);
            memset (mAccount, '\0', 10);
            mCoverPrice = 0;
            mParPrice = 0;
            mConvertedYield = 0;
            memset (mContraFirm, '\0', 11);
            mTradeSubType = 0;
            mSpotPrice = 0;
            mStartDate = 0;
            mEndDate = 0;
            mAllinPrice = 0;
            mEndCash = 0;
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
            return setString (mExecutionID, v, 21);
        }

        string getExecutionID ()
        {
            return getString (mExecutionID, 21);
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

        bool setExecutionType (char v)
        {
            mExecutionType = v;
            return true;
        }

        char getExecutionType ()
        {
            return mExecutionType;
        }

        bool setTrdMatchID (const string& v)
        {
            return setString (mTrdMatchID, v, 10);
        }

        string getTrdMatchID ()
        {
            return getString (mTrdMatchID, 10);
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

        bool setExecutedQuantity (int32_t v)
        {
            mExecutedQuantity = v;
            return true;
        }

        int32_t getExecutedQuantity ()
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

        bool setLeavesQuantity (int32_t v)
        {
            mLeavesQuantity = v;
            return true;
        }

        int32_t getLeavesQuantity ()
        {
            return mLeavesQuantity;
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

        bool setCoverPrice (int64_t v)
        {
            mCoverPrice = v;
            return true;
        }

        int64_t getCoverPrice ()
        {
            return mCoverPrice;
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

        bool setTradeSubType (uint8_t v)
        {
            mTradeSubType = v;
            return true;
        }

        uint8_t getTradeSubType ()
        {
            return mTradeSubType;
        }

        bool setSpotPrice (int64_t v)
        {
            mSpotPrice = v;
            return true;
        }

        int64_t getSpotPrice ()
        {
            return mSpotPrice;
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

        bool setEndCash (int64_t v)
        {
            mEndCash = v;
            return true;
        }

        int64_t getEndCash ()
        {
            return mEndCash;
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
               << "[TrdMatchID=" << getTrdMatchID () << "],"
               << "[Side=" << unsigned(getSide ()) << "],"
               << "[ExecutedQuantity=" << getExecutedQuantity () << "],"
               << "[ExecutedPrice=" << getExecutedPrice () << "],"
               << "[LastParPrice=" << getLastParPrice () << "],"
               << "[Yield=" << getYield () << "],"
               << "[AccruedInterestAmt=" << getAccruedInterestAmt () << "],"
               << "[OrderStatus=" << unsigned(getOrderStatus ()) << "],"
               << "[LeavesQuantity=" << getLeavesQuantity () << "],"
               << "[SecurityID=" << getSecurityID () << "],"
               << "[TraderMnemonic=" << getTraderMnemonic () << "],"
               << "[Account=" << getAccount () << "],"
               << "[CoverPrice=" << getCoverPrice () << "],"
               << "[ParPrice=" << getParPrice () << "],"
               << "[ConvertedYield=" << getConvertedYield () << "],"
               << "[ContraFirm=" << getContraFirm () << "],"
               << "[TradeSubType=" << unsigned(getTradeSubType ()) << "],"
               << "[SpotPrice=" << getSpotPrice () << "],"
               << "[StartDate=" << getStartDate () << "],"
               << "[EndDate=" << getEndDate () << "],"
               << "[AllinPrice=" << getAllinPrice () << "],"
               << "[EndCash=" << getEndCash () << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
