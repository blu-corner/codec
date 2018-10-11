/*
 * Copyright 2014-2018 Neueda
 */
/* Jse Version 3.03 */
#include "jseCodec.h"

namespace neueda
{

extern "C" codec*
getCodec ()
{
    return new jseCodec ();
}

const double mPriceConverter = 100000000.0;

codecState
jseCodec::getLogon (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "Logon");
    JseLogon* p = (JseLogon*)hdr;

    codecHelper_setString (d, CompID, p->mCompID,
                           sizeof (p->mCompID));
    codecHelper_setString (d, Password, p->mPassword,
                           sizeof (p->mPassword));
    codecHelper_setString (d, NewPassword, p->mNewPassword,
                           sizeof (p->mNewPassword));

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getLogonResponse (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "LogonResponse");
    JseLogonResponse* p = (JseLogonResponse*)hdr;

    d.setInteger (RejectCode, p->mRejectCode);
    d.setInteger (PasswordExpiry, p->mPasswordExpiry);

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getLogout (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "Logout");
    JseLogout* p = (JseLogout*)hdr;

    codecHelper_setString (d, Reason, p->mReason,
                           sizeof (p->mReason));

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getHeartbeat (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "Heartbeat");


    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getReject (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "Reject");
    JseReject* p = (JseReject*)hdr;

    d.setInteger (RejectCode, p->mRejectCode);
    codecHelper_setString (d, RejectReason, p->mRejectReason,
                           sizeof (p->mRejectReason));
    d.setInteger (MessageType, p->mMessageType);
    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getMissedMessageRequest (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "MissedMessageRequest");
    JseMissedMessageRequest* p = (JseMissedMessageRequest*)hdr;

    d.setInteger (PartitionID, p->mPartitionID);
    d.setInteger (SequenceNumber, p->mSequenceNumber);

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getMissedMessageRequestAck (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "MissedMessageRequestAck");
    JseMissedMessageRequestAck* p = (JseMissedMessageRequestAck*)hdr;

    d.setInteger (Status, p->mStatus);

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getTransmissionComplete (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "TransmissionComplete");
    JseTransmissionComplete* p = (JseTransmissionComplete*)hdr;

    d.setInteger (Status, p->mStatus);

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getSystemStatus (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "SystemStatus");
    JseSystemStatus* p = (JseSystemStatus*)hdr;

    d.setInteger (PartitionID, p->mPartitionID);
    d.setInteger (Status, p->mStatus);

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getNewOrder (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "NewOrder");
    JseNewOrder* p = (JseNewOrder*)hdr;

    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    d.setInteger (SecurityID, p->mSecurityID);
    codecHelper_setString (d, TraderMnemonic, p->mTraderMnemonic,
                           sizeof (p->mTraderMnemonic));
    codecHelper_setString (d, Account, p->mAccount,
                           sizeof (p->mAccount));
    d.setInteger (OrderType, p->mOrderType);
    d.setInteger (TimeInForce, p->mTimeInForce);
    codecHelper_setString (d, ExpireTime, p->mExpireTime,
                           sizeof (p->mExpireTime));
    d.setInteger (Side, p->mSide);
    d.setInteger (OrderQuantity, p->mOrderQuantity);
    d.setInteger (DisplayQuantity, p->mDisplayQuantity);
    d.setInteger (MinimumQuantity, p->mMinimumQuantity);
    d.setDouble (LimitPrice, (p->mLimitPrice) / mPriceConverter);
    d.setDouble (StopPrice, (p->mStopPrice) / mPriceConverter);
    d.setInteger (Capacity, p->mCapacity);
    d.setInteger (CancelonDisconnect, p->mCancelonDisconnect);
    d.setInteger (OrderBook, p->mOrderBook);
    d.setInteger (ExecutionInstruction, p->mExecutionInstruction);
    d.setInteger (OrderSubType, p->mOrderSubType);

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getOrderCancelRequest (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "OrderCancelRequest");
    JseOrderCancelRequest* p = (JseOrderCancelRequest*)hdr;

    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    codecHelper_setString (d, OriginalClientOrderID, p->mOriginalClientOrderID,
                           sizeof (p->mOriginalClientOrderID));
    codecHelper_setString (d, OrderID, p->mOrderID,
                           sizeof (p->mOrderID));
    d.setInteger (SecurityID, p->mSecurityID);
    codecHelper_setString (d, TraderMnemonic, p->mTraderMnemonic,
                           sizeof (p->mTraderMnemonic));
    d.setInteger (Side, p->mSide);
    d.setInteger (OrderBook, p->mOrderBook);

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getOrderMassCancelRequest (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "OrderMassCancelRequest");
    JseOrderMassCancelRequest* p = (JseOrderMassCancelRequest*)hdr;

    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    d.setInteger (MassCancelRequestType, p->mMassCancelRequestType);
    d.setInteger (SecurityID, p->mSecurityID);
    codecHelper_setString (d, Segment, p->mSegment,
                           sizeof (p->mSegment));
    d.setInteger (OrderSubType, p->mOrderSubType);
    d.setInteger (OrderBook, p->mOrderBook);

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getNewOrderCross (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "NewOrderCross");
    JseNewOrderCross* p = (JseNewOrderCross*)hdr;

    codecHelper_setString (d, CrossID, p->mCrossID,
                           sizeof (p->mCrossID));
    d.setInteger (CrossType, p->mCrossType);
    codecHelper_setString (d, BuySideClientOrderID, p->mBuySideClientOrderID,
                           sizeof (p->mBuySideClientOrderID));
    d.setInteger (BuySideCapacity, p->mBuySideCapacity);
    codecHelper_setString (d, BuySideTraderMnemonic, p->mBuySideTraderMnemonic,
                           sizeof (p->mBuySideTraderMnemonic));
    codecHelper_setString (d, BuySideAccount, p->mBuySideAccount,
                           sizeof (p->mBuySideAccount));
    codecHelper_setString (d, SellSideClientOrderID, p->mSellSideClientOrderID,
                           sizeof (p->mSellSideClientOrderID));
    d.setInteger (SellSideCapacity, p->mSellSideCapacity);
    codecHelper_setString (d, SellSideTraderMnemonic, p->mSellSideTraderMnemonic,
                           sizeof (p->mSellSideTraderMnemonic));
    codecHelper_setString (d, SellSideAccount, p->mSellSideAccount,
                           sizeof (p->mSellSideAccount));
    d.setInteger (SecurityID, p->mSecurityID);
    d.setInteger (OrderType, p->mOrderType);
    d.setInteger (TimeInForce, p->mTimeInForce);
    d.setDouble (LimitPrice, (p->mLimitPrice) / mPriceConverter);
    d.setInteger (OrderQuantity, p->mOrderQuantity);

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getExecutionReport (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "ExecutionReport");
    JseExecutionReport* p = (JseExecutionReport*)hdr;

    d.setInteger (PartitionID, p->mPartitionID);
    d.setInteger (SequenceNumber, p->mSequenceNumber);
    codecHelper_setString (d, ExecutionID, p->mExecutionID,
                           sizeof (p->mExecutionID));
    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    codecHelper_setString (d, OrderID, p->mOrderID,
                           sizeof (p->mOrderID));
    d.setInteger (ExecutionType, p->mExecutionType);
    d.setInteger (OrderStatus, p->mOrderStatus);
    d.setInteger (RejctCode, p->mRejctCode);
    d.setDouble (ExecutedPrice, (p->mExecutedPrice) / mPriceConverter);
    d.setInteger (ExecutedQuantity, p->mExecutedQuantity);
    d.setInteger (LeavesQuantity, p->mLeavesQuantity);
    d.setInteger (Container, p->mContainer);
    d.setInteger (SecurityID, p->mSecurityID);
    d.setInteger (Side, p->mSide);
    codecHelper_setString (d, TraderMnemonic, p->mTraderMnemonic,
                           sizeof (p->mTraderMnemonic));
    codecHelper_setString (d, Account, p->mAccount,
                           sizeof (p->mAccount));
    d.setInteger (IsMarketOpsRequest, p->mIsMarketOpsRequest);
    d.setInteger (TransactTime, p->mTransactTime);
    d.setInteger (OrderBook, p->mOrderBook);
    d.setInteger (ExecutionInstruction, p->mExecutionInstruction);
    codecHelper_setString (d, CrossID, p->mCrossID,
                           sizeof (p->mCrossID));
    d.setInteger (CrossType, p->mCrossType);

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getOrderCancelReject (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "OrderCancelReject");
    JseOrderCancelReject* p = (JseOrderCancelReject*)hdr;

    d.setInteger (PartitionID, p->mPartitionID);
    d.setInteger (SequenceNumber, p->mSequenceNumber);
    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    codecHelper_setString (d, OrderID, p->mOrderID,
                           sizeof (p->mOrderID));
    d.setInteger (TransactTime, p->mTransactTime);
    d.setInteger (RejectCode, p->mRejectCode);
    d.setInteger (OrderBook, p->mOrderBook);

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getOrderMassCancelReport (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "OrderMassCancelReport");
    JseOrderMassCancelReport* p = (JseOrderMassCancelReport*)hdr;

    d.setInteger (PartitionID, p->mPartitionID);
    d.setInteger (SequenceNumber, p->mSequenceNumber);
    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    d.setInteger (Status, p->mStatus);
    d.setInteger (RejectCode, p->mRejectCode);
    d.setInteger (TransactTime, p->mTransactTime);
    d.setInteger (OrderBook, p->mOrderBook);

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getQuote (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "Quote");
    JseQuote* p = (JseQuote*)hdr;

    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    d.setInteger (SecurityID, p->mSecurityID);
    codecHelper_setString (d, TraderMnemonic, p->mTraderMnemonic,
                           sizeof (p->mTraderMnemonic));
    codecHelper_setString (d, Account, p->mAccount,
                           sizeof (p->mAccount));
    d.setDouble (BidPrice, (p->mBidPrice) / mPriceConverter);
    d.setInteger (BidQuantity, p->mBidQuantity);
    d.setDouble (OfferPrice, (p->mOfferPrice) / mPriceConverter);
    d.setInteger (OfferQuantity, p->mOfferQuantity);
    d.setInteger (CancelonDisconnect, p->mCancelonDisconnect);
    d.setInteger (Anonymity, p->mAnonymity);
    d.setInteger (OrderBook, p->mOrderBook);

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getOrderCancelReplaceRequest (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "OrderCancelReplaceRequest");
    JseOrderCancelReplaceRequest* p = (JseOrderCancelReplaceRequest*)hdr;

    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    codecHelper_setString (d, OriginalClientOrderID, p->mOriginalClientOrderID,
                           sizeof (p->mOriginalClientOrderID));
    codecHelper_setString (d, OrderID, p->mOrderID,
                           sizeof (p->mOrderID));
    d.setInteger (SecurityID, p->mSecurityID);
    codecHelper_setString (d, TraderMnemonic, p->mTraderMnemonic,
                           sizeof (p->mTraderMnemonic));
    codecHelper_setString (d, Account, p->mAccount,
                           sizeof (p->mAccount));
    d.setInteger (OrderType, p->mOrderType);
    d.setInteger (TimeInForce, p->mTimeInForce);
    codecHelper_setString (d, ExpireTime, p->mExpireTime,
                           sizeof (p->mExpireTime));
    d.setInteger (Side, p->mSide);
    d.setInteger (OrderQuantity, p->mOrderQuantity);
    d.setInteger (DisplayQuantity, p->mDisplayQuantity);
    d.setInteger (MinimumQuantity, p->mMinimumQuantity);
    d.setDouble (LimitPrice, (p->mLimitPrice) / mPriceConverter);
    d.setDouble (StopPrice, (p->mStopPrice) / mPriceConverter);
    d.setInteger (OrderBook, p->mOrderBook);

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getQuoteRequest (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "QuoteRequest");
    JseQuoteRequest* p = (JseQuoteRequest*)hdr;

    d.setInteger (PartitionID, p->mPartitionID);
    d.setInteger (SequenceNumber, p->mSequenceNumber);
    codecHelper_setString (d, QuoteReqID, p->mQuoteReqID,
                           sizeof (p->mQuoteReqID));
    d.setInteger (OrderBook, p->mOrderBook);
    d.setInteger (PrivateQuote, p->mPrivateQuote);
    d.setInteger (SecurityID, p->mSecurityID);
    codecHelper_setString (d, TraderMnemonic, p->mTraderMnemonic,
                           sizeof (p->mTraderMnemonic));
    codecHelper_setString (d, Account, p->mAccount,
                           sizeof (p->mAccount));
    d.setInteger (Side, p->mSide);
    d.setInteger (OrderQuantity, p->mOrderQuantity);
    codecHelper_setString (d, ExpireTime, p->mExpireTime,
                           sizeof (p->mExpireTime));
    codecHelper_setString (d, MarketMakers, p->mMarketMakers,
                           sizeof (p->mMarketMakers));
    codecHelper_setString (d, ContraFirm, p->mContraFirm,
                           sizeof (p->mContraFirm));
    codecHelper_setString (d, RFQID, p->mRFQID,
                           sizeof (p->mRFQID));
    d.setInteger (TradeSubType, p->mTradeSubType);
    d.setInteger (StartDate, p->mStartDate);
    d.setInteger (EndDate, p->mEndDate);
    codecHelper_setString (d, ClientInformation, p->mClientInformation,
                           sizeof (p->mClientInformation));

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getQuoteRequestReject (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "QuoteRequestReject");
    JseQuoteRequestReject* p = (JseQuoteRequestReject*)hdr;

    d.setInteger (PartitionID, p->mPartitionID);
    d.setInteger (SequenceNumber, p->mSequenceNumber);
    codecHelper_setString (d, QuoteReqID, p->mQuoteReqID,
                           sizeof (p->mQuoteReqID));
    d.setInteger (RejectCode, p->mRejectCode);
    d.setInteger (OrderBook, p->mOrderBook);
    d.setInteger (SecurityID, p->mSecurityID);
    codecHelper_setString (d, TraderMnemonic, p->mTraderMnemonic,
                           sizeof (p->mTraderMnemonic));
    d.setInteger (Side, p->mSide);
    d.setInteger (OrderQuantity, p->mOrderQuantity);
    codecHelper_setString (d, MarketMakers, p->mMarketMakers,
                           sizeof (p->mMarketMakers));
    codecHelper_setString (d, RFQID, p->mRFQID,
                           sizeof (p->mRFQID));

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getRFQQuote (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "RFQQuote");
    JseRFQQuote* p = (JseRFQQuote*)hdr;

    d.setInteger (PartitionID, p->mPartitionID);
    d.setInteger (SequenceNumber, p->mSequenceNumber);
    codecHelper_setString (d, QuoteMsgID, p->mQuoteMsgID,
                           sizeof (p->mQuoteMsgID));
    codecHelper_setString (d, RFQID, p->mRFQID,
                           sizeof (p->mRFQID));
    d.setInteger (SecurityID, p->mSecurityID);
    codecHelper_setString (d, TraderMnemonic, p->mTraderMnemonic,
                           sizeof (p->mTraderMnemonic));
    codecHelper_setString (d, Account, p->mAccount,
                           sizeof (p->mAccount));
    d.setDouble (BidPrice, (p->mBidPrice) / mPriceConverter);
    d.setInteger (BidQuantity, p->mBidQuantity);
    d.setDouble (OfferPrice, (p->mOfferPrice) / mPriceConverter);
    d.setInteger (OfferQuantity, p->mOfferQuantity);
    d.setInteger (MinimumQuantity, p->mMinimumQuantity);
    codecHelper_setString (d, ValidUntilTime, p->mValidUntilTime,
                           sizeof (p->mValidUntilTime));
    d.setInteger (CancelOnDisconnect, p->mCancelOnDisconnect);
    codecHelper_setString (d, MarketMakerFirm, p->mMarketMakerFirm,
                           sizeof (p->mMarketMakerFirm));
    codecHelper_setString (d, BidID, p->mBidID,
                           sizeof (p->mBidID));
    codecHelper_setString (d, OfferID, p->mOfferID,
                           sizeof (p->mOfferID));
    d.setInteger (Rate, p->mRate);
    d.setInteger (StartDate, p->mStartDate);
    d.setInteger (EndDate, p->mEndDate);
    d.setDouble (AllinPrice, (p->mAllinPrice) / mPriceConverter);
    d.setDouble (Leg1ReferencePrice, (p->mLeg1ReferencePrice) / mPriceConverter);

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getQuoteResponse (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "QuoteResponse");
    JseQuoteResponse* p = (JseQuoteResponse*)hdr;

    d.setInteger (PartitionID, p->mPartitionID);
    d.setInteger (SequenceNumber, p->mSequenceNumber);
    codecHelper_setString (d, QuoteMsgID, p->mQuoteMsgID,
                           sizeof (p->mQuoteMsgID));
    codecHelper_setString (d, RFQID, p->mRFQID,
                           sizeof (p->mRFQID));
    d.setInteger (QuoteRespType, p->mQuoteRespType);
    d.setInteger (SecurityID, p->mSecurityID);
    codecHelper_setString (d, TraderMnemonic, p->mTraderMnemonic,
                           sizeof (p->mTraderMnemonic));
    d.setInteger (Side, p->mSide);
    d.setInteger (OrderQuantity, p->mOrderQuantity);
    d.setDouble (CoverPrice, (p->mCoverPrice) / mPriceConverter);
    d.setInteger (OrderBook, p->mOrderBook);
    codecHelper_setString (d, BidID, p->mBidID,
                           sizeof (p->mBidID));
    codecHelper_setString (d, OfferID, p->mOfferID,
                           sizeof (p->mOfferID));
    d.setInteger (Rate, p->mRate);
    d.setDouble (AllinPrice, (p->mAllinPrice) / mPriceConverter);

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getSecurityDefinitionRequest (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "SecurityDefinitionRequest");
    JseSecurityDefinitionRequest* p = (JseSecurityDefinitionRequest*)hdr;

    codecHelper_setString (d, SecurityRequestID, p->mSecurityRequestID,
                           sizeof (p->mSecurityRequestID));
    d.setInteger (SequenceType, p->mSequenceType);
    d.setDouble (StrikePrice, (p->mStrikePrice) / mPriceConverter);
    codecHelper_setString (d, MaturityDate, p->mMaturityDate,
                           sizeof (p->mMaturityDate));
    codecHelper_setString (d, ReferenceInstrument, p->mReferenceInstrument,
                           sizeof (p->mReferenceInstrument));
    d.setDouble (ReferencePrice, (p->mReferencePrice) / mPriceConverter);
    d.setInteger (NearMonthType, p->mNearMonthType);
    d.setInteger (FarMonthType, p->mFarMonthType);
    codecHelper_setString (d, FarMaturityDate, p->mFarMaturityDate,
                           sizeof (p->mFarMaturityDate));

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getOrderStatusReport (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "OrderStatusReport");
    JseOrderStatusReport* p = (JseOrderStatusReport*)hdr;

    d.setInteger (PartitionID, p->mPartitionID);
    d.setInteger (SequenceNumber, p->mSequenceNumber);
    codecHelper_setString (d, QuoteMsgID, p->mQuoteMsgID,
                           sizeof (p->mQuoteMsgID));
    codecHelper_setString (d, QuoteReqID, p->mQuoteReqID,
                           sizeof (p->mQuoteReqID));
    d.setInteger (QuoteStatus, p->mQuoteStatus);
    d.setInteger (RejectCode, p->mRejectCode);
    d.setInteger (OrderBook, p->mOrderBook);
    codecHelper_setString (d, MarketMakers, p->mMarketMakers,
                           sizeof (p->mMarketMakers));
    codecHelper_setString (d, RFQID, p->mRFQID,
                           sizeof (p->mRFQID));
    codecHelper_setString (d, ExpireTime, p->mExpireTime,
                           sizeof (p->mExpireTime));
    codecHelper_setString (d, BidID, p->mBidID,
                           sizeof (p->mBidID));
    codecHelper_setString (d, OfferID, p->mOfferID,
                           sizeof (p->mOfferID));
    d.setInteger (TradeSubType, p->mTradeSubType);

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getQuoteAck (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "QuoteAck");
    JseQuoteAck* p = (JseQuoteAck*)hdr;

    d.setInteger (PartitionID, p->mPartitionID);
    d.setInteger (SequenceNumber, p->mSequenceNumber);
    codecHelper_setString (d, QuoteMsgID, p->mQuoteMsgID,
                           sizeof (p->mQuoteMsgID));
    codecHelper_setString (d, RFQID, p->mRFQID,
                           sizeof (p->mRFQID));
    codecHelper_setString (d, BidID, p->mBidID,
                           sizeof (p->mBidID));
    codecHelper_setString (d, OfferID, p->mOfferID,
                           sizeof (p->mOfferID));
    d.setInteger (QuoteAckStatus, p->mQuoteAckStatus);
    d.setInteger (RejectCode, p->mRejectCode);
    d.setInteger (OrderBook, p->mOrderBook);

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getRFQExecutionReport (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "RFQExecutionReport");
    JseRFQExecutionReport* p = (JseRFQExecutionReport*)hdr;

    d.setInteger (PartitionID, p->mPartitionID);
    d.setInteger (SequenceNumber, p->mSequenceNumber);
    codecHelper_setString (d, ExecutionID, p->mExecutionID,
                           sizeof (p->mExecutionID));
    codecHelper_setString (d, RFQID, p->mRFQID,
                           sizeof (p->mRFQID));
    codecHelper_setString (d, OrderID, p->mOrderID,
                           sizeof (p->mOrderID));
    d.setInteger (ExecutionType, p->mExecutionType);
    codecHelper_setString (d, TrdMatchID, p->mTrdMatchID,
                           sizeof (p->mTrdMatchID));
    d.setInteger (Side, p->mSide);
    d.setInteger (ExecutedQuantity, p->mExecutedQuantity);
    d.setDouble (ExecutedPrice, (p->mExecutedPrice) / mPriceConverter);
    d.setDouble (LastParPrice, (p->mLastParPrice) / mPriceConverter);
    d.setInteger (Yield, p->mYield);
    d.setInteger (AccruedInterestAmt, p->mAccruedInterestAmt);
    d.setInteger (OrderStatus, p->mOrderStatus);
    d.setInteger (LeavesQuantity, p->mLeavesQuantity);
    d.setInteger (SecurityID, p->mSecurityID);
    codecHelper_setString (d, TraderMnemonic, p->mTraderMnemonic,
                           sizeof (p->mTraderMnemonic));
    codecHelper_setString (d, Account, p->mAccount,
                           sizeof (p->mAccount));
    d.setDouble (CoverPrice, (p->mCoverPrice) / mPriceConverter);
    d.setDouble (ParPrice, (p->mParPrice) / mPriceConverter);
    d.setInteger (ConvertedYield, p->mConvertedYield);
    codecHelper_setString (d, ContraFirm, p->mContraFirm,
                           sizeof (p->mContraFirm));
    d.setInteger (TradeSubType, p->mTradeSubType);
    d.setDouble (SpotPrice, (p->mSpotPrice) / mPriceConverter);
    d.setInteger (StartDate, p->mStartDate);
    d.setInteger (EndDate, p->mEndDate);
    d.setDouble (AllinPrice, (p->mAllinPrice) / mPriceConverter);
    d.setInteger (EndCash, p->mEndCash);

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getSecurityDefinitionResponse (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "SecurityDefinitionResponse");
    JseSecurityDefinitionResponse* p = (JseSecurityDefinitionResponse*)hdr;

    codecHelper_setString (d, SecurityRequestID, p->mSecurityRequestID,
                           sizeof (p->mSecurityRequestID));
    d.setInteger (SecurityResponseType, p->mSecurityResponseType);
    d.setInteger (RejectCode, p->mRejectCode);
    d.setInteger (SecurityID, p->mSecurityID);
    d.setInteger (SecurityType, p->mSecurityType);

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getNews (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "News");
    JseNews* p = (JseNews*)hdr;

    d.setInteger (PartitionID, p->mPartitionID);
    d.setInteger (SequenceNumber, p->mSequenceNumber);
    codecHelper_setString (d, OrigTime, p->mOrigTime,
                           sizeof (p->mOrigTime));
    d.setInteger (Urgency, p->mUrgency);
    codecHelper_setString (d, Headline, p->mHeadline,
                           sizeof (p->mHeadline));
    codecHelper_setString (d, Text, p->mText,
                           sizeof (p->mText));
    codecHelper_setString (d, Instruments, p->mInstruments,
                           sizeof (p->mInstruments));
    codecHelper_setString (d, UnderlyingInstruments, p->mUnderlyingInstruments,
                           sizeof (p->mUnderlyingInstruments));
    codecHelper_setString (d, FirmList, p->mFirmList,
                           sizeof (p->mFirmList));
    codecHelper_setString (d, UserList, p->mUserList,
                           sizeof (p->mUserList));

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::getBusinessReject (cdr &d, JseHeader* hdr)
{
    d.setString (MessageName, "BusinessReject");
    JseBusinessReject* p = (JseBusinessReject*)hdr;

    d.setInteger (PartitionID, p->mPartitionID);
    d.setInteger (SequenceNumber, p->mSequenceNumber);
    d.setInteger (RejectCode, p->mRejectCode);
    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    codecHelper_setString (d, OrderID, p->mOrderID,
                           sizeof (p->mOrderID));
    d.setInteger (TransactTime, p->mTransactTime);

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::putLogon (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseLogon* p = (JseLogon*)hdr;
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

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::putLogonResponse (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseLogonResponse* p = (JseLogonResponse*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (RejectCode, &p->mRejectCode))
        {
            setLastError ("invalid or missing RejectCode");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (PasswordExpiry, &p->mPasswordExpiry))
        {
            setLastError ("invalid or missing PasswordExpiry");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::putLogout (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseLogout* p = (JseLogout*)hdr;
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
jseCodec::putHeartbeat (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseHeartbeat* p = (JseHeartbeat*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;


    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::putReject (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseReject* p = (JseReject*)hdr;
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
        if (!putCharacter (d, MessageType, &p->mMessageType))
        {
            setLastError ("invalid or missing MessageType");
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
jseCodec::putMissedMessageRequest (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseMissedMessageRequest* p = (JseMissedMessageRequest*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (PartitionID, &p->mPartitionID))
        {
            setLastError ("invalid or missing PartitionID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SequenceNumber, &p->mSequenceNumber))
        {
            setLastError ("invalid or missing SequenceNumber");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::putMissedMessageRequestAck (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseMissedMessageRequestAck* p = (JseMissedMessageRequestAck*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (Status, &p->mStatus))
        {
            setLastError ("invalid or missing Status");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::putTransmissionComplete (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseTransmissionComplete* p = (JseTransmissionComplete*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (Status, &p->mStatus))
        {
            setLastError ("invalid or missing Status");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::putSystemStatus (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseSystemStatus* p = (JseSystemStatus*)hdr;
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
jseCodec::putNewOrder (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseNewOrder* p = (JseNewOrder*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putString (d, ClientOrderID, p->mClientOrderID, sizeof p->mClientOrderID))
        {
            setLastError ("ClientOrderID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SecurityID, &p->mSecurityID))
        {
            setLastError ("invalid or missing SecurityID");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, TraderMnemonic, p->mTraderMnemonic, sizeof p->mTraderMnemonic))
        {
            setLastError ("TraderMnemonic missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, Account, p->mAccount, sizeof p->mAccount))
        {
            setLastError ("Account missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderType, &p->mOrderType))
        {
            setLastError ("invalid or missing OrderType");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (TimeInForce, &p->mTimeInForce))
        {
            setLastError ("invalid or missing TimeInForce");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, ExpireTime, p->mExpireTime, sizeof p->mExpireTime))
        {
            setLastError ("ExpireTime missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (Side, &p->mSide))
        {
            setLastError ("invalid or missing Side");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderQuantity, &p->mOrderQuantity))
        {
            setLastError ("invalid or missing OrderQuantity");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (DisplayQuantity, &p->mDisplayQuantity))
        {
            setLastError ("invalid or missing DisplayQuantity");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (MinimumQuantity, &p->mMinimumQuantity))
        {
            setLastError ("invalid or missing MinimumQuantity");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, LimitPrice, &p->mLimitPrice))
        {
            setLastError ("invalid or missing LimitPrice");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, StopPrice, &p->mStopPrice))
        {
            setLastError ("invalid or missing StopPrice");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (Capacity, &p->mCapacity))
        {
            setLastError ("invalid or missing Capacity");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (CancelonDisconnect, &p->mCancelonDisconnect))
        {
            setLastError ("invalid or missing CancelonDisconnect");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderBook, &p->mOrderBook))
        {
            setLastError ("invalid or missing OrderBook");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (ExecutionInstruction, &p->mExecutionInstruction))
        {
            setLastError ("invalid or missing ExecutionInstruction");
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
jseCodec::putOrderCancelRequest (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseOrderCancelRequest* p = (JseOrderCancelRequest*)hdr;
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
        if (!d.getInteger (SecurityID, &p->mSecurityID))
        {
            setLastError ("invalid or missing SecurityID");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, TraderMnemonic, p->mTraderMnemonic, sizeof p->mTraderMnemonic))
        {
            setLastError ("TraderMnemonic missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (Side, &p->mSide))
        {
            setLastError ("invalid or missing Side");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderBook, &p->mOrderBook))
        {
            setLastError ("invalid or missing OrderBook");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::putOrderMassCancelRequest (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseOrderMassCancelRequest* p = (JseOrderMassCancelRequest*)hdr;
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
        if (!d.getInteger (SecurityID, &p->mSecurityID))
        {
            setLastError ("invalid or missing SecurityID");
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
        if (!d.getInteger (OrderBook, &p->mOrderBook))
        {
            setLastError ("invalid or missing OrderBook");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::putNewOrderCross (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseNewOrderCross* p = (JseNewOrderCross*)hdr;
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
        if (!putString (d, BuySideClientOrderID, p->mBuySideClientOrderID, sizeof p->mBuySideClientOrderID))
        {
            setLastError ("BuySideClientOrderID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (BuySideCapacity, &p->mBuySideCapacity))
        {
            setLastError ("invalid or missing BuySideCapacity");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, BuySideTraderMnemonic, p->mBuySideTraderMnemonic, sizeof p->mBuySideTraderMnemonic))
        {
            setLastError ("BuySideTraderMnemonic missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, BuySideAccount, p->mBuySideAccount, sizeof p->mBuySideAccount))
        {
            setLastError ("BuySideAccount missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, SellSideClientOrderID, p->mSellSideClientOrderID, sizeof p->mSellSideClientOrderID))
        {
            setLastError ("SellSideClientOrderID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SellSideCapacity, &p->mSellSideCapacity))
        {
            setLastError ("invalid or missing SellSideCapacity");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, SellSideTraderMnemonic, p->mSellSideTraderMnemonic, sizeof p->mSellSideTraderMnemonic))
        {
            setLastError ("SellSideTraderMnemonic missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, SellSideAccount, p->mSellSideAccount, sizeof p->mSellSideAccount))
        {
            setLastError ("SellSideAccount missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SecurityID, &p->mSecurityID))
        {
            setLastError ("invalid or missing SecurityID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderType, &p->mOrderType))
        {
            setLastError ("invalid or missing OrderType");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (TimeInForce, &p->mTimeInForce))
        {
            setLastError ("invalid or missing TimeInForce");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, LimitPrice, &p->mLimitPrice))
        {
            setLastError ("invalid or missing LimitPrice");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderQuantity, &p->mOrderQuantity))
        {
            setLastError ("invalid or missing OrderQuantity");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::putExecutionReport (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseExecutionReport* p = (JseExecutionReport*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (PartitionID, &p->mPartitionID))
        {
            setLastError ("invalid or missing PartitionID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SequenceNumber, &p->mSequenceNumber))
        {
            setLastError ("invalid or missing SequenceNumber");
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
        if (!putCharacter (d, ExecutionType, &p->mExecutionType))
        {
            setLastError ("invalid or missing ExecutionType");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderStatus, &p->mOrderStatus))
        {
            setLastError ("invalid or missing OrderStatus");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (RejctCode, &p->mRejctCode))
        {
            setLastError ("invalid or missing RejctCode");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, ExecutedPrice, &p->mExecutedPrice))
        {
            setLastError ("invalid or missing ExecutedPrice");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (ExecutedQuantity, &p->mExecutedQuantity))
        {
            setLastError ("invalid or missing ExecutedQuantity");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (LeavesQuantity, &p->mLeavesQuantity))
        {
            setLastError ("invalid or missing LeavesQuantity");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (Container, &p->mContainer))
        {
            setLastError ("invalid or missing Container");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SecurityID, &p->mSecurityID))
        {
            setLastError ("invalid or missing SecurityID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (Side, &p->mSide))
        {
            setLastError ("invalid or missing Side");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, TraderMnemonic, p->mTraderMnemonic, sizeof p->mTraderMnemonic))
        {
            setLastError ("TraderMnemonic missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, Account, p->mAccount, sizeof p->mAccount))
        {
            setLastError ("Account missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (IsMarketOpsRequest, &p->mIsMarketOpsRequest))
        {
            setLastError ("invalid or missing IsMarketOpsRequest");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (TransactTime, &p->mTransactTime))
        {
            setLastError ("invalid or missing TransactTime");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderBook, &p->mOrderBook))
        {
            setLastError ("invalid or missing OrderBook");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (ExecutionInstruction, &p->mExecutionInstruction))
        {
            setLastError ("invalid or missing ExecutionInstruction");
            return GW_CODEC_ERROR;
        }
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

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::putOrderCancelReject (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseOrderCancelReject* p = (JseOrderCancelReject*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (PartitionID, &p->mPartitionID))
        {
            setLastError ("invalid or missing PartitionID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SequenceNumber, &p->mSequenceNumber))
        {
            setLastError ("invalid or missing SequenceNumber");
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
        if (!d.getInteger (TransactTime, &p->mTransactTime))
        {
            setLastError ("invalid or missing TransactTime");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (RejectCode, &p->mRejectCode))
        {
            setLastError ("invalid or missing RejectCode");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderBook, &p->mOrderBook))
        {
            setLastError ("invalid or missing OrderBook");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::putOrderMassCancelReport (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseOrderMassCancelReport* p = (JseOrderMassCancelReport*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (PartitionID, &p->mPartitionID))
        {
            setLastError ("invalid or missing PartitionID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SequenceNumber, &p->mSequenceNumber))
        {
            setLastError ("invalid or missing SequenceNumber");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, ClientOrderID, p->mClientOrderID, sizeof p->mClientOrderID))
        {
            setLastError ("ClientOrderID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (Status, &p->mStatus))
        {
            setLastError ("invalid or missing Status");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (RejectCode, &p->mRejectCode))
        {
            setLastError ("invalid or missing RejectCode");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (TransactTime, &p->mTransactTime))
        {
            setLastError ("invalid or missing TransactTime");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderBook, &p->mOrderBook))
        {
            setLastError ("invalid or missing OrderBook");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::putQuote (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseQuote* p = (JseQuote*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putString (d, ClientOrderID, p->mClientOrderID, sizeof p->mClientOrderID))
        {
            setLastError ("ClientOrderID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SecurityID, &p->mSecurityID))
        {
            setLastError ("invalid or missing SecurityID");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, TraderMnemonic, p->mTraderMnemonic, sizeof p->mTraderMnemonic))
        {
            setLastError ("TraderMnemonic missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, Account, p->mAccount, sizeof p->mAccount))
        {
            setLastError ("Account missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, BidPrice, &p->mBidPrice))
        {
            setLastError ("invalid or missing BidPrice");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (BidQuantity, &p->mBidQuantity))
        {
            setLastError ("invalid or missing BidQuantity");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, OfferPrice, &p->mOfferPrice))
        {
            setLastError ("invalid or missing OfferPrice");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OfferQuantity, &p->mOfferQuantity))
        {
            setLastError ("invalid or missing OfferQuantity");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (CancelonDisconnect, &p->mCancelonDisconnect))
        {
            setLastError ("invalid or missing CancelonDisconnect");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (Anonymity, &p->mAnonymity))
        {
            setLastError ("invalid or missing Anonymity");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderBook, &p->mOrderBook))
        {
            setLastError ("invalid or missing OrderBook");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::putOrderCancelReplaceRequest (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseOrderCancelReplaceRequest* p = (JseOrderCancelReplaceRequest*)hdr;
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
        if (!d.getInteger (SecurityID, &p->mSecurityID))
        {
            setLastError ("invalid or missing SecurityID");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, TraderMnemonic, p->mTraderMnemonic, sizeof p->mTraderMnemonic))
        {
            setLastError ("TraderMnemonic missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, Account, p->mAccount, sizeof p->mAccount))
        {
            setLastError ("Account missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderType, &p->mOrderType))
        {
            setLastError ("invalid or missing OrderType");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (TimeInForce, &p->mTimeInForce))
        {
            setLastError ("invalid or missing TimeInForce");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, ExpireTime, p->mExpireTime, sizeof p->mExpireTime))
        {
            setLastError ("ExpireTime missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (Side, &p->mSide))
        {
            setLastError ("invalid or missing Side");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderQuantity, &p->mOrderQuantity))
        {
            setLastError ("invalid or missing OrderQuantity");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (DisplayQuantity, &p->mDisplayQuantity))
        {
            setLastError ("invalid or missing DisplayQuantity");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (MinimumQuantity, &p->mMinimumQuantity))
        {
            setLastError ("invalid or missing MinimumQuantity");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, LimitPrice, &p->mLimitPrice))
        {
            setLastError ("invalid or missing LimitPrice");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, StopPrice, &p->mStopPrice))
        {
            setLastError ("invalid or missing StopPrice");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderBook, &p->mOrderBook))
        {
            setLastError ("invalid or missing OrderBook");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::putQuoteRequest (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseQuoteRequest* p = (JseQuoteRequest*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (PartitionID, &p->mPartitionID))
        {
            setLastError ("invalid or missing PartitionID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SequenceNumber, &p->mSequenceNumber))
        {
            setLastError ("invalid or missing SequenceNumber");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, QuoteReqID, p->mQuoteReqID, sizeof p->mQuoteReqID))
        {
            setLastError ("QuoteReqID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderBook, &p->mOrderBook))
        {
            setLastError ("invalid or missing OrderBook");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (PrivateQuote, &p->mPrivateQuote))
        {
            setLastError ("invalid or missing PrivateQuote");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SecurityID, &p->mSecurityID))
        {
            setLastError ("invalid or missing SecurityID");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, TraderMnemonic, p->mTraderMnemonic, sizeof p->mTraderMnemonic))
        {
            setLastError ("TraderMnemonic missing or not string");
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
        if (!d.getInteger (OrderQuantity, &p->mOrderQuantity))
        {
            setLastError ("invalid or missing OrderQuantity");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, ExpireTime, p->mExpireTime, sizeof p->mExpireTime))
        {
            setLastError ("ExpireTime missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, MarketMakers, p->mMarketMakers, sizeof p->mMarketMakers))
        {
            setLastError ("MarketMakers missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, ContraFirm, p->mContraFirm, sizeof p->mContraFirm))
        {
            setLastError ("ContraFirm missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, RFQID, p->mRFQID, sizeof p->mRFQID))
        {
            setLastError ("RFQID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (TradeSubType, &p->mTradeSubType))
        {
            setLastError ("invalid or missing TradeSubType");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (StartDate, &p->mStartDate))
        {
            setLastError ("invalid or missing StartDate");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (EndDate, &p->mEndDate))
        {
            setLastError ("invalid or missing EndDate");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, ClientInformation, p->mClientInformation, sizeof p->mClientInformation))
        {
            setLastError ("ClientInformation missing or not string");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::putQuoteRequestReject (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseQuoteRequestReject* p = (JseQuoteRequestReject*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (PartitionID, &p->mPartitionID))
        {
            setLastError ("invalid or missing PartitionID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SequenceNumber, &p->mSequenceNumber))
        {
            setLastError ("invalid or missing SequenceNumber");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, QuoteReqID, p->mQuoteReqID, sizeof p->mQuoteReqID))
        {
            setLastError ("QuoteReqID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (RejectCode, &p->mRejectCode))
        {
            setLastError ("invalid or missing RejectCode");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderBook, &p->mOrderBook))
        {
            setLastError ("invalid or missing OrderBook");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SecurityID, &p->mSecurityID))
        {
            setLastError ("invalid or missing SecurityID");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, TraderMnemonic, p->mTraderMnemonic, sizeof p->mTraderMnemonic))
        {
            setLastError ("TraderMnemonic missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (Side, &p->mSide))
        {
            setLastError ("invalid or missing Side");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderQuantity, &p->mOrderQuantity))
        {
            setLastError ("invalid or missing OrderQuantity");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, MarketMakers, p->mMarketMakers, sizeof p->mMarketMakers))
        {
            setLastError ("MarketMakers missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, RFQID, p->mRFQID, sizeof p->mRFQID))
        {
            setLastError ("RFQID missing or not string");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::putRFQQuote (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseRFQQuote* p = (JseRFQQuote*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (PartitionID, &p->mPartitionID))
        {
            setLastError ("invalid or missing PartitionID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SequenceNumber, &p->mSequenceNumber))
        {
            setLastError ("invalid or missing SequenceNumber");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, QuoteMsgID, p->mQuoteMsgID, sizeof p->mQuoteMsgID))
        {
            setLastError ("QuoteMsgID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, RFQID, p->mRFQID, sizeof p->mRFQID))
        {
            setLastError ("RFQID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SecurityID, &p->mSecurityID))
        {
            setLastError ("invalid or missing SecurityID");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, TraderMnemonic, p->mTraderMnemonic, sizeof p->mTraderMnemonic))
        {
            setLastError ("TraderMnemonic missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, Account, p->mAccount, sizeof p->mAccount))
        {
            setLastError ("Account missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, BidPrice, &p->mBidPrice))
        {
            setLastError ("invalid or missing BidPrice");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (BidQuantity, &p->mBidQuantity))
        {
            setLastError ("invalid or missing BidQuantity");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, OfferPrice, &p->mOfferPrice))
        {
            setLastError ("invalid or missing OfferPrice");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OfferQuantity, &p->mOfferQuantity))
        {
            setLastError ("invalid or missing OfferQuantity");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (MinimumQuantity, &p->mMinimumQuantity))
        {
            setLastError ("invalid or missing MinimumQuantity");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, ValidUntilTime, p->mValidUntilTime, sizeof p->mValidUntilTime))
        {
            setLastError ("ValidUntilTime missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (CancelOnDisconnect, &p->mCancelOnDisconnect))
        {
            setLastError ("invalid or missing CancelOnDisconnect");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, MarketMakerFirm, p->mMarketMakerFirm, sizeof p->mMarketMakerFirm))
        {
            setLastError ("MarketMakerFirm missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, BidID, p->mBidID, sizeof p->mBidID))
        {
            setLastError ("BidID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, OfferID, p->mOfferID, sizeof p->mOfferID))
        {
            setLastError ("OfferID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (Rate, &p->mRate))
        {
            setLastError ("invalid or missing Rate");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (StartDate, &p->mStartDate))
        {
            setLastError ("invalid or missing StartDate");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (EndDate, &p->mEndDate))
        {
            setLastError ("invalid or missing EndDate");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, AllinPrice, &p->mAllinPrice))
        {
            setLastError ("invalid or missing AllinPrice");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, Leg1ReferencePrice, &p->mLeg1ReferencePrice))
        {
            setLastError ("invalid or missing Leg1ReferencePrice");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::putQuoteResponse (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseQuoteResponse* p = (JseQuoteResponse*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (PartitionID, &p->mPartitionID))
        {
            setLastError ("invalid or missing PartitionID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SequenceNumber, &p->mSequenceNumber))
        {
            setLastError ("invalid or missing SequenceNumber");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, QuoteMsgID, p->mQuoteMsgID, sizeof p->mQuoteMsgID))
        {
            setLastError ("QuoteMsgID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, RFQID, p->mRFQID, sizeof p->mRFQID))
        {
            setLastError ("RFQID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (QuoteRespType, &p->mQuoteRespType))
        {
            setLastError ("invalid or missing QuoteRespType");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SecurityID, &p->mSecurityID))
        {
            setLastError ("invalid or missing SecurityID");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, TraderMnemonic, p->mTraderMnemonic, sizeof p->mTraderMnemonic))
        {
            setLastError ("TraderMnemonic missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (Side, &p->mSide))
        {
            setLastError ("invalid or missing Side");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderQuantity, &p->mOrderQuantity))
        {
            setLastError ("invalid or missing OrderQuantity");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, CoverPrice, &p->mCoverPrice))
        {
            setLastError ("invalid or missing CoverPrice");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderBook, &p->mOrderBook))
        {
            setLastError ("invalid or missing OrderBook");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, BidID, p->mBidID, sizeof p->mBidID))
        {
            setLastError ("BidID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, OfferID, p->mOfferID, sizeof p->mOfferID))
        {
            setLastError ("OfferID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (Rate, &p->mRate))
        {
            setLastError ("invalid or missing Rate");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, AllinPrice, &p->mAllinPrice))
        {
            setLastError ("invalid or missing AllinPrice");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::putSecurityDefinitionRequest (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseSecurityDefinitionRequest* p = (JseSecurityDefinitionRequest*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putString (d, SecurityRequestID, p->mSecurityRequestID, sizeof p->mSecurityRequestID))
        {
            setLastError ("SecurityRequestID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SequenceType, &p->mSequenceType))
        {
            setLastError ("invalid or missing SequenceType");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, StrikePrice, &p->mStrikePrice))
        {
            setLastError ("invalid or missing StrikePrice");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, MaturityDate, p->mMaturityDate, sizeof p->mMaturityDate))
        {
            setLastError ("MaturityDate missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, ReferenceInstrument, p->mReferenceInstrument, sizeof p->mReferenceInstrument))
        {
            setLastError ("ReferenceInstrument missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, ReferencePrice, &p->mReferencePrice))
        {
            setLastError ("invalid or missing ReferencePrice");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (NearMonthType, &p->mNearMonthType))
        {
            setLastError ("invalid or missing NearMonthType");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (FarMonthType, &p->mFarMonthType))
        {
            setLastError ("invalid or missing FarMonthType");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, FarMaturityDate, p->mFarMaturityDate, sizeof p->mFarMaturityDate))
        {
            setLastError ("FarMaturityDate missing or not string");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::putOrderStatusReport (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseOrderStatusReport* p = (JseOrderStatusReport*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (PartitionID, &p->mPartitionID))
        {
            setLastError ("invalid or missing PartitionID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SequenceNumber, &p->mSequenceNumber))
        {
            setLastError ("invalid or missing SequenceNumber");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, QuoteMsgID, p->mQuoteMsgID, sizeof p->mQuoteMsgID))
        {
            setLastError ("QuoteMsgID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, QuoteReqID, p->mQuoteReqID, sizeof p->mQuoteReqID))
        {
            setLastError ("QuoteReqID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (QuoteStatus, &p->mQuoteStatus))
        {
            setLastError ("invalid or missing QuoteStatus");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (RejectCode, &p->mRejectCode))
        {
            setLastError ("invalid or missing RejectCode");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderBook, &p->mOrderBook))
        {
            setLastError ("invalid or missing OrderBook");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, MarketMakers, p->mMarketMakers, sizeof p->mMarketMakers))
        {
            setLastError ("MarketMakers missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, RFQID, p->mRFQID, sizeof p->mRFQID))
        {
            setLastError ("RFQID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, ExpireTime, p->mExpireTime, sizeof p->mExpireTime))
        {
            setLastError ("ExpireTime missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, BidID, p->mBidID, sizeof p->mBidID))
        {
            setLastError ("BidID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, OfferID, p->mOfferID, sizeof p->mOfferID))
        {
            setLastError ("OfferID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (TradeSubType, &p->mTradeSubType))
        {
            setLastError ("invalid or missing TradeSubType");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::putQuoteAck (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseQuoteAck* p = (JseQuoteAck*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (PartitionID, &p->mPartitionID))
        {
            setLastError ("invalid or missing PartitionID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SequenceNumber, &p->mSequenceNumber))
        {
            setLastError ("invalid or missing SequenceNumber");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, QuoteMsgID, p->mQuoteMsgID, sizeof p->mQuoteMsgID))
        {
            setLastError ("QuoteMsgID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, RFQID, p->mRFQID, sizeof p->mRFQID))
        {
            setLastError ("RFQID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, BidID, p->mBidID, sizeof p->mBidID))
        {
            setLastError ("BidID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, OfferID, p->mOfferID, sizeof p->mOfferID))
        {
            setLastError ("OfferID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (QuoteAckStatus, &p->mQuoteAckStatus))
        {
            setLastError ("invalid or missing QuoteAckStatus");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (RejectCode, &p->mRejectCode))
        {
            setLastError ("invalid or missing RejectCode");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderBook, &p->mOrderBook))
        {
            setLastError ("invalid or missing OrderBook");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::putRFQExecutionReport (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseRFQExecutionReport* p = (JseRFQExecutionReport*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (PartitionID, &p->mPartitionID))
        {
            setLastError ("invalid or missing PartitionID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SequenceNumber, &p->mSequenceNumber))
        {
            setLastError ("invalid or missing SequenceNumber");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, ExecutionID, p->mExecutionID, sizeof p->mExecutionID))
        {
            setLastError ("ExecutionID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, RFQID, p->mRFQID, sizeof p->mRFQID))
        {
            setLastError ("RFQID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, OrderID, p->mOrderID, sizeof p->mOrderID))
        {
            setLastError ("OrderID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putCharacter (d, ExecutionType, &p->mExecutionType))
        {
            setLastError ("invalid or missing ExecutionType");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, TrdMatchID, p->mTrdMatchID, sizeof p->mTrdMatchID))
        {
            setLastError ("TrdMatchID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (Side, &p->mSide))
        {
            setLastError ("invalid or missing Side");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (ExecutedQuantity, &p->mExecutedQuantity))
        {
            setLastError ("invalid or missing ExecutedQuantity");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, ExecutedPrice, &p->mExecutedPrice))
        {
            setLastError ("invalid or missing ExecutedPrice");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, LastParPrice, &p->mLastParPrice))
        {
            setLastError ("invalid or missing LastParPrice");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (Yield, &p->mYield))
        {
            setLastError ("invalid or missing Yield");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (AccruedInterestAmt, &p->mAccruedInterestAmt))
        {
            setLastError ("invalid or missing AccruedInterestAmt");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderStatus, &p->mOrderStatus))
        {
            setLastError ("invalid or missing OrderStatus");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (LeavesQuantity, &p->mLeavesQuantity))
        {
            setLastError ("invalid or missing LeavesQuantity");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SecurityID, &p->mSecurityID))
        {
            setLastError ("invalid or missing SecurityID");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, TraderMnemonic, p->mTraderMnemonic, sizeof p->mTraderMnemonic))
        {
            setLastError ("TraderMnemonic missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, Account, p->mAccount, sizeof p->mAccount))
        {
            setLastError ("Account missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, CoverPrice, &p->mCoverPrice))
        {
            setLastError ("invalid or missing CoverPrice");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, ParPrice, &p->mParPrice))
        {
            setLastError ("invalid or missing ParPrice");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (ConvertedYield, &p->mConvertedYield))
        {
            setLastError ("invalid or missing ConvertedYield");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, ContraFirm, p->mContraFirm, sizeof p->mContraFirm))
        {
            setLastError ("ContraFirm missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (TradeSubType, &p->mTradeSubType))
        {
            setLastError ("invalid or missing TradeSubType");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, SpotPrice, &p->mSpotPrice))
        {
            setLastError ("invalid or missing SpotPrice");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (StartDate, &p->mStartDate))
        {
            setLastError ("invalid or missing StartDate");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (EndDate, &p->mEndDate))
        {
            setLastError ("invalid or missing EndDate");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, AllinPrice, &p->mAllinPrice))
        {
            setLastError ("invalid or missing AllinPrice");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (EndCash, &p->mEndCash))
        {
            setLastError ("invalid or missing EndCash");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::putSecurityDefinitionResponse (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseSecurityDefinitionResponse* p = (JseSecurityDefinitionResponse*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!putString (d, SecurityRequestID, p->mSecurityRequestID, sizeof p->mSecurityRequestID))
        {
            setLastError ("SecurityRequestID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SecurityResponseType, &p->mSecurityResponseType))
        {
            setLastError ("invalid or missing SecurityResponseType");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (RejectCode, &p->mRejectCode))
        {
            setLastError ("invalid or missing RejectCode");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SecurityID, &p->mSecurityID))
        {
            setLastError ("invalid or missing SecurityID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SecurityType, &p->mSecurityType))
        {
            setLastError ("invalid or missing SecurityType");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::putNews (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseNews* p = (JseNews*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (PartitionID, &p->mPartitionID))
        {
            setLastError ("invalid or missing PartitionID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SequenceNumber, &p->mSequenceNumber))
        {
            setLastError ("invalid or missing SequenceNumber");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, OrigTime, p->mOrigTime, sizeof p->mOrigTime))
        {
            setLastError ("OrigTime missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (Urgency, &p->mUrgency))
        {
            setLastError ("invalid or missing Urgency");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, Headline, p->mHeadline, sizeof p->mHeadline))
        {
            setLastError ("Headline missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, Text, p->mText, sizeof p->mText))
        {
            setLastError ("Text missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, Instruments, p->mInstruments, sizeof p->mInstruments))
        {
            setLastError ("Instruments missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, UnderlyingInstruments, p->mUnderlyingInstruments, sizeof p->mUnderlyingInstruments))
        {
            setLastError ("UnderlyingInstruments missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, FirmList, p->mFirmList, sizeof p->mFirmList))
        {
            setLastError ("FirmList missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, UserList, p->mUserList, sizeof p->mUserList))
        {
            setLastError ("UserList missing or not string");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
jseCodec::putBusinessReject (const cdr &d, JseHeader* hdr, size_t len, size_t& used)
{
    JseBusinessReject* p = (JseBusinessReject*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (PartitionID, &p->mPartitionID))
        {
            setLastError ("invalid or missing PartitionID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SequenceNumber, &p->mSequenceNumber))
        {
            setLastError ("invalid or missing SequenceNumber");
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
        if (!d.getInteger (TransactTime, &p->mTransactTime))
        {
            setLastError ("invalid or missing TransactTime");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}


codecState
jseCodec::decode (cdr& d, const void* buf, size_t len, size_t& used)
{
    clearLastError ();
    used = 0;
    d.clear ();

    JseHeader* hdr = (JseHeader*)buf;
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
            return getOrderCancelRequest (d, hdr);
        case 'q':
            return getOrderMassCancelRequest (d, hdr);
        case 'C':
            return getNewOrderCross (d, hdr);
        case '8':
            return getExecutionReport (d, hdr);
        case '9':
            return getOrderCancelReject (d, hdr);
        case 'r':
            return getOrderMassCancelReport (d, hdr);
        case 'S':
            return getQuote (d, hdr);
        case 'G':
            return getOrderCancelReplaceRequest (d, hdr);
        case 'a':
            return getQuoteRequest (d, hdr);
        case 'b':
            return getQuoteRequestReject (d, hdr);
        case 'd':
            return getRFQQuote (d, hdr);
        case 'f':
            return getQuoteResponse (d, hdr);
        case 'O':
            return getSecurityDefinitionRequest (d, hdr);
        case 'c':
            return getOrderStatusReport (d, hdr);
        case 'e':
            return getQuoteAck (d, hdr);
        case 'g':
            return getRFQExecutionReport (d, hdr);
        case 'R':
            return getSecurityDefinitionResponse (d, hdr);
        case 'Z':
            return getNews (d, hdr);
        case 'j':
            return getBusinessReject (d, hdr);
        default:
            setLastError ("unknown message type");
            return GW_CODEC_ERROR;
    }
}

codecState
jseCodec::encode (const cdr& d, void* buf, size_t len, size_t& used)
{
    clearLastError ();
    used = 0;

    JseHeader* hdr = (JseHeader*)buf;

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
            state = putOrderCancelRequest (d, hdr, len, used);
            break;
        case 'q':
            state = putOrderMassCancelRequest (d, hdr, len, used);
            break;
        case 'C':
            state = putNewOrderCross (d, hdr, len, used);
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
        case 'S':
            state = putQuote (d, hdr, len, used);
            break;
        case 'G':
            state = putOrderCancelReplaceRequest (d, hdr, len, used);
            break;
        case 'a':
            state = putQuoteRequest (d, hdr, len, used);
            break;
        case 'b':
            state = putQuoteRequestReject (d, hdr, len, used);
            break;
        case 'd':
            state = putRFQQuote (d, hdr, len, used);
            break;
        case 'f':
            state = putQuoteResponse (d, hdr, len, used);
            break;
        case 'O':
            state = putSecurityDefinitionRequest (d, hdr, len, used);
            break;
        case 'c':
            state = putOrderStatusReport (d, hdr, len, used);
            break;
        case 'e':
            state = putQuoteAck (d, hdr, len, used);
            break;
        case 'g':
            state = putRFQExecutionReport (d, hdr, len, used);
            break;
        case 'R':
            state = putSecurityDefinitionResponse (d, hdr, len, used);
            break;
        case 'Z':
            state = putNews (d, hdr, len, used);
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
