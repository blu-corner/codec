/*
 * Copyright 2014-2018 Neueda
 */
/* BorsaItaliana Version 9.4 */
#include "borsaitalianaCodec.h"

namespace neueda
{

extern "C" codec*
getCodec ()
{
    return new borsaitalianaCodec ();
}

const double mPriceConverter = 100000000.0;

codecState
borsaitalianaCodec::getLogon (cdr &d, BorsaItalianaHeader* hdr)
{
    d.setString (MessageName, "Logon");
    BorsaItalianaLogon* p = (BorsaItalianaLogon*)hdr;

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
borsaitalianaCodec::getLogonResponse (cdr &d, BorsaItalianaHeader* hdr)
{
    d.setString (MessageName, "LogonResponse");
    BorsaItalianaLogonResponse* p = (BorsaItalianaLogonResponse*)hdr;

    d.setInteger (RejectCode, p->mRejectCode);
    codecHelper_setString (d, PasswordExpiryDayCount, p->mPasswordExpiryDayCount,
                           sizeof (p->mPasswordExpiryDayCount));

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::getLogout (cdr &d, BorsaItalianaHeader* hdr)
{
    d.setString (MessageName, "Logout");
    BorsaItalianaLogout* p = (BorsaItalianaLogout*)hdr;

    codecHelper_setString (d, Reason, p->mReason,
                           sizeof (p->mReason));

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::getHeartbeat (cdr &d, BorsaItalianaHeader* hdr)
{
    d.setString (MessageName, "Heartbeat");


    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::getReject (cdr &d, BorsaItalianaHeader* hdr)
{
    d.setString (MessageName, "Reject");
    BorsaItalianaReject* p = (BorsaItalianaReject*)hdr;

    d.setInteger (RejectCode, p->mRejectCode);
    codecHelper_setString (d, RejectReason, p->mRejectReason,
                           sizeof (p->mRejectReason));
    d.setInteger (RejectedMessageType, p->mRejectedMessageType);
    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::getMissedMessageRequest (cdr &d, BorsaItalianaHeader* hdr)
{
    d.setString (MessageName, "MissedMessageRequest");
    BorsaItalianaMissedMessageRequest* p = (BorsaItalianaMissedMessageRequest*)hdr;

    d.setInteger (AppID, p->mAppID);
    d.setInteger (LastMsgSeqNum, p->mLastMsgSeqNum);

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::getMissedMessageRequestAck (cdr &d, BorsaItalianaHeader* hdr)
{
    d.setString (MessageName, "MissedMessageRequestAck");
    BorsaItalianaMissedMessageRequestAck* p = (BorsaItalianaMissedMessageRequestAck*)hdr;

    d.setInteger (ResponseType, p->mResponseType);

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::getTransmissionComplete (cdr &d, BorsaItalianaHeader* hdr)
{
    d.setString (MessageName, "TransmissionComplete");
    BorsaItalianaTransmissionComplete* p = (BorsaItalianaTransmissionComplete*)hdr;

    d.setInteger (ResponseType, p->mResponseType);

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::getSystemStatus (cdr &d, BorsaItalianaHeader* hdr)
{
    d.setString (MessageName, "SystemStatus");
    BorsaItalianaSystemStatus* p = (BorsaItalianaSystemStatus*)hdr;

    d.setInteger (AppID, p->mAppID);
    d.setInteger (AppStatus, p->mAppStatus);

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::getNewOrder (cdr &d, BorsaItalianaHeader* hdr)
{
    d.setString (MessageName, "NewOrder");
    BorsaItalianaNewOrder* p = (BorsaItalianaNewOrder*)hdr;

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
    d.setDouble (StoppedPrice, (p->mStoppedPrice) / mPriceConverter);
    d.setInteger (OrderSource, p->mOrderSource);
    d.setInteger (ClientID, p->mClientID);
    d.setInteger (InvestmentDecisionMaker, p->mInvestmentDecisionMaker);
    d.setInteger (ExecutingTrader, p->mExecutingTrader);

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::getNewQuote (cdr &d, BorsaItalianaHeader* hdr)
{
    d.setString (MessageName, "NewQuote");
    BorsaItalianaNewQuote* p = (BorsaItalianaNewQuote*)hdr;

    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    codecHelper_setString (d, TraderID, p->mTraderID,
                           sizeof (p->mTraderID));
    d.setInteger (ClearingAccount, p->mClearingAccount);
    d.setInteger (InstrumentID, p->mInstrumentID);
    d.setDouble (BidPrice, (p->mBidPrice) / mPriceConverter);
    d.setInteger (BidSize, p->mBidSize);
    d.setDouble (AskPrice, (p->mAskPrice) / mPriceConverter);
    d.setInteger (AskSize, p->mAskSize);
    d.setInteger (Capacity, p->mCapacity);
    d.setInteger (AutoCancel, p->mAutoCancel);
    d.setInteger (TIF, p->mTIF);
    d.setInteger (Anonymity, p->mAnonymity);
    d.setInteger (ClientID, p->mClientID);
    d.setInteger (InvestmentDecisionMaker, p->mInvestmentDecisionMaker);
    d.setInteger (ExecutingTrader, p->mExecutingTrader);
    d.setInteger (FXMiFIDFlags, p->mFXMiFIDFlags);
    d.setInteger (PartyRoleQualifiers, p->mPartyRoleQualifiers);

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::getNewOrderCrossMessage (cdr &d, BorsaItalianaHeader* hdr)
{
    d.setString (MessageName, "NewOrderCrossMessage");
    BorsaItalianaNewOrderCrossMessage* p = (BorsaItalianaNewOrderCrossMessage*)hdr;

    codecHelper_setString (d, CrossID, p->mCrossID,
                           sizeof (p->mCrossID));
    d.setInteger (CrossType, p->mCrossType);
    codecHelper_setString (d, BuySideCIOrdID, p->mBuySideCIOrdID,
                           sizeof (p->mBuySideCIOrdID));
    d.setInteger (BuySideOrderCapacity, p->mBuySideOrderCapacity);
    d.setInteger (BuySideClearingAccount, p->mBuySideClearingAccount);
    d.setInteger (BuySideOrderQuantity, p->mBuySideOrderQuantity);
    codecHelper_setString (d, BuySideFirmID, p->mBuySideFirmID,
                           sizeof (p->mBuySideFirmID));
    d.setInteger (BuySidePartyRole, p->mBuySidePartyRole);
    d.setInteger (BuyFXMiFIDFlags, p->mBuyFXMiFIDFlags);
    d.setInteger (BuyClientID, p->mBuyClientID);
    d.setInteger (BuyInvestmentDecisionMaker, p->mBuyInvestmentDecisionMaker);
    d.setInteger (BuyExecutingTrader, p->mBuyExecutingTrader);
    d.setInteger (BuyPartyRoleQualifiers, p->mBuyPartyRoleQualifiers);
    codecHelper_setString (d, SellSideCIOrdID, p->mSellSideCIOrdID,
                           sizeof (p->mSellSideCIOrdID));
    d.setInteger (SellSideOrderCapacity, p->mSellSideOrderCapacity);
    d.setInteger (SellSideClearingAccount, p->mSellSideClearingAccount);
    d.setInteger (SellSideOrderQuantity, p->mSellSideOrderQuantity);
    codecHelper_setString (d, SellSideFirmID, p->mSellSideFirmID,
                           sizeof (p->mSellSideFirmID));
    d.setInteger (SellSidePartyRole, p->mSellSidePartyRole);
    d.setInteger (SellFXMiFIDFlags, p->mSellFXMiFIDFlags);
    d.setInteger (SellClientID, p->mSellClientID);
    d.setInteger (SellInvestmentDecisionMaker, p->mSellInvestmentDecisionMaker);
    d.setInteger (SellExecutingTrader, p->mSellExecutingTrader);
    d.setInteger (SellPartyRoleQualifiers, p->mSellPartyRoleQualifiers);
    d.setInteger (InstrumentID, p->mInstrumentID);
    d.setDouble (Price, (p->mPrice) / mPriceConverter);
    d.setInteger (OrderType, p->mOrderType);
    d.setInteger (TIF, p->mTIF);

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::getCrossOrderCancelRequest (cdr &d, BorsaItalianaHeader* hdr)
{
    d.setString (MessageName, "CrossOrderCancelRequest");
    BorsaItalianaCrossOrderCancelRequest* p = (BorsaItalianaCrossOrderCancelRequest*)hdr;

    codecHelper_setString (d, CrossID, p->mCrossID,
                           sizeof (p->mCrossID));
    codecHelper_setString (d, OriginalCrossID, p->mOriginalCrossID,
                           sizeof (p->mOriginalCrossID));
    d.setInteger (CrossType, p->mCrossType);
    codecHelper_setString (d, BuySideOriginalCIOrdID, p->mBuySideOriginalCIOrdID,
                           sizeof (p->mBuySideOriginalCIOrdID));
    d.setInteger (BuySideOrderQuantity, p->mBuySideOrderQuantity);
    codecHelper_setString (d, SellSideCIOrdID, p->mSellSideCIOrdID,
                           sizeof (p->mSellSideCIOrdID));
    d.setInteger (SellSideOrderQuantity, p->mSellSideOrderQuantity);
    d.setInteger (InstrumentID, p->mInstrumentID);
    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::getOrderModificationRequest (cdr &d, BorsaItalianaHeader* hdr)
{
    d.setString (MessageName, "OrderModificationRequest");
    BorsaItalianaOrderModificationRequest* p = (BorsaItalianaOrderModificationRequest*)hdr;

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
    d.setDouble (StoppedPrice, (p->mStoppedPrice) / mPriceConverter);

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::getCancelRequest (cdr &d, BorsaItalianaHeader* hdr)
{
    d.setString (MessageName, "CancelRequest");
    BorsaItalianaCancelRequest* p = (BorsaItalianaCancelRequest*)hdr;

    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    codecHelper_setString (d, OriginalClientOrderID, p->mOriginalClientOrderID,
                           sizeof (p->mOriginalClientOrderID));
    codecHelper_setString (d, OrderID, p->mOrderID,
                           sizeof (p->mOrderID));
    d.setInteger (InstrumentID, p->mInstrumentID);
    d.setInteger (Side, p->mSide);
    codecHelper_setString (d, RFQID, p->mRFQID,
                           sizeof (p->mRFQID));

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::getMassCancelRequest (cdr &d, BorsaItalianaHeader* hdr)
{
    d.setString (MessageName, "MassCancelRequest");
    BorsaItalianaMassCancelRequest* p = (BorsaItalianaMassCancelRequest*)hdr;

    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    d.setInteger (MassCancelRequestType, p->mMassCancelRequestType);
    d.setInteger (InstrumentID, p->mInstrumentID);
    d.setInteger (OrderBook, p->mOrderBook);
    codecHelper_setString (d, Segment, p->mSegment,
                           sizeof (p->mSegment));
    d.setInteger (OrderSubType, p->mOrderSubType);

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::getQuoteRequest (cdr &d, BorsaItalianaHeader* hdr)
{
    d.setString (MessageName, "QuoteRequest");
    BorsaItalianaQuoteRequest* p = (BorsaItalianaQuoteRequest*)hdr;

    d.setInteger (PartitionID, p->mPartitionID);
    d.setInteger (SequenceNumber, p->mSequenceNumber);
    codecHelper_setString (d, QuoteReqID, p->mQuoteReqID,
                           sizeof (p->mQuoteReqID));
    d.setInteger (OrderBook, p->mOrderBook);
    d.setInteger (PrivateQuote, p->mPrivateQuote);
    d.setInteger (InstrumentID, p->mInstrumentID);
    d.setInteger (Side, p->mSide);
    d.setInteger (OrderQuantity, p->mOrderQuantity);
    d.setInteger (ExpireTime, p->mExpireTime);
    codecHelper_setString (d, MarketMakers, p->mMarketMakers,
                           sizeof (p->mMarketMakers));
    codecHelper_setString (d, ContraTrader, p->mContraTrader,
                           sizeof (p->mContraTrader));
    codecHelper_setString (d, ContraFirm, p->mContraFirm,
                           sizeof (p->mContraFirm));
    codecHelper_setString (d, RFQID, p->mRFQID,
                           sizeof (p->mRFQID));
    d.setInteger (ClientID, p->mClientID);
    d.setInteger (InvestmentDecisionMaker, p->mInvestmentDecisionMaker);
    d.setInteger (ExecutingTrader, p->mExecutingTrader);
    d.setInteger (FXMiFIDFlags, p->mFXMiFIDFlags);
    d.setInteger (PartyRoleQualifiers, p->mPartyRoleQualifiers);

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::getQuoteRequestReject (cdr &d, BorsaItalianaHeader* hdr)
{
    d.setString (MessageName, "QuoteRequestReject");
    BorsaItalianaQuoteRequestReject* p = (BorsaItalianaQuoteRequestReject*)hdr;

    d.setInteger (PartitionID, p->mPartitionID);
    d.setInteger (SequenceNumber, p->mSequenceNumber);
    codecHelper_setString (d, QuoteReqID, p->mQuoteReqID,
                           sizeof (p->mQuoteReqID));
    d.setInteger (RejectCode, p->mRejectCode);
    d.setInteger (OrderBook, p->mOrderBook);
    d.setInteger (InstrumentID, p->mInstrumentID);
    d.setInteger (Side, p->mSide);
    d.setInteger (OrderQuantity, p->mOrderQuantity);
    codecHelper_setString (d, MarketMakers, p->mMarketMakers,
                           sizeof (p->mMarketMakers));
    codecHelper_setString (d, ContraTrader, p->mContraTrader,
                           sizeof (p->mContraTrader));
    codecHelper_setString (d, RFQID, p->mRFQID,
                           sizeof (p->mRFQID));

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::getQuoteStatusReport (cdr &d, BorsaItalianaHeader* hdr)
{
    d.setString (MessageName, "QuoteStatusReport");
    BorsaItalianaQuoteStatusReport* p = (BorsaItalianaQuoteStatusReport*)hdr;

    d.setInteger (PartitionID, p->mPartitionID);
    d.setInteger (SequenceNumber, p->mSequenceNumber);
    codecHelper_setString (d, QuoteReqID, p->mQuoteReqID,
                           sizeof (p->mQuoteReqID));
    d.setInteger (QuoteStatus, p->mQuoteStatus);
    d.setInteger (RejectCode, p->mRejectCode);
    d.setInteger (OrderBook, p->mOrderBook);
    codecHelper_setString (d, MarketMakers, p->mMarketMakers,
                           sizeof (p->mMarketMakers));
    codecHelper_setString (d, RFQID, p->mRFQID,
                           sizeof (p->mRFQID));
    d.setInteger (ExpireTime, p->mExpireTime);
    codecHelper_setString (d, BidID, p->mBidID,
                           sizeof (p->mBidID));
    codecHelper_setString (d, OfferID, p->mOfferID,
                           sizeof (p->mOfferID));

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::getRFQQuote (cdr &d, BorsaItalianaHeader* hdr)
{
    d.setString (MessageName, "RFQQuote");
    BorsaItalianaRFQQuote* p = (BorsaItalianaRFQQuote*)hdr;

    d.setInteger (PartitionID, p->mPartitionID);
    d.setInteger (SequenceNumber, p->mSequenceNumber);
    codecHelper_setString (d, QuoteMsgID, p->mQuoteMsgID,
                           sizeof (p->mQuoteMsgID));
    codecHelper_setString (d, RFQID, p->mRFQID,
                           sizeof (p->mRFQID));
    d.setInteger (InstrumentID, p->mInstrumentID);
    d.setDouble (BidPrice, (p->mBidPrice) / mPriceConverter);
    d.setInteger (BidQuantity, p->mBidQuantity);
    d.setDouble (OfferPrice, (p->mOfferPrice) / mPriceConverter);
    d.setInteger (OfferQuantity, p->mOfferQuantity);
    d.setInteger (AutoCancel, p->mAutoCancel);
    codecHelper_setString (d, MarketMakers, p->mMarketMakers,
                           sizeof (p->mMarketMakers));
    codecHelper_setString (d, MarketMakerFirm, p->mMarketMakerFirm,
                           sizeof (p->mMarketMakerFirm));
    codecHelper_setString (d, BidID, p->mBidID,
                           sizeof (p->mBidID));
    codecHelper_setString (d, OfferID, p->mOfferID,
                           sizeof (p->mOfferID));
    d.setInteger (Capacity, p->mCapacity);
    d.setInteger (ClearingAccount, p->mClearingAccount);
    d.setInteger (ClientID, p->mClientID);
    d.setInteger (InvestmentDecisionMaker, p->mInvestmentDecisionMaker);
    d.setInteger (ExecutingTrader, p->mExecutingTrader);
    d.setInteger (FXMiFIDFlags, p->mFXMiFIDFlags);
    d.setInteger (PartyRoleQualifiers, p->mPartyRoleQualifiers);

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::getQuoteAck (cdr &d, BorsaItalianaHeader* hdr)
{
    d.setString (MessageName, "QuoteAck");
    BorsaItalianaQuoteAck* p = (BorsaItalianaQuoteAck*)hdr;

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
borsaitalianaCodec::getQuoteResponse (cdr &d, BorsaItalianaHeader* hdr)
{
    d.setString (MessageName, "QuoteResponse");
    BorsaItalianaQuoteResponse* p = (BorsaItalianaQuoteResponse*)hdr;

    d.setInteger (PartitionID, p->mPartitionID);
    d.setInteger (SequenceNumber, p->mSequenceNumber);
    codecHelper_setString (d, QuoteMsgID, p->mQuoteMsgID,
                           sizeof (p->mQuoteMsgID));
    codecHelper_setString (d, RFQID, p->mRFQID,
                           sizeof (p->mRFQID));
    d.setInteger (QuoteRespType, p->mQuoteRespType);
    d.setInteger (InstrumentID, p->mInstrumentID);
    d.setInteger (Side, p->mSide);
    d.setInteger (OrderQuantity, p->mOrderQuantity);
    d.setDouble (CoverPrice, (p->mCoverPrice) / mPriceConverter);
    d.setInteger (OrderBook, p->mOrderBook);
    codecHelper_setString (d, BidID, p->mBidID,
                           sizeof (p->mBidID));
    codecHelper_setString (d, OfferID, p->mOfferID,
                           sizeof (p->mOfferID));
    d.setInteger (Capacity, p->mCapacity);
    d.setInteger (ClearingAccount, p->mClearingAccount);

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::getRFQExecutionReport (cdr &d, BorsaItalianaHeader* hdr)
{
    d.setString (MessageName, "RFQExecutionReport");
    BorsaItalianaRFQExecutionReport* p = (BorsaItalianaRFQExecutionReport*)hdr;

    d.setInteger (PartitionID, p->mPartitionID);
    d.setInteger (SequenceNumber, p->mSequenceNumber);
    codecHelper_setString (d, ExecutionID, p->mExecutionID,
                           sizeof (p->mExecutionID));
    codecHelper_setString (d, RFQID, p->mRFQID,
                           sizeof (p->mRFQID));
    codecHelper_setString (d, OrderID, p->mOrderID,
                           sizeof (p->mOrderID));
    codecHelper_setString (d, ExecutionType, p->mExecutionType,
                           sizeof (p->mExecutionType));
    d.setInteger (TradeMatchID, p->mTradeMatchID);
    d.setInteger (Side, p->mSide);
    d.setInteger (ExecutedQuantity, p->mExecutedQuantity);
    d.setDouble (ExecutedPrice, (p->mExecutedPrice) / mPriceConverter);
    d.setDouble (LastParPrice, (p->mLastParPrice) / mPriceConverter);
    d.setInteger (Yield, p->mYield);
    d.setInteger (AccruedInterestAmt, p->mAccruedInterestAmt);
    d.setInteger (OrderStatus, p->mOrderStatus);
    d.setInteger (LeavesQuantity, p->mLeavesQuantity);
    d.setInteger (InstrumentID, p->mInstrumentID);
    d.setDouble (ParPrice, (p->mParPrice) / mPriceConverter);
    d.setInteger (ConvertedYield, p->mConvertedYield);
    codecHelper_setString (d, ContraFirm, p->mContraFirm,
                           sizeof (p->mContraFirm));
    d.setInteger (Capacity, p->mCapacity);
    d.setInteger (ClearingAccount, p->mClearingAccount);
    d.setInteger (WaiverFlags, p->mWaiverFlags);

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::getExecutionReport (cdr &d, BorsaItalianaHeader* hdr)
{
    d.setString (MessageName, "ExecutionReport");
    BorsaItalianaExecutionReport* p = (BorsaItalianaExecutionReport*)hdr;

    d.setInteger (AppID, p->mAppID);
    d.setInteger (SequenceNo, p->mSequenceNo);
    codecHelper_setString (d, ExecutionID, p->mExecutionID,
                           sizeof (p->mExecutionID));
    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    codecHelper_setString (d, OrderID, p->mOrderID,
                           sizeof (p->mOrderID));
    codecHelper_setString (d, ExecType, p->mExecType,
                           sizeof (p->mExecType));
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
    codecHelper_setString (d, Counterparty, p->mCounterparty,
                           sizeof (p->mCounterparty));
    codecHelper_setString (d, TradeLiquidityIndicator, p->mTradeLiquidityIndicator,
                           sizeof (p->mTradeLiquidityIndicator));
    d.setInteger (TradeMatchID, p->mTradeMatchID);
    d.setInteger (TransactTimeSeconds, p->mTransactTimeSeconds);
    d.setInteger (TransactTimeUsecs, p->mTransactTimeUsecs);
    d.setInteger (OrderSource, p->mOrderSource);
    d.setInteger (AvgPx, p->mAvgPx);
    d.setDouble (ImpliedPrice, (p->mImpliedPrice) / mPriceConverter);
    codecHelper_setString (d, CrossID, p->mCrossID,
                           sizeof (p->mCrossID));
    d.setInteger (CrossType, p->mCrossType);
    codecHelper_setString (d, OriginalCrossID, p->mOriginalCrossID,
                           sizeof (p->mOriginalCrossID));
    d.setInteger (ResatementReason, p->mResatementReason);
    codecHelper_setString (d, PublicOrderID, p->mPublicOrderID,
                           sizeof (p->mPublicOrderID));
    d.setInteger (TypeOfTrade, p->mTypeOfTrade);

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::getCancelReject (cdr &d, BorsaItalianaHeader* hdr)
{
    d.setString (MessageName, "CancelReject");
    BorsaItalianaCancelReject* p = (BorsaItalianaCancelReject*)hdr;

    d.setInteger (AppID, p->mAppID);
    d.setInteger (SequenceNo, p->mSequenceNo);
    codecHelper_setString (d, ClientOrderID, p->mClientOrderID,
                           sizeof (p->mClientOrderID));
    codecHelper_setString (d, OrderID, p->mOrderID,
                           sizeof (p->mOrderID));
    d.setInteger (CancelRejectReason, p->mCancelRejectReason);
    d.setInteger (TransactTimeSeconds, p->mTransactTimeSeconds);
    d.setInteger (TransactTimeUsecs, p->mTransactTimeUsecs);
    codecHelper_setString (d, RFQID, p->mRFQID,
                           sizeof (p->mRFQID));

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::getOrderMassCancelReport (cdr &d, BorsaItalianaHeader* hdr)
{
    d.setString (MessageName, "OrderMassCancelReport");
    BorsaItalianaOrderMassCancelReport* p = (BorsaItalianaOrderMassCancelReport*)hdr;

    d.setInteger (AppID, p->mAppID);
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
borsaitalianaCodec::getBusinessReject (cdr &d, BorsaItalianaHeader* hdr)
{
    d.setString (MessageName, "BusinessReject");
    BorsaItalianaBusinessReject* p = (BorsaItalianaBusinessReject*)hdr;

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
borsaitalianaCodec::putLogon (const cdr &d, BorsaItalianaHeader* hdr, size_t len, size_t& used)
{
    BorsaItalianaLogon* p = (BorsaItalianaLogon*)hdr;
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
borsaitalianaCodec::putLogonResponse (const cdr &d, BorsaItalianaHeader* hdr, size_t len, size_t& used)
{
    BorsaItalianaLogonResponse* p = (BorsaItalianaLogonResponse*)hdr;
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
borsaitalianaCodec::putLogout (const cdr &d, BorsaItalianaHeader* hdr, size_t len, size_t& used)
{
    BorsaItalianaLogout* p = (BorsaItalianaLogout*)hdr;
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
borsaitalianaCodec::putHeartbeat (const cdr &d, BorsaItalianaHeader* hdr, size_t len, size_t& used)
{
    BorsaItalianaHeartbeat* p = (BorsaItalianaHeartbeat*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;


    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::putReject (const cdr &d, BorsaItalianaHeader* hdr, size_t len, size_t& used)
{
    BorsaItalianaReject* p = (BorsaItalianaReject*)hdr;
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
borsaitalianaCodec::putMissedMessageRequest (const cdr &d, BorsaItalianaHeader* hdr, size_t len, size_t& used)
{
    BorsaItalianaMissedMessageRequest* p = (BorsaItalianaMissedMessageRequest*)hdr;
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
borsaitalianaCodec::putMissedMessageRequestAck (const cdr &d, BorsaItalianaHeader* hdr, size_t len, size_t& used)
{
    BorsaItalianaMissedMessageRequestAck* p = (BorsaItalianaMissedMessageRequestAck*)hdr;
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
borsaitalianaCodec::putTransmissionComplete (const cdr &d, BorsaItalianaHeader* hdr, size_t len, size_t& used)
{
    BorsaItalianaTransmissionComplete* p = (BorsaItalianaTransmissionComplete*)hdr;
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
borsaitalianaCodec::putSystemStatus (const cdr &d, BorsaItalianaHeader* hdr, size_t len, size_t& used)
{
    BorsaItalianaSystemStatus* p = (BorsaItalianaSystemStatus*)hdr;
    if (len < sizeof *p)
        return GW_CODEC_SHORT;
    used = sizeof *p;

        if (!d.getInteger (AppID, &p->mAppID))
        {
            setLastError ("invalid or missing AppID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (AppStatus, &p->mAppStatus))
        {
            setLastError ("invalid or missing AppStatus");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::putNewOrder (const cdr &d, BorsaItalianaHeader* hdr, size_t len, size_t& used)
{
    BorsaItalianaNewOrder* p = (BorsaItalianaNewOrder*)hdr;
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
        if (!putPrice (d, StoppedPrice, &p->mStoppedPrice))
        {
            setLastError ("invalid or missing StoppedPrice");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (OrderSource, &p->mOrderSource))
        {
            setLastError ("invalid or missing OrderSource");
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

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::putNewQuote (const cdr &d, BorsaItalianaHeader* hdr, size_t len, size_t& used)
{
    BorsaItalianaNewQuote* p = (BorsaItalianaNewQuote*)hdr;
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
        if (!putPrice (d, BidPrice, &p->mBidPrice))
        {
            setLastError ("invalid or missing BidPrice");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (BidSize, &p->mBidSize))
        {
            setLastError ("invalid or missing BidSize");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, AskPrice, &p->mAskPrice))
        {
            setLastError ("invalid or missing AskPrice");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (AskSize, &p->mAskSize))
        {
            setLastError ("invalid or missing AskSize");
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
        if (!d.getInteger (TIF, &p->mTIF))
        {
            setLastError ("invalid or missing TIF");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (Anonymity, &p->mAnonymity))
        {
            setLastError ("invalid or missing Anonymity");
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
borsaitalianaCodec::putNewOrderCrossMessage (const cdr &d, BorsaItalianaHeader* hdr, size_t len, size_t& used)
{
    BorsaItalianaNewOrderCrossMessage* p = (BorsaItalianaNewOrderCrossMessage*)hdr;
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
        if (!putString (d, BuySideCIOrdID, p->mBuySideCIOrdID, sizeof p->mBuySideCIOrdID))
        {
            setLastError ("BuySideCIOrdID missing or not string");
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
        if (!d.getInteger (BuyFXMiFIDFlags, &p->mBuyFXMiFIDFlags))
        {
            setLastError ("invalid or missing BuyFXMiFIDFlags");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (BuyClientID, &p->mBuyClientID))
        {
            setLastError ("invalid or missing BuyClientID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (BuyInvestmentDecisionMaker, &p->mBuyInvestmentDecisionMaker))
        {
            setLastError ("invalid or missing BuyInvestmentDecisionMaker");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (BuyExecutingTrader, &p->mBuyExecutingTrader))
        {
            setLastError ("invalid or missing BuyExecutingTrader");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (BuyPartyRoleQualifiers, &p->mBuyPartyRoleQualifiers))
        {
            setLastError ("invalid or missing BuyPartyRoleQualifiers");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, SellSideCIOrdID, p->mSellSideCIOrdID, sizeof p->mSellSideCIOrdID))
        {
            setLastError ("SellSideCIOrdID missing or not string");
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
        if (!d.getInteger (SellFXMiFIDFlags, &p->mSellFXMiFIDFlags))
        {
            setLastError ("invalid or missing SellFXMiFIDFlags");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SellClientID, &p->mSellClientID))
        {
            setLastError ("invalid or missing SellClientID");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SellInvestmentDecisionMaker, &p->mSellInvestmentDecisionMaker))
        {
            setLastError ("invalid or missing SellInvestmentDecisionMaker");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SellExecutingTrader, &p->mSellExecutingTrader))
        {
            setLastError ("invalid or missing SellExecutingTrader");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (SellPartyRoleQualifiers, &p->mSellPartyRoleQualifiers))
        {
            setLastError ("invalid or missing SellPartyRoleQualifiers");
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
borsaitalianaCodec::putCrossOrderCancelRequest (const cdr &d, BorsaItalianaHeader* hdr, size_t len, size_t& used)
{
    BorsaItalianaCrossOrderCancelRequest* p = (BorsaItalianaCrossOrderCancelRequest*)hdr;
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
        if (!putString (d, BuySideOriginalCIOrdID, p->mBuySideOriginalCIOrdID, sizeof p->mBuySideOriginalCIOrdID))
        {
            setLastError ("BuySideOriginalCIOrdID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (BuySideOrderQuantity, &p->mBuySideOrderQuantity))
        {
            setLastError ("invalid or missing BuySideOrderQuantity");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, SellSideCIOrdID, p->mSellSideCIOrdID, sizeof p->mSellSideCIOrdID))
        {
            setLastError ("SellSideCIOrdID missing or not string");
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
borsaitalianaCodec::putOrderModificationRequest (const cdr &d, BorsaItalianaHeader* hdr, size_t len, size_t& used)
{
    BorsaItalianaOrderModificationRequest* p = (BorsaItalianaOrderModificationRequest*)hdr;
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
        if (!putPrice (d, StoppedPrice, &p->mStoppedPrice))
        {
            setLastError ("invalid or missing StoppedPrice");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::putCancelRequest (const cdr &d, BorsaItalianaHeader* hdr, size_t len, size_t& used)
{
    BorsaItalianaCancelRequest* p = (BorsaItalianaCancelRequest*)hdr;
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
        if (!putString (d, RFQID, p->mRFQID, sizeof p->mRFQID))
        {
            setLastError ("RFQID missing or not string");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::putMassCancelRequest (const cdr &d, BorsaItalianaHeader* hdr, size_t len, size_t& used)
{
    BorsaItalianaMassCancelRequest* p = (BorsaItalianaMassCancelRequest*)hdr;
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
        if (!d.getInteger (OrderBook, &p->mOrderBook))
        {
            setLastError ("invalid or missing OrderBook");
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
borsaitalianaCodec::putQuoteRequest (const cdr &d, BorsaItalianaHeader* hdr, size_t len, size_t& used)
{
    BorsaItalianaQuoteRequest* p = (BorsaItalianaQuoteRequest*)hdr;
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
        if (!d.getInteger (OrderQuantity, &p->mOrderQuantity))
        {
            setLastError ("invalid or missing OrderQuantity");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (ExpireTime, &p->mExpireTime))
        {
            setLastError ("invalid or missing ExpireTime");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, MarketMakers, p->mMarketMakers, sizeof p->mMarketMakers))
        {
            setLastError ("MarketMakers missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, ContraTrader, p->mContraTrader, sizeof p->mContraTrader))
        {
            setLastError ("ContraTrader missing or not string");
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
borsaitalianaCodec::putQuoteRequestReject (const cdr &d, BorsaItalianaHeader* hdr, size_t len, size_t& used)
{
    BorsaItalianaQuoteRequestReject* p = (BorsaItalianaQuoteRequestReject*)hdr;
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
        if (!putString (d, ContraTrader, p->mContraTrader, sizeof p->mContraTrader))
        {
            setLastError ("ContraTrader missing or not string");
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
borsaitalianaCodec::putQuoteStatusReport (const cdr &d, BorsaItalianaHeader* hdr, size_t len, size_t& used)
{
    BorsaItalianaQuoteStatusReport* p = (BorsaItalianaQuoteStatusReport*)hdr;
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
        if (!d.getInteger (ExpireTime, &p->mExpireTime))
        {
            setLastError ("invalid or missing ExpireTime");
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

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::putRFQQuote (const cdr &d, BorsaItalianaHeader* hdr, size_t len, size_t& used)
{
    BorsaItalianaRFQQuote* p = (BorsaItalianaRFQQuote*)hdr;
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
        if (!d.getInteger (InstrumentID, &p->mInstrumentID))
        {
            setLastError ("invalid or missing InstrumentID");
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
        if (!d.getInteger (AutoCancel, &p->mAutoCancel))
        {
            setLastError ("invalid or missing AutoCancel");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, MarketMakers, p->mMarketMakers, sizeof p->mMarketMakers))
        {
            setLastError ("MarketMakers missing or not string");
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
        if (!d.getInteger (Capacity, &p->mCapacity))
        {
            setLastError ("invalid or missing Capacity");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (ClearingAccount, &p->mClearingAccount))
        {
            setLastError ("invalid or missing ClearingAccount");
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
borsaitalianaCodec::putQuoteAck (const cdr &d, BorsaItalianaHeader* hdr, size_t len, size_t& used)
{
    BorsaItalianaQuoteAck* p = (BorsaItalianaQuoteAck*)hdr;
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
borsaitalianaCodec::putQuoteResponse (const cdr &d, BorsaItalianaHeader* hdr, size_t len, size_t& used)
{
    BorsaItalianaQuoteResponse* p = (BorsaItalianaQuoteResponse*)hdr;
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
        if (!d.getInteger (Capacity, &p->mCapacity))
        {
            setLastError ("invalid or missing Capacity");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (ClearingAccount, &p->mClearingAccount))
        {
            setLastError ("invalid or missing ClearingAccount");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::putRFQExecutionReport (const cdr &d, BorsaItalianaHeader* hdr, size_t len, size_t& used)
{
    BorsaItalianaRFQExecutionReport* p = (BorsaItalianaRFQExecutionReport*)hdr;
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
        if (!putString (d, ExecutionType, p->mExecutionType, sizeof p->mExecutionType))
        {
            setLastError ("ExecutionType missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (TradeMatchID, &p->mTradeMatchID))
        {
            setLastError ("invalid or missing TradeMatchID");
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
        if (!d.getInteger (InstrumentID, &p->mInstrumentID))
        {
            setLastError ("invalid or missing InstrumentID");
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
        if (!d.getInteger (Capacity, &p->mCapacity))
        {
            setLastError ("invalid or missing Capacity");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (ClearingAccount, &p->mClearingAccount))
        {
            setLastError ("invalid or missing ClearingAccount");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (WaiverFlags, &p->mWaiverFlags))
        {
            setLastError ("invalid or missing WaiverFlags");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::putExecutionReport (const cdr &d, BorsaItalianaHeader* hdr, size_t len, size_t& used)
{
    BorsaItalianaExecutionReport* p = (BorsaItalianaExecutionReport*)hdr;
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
        if (!putString (d, ExecType, p->mExecType, sizeof p->mExecType))
        {
            setLastError ("ExecType missing or not string");
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
        if (!putString (d, Counterparty, p->mCounterparty, sizeof p->mCounterparty))
        {
            setLastError ("Counterparty missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, TradeLiquidityIndicator, p->mTradeLiquidityIndicator, sizeof p->mTradeLiquidityIndicator))
        {
            setLastError ("TradeLiquidityIndicator missing or not string");
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
        if (!d.getInteger (OrderSource, &p->mOrderSource))
        {
            setLastError ("invalid or missing OrderSource");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (AvgPx, &p->mAvgPx))
        {
            setLastError ("invalid or missing AvgPx");
            return GW_CODEC_ERROR;
        }
        if (!putPrice (d, ImpliedPrice, &p->mImpliedPrice))
        {
            setLastError ("invalid or missing ImpliedPrice");
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
        if (!putString (d, OriginalCrossID, p->mOriginalCrossID, sizeof p->mOriginalCrossID))
        {
            setLastError ("OriginalCrossID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (ResatementReason, &p->mResatementReason))
        {
            setLastError ("invalid or missing ResatementReason");
            return GW_CODEC_ERROR;
        }
        if (!putString (d, PublicOrderID, p->mPublicOrderID, sizeof p->mPublicOrderID))
        {
            setLastError ("PublicOrderID missing or not string");
            return GW_CODEC_ERROR;
        }
        if (!d.getInteger (TypeOfTrade, &p->mTypeOfTrade))
        {
            setLastError ("invalid or missing TypeOfTrade");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::putCancelReject (const cdr &d, BorsaItalianaHeader* hdr, size_t len, size_t& used)
{
    BorsaItalianaCancelReject* p = (BorsaItalianaCancelReject*)hdr;
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
        if (!putString (d, RFQID, p->mRFQID, sizeof p->mRFQID))
        {
            setLastError ("RFQID missing or not string");
            return GW_CODEC_ERROR;
        }

    return GW_CODEC_SUCCESS;
}

codecState
borsaitalianaCodec::putOrderMassCancelReport (const cdr &d, BorsaItalianaHeader* hdr, size_t len, size_t& used)
{
    BorsaItalianaOrderMassCancelReport* p = (BorsaItalianaOrderMassCancelReport*)hdr;
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
borsaitalianaCodec::putBusinessReject (const cdr &d, BorsaItalianaHeader* hdr, size_t len, size_t& used)
{
    BorsaItalianaBusinessReject* p = (BorsaItalianaBusinessReject*)hdr;
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
borsaitalianaCodec::decode (cdr& d, const void* buf, size_t len, size_t& used)
{
    clearLastError ();
    used = 0;
    d.clear ();

    BorsaItalianaHeader* hdr = (BorsaItalianaHeader*)buf;
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
        case 'S':
            return getNewQuote (d, hdr);
        case 'C':
            return getNewOrderCrossMessage (d, hdr);
        case 'H':
            return getCrossOrderCancelRequest (d, hdr);
        case 'G':
            return getOrderModificationRequest (d, hdr);
        case 'F':
            return getCancelRequest (d, hdr);
        case 'q':
            return getMassCancelRequest (d, hdr);
        case 'a':
            return getQuoteRequest (d, hdr);
        case 'b':
            return getQuoteRequestReject (d, hdr);
        case 'c':
            return getQuoteStatusReport (d, hdr);
        case 'd':
            return getRFQQuote (d, hdr);
        case 'e':
            return getQuoteAck (d, hdr);
        case 'f':
            return getQuoteResponse (d, hdr);
        case 'g':
            return getRFQExecutionReport (d, hdr);
        case '8':
            return getExecutionReport (d, hdr);
        case '9':
            return getCancelReject (d, hdr);
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
borsaitalianaCodec::encode (const cdr& d, void* buf, size_t len, size_t& used)
{
    clearLastError ();
    used = 0;

    BorsaItalianaHeader* hdr = (BorsaItalianaHeader*)buf;

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
        case 'S':
            state = putNewQuote (d, hdr, len, used);
            break;
        case 'C':
            state = putNewOrderCrossMessage (d, hdr, len, used);
            break;
        case 'H':
            state = putCrossOrderCancelRequest (d, hdr, len, used);
            break;
        case 'G':
            state = putOrderModificationRequest (d, hdr, len, used);
            break;
        case 'F':
            state = putCancelRequest (d, hdr, len, used);
            break;
        case 'q':
            state = putMassCancelRequest (d, hdr, len, used);
            break;
        case 'a':
            state = putQuoteRequest (d, hdr, len, used);
            break;
        case 'b':
            state = putQuoteRequestReject (d, hdr, len, used);
            break;
        case 'c':
            state = putQuoteStatusReport (d, hdr, len, used);
            break;
        case 'd':
            state = putRFQQuote (d, hdr, len, used);
            break;
        case 'e':
            state = putQuoteAck (d, hdr, len, used);
            break;
        case 'f':
            state = putQuoteResponse (d, hdr, len, used);
            break;
        case 'g':
            state = putRFQExecutionReport (d, hdr, len, used);
            break;
        case '8':
            state = putExecutionReport (d, hdr, len, used);
            break;
        case '9':
            state = putCancelReject (d, hdr, len, used);
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
