/*
 * Copyright 2014-2018 Neueda
 */
/* Turquoise Version 3.2 */
#include "turquoiseCodec.h"

namespace neueda
{

extern "C" codec*
getCodec ()
{
    return new turquoiseCodec ();
}

const double mPriceConverter = 100000000.0;

codecState
turquoiseCodec::getLogon (cdr &d, TurquoiseHeader* hdr)
{
    d.setString (MessageName, "Logon");
    TurquoiseLogon* p = (TurquoiseLogon*)hdr;

    codecHelper_setString (d, CompID, p->mCompID,
                           sizeof (p->mCompID));
    codecHelper_setString (d, Password, p->mPassword,
                           sizeof (p->mPassword));
    codecHelper_setString (d, NewPassword, p->mNewPassword,
                           sizeof (p->mNewPassword));
    d.setInteger (MessageVersion, p->mMessageVersion);

    return GW_CODEC_SUCCESS;
}

codecState
turquoiseCodec::getLogonReply (cdr &d, TurquoiseHeader* hdr)
{
    d.setString (MessageName, "LogonReply");
    TurquoiseLogonReply* p = (TurquoiseLogonReply*)hdr;

    d.setInteger (RejectCode, p->mRejectCode);
    codecHelper_setString (d, PasswordExpiryDayCount, p->mPasswordExpiryDayCount,
                           sizeof (p->mPasswordExpiryDayCount));

    return GW_CODEC_SUCCESS;
}

codecState
turquoiseCodec::getLogout (cdr &d, TurquoiseHeader* hdr)
{
    d.setString (MessageName, "Logout");
    TurquoiseLogout* p = (TurquoiseLogout*)hdr;

    codecHelper_setString (d, LogoutReason, p->mLogoutReason,
                           sizeof (p->mLogoutReason));

    return GW_CODEC_SUCCESS;
}

codecState
turquoiseCodec::getHeartbeat (cdr &d, TurquoiseHeader* hdr)
{
    d.setString (MessageName, "Heartbeat");


    return GW_CODEC_SUCCESS;
}

codecState
turquoiseCodec::getMissedMessageRequest (cdr &d, TurquoiseHeader* hdr)
{
    d.setString (MessageName, "MissedMessageRequest");
    TurquoiseMissedMessageRequest* p = (TurquoiseMissedMessageRequest*)hdr;

    d.setInteger (AppID, p->mAppID);
    d.setInteger (LastMsgSeqNum, p->mLastMsgSeqNum);

    return GW_CODEC_SUCCESS;
}

codecState
turquoiseCodec::getMissedMessageRequestAck (cdr &d, TurquoiseHeader* hdr)
{
    d.setString (MessageName, "MissedMessageRequestAck");
    TurquoiseMissedMessageRequestAck* p = (TurquoiseMissedMessageRequestAck*)hdr;

    d.setInteger (ResponseType, p->mResponseType);

    return GW_CODEC_SUCCESS;
}

codecState
turquoiseCodec::getMissedMessageReport (cdr &d, TurquoiseHeader* hdr)
{
    d.setString (MessageName, "MissedMessageReport");
    TurquoiseMissedMessageReport* p = (TurquoiseMissedMessageReport*)hdr;

    d.setInteger (ResponseType, p->mResponseType);

    return GW_CODEC_SUCCESS;
}

codecState
turquoiseCodec::getReject (cdr &d, TurquoiseHeader* hdr)
{
    d.setString (MessageName, "Reject");
    TurquoiseReject* p = (TurquoiseReject*)hdr;

    d.setInteger (RejectCode, p->mRejectCode);
    codecHelper_setString (d, RejectReason, p->mRejectReason,
                           sizeof (p->mRejectReason));
    d.setInteger (RejectedMessageType, p->mRejectedMessageType);
    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));

    return GW_CODEC_SUCCESS;
}

codecState
turquoiseCodec::getSystemStatus (cdr &d, TurquoiseHeader* hdr)
{
    d.setString (MessageName, "SystemStatus");
    TurquoiseSystemStatus* p = (TurquoiseSystemStatus*)hdr;

    d.setInteger (AppID, p->mAppID);
    d.setInteger (RejectReason, p->mRejectReason);

    return GW_CODEC_SUCCESS;
}

codecState
turquoiseCodec::getNewOrder (cdr &d, TurquoiseHeader* hdr)
{
    d.setString (MessageName, "NewOrder");
    TurquoiseNewOrder* p = (TurquoiseNewOrder*)hdr;

    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    codecHelper_setString (d, TraderID, p->mTraderID,
                           sizeof (p->mTraderID));
    codecHelper_setString (d, Account, p->mAccount,
                           sizeof (p->mAccount));
    d.setInteger (ClearingAccount, p->mClearingAccount);
    codecHelper_setString (d, CommonSymbol, p->mCommonSymbol,
                           sizeof (p->mCommonSymbol));
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
    d.setInteger (TargetBook, p->mTargetBook);
    d.setInteger (ExecInstruction, p->mExecInstruction);
    d.setInteger (MinimumQuantity, p->mMinimumQuantity);
    d.setInteger (PassiveOnlyOrder, p->mPassiveOnlyOrder);
    codecHelper_setString (d, CIOrdLinkID, p->mCIOrdLinkID,
                           sizeof (p->mCIOrdLinkID));

    return GW_CODEC_SUCCESS;
}

codecState
turquoiseCodec::getOrderCancelReplaceRequest (cdr &d, TurquoiseHeader* hdr)
{
    d.setString (MessageName, "OrderCancelReplaceRequest");
    TurquoiseOrderCancelReplaceRequest* p = (TurquoiseOrderCancelReplaceRequest*)hdr;

    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    codecHelper_setString (d, OriginalClientOrderID, p->mOriginalClientOrderID,
                           sizeof (p->mOriginalClientOrderID));
    codecHelper_setString (d, OrderID, p->mOrderID,
                           sizeof (p->mOrderID));
    codecHelper_setString (d, CommonSymbol, p->mCommonSymbol,
                           sizeof (p->mCommonSymbol));
    d.setInteger (ExpireDateTime, p->mExpireDateTime);
    d.setInteger (OrderQty, p->mOrderQty);
    d.setInteger (DisplayQty, p->mDisplayQty);
    d.setDouble (LimitPrice, (p->mLimitPrice) / mPriceConverter);
    codecHelper_setString (d, Account, p->mAccount,
                           sizeof (p->mAccount));
    d.setInteger (TIF, p->mTIF);
    d.setInteger (Side, p->mSide);
    d.setInteger (TargetBook, p->mTargetBook);
    d.setInteger (ExecInstruction, p->mExecInstruction);
    d.setInteger (MinQty, p->mMinQty);
    d.setInteger (PassiveOnlyOrder, p->mPassiveOnlyOrder);

    return GW_CODEC_SUCCESS;
}

codecState
turquoiseCodec::getOrderCancelRequest (cdr &d, TurquoiseHeader* hdr)
{
    d.setString (MessageName, "OrderCancelRequest");
    TurquoiseOrderCancelRequest* p = (TurquoiseOrderCancelRequest*)hdr;

    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    codecHelper_setString (d, OriginalClientOrderID, p->mOriginalClientOrderID,
                           sizeof (p->mOriginalClientOrderID));
    codecHelper_setString (d, OrderID, p->mOrderID,
                           sizeof (p->mOrderID));
    codecHelper_setString (d, CommonSymbol, p->mCommonSymbol,
                           sizeof (p->mCommonSymbol));
    d.setInteger (Side, p->mSide);
    d.setInteger (TargetBook, p->mTargetBook);

    return GW_CODEC_SUCCESS;
}

codecState
turquoiseCodec::getOrderMassCancelRequest (cdr &d, TurquoiseHeader* hdr)
{
    d.setString (MessageName, "OrderMassCancelRequest");
    TurquoiseOrderMassCancelRequest* p = (TurquoiseOrderMassCancelRequest*)hdr;

    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    d.setInteger (MassCancelType, p->mMassCancelType);
    codecHelper_setString (d, CommonSymbol, p->mCommonSymbol,
                           sizeof (p->mCommonSymbol));
    codecHelper_setString (d, Segment, p->mSegment,
                           sizeof (p->mSegment));
    d.setInteger (TargetBook, p->mTargetBook);

    return GW_CODEC_SUCCESS;
}

codecState
turquoiseCodec::getExecutionReport (cdr &d, TurquoiseHeader* hdr)
{
    d.setString (MessageName, "ExecutionReport");
    TurquoiseExecutionReport* p = (TurquoiseExecutionReport*)hdr;

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
    d.setInteger (Container, p->mContainer);
    d.setInteger (DisplayQty, p->mDisplayQty);
    codecHelper_setString (d, CommonSymbol, p->mCommonSymbol,
                           sizeof (p->mCommonSymbol));
    d.setInteger (Side, p->mSide);
    d.setInteger (SecondaryOrderID, p->mSecondaryOrderID);
    codecHelper_setString (d, CounterParty, p->mCounterParty,
                           sizeof (p->mCounterParty));
    d.setInteger (TradeLiquidityIndicator, p->mTradeLiquidityIndicator);
    d.setInteger (TradeMatchID, p->mTradeMatchID);
    d.setInteger (TransactTimeSeconds, p->mTransactTimeSeconds);
    d.setInteger (TransactTimeUsecs, p->mTransactTimeUsecs);
    d.setInteger (TargetBook, p->mTargetBook);
    d.setInteger (TypeOfTrade, p->mTypeOfTrade);
    d.setInteger (Capacity, p->mCapacity);
    d.setInteger (PriceDifferential, p->mPriceDifferential);
    codecHelper_setString (d, PublicOrderID, p->mPublicOrderID,
                           sizeof (p->mPublicOrderID));
    d.setInteger (MinimumQuantity, p->mMinimumQuantity);
    d.setInteger (ReputationalScore, p->mReputationalScore);

    return GW_CODEC_SUCCESS;
}

codecState
turquoiseCodec::getOrderCancelReject (cdr &d, TurquoiseHeader* hdr)
{
    d.setString (MessageName, "OrderCancelReject");
    TurquoiseOrderCancelReject* p = (TurquoiseOrderCancelReject*)hdr;

    d.setInteger (AppID, p->mAppID);
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
turquoiseCodec::getOrderMassCancelReport (cdr &d, TurquoiseHeader* hdr)
{
    d.setString (MessageName, "OrderMassCancelReport");
    TurquoiseOrderMassCancelReport* p = (TurquoiseOrderMassCancelReport*)hdr;

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
turquoiseCodec::getBusinessReject (cdr &d, TurquoiseHeader* hdr)
{
    d.setString (MessageName, "BusinessReject");
    TurquoiseBusinessReject* p = (TurquoiseBusinessReject*)hdr;

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
turquoiseCodec::putLogon (const cdr &d, TurquoiseHeader* hdr, size_t len, size_t& used)
{
    TurquoiseLogon* p = (TurquoiseLogon*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putString (d, CompID, p->mCompID, sizeof p->mCompID))
        {
            setLastError ("CompID missing or not string");
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
turquoiseCodec::putLogonReply (const cdr &d, TurquoiseHeader* hdr, size_t len, size_t& used)
{
    TurquoiseLogonReply* p = (TurquoiseLogonReply*)hdr;
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
turquoiseCodec::putLogout (const cdr &d, TurquoiseHeader* hdr, size_t len, size_t& used)
{
    TurquoiseLogout* p = (TurquoiseLogout*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putString (d, LogoutReason, p->mLogoutReason, sizeof p->mLogoutReason))
        {
            setLastError ("LogoutReason missing or not string");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
turquoiseCodec::putHeartbeat (const cdr &d, TurquoiseHeader* hdr, size_t len, size_t& used)
{
    TurquoiseHeartbeat* p = (TurquoiseHeartbeat*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;


    return GW_CODEC_SUCCESS;
}

codecState
turquoiseCodec::putMissedMessageRequest (const cdr &d, TurquoiseHeader* hdr, size_t len, size_t& used)
{
    TurquoiseMissedMessageRequest* p = (TurquoiseMissedMessageRequest*)hdr;
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
turquoiseCodec::putMissedMessageRequestAck (const cdr &d, TurquoiseHeader* hdr, size_t len, size_t& used)
{
    TurquoiseMissedMessageRequestAck* p = (TurquoiseMissedMessageRequestAck*)hdr;
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
turquoiseCodec::putMissedMessageReport (const cdr &d, TurquoiseHeader* hdr, size_t len, size_t& used)
{
    TurquoiseMissedMessageReport* p = (TurquoiseMissedMessageReport*)hdr;
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
turquoiseCodec::putReject (const cdr &d, TurquoiseHeader* hdr, size_t len, size_t& used)
{
    TurquoiseReject* p = (TurquoiseReject*)hdr;
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
turquoiseCodec::putSystemStatus (const cdr &d, TurquoiseHeader* hdr, size_t len, size_t& used)
{
    TurquoiseSystemStatus* p = (TurquoiseSystemStatus*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (AppID, &p->mAppID))
        {
            setLastError ("invalid or missing AppID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (RejectReason, &p->mRejectReason))
        {
            setLastError ("invalid or missing RejectReason");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
turquoiseCodec::putNewOrder (const cdr &d, TurquoiseHeader* hdr, size_t len, size_t& used)
{
    TurquoiseNewOrder* p = (TurquoiseNewOrder*)hdr;
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
        if (!putString (d, CommonSymbol, p->mCommonSymbol, sizeof p->mCommonSymbol))
        {
            setLastError ("CommonSymbol missing or not string");
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
        if (!putString (d, CIOrdLinkID, p->mCIOrdLinkID, sizeof p->mCIOrdLinkID))
        {
            setLastError ("CIOrdLinkID missing or not string");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
turquoiseCodec::putOrderCancelReplaceRequest (const cdr &d, TurquoiseHeader* hdr, size_t len, size_t& used)
{
    TurquoiseOrderCancelReplaceRequest* p = (TurquoiseOrderCancelReplaceRequest*)hdr;
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
        if (!putString (d, CommonSymbol, p->mCommonSymbol, sizeof p->mCommonSymbol))
        {
            setLastError ("CommonSymbol missing or not string");
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
        if (!d.getInteger (TIF, &p->mTIF))
        {
            setLastError ("invalid or missing TIF");
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
        if (!d.getInteger (MinQty, &p->mMinQty))
        {
            setLastError ("invalid or missing MinQty");
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
turquoiseCodec::putOrderCancelRequest (const cdr &d, TurquoiseHeader* hdr, size_t len, size_t& used)
{
    TurquoiseOrderCancelRequest* p = (TurquoiseOrderCancelRequest*)hdr;
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
        if (!putString (d, CommonSymbol, p->mCommonSymbol, sizeof p->mCommonSymbol))
        {
            setLastError ("CommonSymbol missing or not string");
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
turquoiseCodec::putOrderMassCancelRequest (const cdr &d, TurquoiseHeader* hdr, size_t len, size_t& used)
{
    TurquoiseOrderMassCancelRequest* p = (TurquoiseOrderMassCancelRequest*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putString (d, ClientOrderID, p->mClientOrderID, sizeof p->mClientOrderID))
        {
            setLastError ("ClientOrderID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (MassCancelType, &p->mMassCancelType))
        {
            setLastError ("invalid or missing MassCancelType");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, CommonSymbol, p->mCommonSymbol, sizeof p->mCommonSymbol))
        {
            setLastError ("CommonSymbol missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, Segment, p->mSegment, sizeof p->mSegment))
        {
            setLastError ("Segment missing or not string");
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
turquoiseCodec::putExecutionReport (const cdr &d, TurquoiseHeader* hdr, size_t len, size_t& used)
{
    TurquoiseExecutionReport* p = (TurquoiseExecutionReport*)hdr;
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
        if (!d.getInteger (Container, &p->mContainer))
        {
            setLastError ("invalid or missing Container");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (DisplayQty, &p->mDisplayQty))
        {
            setLastError ("invalid or missing DisplayQty");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, CommonSymbol, p->mCommonSymbol, sizeof p->mCommonSymbol))
        {
            setLastError ("CommonSymbol missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (Side, &p->mSide))
        {
            setLastError ("invalid or missing Side");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SecondaryOrderID, &p->mSecondaryOrderID))
        {
            setLastError ("invalid or missing SecondaryOrderID");
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
        if (!d.getInteger (MinimumQuantity, &p->mMinimumQuantity))
        {
            setLastError ("invalid or missing MinimumQuantity");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (ReputationalScore, &p->mReputationalScore))
        {
            setLastError ("invalid or missing ReputationalScore");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
turquoiseCodec::putOrderCancelReject (const cdr &d, TurquoiseHeader* hdr, size_t len, size_t& used)
{
    TurquoiseOrderCancelReject* p = (TurquoiseOrderCancelReject*)hdr;
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

    return GW_CODEC_SUCCESS;
}

codecState
turquoiseCodec::putOrderMassCancelReport (const cdr &d, TurquoiseHeader* hdr, size_t len, size_t& used)
{
    TurquoiseOrderMassCancelReport* p = (TurquoiseOrderMassCancelReport*)hdr;
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
turquoiseCodec::putBusinessReject (const cdr &d, TurquoiseHeader* hdr, size_t len, size_t& used)
{
    TurquoiseBusinessReject* p = (TurquoiseBusinessReject*)hdr;
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
turquoiseCodec::decode (cdr& d, const void* buf, size_t len, size_t& used)
{
    clearLastError ();
    used = 0;
    d.clear ();

    TurquoiseHeader* hdr = (TurquoiseHeader*)buf;
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
        case 'G':
            return getOrderCancelReplaceRequest (d, hdr);
        case 'F':
            return getOrderCancelRequest (d, hdr);
        case 'q':
            return getOrderMassCancelRequest (d, hdr);
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
turquoiseCodec::encode (const cdr& d, void* buf, size_t len, size_t& used)
{
    clearLastError ();
    used = 0;

    TurquoiseHeader* hdr = (TurquoiseHeader*)buf;

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
        case 'G':
            state = putOrderCancelReplaceRequest (d, hdr, len, used);
            break;
        case 'F':
            state = putOrderCancelRequest (d, hdr, len, used);
            break;
        case 'q':
            state = putOrderMassCancelRequest (d, hdr, len, used);
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

    hdr->mMessageLength = (used - sizeof(*hdr) - 1);
    return GW_CODEC_SUCCESS;
}

} // namespace neueda
