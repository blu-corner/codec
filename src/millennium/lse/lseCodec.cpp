/*
 * Copyright 2014-2018 Neueda
 */
/* Lse Version 11.8.5 */
#include "lseCodec.h"

namespace neueda
{

extern "C" codec*
getCodec ()
{
    return new lseCodec ();
}

const double mPriceConverter = 100000000.0;

codecState
lseCodec::getLogon (cdr &d, LseHeader* hdr)
{
    d.setString (MessageName, "Logon");
    LseLogon* p = (LseLogon*)hdr;

    codecHelper_setString (d, UserName, p->mUserName,
                           sizeof (p->mUserName));
    codecHelper_setString (d, Password, p->mPassword,
                           sizeof (p->mPassword));
    codecHelper_setString (d, NewPassword, p->mNewPassword,
                           sizeof (p->mNewPassword));
    d.setInteger (MessageVersion, p->mMessageVersion);

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::getLogonReply (cdr &d, LseHeader* hdr)
{
    d.setString (MessageName, "LogonReply");
    LseLogonReply* p = (LseLogonReply*)hdr;

    d.setInteger (RejectCode, p->mRejectCode);
    codecHelper_setString (d, PasswordExpiryDayCount, p->mPasswordExpiryDayCount,
                           sizeof (p->mPasswordExpiryDayCount));

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::getLogout (cdr &d, LseHeader* hdr)
{
    d.setString (MessageName, "Logout");
    LseLogout* p = (LseLogout*)hdr;

    codecHelper_setString (d, Reason, p->mReason,
                           sizeof (p->mReason));

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::getHeartbeat (cdr &d, LseHeader* hdr)
{
    d.setString (MessageName, "Heartbeat");


    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::getMissedMessageRequest (cdr &d, LseHeader* hdr)
{
    d.setString (MessageName, "MissedMessageRequest");
    LseMissedMessageRequest* p = (LseMissedMessageRequest*)hdr;

    d.setInteger (AppID, p->mAppID);
    d.setInteger (LastMsgSeqNum, p->mLastMsgSeqNum);

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::getMissedMessageRequestAck (cdr &d, LseHeader* hdr)
{
    d.setString (MessageName, "MissedMessageRequestAck");
    LseMissedMessageRequestAck* p = (LseMissedMessageRequestAck*)hdr;

    d.setInteger (ResponseType, p->mResponseType);

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::getMissedMessageReport (cdr &d, LseHeader* hdr)
{
    d.setString (MessageName, "MissedMessageReport");
    LseMissedMessageReport* p = (LseMissedMessageReport*)hdr;

    d.setInteger (ResponseType, p->mResponseType);

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::getReject (cdr &d, LseHeader* hdr)
{
    d.setString (MessageName, "Reject");
    LseReject* p = (LseReject*)hdr;

    d.setInteger (RejectCode, p->mRejectCode);
    codecHelper_setString (d, RejectReason, p->mRejectReason,
                           sizeof (p->mRejectReason));
    d.setInteger (RejectedMessageType, p->mRejectedMessageType);
    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::getSystemStatus (cdr &d, LseHeader* hdr)
{
    d.setString (MessageName, "SystemStatus");
    LseSystemStatus* p = (LseSystemStatus*)hdr;

    d.setInteger (AppID, p->mAppID);
    d.setInteger (Status, p->mStatus);

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::getNewOrder (cdr &d, LseHeader* hdr)
{
    d.setString (MessageName, "NewOrder");
    LseNewOrder* p = (LseNewOrder*)hdr;

    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    codecHelper_setString (d, TraderID, p->mTraderID,
                           sizeof (p->mTraderID));
    codecHelper_setString (d, Account, p->mAccount,
                           sizeof (p->mAccount));
    d.setInteger (ClearingAccount, p->mClearingAccount);
    d.setInteger (InstrumentID, p->mInstrumentID);
    d.setInteger (FXMiFIDFlags, p->mFXMiFIDFlags);
    d.setInteger (PartyRoleQualifiers, p->mPartyRoleQualifiers);
    d.setInteger (OrderType, p->mOrderType);
    d.setInteger (TIF, p->mTIF);
    d.setInteger (ExpireDateTime, p->mExpireDateTime);
    d.setInteger (Side, p->mSide);
    d.setInteger (OrderQty, p->mOrderQty);
    d.setInteger (DisplayQty, p->mDisplayQty);
    d.setDouble (LimitPrice, (p->mLimitPrice) / mPriceConverter);
    d.setInteger (Capacity, p->mCapacity);
    d.setInteger (AutoCancel, p->mAutoCancel);
    d.setInteger (OrderSubType, p->mOrderSubType);
    d.setInteger (Anonymity, p->mAnonymity);
    d.setDouble (StopPrice, (p->mStopPrice) / mPriceConverter);
    d.setInteger (PassiveOnlyOrder, p->mPassiveOnlyOrder);
    d.setInteger (ClientID, p->mClientID);
    d.setInteger (InvestmentDecisionMaker, p->mInvestmentDecisionMaker);
    d.setInteger (MinimumQuantity, p->mMinimumQuantity);
    d.setInteger (ExecutingTrader, p->mExecutingTrader);

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::getOrderCancelRequest (cdr &d, LseHeader* hdr)
{
    d.setString (MessageName, "OrderCancelRequest");
    LseOrderCancelRequest* p = (LseOrderCancelRequest*)hdr;

    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    codecHelper_setString (d, OriginalClientOrderID, p->mOriginalClientOrderID,
                           sizeof (p->mOriginalClientOrderID));
    codecHelper_setString (d, OrderID, p->mOrderID,
                           sizeof (p->mOrderID));
    d.setInteger (InstrumentID, p->mInstrumentID);
    d.setInteger (Side, p->mSide);
    codecHelper_setString (d, RfqID, p->mRfqID,
                           sizeof (p->mRfqID));

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::getOrderMassCancelRequest (cdr &d, LseHeader* hdr)
{
    d.setString (MessageName, "OrderMassCancelRequest");
    LseOrderMassCancelRequest* p = (LseOrderMassCancelRequest*)hdr;

    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    d.setInteger (MassCancelRequestType, p->mMassCancelRequestType);
    d.setInteger (InstrumentID, p->mInstrumentID);
    codecHelper_setString (d, Segment, p->mSegment,
                           sizeof (p->mSegment));
    d.setInteger (OrderSubType, p->mOrderSubType);

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::getOrderCancelReplaceRequest (cdr &d, LseHeader* hdr)
{
    d.setString (MessageName, "OrderCancelReplaceRequest");
    LseOrderCancelReplaceRequest* p = (LseOrderCancelReplaceRequest*)hdr;

    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    codecHelper_setString (d, OriginalClientOrderID, p->mOriginalClientOrderID,
                           sizeof (p->mOriginalClientOrderID));
    codecHelper_setString (d, OrderID, p->mOrderID,
                           sizeof (p->mOrderID));
    d.setInteger (InstrumentID, p->mInstrumentID);
    d.setInteger (ExpireDateTime, p->mExpireDateTime);
    d.setInteger (OrderQty, p->mOrderQty);
    d.setInteger (DisplayQty, p->mDisplayQty);
    d.setDouble (LimitPrice, (p->mLimitPrice) / mPriceConverter);
    codecHelper_setString (d, Account, p->mAccount,
                           sizeof (p->mAccount));
    d.setInteger (Side, p->mSide);
    d.setDouble (StopPrice, (p->mStopPrice) / mPriceConverter);
    d.setInteger (PassiveOnlyOrder, p->mPassiveOnlyOrder);
    d.setInteger (MinimumQuantity, p->mMinimumQuantity);

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::getNewOrderCross (cdr &d, LseHeader* hdr)
{
    d.setString (MessageName, "NewOrderCross");
    LseNewOrderCross* p = (LseNewOrderCross*)hdr;

    codecHelper_setString (d, CrossID, p->mCrossID,
                           sizeof (p->mCrossID));
    d.setInteger (CrossType, p->mCrossType);
    codecHelper_setString (d, BuySideClOrdID, p->mBuySideClOrdID,
                           sizeof (p->mBuySideClOrdID));
    d.setInteger (BuySideOrderCapacity, p->mBuySideOrderCapacity);
    d.setInteger (BuySideClearingAccount, p->mBuySideClearingAccount);
    d.setInteger (BuySideOrderQuantity, p->mBuySideOrderQuantity);
    codecHelper_setString (d, BuySideFirmID, p->mBuySideFirmID,
                           sizeof (p->mBuySideFirmID));
    d.setInteger (BuySidePartyRole, p->mBuySidePartyRole);
    codecHelper_setString (d, SellSideClOrdID, p->mSellSideClOrdID,
                           sizeof (p->mSellSideClOrdID));
    d.setInteger (SellSideOrderCapacity, p->mSellSideOrderCapacity);
    d.setInteger (SellSideClearingAccount, p->mSellSideClearingAccount);
    d.setInteger (SellSideOrderQuantity, p->mSellSideOrderQuantity);
    codecHelper_setString (d, SellSideFirmID, p->mSellSideFirmID,
                           sizeof (p->mSellSideFirmID));
    d.setInteger (SellSidePartyRole, p->mSellSidePartyRole);
    d.setInteger (InstrumentID, p->mInstrumentID);
    d.setDouble (Price, (p->mPrice) / mPriceConverter);
    d.setInteger (OrderType, p->mOrderType);
    d.setInteger (TIF, p->mTIF);

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::getCrossOrderCancelRequest (cdr &d, LseHeader* hdr)
{
    d.setString (MessageName, "CrossOrderCancelRequest");
    LseCrossOrderCancelRequest* p = (LseCrossOrderCancelRequest*)hdr;

    codecHelper_setString (d, CrossID, p->mCrossID,
                           sizeof (p->mCrossID));
    codecHelper_setString (d, OriginalCrossID, p->mOriginalCrossID,
                           sizeof (p->mOriginalCrossID));
    d.setInteger (CrossType, p->mCrossType);
    codecHelper_setString (d, BuySideOriginalClOrdID, p->mBuySideOriginalClOrdID,
                           sizeof (p->mBuySideOriginalClOrdID));
    d.setInteger (BuySideOrderQuantity, p->mBuySideOrderQuantity);
    codecHelper_setString (d, SellSideOriginalClOrdID, p->mSellSideOriginalClOrdID,
                           sizeof (p->mSellSideOriginalClOrdID));
    d.setInteger (SellSideOrderQuantity, p->mSellSideOrderQuantity);
    d.setInteger (InstrumentID, p->mInstrumentID);
    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::getExecutionReport (cdr &d, LseHeader* hdr)
{
    d.setString (MessageName, "ExecutionReport");
    LseExecutionReport* p = (LseExecutionReport*)hdr;

    d.setInteger (AppID, p->mAppID);
    d.setInteger (SequenceNo, p->mSequenceNo);
    codecHelper_setString (d, ExecutionID, p->mExecutionID,
                           sizeof (p->mExecutionID));
    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    codecHelper_setString (d, OrderID, p->mOrderID,
                           sizeof (p->mOrderID));
    d.setInteger (ExecType, p->mExecType);
    codecHelper_setString (d, ExecutionReportRefID, p->mExecutionReportRefID,
                           sizeof (p->mExecutionReportRefID));
    d.setInteger (OrderStatus, p->mOrderStatus);
    d.setInteger (OrderRejectCode, p->mOrderRejectCode);
    d.setDouble (ExecutedPrice, (p->mExecutedPrice) / mPriceConverter);
    d.setInteger (ExecutedQty, p->mExecutedQty);
    d.setInteger (LeavesQty, p->mLeavesQty);
    d.setInteger (WaiverFlags, p->mWaiverFlags);
    d.setInteger (DisplayQty, p->mDisplayQty);
    d.setInteger (InstrumentID, p->mInstrumentID);
    d.setInteger (RestatementReason, p->mRestatementReason);
    d.setInteger (Side, p->mSide);
    codecHelper_setString (d, CounterParty, p->mCounterParty,
                           sizeof (p->mCounterParty));
    d.setInteger (TradeLiquidityIndicator, p->mTradeLiquidityIndicator);
    d.setInteger (TradeMatchID, p->mTradeMatchID);
    d.setInteger (TransactTimeSeconds, p->mTransactTimeSeconds);
    d.setInteger (TransactTimeUsecs, p->mTransactTimeUsecs);
    d.setInteger (TypeOfTrade, p->mTypeOfTrade);
    d.setInteger (Capacity, p->mCapacity);
    codecHelper_setString (d, PublicOrderID, p->mPublicOrderID,
                           sizeof (p->mPublicOrderID));
    d.setInteger (MinimumQuantity, p->mMinimumQuantity);

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::getOrderCancelReject (cdr &d, LseHeader* hdr)
{
    d.setString (MessageName, "OrderCancelReject");
    LseOrderCancelReject* p = (LseOrderCancelReject*)hdr;

    d.setInteger (AppID, p->mAppID);
    d.setInteger (SequenceNo, p->mSequenceNo);
    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    codecHelper_setString (d, OrderID, p->mOrderID,
                           sizeof (p->mOrderID));
    d.setInteger (CancelRejectReason, p->mCancelRejectReason);
    d.setInteger (TransactTimeSeconds, p->mTransactTimeSeconds);
    d.setInteger (TransactTimeUsecs, p->mTransactTimeUsecs);
    codecHelper_setString (d, RfqID, p->mRfqID,
                           sizeof (p->mRfqID));

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::getOrderMassCancelReport (cdr &d, LseHeader* hdr)
{
    d.setString (MessageName, "OrderMassCancelReport");
    LseOrderMassCancelReport* p = (LseOrderMassCancelReport*)hdr;

    d.setInteger (AppID, p->mAppID);
    d.setInteger (SequenceNo, p->mSequenceNo);
    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    d.setInteger (MassCancelResponse, p->mMassCancelResponse);
    d.setInteger (MassCancelRejectReason, p->mMassCancelRejectReason);
    d.setInteger (TransactTimeSeconds, p->mTransactTimeSeconds);
    d.setInteger (TransactTimeUsecs, p->mTransactTimeUsecs);

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::getBusinessReject (cdr &d, LseHeader* hdr)
{
    d.setString (MessageName, "BusinessReject");
    LseBusinessReject* p = (LseBusinessReject*)hdr;

    d.setInteger (AppID, p->mAppID);
    d.setInteger (SequenceNo, p->mSequenceNo);
    d.setInteger (RejectCode, p->mRejectCode);
    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    codecHelper_setString (d, OrderID, p->mOrderID,
                           sizeof (p->mOrderID));
    d.setInteger (TransactTimeSeconds, p->mTransactTimeSeconds);
    d.setInteger (TransactTimeUsecs, p->mTransactTimeUsecs);

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::putLogon (const cdr &d, LseHeader* hdr, size_t len, size_t& used)
{
    LseLogon* p = (LseLogon*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putString (d, UserName, p->mUserName, sizeof p->mUserName))
        {
            setLastError ("UserName missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, Password, p->mPassword, sizeof p->mPassword))
        {
            setLastError ("Password missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, NewPassword, p->mNewPassword, sizeof p->mNewPassword))
        {
            setLastError ("NewPassword missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (MessageVersion, &p->mMessageVersion))
        {
            setLastError ("invalid or missing MessageVersion");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::putLogonReply (const cdr &d, LseHeader* hdr, size_t len, size_t& used)
{
    LseLogonReply* p = (LseLogonReply*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (RejectCode, &p->mRejectCode))
        {
            setLastError ("invalid or missing RejectCode");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, PasswordExpiryDayCount, p->mPasswordExpiryDayCount, sizeof p->mPasswordExpiryDayCount))
        {
            setLastError ("PasswordExpiryDayCount missing or not string");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::putLogout (const cdr &d, LseHeader* hdr, size_t len, size_t& used)
{
    LseLogout* p = (LseLogout*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putString (d, Reason, p->mReason, sizeof p->mReason))
        {
            setLastError ("Reason missing or not string");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::putHeartbeat (const cdr &d, LseHeader* hdr, size_t len, size_t& used)
{
    LseHeartbeat* p = (LseHeartbeat*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;


    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::putMissedMessageRequest (const cdr &d, LseHeader* hdr, size_t len, size_t& used)
{
    LseMissedMessageRequest* p = (LseMissedMessageRequest*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (AppID, &p->mAppID))
        {
            setLastError ("invalid or missing AppID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (LastMsgSeqNum, &p->mLastMsgSeqNum))
        {
            setLastError ("invalid or missing LastMsgSeqNum");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::putMissedMessageRequestAck (const cdr &d, LseHeader* hdr, size_t len, size_t& used)
{
    LseMissedMessageRequestAck* p = (LseMissedMessageRequestAck*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (ResponseType, &p->mResponseType))
        {
            setLastError ("invalid or missing ResponseType");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::putMissedMessageReport (const cdr &d, LseHeader* hdr, size_t len, size_t& used)
{
    LseMissedMessageReport* p = (LseMissedMessageReport*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (ResponseType, &p->mResponseType))
        {
            setLastError ("invalid or missing ResponseType");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::putReject (const cdr &d, LseHeader* hdr, size_t len, size_t& used)
{
    LseReject* p = (LseReject*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (RejectCode, &p->mRejectCode))
        {
            setLastError ("invalid or missing RejectCode");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, RejectReason, p->mRejectReason, sizeof p->mRejectReason))
        {
            setLastError ("RejectReason missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putCharacter (d, RejectedMessageType, &p->mRejectedMessageType))
        {
            setLastError ("invalid or missing RejectedMessageType");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, ClientOrderID, p->mClientOrderID, sizeof p->mClientOrderID))
        {
            setLastError ("ClientOrderID missing or not string");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::putSystemStatus (const cdr &d, LseHeader* hdr, size_t len, size_t& used)
{
    LseSystemStatus* p = (LseSystemStatus*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (AppID, &p->mAppID))
        {
            setLastError ("invalid or missing AppID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (Status, &p->mStatus))
        {
            setLastError ("invalid or missing Status");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::putNewOrder (const cdr &d, LseHeader* hdr, size_t len, size_t& used)
{
    LseNewOrder* p = (LseNewOrder*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putString (d, ClientOrderID, p->mClientOrderID, sizeof p->mClientOrderID))
        {
            setLastError ("ClientOrderID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, TraderID, p->mTraderID, sizeof p->mTraderID))
        {
            setLastError ("TraderID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, Account, p->mAccount, sizeof p->mAccount))
        {
            setLastError ("Account missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (ClearingAccount, &p->mClearingAccount))
        {
            setLastError ("invalid or missing ClearingAccount");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (InstrumentID, &p->mInstrumentID))
        {
            setLastError ("invalid or missing InstrumentID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (FXMiFIDFlags, &p->mFXMiFIDFlags))
        {
            setLastError ("invalid or missing FXMiFIDFlags");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (PartyRoleQualifiers, &p->mPartyRoleQualifiers))
        {
            setLastError ("invalid or missing PartyRoleQualifiers");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderType, &p->mOrderType))
        {
            setLastError ("invalid or missing OrderType");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (TIF, &p->mTIF))
        {
            setLastError ("invalid or missing TIF");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (ExpireDateTime, &p->mExpireDateTime))
        {
            setLastError ("invalid or missing ExpireDateTime");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (Side, &p->mSide))
        {
            setLastError ("invalid or missing Side");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderQty, &p->mOrderQty))
        {
            setLastError ("invalid or missing OrderQty");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (DisplayQty, &p->mDisplayQty))
        {
            setLastError ("invalid or missing DisplayQty");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, LimitPrice, &p->mLimitPrice))
        {
            setLastError ("invalid or missing LimitPrice");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (Capacity, &p->mCapacity))
        {
            setLastError ("invalid or missing Capacity");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (AutoCancel, &p->mAutoCancel))
        {
            setLastError ("invalid or missing AutoCancel");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderSubType, &p->mOrderSubType))
        {
            setLastError ("invalid or missing OrderSubType");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (Anonymity, &p->mAnonymity))
        {
            setLastError ("invalid or missing Anonymity");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, StopPrice, &p->mStopPrice))
        {
            setLastError ("invalid or missing StopPrice");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (PassiveOnlyOrder, &p->mPassiveOnlyOrder))
        {
            setLastError ("invalid or missing PassiveOnlyOrder");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (ClientID, &p->mClientID))
        {
            setLastError ("invalid or missing ClientID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (InvestmentDecisionMaker, &p->mInvestmentDecisionMaker))
        {
            setLastError ("invalid or missing InvestmentDecisionMaker");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (MinimumQuantity, &p->mMinimumQuantity))
        {
            setLastError ("invalid or missing MinimumQuantity");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (ExecutingTrader, &p->mExecutingTrader))
        {
            setLastError ("invalid or missing ExecutingTrader");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::putOrderCancelRequest (const cdr &d, LseHeader* hdr, size_t len, size_t& used)
{
    LseOrderCancelRequest* p = (LseOrderCancelRequest*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putString (d, ClientOrderID, p->mClientOrderID, sizeof p->mClientOrderID))
        {
            setLastError ("ClientOrderID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, OriginalClientOrderID, p->mOriginalClientOrderID, sizeof p->mOriginalClientOrderID))
        {
            setLastError ("OriginalClientOrderID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, OrderID, p->mOrderID, sizeof p->mOrderID))
        {
            setLastError ("OrderID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (InstrumentID, &p->mInstrumentID))
        {
            setLastError ("invalid or missing InstrumentID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (Side, &p->mSide))
        {
            setLastError ("invalid or missing Side");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, RfqID, p->mRfqID, sizeof p->mRfqID))
        {
            setLastError ("RfqID missing or not string");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::putOrderMassCancelRequest (const cdr &d, LseHeader* hdr, size_t len, size_t& used)
{
    LseOrderMassCancelRequest* p = (LseOrderMassCancelRequest*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putString (d, ClientOrderID, p->mClientOrderID, sizeof p->mClientOrderID))
        {
            setLastError ("ClientOrderID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (MassCancelRequestType, &p->mMassCancelRequestType))
        {
            setLastError ("invalid or missing MassCancelRequestType");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (InstrumentID, &p->mInstrumentID))
        {
            setLastError ("invalid or missing InstrumentID");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, Segment, p->mSegment, sizeof p->mSegment))
        {
            setLastError ("Segment missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderSubType, &p->mOrderSubType))
        {
            setLastError ("invalid or missing OrderSubType");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::putOrderCancelReplaceRequest (const cdr &d, LseHeader* hdr, size_t len, size_t& used)
{
    LseOrderCancelReplaceRequest* p = (LseOrderCancelReplaceRequest*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putString (d, ClientOrderID, p->mClientOrderID, sizeof p->mClientOrderID))
        {
            setLastError ("ClientOrderID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, OriginalClientOrderID, p->mOriginalClientOrderID, sizeof p->mOriginalClientOrderID))
        {
            setLastError ("OriginalClientOrderID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, OrderID, p->mOrderID, sizeof p->mOrderID))
        {
            setLastError ("OrderID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (InstrumentID, &p->mInstrumentID))
        {
            setLastError ("invalid or missing InstrumentID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (ExpireDateTime, &p->mExpireDateTime))
        {
            setLastError ("invalid or missing ExpireDateTime");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderQty, &p->mOrderQty))
        {
            setLastError ("invalid or missing OrderQty");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (DisplayQty, &p->mDisplayQty))
        {
            setLastError ("invalid or missing DisplayQty");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, LimitPrice, &p->mLimitPrice))
        {
            setLastError ("invalid or missing LimitPrice");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, Account, p->mAccount, sizeof p->mAccount))
        {
            setLastError ("Account missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (Side, &p->mSide))
        {
            setLastError ("invalid or missing Side");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, StopPrice, &p->mStopPrice))
        {
            setLastError ("invalid or missing StopPrice");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (PassiveOnlyOrder, &p->mPassiveOnlyOrder))
        {
            setLastError ("invalid or missing PassiveOnlyOrder");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (MinimumQuantity, &p->mMinimumQuantity))
        {
            setLastError ("invalid or missing MinimumQuantity");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::putNewOrderCross (const cdr &d, LseHeader* hdr, size_t len, size_t& used)
{
    LseNewOrderCross* p = (LseNewOrderCross*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putString (d, CrossID, p->mCrossID, sizeof p->mCrossID))
        {
            setLastError ("CrossID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (CrossType, &p->mCrossType))
        {
            setLastError ("invalid or missing CrossType");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, BuySideClOrdID, p->mBuySideClOrdID, sizeof p->mBuySideClOrdID))
        {
            setLastError ("BuySideClOrdID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (BuySideOrderCapacity, &p->mBuySideOrderCapacity))
        {
            setLastError ("invalid or missing BuySideOrderCapacity");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (BuySideClearingAccount, &p->mBuySideClearingAccount))
        {
            setLastError ("invalid or missing BuySideClearingAccount");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (BuySideOrderQuantity, &p->mBuySideOrderQuantity))
        {
            setLastError ("invalid or missing BuySideOrderQuantity");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, BuySideFirmID, p->mBuySideFirmID, sizeof p->mBuySideFirmID))
        {
            setLastError ("BuySideFirmID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (BuySidePartyRole, &p->mBuySidePartyRole))
        {
            setLastError ("invalid or missing BuySidePartyRole");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, SellSideClOrdID, p->mSellSideClOrdID, sizeof p->mSellSideClOrdID))
        {
            setLastError ("SellSideClOrdID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SellSideOrderCapacity, &p->mSellSideOrderCapacity))
        {
            setLastError ("invalid or missing SellSideOrderCapacity");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SellSideClearingAccount, &p->mSellSideClearingAccount))
        {
            setLastError ("invalid or missing SellSideClearingAccount");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SellSideOrderQuantity, &p->mSellSideOrderQuantity))
        {
            setLastError ("invalid or missing SellSideOrderQuantity");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, SellSideFirmID, p->mSellSideFirmID, sizeof p->mSellSideFirmID))
        {
            setLastError ("SellSideFirmID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SellSidePartyRole, &p->mSellSidePartyRole))
        {
            setLastError ("invalid or missing SellSidePartyRole");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (InstrumentID, &p->mInstrumentID))
        {
            setLastError ("invalid or missing InstrumentID");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, Price, &p->mPrice))
        {
            setLastError ("invalid or missing Price");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderType, &p->mOrderType))
        {
            setLastError ("invalid or missing OrderType");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (TIF, &p->mTIF))
        {
            setLastError ("invalid or missing TIF");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::putCrossOrderCancelRequest (const cdr &d, LseHeader* hdr, size_t len, size_t& used)
{
    LseCrossOrderCancelRequest* p = (LseCrossOrderCancelRequest*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putString (d, CrossID, p->mCrossID, sizeof p->mCrossID))
        {
            setLastError ("CrossID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, OriginalCrossID, p->mOriginalCrossID, sizeof p->mOriginalCrossID))
        {
            setLastError ("OriginalCrossID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (CrossType, &p->mCrossType))
        {
            setLastError ("invalid or missing CrossType");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, BuySideOriginalClOrdID, p->mBuySideOriginalClOrdID, sizeof p->mBuySideOriginalClOrdID))
        {
            setLastError ("BuySideOriginalClOrdID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (BuySideOrderQuantity, &p->mBuySideOrderQuantity))
        {
            setLastError ("invalid or missing BuySideOrderQuantity");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, SellSideOriginalClOrdID, p->mSellSideOriginalClOrdID, sizeof p->mSellSideOriginalClOrdID))
        {
            setLastError ("SellSideOriginalClOrdID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SellSideOrderQuantity, &p->mSellSideOrderQuantity))
        {
            setLastError ("invalid or missing SellSideOrderQuantity");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (InstrumentID, &p->mInstrumentID))
        {
            setLastError ("invalid or missing InstrumentID");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, ClientOrderID, p->mClientOrderID, sizeof p->mClientOrderID))
        {
            setLastError ("ClientOrderID missing or not string");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::putExecutionReport (const cdr &d, LseHeader* hdr, size_t len, size_t& used)
{
    LseExecutionReport* p = (LseExecutionReport*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (AppID, &p->mAppID))
        {
            setLastError ("invalid or missing AppID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SequenceNo, &p->mSequenceNo))
        {
            setLastError ("invalid or missing SequenceNo");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, ExecutionID, p->mExecutionID, sizeof p->mExecutionID))
        {
            setLastError ("ExecutionID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, ClientOrderID, p->mClientOrderID, sizeof p->mClientOrderID))
        {
            setLastError ("ClientOrderID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, OrderID, p->mOrderID, sizeof p->mOrderID))
        {
            setLastError ("OrderID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putCharacter (d, ExecType, &p->mExecType))
        {
            setLastError ("invalid or missing ExecType");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, ExecutionReportRefID, p->mExecutionReportRefID, sizeof p->mExecutionReportRefID))
        {
            setLastError ("ExecutionReportRefID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderStatus, &p->mOrderStatus))
        {
            setLastError ("invalid or missing OrderStatus");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderRejectCode, &p->mOrderRejectCode))
        {
            setLastError ("invalid or missing OrderRejectCode");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, ExecutedPrice, &p->mExecutedPrice))
        {
            setLastError ("invalid or missing ExecutedPrice");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (ExecutedQty, &p->mExecutedQty))
        {
            setLastError ("invalid or missing ExecutedQty");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (LeavesQty, &p->mLeavesQty))
        {
            setLastError ("invalid or missing LeavesQty");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (WaiverFlags, &p->mWaiverFlags))
        {
            setLastError ("invalid or missing WaiverFlags");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (DisplayQty, &p->mDisplayQty))
        {
            setLastError ("invalid or missing DisplayQty");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (InstrumentID, &p->mInstrumentID))
        {
            setLastError ("invalid or missing InstrumentID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (RestatementReason, &p->mRestatementReason))
        {
            setLastError ("invalid or missing RestatementReason");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (Side, &p->mSide))
        {
            setLastError ("invalid or missing Side");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, CounterParty, p->mCounterParty, sizeof p->mCounterParty))
        {
            setLastError ("CounterParty missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putCharacter (d, TradeLiquidityIndicator, &p->mTradeLiquidityIndicator))
        {
            setLastError ("invalid or missing TradeLiquidityIndicator");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (TradeMatchID, &p->mTradeMatchID))
        {
            setLastError ("invalid or missing TradeMatchID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (TransactTimeSeconds, &p->mTransactTimeSeconds))
        {
            setLastError ("invalid or missing TransactTimeSeconds");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (TransactTimeUsecs, &p->mTransactTimeUsecs))
        {
            setLastError ("invalid or missing TransactTimeUsecs");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (TypeOfTrade, &p->mTypeOfTrade))
        {
            setLastError ("invalid or missing TypeOfTrade");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (Capacity, &p->mCapacity))
        {
            setLastError ("invalid or missing Capacity");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, PublicOrderID, p->mPublicOrderID, sizeof p->mPublicOrderID))
        {
            setLastError ("PublicOrderID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (MinimumQuantity, &p->mMinimumQuantity))
        {
            setLastError ("invalid or missing MinimumQuantity");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::putOrderCancelReject (const cdr &d, LseHeader* hdr, size_t len, size_t& used)
{
    LseOrderCancelReject* p = (LseOrderCancelReject*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (AppID, &p->mAppID))
        {
            setLastError ("invalid or missing AppID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SequenceNo, &p->mSequenceNo))
        {
            setLastError ("invalid or missing SequenceNo");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, ClientOrderID, p->mClientOrderID, sizeof p->mClientOrderID))
        {
            setLastError ("ClientOrderID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, OrderID, p->mOrderID, sizeof p->mOrderID))
        {
            setLastError ("OrderID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (CancelRejectReason, &p->mCancelRejectReason))
        {
            setLastError ("invalid or missing CancelRejectReason");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (TransactTimeSeconds, &p->mTransactTimeSeconds))
        {
            setLastError ("invalid or missing TransactTimeSeconds");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (TransactTimeUsecs, &p->mTransactTimeUsecs))
        {
            setLastError ("invalid or missing TransactTimeUsecs");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, RfqID, p->mRfqID, sizeof p->mRfqID))
        {
            setLastError ("RfqID missing or not string");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::putOrderMassCancelReport (const cdr &d, LseHeader* hdr, size_t len, size_t& used)
{
    LseOrderMassCancelReport* p = (LseOrderMassCancelReport*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (AppID, &p->mAppID))
        {
            setLastError ("invalid or missing AppID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SequenceNo, &p->mSequenceNo))
        {
            setLastError ("invalid or missing SequenceNo");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, ClientOrderID, p->mClientOrderID, sizeof p->mClientOrderID))
        {
            setLastError ("ClientOrderID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (MassCancelResponse, &p->mMassCancelResponse))
        {
            setLastError ("invalid or missing MassCancelResponse");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (MassCancelRejectReason, &p->mMassCancelRejectReason))
        {
            setLastError ("invalid or missing MassCancelRejectReason");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (TransactTimeSeconds, &p->mTransactTimeSeconds))
        {
            setLastError ("invalid or missing TransactTimeSeconds");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (TransactTimeUsecs, &p->mTransactTimeUsecs))
        {
            setLastError ("invalid or missing TransactTimeUsecs");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
lseCodec::putBusinessReject (const cdr &d, LseHeader* hdr, size_t len, size_t& used)
{
    LseBusinessReject* p = (LseBusinessReject*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (AppID, &p->mAppID))
        {
            setLastError ("invalid or missing AppID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SequenceNo, &p->mSequenceNo))
        {
            setLastError ("invalid or missing SequenceNo");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (RejectCode, &p->mRejectCode))
        {
            setLastError ("invalid or missing RejectCode");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, ClientOrderID, p->mClientOrderID, sizeof p->mClientOrderID))
        {
            setLastError ("ClientOrderID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, OrderID, p->mOrderID, sizeof p->mOrderID))
        {
            setLastError ("OrderID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (TransactTimeSeconds, &p->mTransactTimeSeconds))
        {
            setLastError ("invalid or missing TransactTimeSeconds");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (TransactTimeUsecs, &p->mTransactTimeUsecs))
        {
            setLastError ("invalid or missing TransactTimeUsecs");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}


codecState
lseCodec::decode (cdr& d, const void* buf, size_t len, size_t& used)
{
    clearLastError ();
    used = 0;
    d.clear ();

    LseHeader* hdr = (LseHeader*)buf;
    if (len < sizeof *hdr)
        return GW_CODEC_SHORT;
    if (len < (unsigned)hdr->mMessageLength + sizeof(*hdr) - 1)
        return GW_CODEC_SHORT;

    used = ((hdr->mMessageLength-1) + sizeof (*hdr));

    d.setString (MessageType, "%c", hdr->mMessageType);
    d.setInteger (MessageLength, hdr->mMessageLength);
    switch (hdr->mMessageType) {
        case 'A':
            return getLogon (d, hdr);
        case 'B':
            return getLogonReply (d, hdr);
        case '5':
            return getLogout (d, hdr);
        case '0':
            return getHeartbeat (d, hdr);
        case 'M':
            return getMissedMessageRequest (d, hdr);
        case 'N':
            return getMissedMessageRequestAck (d, hdr);
        case 'P':
            return getMissedMessageReport (d, hdr);
        case '3':
            return getReject (d, hdr);
        case 'n':
            return getSystemStatus (d, hdr);
        case 'D':
            return getNewOrder (d, hdr);
        case 'F':
            return getOrderCancelRequest (d, hdr);
        case 'q':
            return getOrderMassCancelRequest (d, hdr);
        case 'G':
            return getOrderCancelReplaceRequest (d, hdr);
        case 'C':
            return getNewOrderCross (d, hdr);
        case 'H':
            return getCrossOrderCancelRequest (d, hdr);
        case '8':
            return getExecutionReport (d, hdr);
        case '9':
            return getOrderCancelReject (d, hdr);
        case 'r':
            return getOrderMassCancelReport (d, hdr);
        case 'j':
            return getBusinessReject (d, hdr);
        default:
            setLastError ("unknown message type");
            return GW_CODEC_ERROR;
    }
}

codecState
lseCodec::encode (const cdr& d, void* buf, size_t len, size_t& used)
{
    clearLastError ();
    used = 0;

    LseHeader* hdr = (LseHeader*)buf;

    if (len < sizeof *hdr)
        return GW_CODEC_SHORT;

    if (!d.isType (MessageType, CDR_STRING, 1))
    {
        setLastError ("MessageType missing or not string");
        return GW_CODEC_ERROR;
    }
    std::string s;
    d.getString (MessageType, s);
    hdr->mMessageType = *s.c_str ();
    hdr->mStartOfMessage = 2;

    codecState state;
    switch (hdr->mMessageType)
    {
        case 'A':
            state = putLogon (d, hdr, len, used);
            break;
        case 'B':
            state = putLogonReply (d, hdr, len, used);
            break;
        case '5':
            state = putLogout (d, hdr, len, used);
            break;
        case '0':
            state = putHeartbeat (d, hdr, len, used);
            break;
        case 'M':
            state = putMissedMessageRequest (d, hdr, len, used);
            break;
        case 'N':
            state = putMissedMessageRequestAck (d, hdr, len, used);
            break;
        case 'P':
            state = putMissedMessageReport (d, hdr, len, used);
            break;
        case '3':
            state = putReject (d, hdr, len, used);
            break;
        case 'n':
            state = putSystemStatus (d, hdr, len, used);
            break;
        case 'D':
            state = putNewOrder (d, hdr, len, used);
            break;
        case 'F':
            state = putOrderCancelRequest (d, hdr, len, used);
            break;
        case 'q':
            state = putOrderMassCancelRequest (d, hdr, len, used);
            break;
        case 'G':
            state = putOrderCancelReplaceRequest (d, hdr, len, used);
            break;
        case 'C':
            state = putNewOrderCross (d, hdr, len, used);
            break;
        case 'H':
            state = putCrossOrderCancelRequest (d, hdr, len, used);
            break;
        case '8':
            state = putExecutionReport (d, hdr, len, used);
            break;
        case '9':
            state = putOrderCancelReject (d, hdr, len, used);
            break;
        case 'r':
            state = putOrderMassCancelReport (d, hdr, len, used);
            break;
        case 'j':
            state = putBusinessReject (d, hdr, len, used);
            break;
        default:
            setLastError ("unknown message type");
            return GW_CODEC_ERROR;
    }
    if (state != GW_CODEC_SUCCESS)
        return state;

    hdr->mMessageLength = used - (sizeof(*hdr) - 1);
    return GW_CODEC_SUCCESS;
}

} // namespace neueda
