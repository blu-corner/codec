/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/09/2018
 */
#ifndef JSE_EXECUTIONREPORT_PACKET_H
#define JSE_EXECUTIONREPORT_PACKET_H

#include <string>
#include <sstream>
#include <stdint.h>
#include "MillenniumPacketUtils.h"
#include "JseHeaderPacket.h"

namespace neueda
{

PACKED(class JseExecutionReport
{
    public:
        JseHeader mHeader;

        uint8_t mPartitionID;
        int32_t mSequenceNumber;
        char mExecutionID[21];
        char mClientOrderID[20];
        char mOrderID[12];
        char mExecutionType;
        uint8_t mOrderStatus;
        int32_t mRejctCode;
        int64_t mExecutedPrice;
        int32_t mExecutedQuantity;
        int32_t mLeavesQuantity;
        uint8_t mContainer;
        int32_t mSecurityID;
        uint8_t mSide;
        char mTraderMnemonic[17];
        char mAccount[10];
        uint8_t mIsMarketOpsRequest;
        uint64_t mTransactTime;
        uint8_t mOrderBook;
        int8_t mExecutionInstruction;
        char mCrossID[20];
        uint8_t mCrossType;

        JseExecutionReport ()
        {
            mHeader.mMessageLength = (int16_t)sizeof (JseExecutionReport) - ((int16_t)sizeof (JseHeader) - 1);
            mHeader.mMessageType = '8';

            mPartitionID = 0;
            mSequenceNumber = 0;
            memset (mExecutionID, '\0', 21);
            memset (mClientOrderID, '\0', 20);
            memset (mOrderID, '\0', 12);
            mOrderStatus = 0;
            mRejctCode = 0;
            mExecutedPrice = 0;
            mExecutedQuantity = 0;
            mLeavesQuantity = 0;
            mContainer = 0;
            mSecurityID = 0;
            mSide = 0;
            memset (mTraderMnemonic, '\0', 17);
            memset (mAccount, '\0', 10);
            mIsMarketOpsRequest = 0;
            mTransactTime = 0;
            mOrderBook = 0;
            mExecutionInstruction = 0;
            memset (mCrossID, '\0', 20);
            mCrossType = 0;
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

        bool setClientOrderID (const string& v)
        {
            return setString (mClientOrderID, v, 20);
        }

        string getClientOrderID ()
        {
            return getString (mClientOrderID, 20);
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

        bool setOrderStatus (uint8_t v)
        {
            mOrderStatus = v;
            return true;
        }

        uint8_t getOrderStatus ()
        {
            return mOrderStatus;
        }

        bool setRejctCode (int32_t v)
        {
            mRejctCode = v;
            return true;
        }

        int32_t getRejctCode ()
        {
            return mRejctCode;
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

        bool setExecutedQuantity (int32_t v)
        {
            mExecutedQuantity = v;
            return true;
        }

        int32_t getExecutedQuantity ()
        {
            return mExecutedQuantity;
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

        bool setContainer (uint8_t v)
        {
            mContainer = v;
            return true;
        }

        uint8_t getContainer ()
        {
            return mContainer;
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

        bool setSide (uint8_t v)
        {
            mSide = v;
            return true;
        }

        uint8_t getSide ()
        {
            return mSide;
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

        bool setIsMarketOpsRequest (uint8_t v)
        {
            mIsMarketOpsRequest = v;
            return true;
        }

        uint8_t getIsMarketOpsRequest ()
        {
            return mIsMarketOpsRequest;
        }

        bool setTransactTime (uint64_t v)
        {
            mTransactTime = v;
            return true;
        }

        uint64_t getTransactTime ()
        {
            return mTransactTime;
        }

        bool setOrderBook (uint8_t v)
        {
            mOrderBook = v;
            return true;
        }

        uint8_t getOrderBook ()
        {
            return mOrderBook;
        }

        bool setExecutionInstruction (int8_t v)
        {
            mExecutionInstruction = v;
            return true;
        }

        int8_t getExecutionInstruction ()
        {
            return mExecutionInstruction;
        }

        bool setCrossID (const string& v)
        {
            return setString (mCrossID, v, 20);
        }

        string getCrossID ()
        {
            return getString (mCrossID, 20);
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

        string toString ()
        {
            stringstream ss;
            ss << "ExecutionReport::"
               << "[PartitionID=" << unsigned(getPartitionID ()) << "],"
               << "[SequenceNumber=" << getSequenceNumber () << "],"
               << "[ExecutionID=" << getExecutionID () << "],"
               << "[ClientOrderID=" << getClientOrderID () << "],"
               << "[OrderID=" << getOrderID () << "],"
               << "[ExecutionType=" << getExecutionType () << "],"
               << "[OrderStatus=" << unsigned(getOrderStatus ()) << "],"
               << "[RejctCode=" << getRejctCode () << "],"
               << "[ExecutedPrice=" << getExecutedPrice () << "],"
               << "[ExecutedQuantity=" << getExecutedQuantity () << "],"
               << "[LeavesQuantity=" << getLeavesQuantity () << "],"
               << "[Container=" << unsigned(getContainer ()) << "],"
               << "[SecurityID=" << getSecurityID () << "],"
               << "[Side=" << unsigned(getSide ()) << "],"
               << "[TraderMnemonic=" << getTraderMnemonic () << "],"
               << "[Account=" << getAccount () << "],"
               << "[IsMarketOpsRequest=" << unsigned(getIsMarketOpsRequest ()) << "],"
               << "[TransactTime=" << getTransactTime () << "],"
               << "[OrderBook=" << unsigned(getOrderBook ()) << "],"
               << "[ExecutionInstruction=" << getExecutionInstruction () << "],"
               << "[CrossID=" << getCrossID () << "],"
               << "[CrossType=" << unsigned(getCrossType ()) << "]";
            return ss.str ();
        }
});

} // namespace neueda

#endif
