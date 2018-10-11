/*
 * Copyright 2014-2018 Neueda
 */
/* Oslo Version 6.4 */
#include "osloCodec.h"

namespace neueda
{

extern "C" codec*
getCodec ()
{
    return new osloCodec ();
}

const double mPriceConverter = 100000000.0;

codecState
osloCodec::getLogon (cdr &d, OsloHeader* hdr)
{
    d.setString (MessageName, "Logon");
    OsloLogon* p = (OsloLogon*)hdr;

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
osloCodec::getLogonResponse (cdr &d, OsloHeader* hdr)
{
    d.setString (MessageName, "LogonResponse");
    OsloLogonResponse* p = (OsloLogonResponse*)hdr;

    d.setInteger (RejectCode, p->mRejectCode);
    codecHelper_setString (d, PasswordExpiryDayCount, p->mPasswordExpiryDayCount,
                           sizeof (p->mPasswordExpiryDayCount));

    return GW_CODEC_SUCCESS;
}

codecState
osloCodec::getLogout (cdr &d, OsloHeader* hdr)
{
    d.setString (MessageName, "Logout");
    OsloLogout* p = (OsloLogout*)hdr;

    codecHelper_setString (d, Reason, p->mReason,
                           sizeof (p->mReason));

    return GW_CODEC_SUCCESS;
}

codecState
osloCodec::getHeartbeat (cdr &d, OsloHeader* hdr)
{
    d.setString (MessageName, "Heartbeat");


    return GW_CODEC_SUCCESS;
}

codecState
osloCodec::getReject (cdr &d, OsloHeader* hdr)
{
    d.setString (MessageName, "Reject");
    OsloReject* p = (OsloReject*)hdr;

    d.setInteger (RejectCode, p->mRejectCode);
    codecHelper_setString (d, RejectReason, p->mRejectReason,
                           sizeof (p->mRejectReason));
    d.setInteger (RejectedMessageType, p->mRejectedMessageType);
    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));

    return GW_CODEC_SUCCESS;
}

codecState
osloCodec::getMissedMessageRequest (cdr &d, OsloHeader* hdr)
{
    d.setString (MessageName, "MissedMessageRequest");
    OsloMissedMessageRequest* p = (OsloMissedMessageRequest*)hdr;

    d.setInteger (PartitionID, p->mPartitionID);
    d.setInteger (LastMsgSeqNum, p->mLastMsgSeqNum);

    return GW_CODEC_SUCCESS;
}

codecState
osloCodec::getMissedMessageRequestAck (cdr &d, OsloHeader* hdr)
{
    d.setString (MessageName, "MissedMessageRequestAck");
    OsloMissedMessageRequestAck* p = (OsloMissedMessageRequestAck*)hdr;

    d.setInteger (ResponseType, p->mResponseType);

    return GW_CODEC_SUCCESS;
}

codecState
osloCodec::getTransmissionComplete (cdr &d, OsloHeader* hdr)
{
    d.setString (MessageName, "TransmissionComplete");
    OsloTransmissionComplete* p = (OsloTransmissionComplete*)hdr;

    d.setInteger (ResponseType, p->mResponseType);

    return GW_CODEC_SUCCESS;
}

codecState
osloCodec::getSystemStatus (cdr &d, OsloHeader* hdr)
{
    d.setString (MessageName, "SystemStatus");
    OsloSystemStatus* p = (OsloSystemStatus*)hdr;

    d.setInteger (PartitionID, p->mPartitionID);
    d.setInteger (Status, p->mStatus);

    return GW_CODEC_SUCCESS;
}

codecState
osloCodec::getNewOrder (cdr &d, OsloHeader* hdr)
{
    d.setString (MessageName, "NewOrder");
    OsloNewOrder* p = (OsloNewOrder*)hdr;

    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    codecHelper_setString (d, TraderID, p->mTraderID,
                           sizeof (p->mTraderID));
    codecHelper_setString (d, Account, p->mAccount,
                           sizeof (p->mAccount));
    d.setInteger (ClearingAccount, p->mClearingAccount);
    d.setInteger (InstrumentID, p->mInstrumentID);
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
    d.setInteger (PassiveOnlyOrder, p->mPassiveOnlyOrder);
    d.setInteger (TargetBook, p->mTargetBook);
    d.setInteger (ExecInstruction, p->mExecInstruction);
    d.setInteger (MinimumQuantity, p->mMinimumQuantity);
    d.setDouble (PegPriceType, (p->mPegPriceType) / mPriceConverter);
    d.setInteger (ClientID, p->mClientID);
    d.setInteger (InvestmentDecisionMaker, p->mInvestmentDecisionMaker);
    d.setInteger (ExecutingTrader, p->mExecutingTrader);
    d.setInteger (FXMiFIDFlags, p->mFXMiFIDFlags);
    d.setInteger (PartyRoleQualifiers, p->mPartyRoleQualifiers);

    return GW_CODEC_SUCCESS;
}

codecState
osloCodec::getCancelRequest (cdr &d, OsloHeader* hdr)
{
    d.setString (MessageName, "CancelRequest");
    OsloCancelRequest* p = (OsloCancelRequest*)hdr;

    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    codecHelper_setString (d, OriginalClientOrderID, p->mOriginalClientOrderID,
                           sizeof (p->mOriginalClientOrderID));
    codecHelper_setString (d, OrderID, p->mOrderID,
                           sizeof (p->mOrderID));
    d.setInteger (InstrumentID, p->mInstrumentID);
    d.setInteger (Side, p->mSide);
    d.setInteger (TargetBook, p->mTargetBook);

    return GW_CODEC_SUCCESS;
}

codecState
osloCodec::getMassCancelRequest (cdr &d, OsloHeader* hdr)
{
    d.setString (MessageName, "MassCancelRequest");
    OsloMassCancelRequest* p = (OsloMassCancelRequest*)hdr;

    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    d.setInteger (MassCancelRequestType, p->mMassCancelRequestType);
    d.setInteger (InstrumentID, p->mInstrumentID);
    codecHelper_setString (d, Segment, p->mSegment,
                           sizeof (p->mSegment));
    d.setInteger (OrderSubType, p->mOrderSubType);
    d.setInteger (TargetBook, p->mTargetBook);

    return GW_CODEC_SUCCESS;
}

codecState
osloCodec::getOrderModificationRequest (cdr &d, OsloHeader* hdr)
{
    d.setString (MessageName, "OrderModificationRequest");
    OsloOrderModificationRequest* p = (OsloOrderModificationRequest*)hdr;

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
    d.setInteger (TargetBook, p->mTargetBook);
    d.setInteger (ExecInstruction, p->mExecInstruction);
    d.setInteger (MinimumQuantity, p->mMinimumQuantity);
    d.setInteger (PassiveOnlyOrder, p->mPassiveOnlyOrder);

    return GW_CODEC_SUCCESS;
}

codecState
osloCodec::getExecutionReport (cdr &d, OsloHeader* hdr)
{
    d.setString (MessageName, "ExecutionReport");
    OsloExecutionReport* p = (OsloExecutionReport*)hdr;

    d.setInteger (PartitionID, p->mPartitionID);
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
    d.setInteger (WorkingIndicator, p->mWorkingIndicator);
    d.setInteger (DisplayQty, p->mDisplayQty);
    d.setInteger (InstrumentID, p->mInstrumentID);
    d.setInteger (WaiverFlags, p->mWaiverFlags);
    d.setInteger (Side, p->mSide);
    codecHelper_setString (d, CounterParty, p->mCounterParty,
                           sizeof (p->mCounterParty));
    d.setInteger (TradeLiquidityIndicator, p->mTradeLiquidityIndicator);
    d.setInteger (TradeMatchID, p->mTradeMatchID);
    d.setInteger (TransactTimeSeconds, p->mTransactTimeSeconds);
    d.setInteger (TransactTimeUsecs, p->mTransactTimeUsecs);
    d.setInteger (TargetBook, p->mTargetBook);
    d.setInteger (MinimumQuantity, p->mMinimumQuantity);
    d.setInteger (AvgPx, p->mAvgPx);
    d.setInteger (TypeOfTrade, p->mTypeOfTrade);
    d.setInteger (RestatementReason, p->mRestatementReason);
    d.setInteger (PriceDifferential, p->mPriceDifferential);
    codecHelper_setString (d, PublicOrderID, p->mPublicOrderID,
                           sizeof (p->mPublicOrderID));

    return GW_CODEC_SUCCESS;
}

codecState
osloCodec::getCancelReject (cdr &d, OsloHeader* hdr)
{
    d.setString (MessageName, "CancelReject");
    OsloCancelReject* p = (OsloCancelReject*)hdr;

    d.setInteger (PartitionID, p->mPartitionID);
    d.setInteger (SequenceNo, p->mSequenceNo);
    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    codecHelper_setString (d, OrderID, p->mOrderID,
                           sizeof (p->mOrderID));
    d.setInteger (CancelRejectReason, p->mCancelRejectReason);
    d.setInteger (TransactTimeSeconds, p->mTransactTimeSeconds);
    d.setInteger (TransactTimeUsecs, p->mTransactTimeUsecs);

    return GW_CODEC_SUCCESS;
}

codecState
osloCodec::getMassCancelReport (cdr &d, OsloHeader* hdr)
{
    d.setString (MessageName, "MassCancelReport");
    OsloMassCancelReport* p = (OsloMassCancelReport*)hdr;

    d.setInteger (PartitionID, p->mPartitionID);
    d.setInteger (SequenceNo, p->mSequenceNo);
    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    d.setInteger (MassCancelResponse, p->mMassCancelResponse);
    d.setInteger (MassCancelRejectReason, p->mMassCancelRejectReason);
    d.setInteger (TotalAffectedOrders, p->mTotalAffectedOrders);
    d.setInteger (TransactTimeSeconds, p->mTransactTimeSeconds);
    d.setInteger (TransactTimeUsecs, p->mTransactTimeUsecs);

    return GW_CODEC_SUCCESS;
}

codecState
osloCodec::getBusinessReject (cdr &d, OsloHeader* hdr)
{
    d.setString (MessageName, "BusinessReject");
    OsloBusinessReject* p = (OsloBusinessReject*)hdr;

    d.setInteger (PartitionID, p->mPartitionID);
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
osloCodec::putLogon (const cdr &d, OsloHeader* hdr, size_t len, size_t& used)
{
    OsloLogon* p = (OsloLogon*)hdr;
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
osloCodec::putLogonResponse (const cdr &d, OsloHeader* hdr, size_t len, size_t& used)
{
    OsloLogonResponse* p = (OsloLogonResponse*)hdr;
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
osloCodec::putLogout (const cdr &d, OsloHeader* hdr, size_t len, size_t& used)
{
    OsloLogout* p = (OsloLogout*)hdr;
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
osloCodec::putHeartbeat (const cdr &d, OsloHeader* hdr, size_t len, size_t& used)
{
    OsloHeartbeat* p = (OsloHeartbeat*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;


    return GW_CODEC_SUCCESS;
}

codecState
osloCodec::putReject (const cdr &d, OsloHeader* hdr, size_t len, size_t& used)
{
    OsloReject* p = (OsloReject*)hdr;
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
osloCodec::putMissedMessageRequest (const cdr &d, OsloHeader* hdr, size_t len, size_t& used)
{
    OsloMissedMessageRequest* p = (OsloMissedMessageRequest*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (PartitionID, &p->mPartitionID))
        {
            setLastError ("invalid or missing PartitionID");
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
osloCodec::putMissedMessageRequestAck (const cdr &d, OsloHeader* hdr, size_t len, size_t& used)
{
    OsloMissedMessageRequestAck* p = (OsloMissedMessageRequestAck*)hdr;
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
osloCodec::putTransmissionComplete (const cdr &d, OsloHeader* hdr, size_t len, size_t& used)
{
    OsloTransmissionComplete* p = (OsloTransmissionComplete*)hdr;
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
osloCodec::putSystemStatus (const cdr &d, OsloHeader* hdr, size_t len, size_t& used)
{
    OsloSystemStatus* p = (OsloSystemStatus*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (PartitionID, &p->mPartitionID))
        {
            setLastError ("invalid or missing PartitionID");
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
osloCodec::putNewOrder (const cdr &d, OsloHeader* hdr, size_t len, size_t& used)
{
    OsloNewOrder* p = (OsloNewOrder*)hdr;
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
        if (!d.getInteger (PassiveOnlyOrder, &p->mPassiveOnlyOrder))
        {
            setLastError ("invalid or missing PassiveOnlyOrder");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (TargetBook, &p->mTargetBook))
        {
            setLastError ("invalid or missing TargetBook");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (ExecInstruction, &p->mExecInstruction))
        {
            setLastError ("invalid or missing ExecInstruction");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (MinimumQuantity, &p->mMinimumQuantity))
        {
            setLastError ("invalid or missing MinimumQuantity");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (PegPriceType, &p->mPegPriceType))
        {
            setLastError ("invalid or missing PegPriceType");
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
        if (!d.getInteger (ExecutingTrader, &p->mExecutingTrader))
        {
            setLastError ("invalid or missing ExecutingTrader");
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

    return GW_CODEC_SUCCESS;
}

codecState
osloCodec::putCancelRequest (const cdr &d, OsloHeader* hdr, size_t len, size_t& used)
{
    OsloCancelRequest* p = (OsloCancelRequest*)hdr;
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
        if (!d.getInteger (TargetBook, &p->mTargetBook))
        {
            setLastError ("invalid or missing TargetBook");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
osloCodec::putMassCancelRequest (const cdr &d, OsloHeader* hdr, size_t len, size_t& used)
{
    OsloMassCancelRequest* p = (OsloMassCancelRequest*)hdr;
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
        if (!d.getInteger (TargetBook, &p->mTargetBook))
        {
            setLastError ("invalid or missing TargetBook");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
osloCodec::putOrderModificationRequest (const cdr &d, OsloHeader* hdr, size_t len, size_t& used)
{
    OsloOrderModificationRequest* p = (OsloOrderModificationRequest*)hdr;
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
        if (!d.getInteger (TargetBook, &p->mTargetBook))
        {
            setLastError ("invalid or missing TargetBook");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (ExecInstruction, &p->mExecInstruction))
        {
            setLastError ("invalid or missing ExecInstruction");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (MinimumQuantity, &p->mMinimumQuantity))
        {
            setLastError ("invalid or missing MinimumQuantity");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (PassiveOnlyOrder, &p->mPassiveOnlyOrder))
        {
            setLastError ("invalid or missing PassiveOnlyOrder");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
osloCodec::putExecutionReport (const cdr &d, OsloHeader* hdr, size_t len, size_t& used)
{
    OsloExecutionReport* p = (OsloExecutionReport*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (PartitionID, &p->mPartitionID))
        {
            setLastError ("invalid or missing PartitionID");
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
        if (!d.getInteger (WorkingIndicator, &p->mWorkingIndicator))
        {
            setLastError ("invalid or missing WorkingIndicator");
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
        if (!d.getInteger (WaiverFlags, &p->mWaiverFlags))
        {
            setLastError ("invalid or missing WaiverFlags");
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
        if (!d.getInteger (TargetBook, &p->mTargetBook))
        {
            setLastError ("invalid or missing TargetBook");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (MinimumQuantity, &p->mMinimumQuantity))
        {
            setLastError ("invalid or missing MinimumQuantity");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (AvgPx, &p->mAvgPx))
        {
            setLastError ("invalid or missing AvgPx");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (TypeOfTrade, &p->mTypeOfTrade))
        {
            setLastError ("invalid or missing TypeOfTrade");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (RestatementReason, &p->mRestatementReason))
        {
            setLastError ("invalid or missing RestatementReason");
            return GW_CODEC_ERROR;
        }
        if (!putCharacter (d, PriceDifferential, &p->mPriceDifferential))
        {
            setLastError ("invalid or missing PriceDifferential");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, PublicOrderID, p->mPublicOrderID, sizeof p->mPublicOrderID))
        {
            setLastError ("PublicOrderID missing or not string");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
osloCodec::putCancelReject (const cdr &d, OsloHeader* hdr, size_t len, size_t& used)
{
    OsloCancelReject* p = (OsloCancelReject*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (PartitionID, &p->mPartitionID))
        {
            setLastError ("invalid or missing PartitionID");
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

    return GW_CODEC_SUCCESS;
}

codecState
osloCodec::putMassCancelReport (const cdr &d, OsloHeader* hdr, size_t len, size_t& used)
{
    OsloMassCancelReport* p = (OsloMassCancelReport*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (PartitionID, &p->mPartitionID))
        {
            setLastError ("invalid or missing PartitionID");
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
        if (!d.getInteger (TotalAffectedOrders, &p->mTotalAffectedOrders))
        {
            setLastError ("invalid or missing TotalAffectedOrders");
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
osloCodec::putBusinessReject (const cdr &d, OsloHeader* hdr, size_t len, size_t& used)
{
    OsloBusinessReject* p = (OsloBusinessReject*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (PartitionID, &p->mPartitionID))
        {
            setLastError ("invalid or missing PartitionID");
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
osloCodec::decode (cdr& d, const void* buf, size_t len, size_t& used)
{
    clearLastError ();
    used = 0;
    d.clear ();

    OsloHeader* hdr = (OsloHeader*)buf;
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
            return getLogonResponse (d, hdr);
        case '5':
            return getLogout (d, hdr);
        case '0':
            return getHeartbeat (d, hdr);
        case '3':
            return getReject (d, hdr);
        case 'M':
            return getMissedMessageRequest (d, hdr);
        case 'N':
            return getMissedMessageRequestAck (d, hdr);
        case 'P':
            return getTransmissionComplete (d, hdr);
        case 'n':
            return getSystemStatus (d, hdr);
        case 'D':
            return getNewOrder (d, hdr);
        case 'F':
            return getCancelRequest (d, hdr);
        case 'q':
            return getMassCancelRequest (d, hdr);
        case 'G':
            return getOrderModificationRequest (d, hdr);
        case '8':
            return getExecutionReport (d, hdr);
        case '9':
            return getCancelReject (d, hdr);
        case 'r':
            return getMassCancelReport (d, hdr);
        case 'j':
            return getBusinessReject (d, hdr);
        default:
            setLastError ("unknown message type");
            return GW_CODEC_ERROR;
    }
}

codecState
osloCodec::encode (const cdr& d, void* buf, size_t len, size_t& used)
{
    clearLastError ();
    used = 0;

    OsloHeader* hdr = (OsloHeader*)buf;

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
            state = putLogonResponse (d, hdr, len, used);
            break;
        case '5':
            state = putLogout (d, hdr, len, used);
            break;
        case '0':
            state = putHeartbeat (d, hdr, len, used);
            break;
        case '3':
            state = putReject (d, hdr, len, used);
            break;
        case 'M':
            state = putMissedMessageRequest (d, hdr, len, used);
            break;
        case 'N':
            state = putMissedMessageRequestAck (d, hdr, len, used);
            break;
        case 'P':
            state = putTransmissionComplete (d, hdr, len, used);
            break;
        case 'n':
            state = putSystemStatus (d, hdr, len, used);
            break;
        case 'D':
            state = putNewOrder (d, hdr, len, used);
            break;
        case 'F':
            state = putCancelRequest (d, hdr, len, used);
            break;
        case 'q':
            state = putMassCancelRequest (d, hdr, len, used);
            break;
        case 'G':
            state = putOrderModificationRequest (d, hdr, len, used);
            break;
        case '8':
            state = putExecutionReport (d, hdr, len, used);
            break;
        case '9':
            state = putCancelReject (d, hdr, len, used);
            break;
        case 'r':
            state = putMassCancelReport (d, hdr, len, used);
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

    hdr->mMessageLength = (used - sizeof(*hdr) - 1);
    return GW_CODEC_SUCCESS;
}

} // namespace neueda
