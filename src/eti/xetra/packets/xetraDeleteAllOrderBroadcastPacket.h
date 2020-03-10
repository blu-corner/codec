/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 08/03/2020
 */
#ifndef XETRA_DELETEALLORDERBROADCAST_PACKET_H
#define XETRA_DELETEALLORDERBROADCAST_PACKET_H

#include <string>
#include <vector>
#include <sstream>
#include <cstddef>
#include <stdint.h>
#include "xetraPackets.h"
#include "EtiPacketUtils.h"

namespace neueda
{

using namespace std;

class xetraDeleteAllOrderBroadcastPacket
{
    public:
        // no value constants
        static const uint64_t MASS_ACTION_REPORT_ID_MIN;
        static const uint64_t MASS_ACTION_REPORT_ID_MAX;
        static const uint64_t MASS_ACTION_REPORT_ID_NO_VALUE;
        static const int64_t SECURITY_ID_MIN;
        static const int64_t SECURITY_ID_MAX;
        static const int64_t SECURITY_ID_NO_VALUE;
        static const double PRICE_MIN;
        static const double PRICE_MAX;
        static const int64_t PRICE_NO_VALUE;
        static const int32_t MARKET_SEGMENT_ID_MIN;
        static const int32_t MARKET_SEGMENT_ID_MAX;
        static const int32_t MARKET_SEGMENT_ID_NO_VALUE;
        static const uint32_t TARGET_PARTY_IDSESSION_ID_MIN;
        static const uint32_t TARGET_PARTY_IDSESSION_ID_MAX;
        static const uint32_t TARGET_PARTY_IDSESSION_ID_NO_VALUE;
        static const int32_t TARGET_PARTY_IDEXECUTING_TRADER_MIN;
        static const int32_t TARGET_PARTY_IDEXECUTING_TRADER_MAX;
        static const int32_t TARGET_PARTY_IDEXECUTING_TRADER_NO_VALUE;
        static const uint32_t PARTY_IDENTERING_TRADER_MIN;
        static const uint32_t PARTY_IDENTERING_TRADER_MAX;
        static const uint32_t PARTY_IDENTERING_TRADER_NO_VALUE;
        static const int16_t NO_NOT_AFFECTED_ORDERS_MIN;
        static const int16_t NO_NOT_AFFECTED_ORDERS_MAX;
        static const int16_t NO_NOT_AFFECTED_ORDERS_NO_VALUE;
        static const int16_t NO_AFFECTED_ORDERS_MIN;
        static const int16_t NO_AFFECTED_ORDERS_MAX;
        static const int16_t NO_AFFECTED_ORDERS_NO_VALUE;
        static const int16_t NO_AFFECTED_ORDER_REQUESTS_MIN;
        static const int16_t NO_AFFECTED_ORDER_REQUESTS_MAX;
        static const int16_t NO_AFFECTED_ORDER_REQUESTS_NO_VALUE;
        static const int8_t PARTY_IDENTERING_FIRM_MIN;
        static const int8_t PARTY_IDENTERING_FIRM_MAX;
        static const int8_t PARTY_IDENTERING_FIRM_NO_VALUE;
        static const uint8_t MASS_ACTION_REASON_MIN;
        static const uint8_t MASS_ACTION_REASON_MAX;
        static const uint8_t MASS_ACTION_REASON_NO_VALUE;
        static const int8_t EXEC_INST_MIN;
        static const int8_t EXEC_INST_MAX;
        static const int8_t EXEC_INST_NO_VALUE;
        static const int8_t SIDE_MIN;
        static const int8_t SIDE_MAX;
        static const int8_t SIDE_NO_VALUE;
        static const char PAD6_NO_VALUE[6];
        static const size_t PAD6_MAX_LENGTH;
        static const size_t NOT_AFFECTED_ORDERS_GRP_MIN;
        static const size_t NOT_AFFECTED_ORDERS_GRP_MAX;
        static const size_t AFFECTED_ORD_GRP_MIN;
        static const size_t AFFECTED_ORD_GRP_MAX;
        static const size_t AFFECTED_ORDER_REQUESTS_GRP_MIN;
        static const size_t AFFECTED_ORDER_REQUESTS_GRP_MAX;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraRBCHeaderMECompPacket mRBCHeaderME;
        uint64_t mMassActionReportID;
        int64_t mSecurityID;
        int64_t mPrice;
        int32_t mMarketSegmentID;
        uint32_t mTargetPartyIDSessionID;
        int32_t mTargetPartyIDExecutingTrader;
        uint32_t mPartyIDEnteringTrader;
        int16_t mNoNotAffectedOrders;
        int16_t mNoAffectedOrders;
        int16_t mNoAffectedOrderRequests;
        int8_t mPartyIDEnteringFirm;
        uint8_t mMassActionReason;
        int8_t mExecInst;
        int8_t mSide;
        char mPad6[6];
        vector<xetraNotAffectedOrdersGrpCompPacket> mNotAffectedOrdersGrp;
        vector<xetraAffectedOrdGrpCompPacket> mAffectedOrdGrp;
        vector<xetraAffectedOrderRequestsGrpCompPacket> mAffectedOrderRequestsGrp;

        // constructor
        xetraDeleteAllOrderBroadcastPacket ()
        {
            mMessageHeaderOut.mTemplateID = 10122;
            mMassActionReportID = MASS_ACTION_REPORT_ID_NO_VALUE;
            mSecurityID = SECURITY_ID_NO_VALUE;
            mPrice = PRICE_NO_VALUE;
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
            mTargetPartyIDSessionID = TARGET_PARTY_IDSESSION_ID_NO_VALUE;
            mTargetPartyIDExecutingTrader = TARGET_PARTY_IDEXECUTING_TRADER_NO_VALUE;
            mPartyIDEnteringTrader = PARTY_IDENTERING_TRADER_NO_VALUE;
            mNoNotAffectedOrders = NO_NOT_AFFECTED_ORDERS_NO_VALUE;
            mNoAffectedOrders = NO_AFFECTED_ORDERS_NO_VALUE;
            mNoAffectedOrderRequests = NO_AFFECTED_ORDER_REQUESTS_NO_VALUE;
            mPartyIDEnteringFirm = PARTY_IDENTERING_FIRM_NO_VALUE;
            mMassActionReason = MASS_ACTION_REASON_NO_VALUE;
            mExecInst = EXEC_INST_NO_VALUE;
            mSide = SIDE_NO_VALUE;
            memcpy(mPad6, PAD6_NO_VALUE, sizeof (mPad6));
        }

        // getters & setters
        const xetraMessageHeaderOutCompPacket& getMessageHeaderOut () const
        {
            return mMessageHeaderOut;
        }

        bool setMessageHeaderOut (const xetraMessageHeaderOutCompPacket& v)
        {
            mMessageHeaderOut = v;
            return true;
        }

        const xetraRBCHeaderMECompPacket& getRBCHeaderME () const
        {
            return mRBCHeaderME;
        }

        bool setRBCHeaderME (const xetraRBCHeaderMECompPacket& v)
        {
            mRBCHeaderME = v;
            return true;
        }

        uint64_t getMassActionReportID () const
        {
            return mMassActionReportID;
        }

        bool setMassActionReportID (uint64_t v)
        {
            mMassActionReportID = v;
            return ((MASS_ACTION_REPORT_ID_MIN <= mMassActionReportID && mMassActionReportID <= MASS_ACTION_REPORT_ID_MAX) || mMassActionReportID == MASS_ACTION_REPORT_ID_NO_VALUE);
        }

        bool isMassActionReportIDValid () const
        {
            return (mMassActionReportID != MASS_ACTION_REPORT_ID_NO_VALUE);
        }

        void resetMassActionReportID ()
        {
            mMassActionReportID = MASS_ACTION_REPORT_ID_NO_VALUE;
        }

        int64_t getSecurityID () const
        {
            return mSecurityID;
        }

        bool setSecurityID (int64_t v)
        {
            mSecurityID = v;
            return ((SECURITY_ID_MIN <= mSecurityID && mSecurityID <= SECURITY_ID_MAX) || mSecurityID == SECURITY_ID_NO_VALUE);
        }

        bool isSecurityIDValid () const
        {
            return (mSecurityID != SECURITY_ID_NO_VALUE);
        }

        void resetSecurityID ()
        {
            mSecurityID = SECURITY_ID_NO_VALUE;
        }

        double getPrice () const
        {
            return mPrice / 100000000.0;
        }

        bool setPrice (double v)
        {
            mPrice = v * 100000000.0;
            return ((PRICE_MIN <= v && v <= PRICE_MAX) || mPrice == PRICE_NO_VALUE);
        }

        bool isPriceValid () const
        {
            return (mPrice != PRICE_NO_VALUE);
        }

        void resetPrice ()
        {
            mPrice = PRICE_NO_VALUE;
        }

        int32_t getMarketSegmentID () const
        {
            return mMarketSegmentID;
        }

        bool setMarketSegmentID (int32_t v)
        {
            mMarketSegmentID = v;
            return ((MARKET_SEGMENT_ID_MIN <= mMarketSegmentID && mMarketSegmentID <= MARKET_SEGMENT_ID_MAX) || mMarketSegmentID == MARKET_SEGMENT_ID_NO_VALUE);
        }

        bool isMarketSegmentIDValid () const
        {
            return (mMarketSegmentID != MARKET_SEGMENT_ID_NO_VALUE);
        }

        void resetMarketSegmentID ()
        {
            mMarketSegmentID = MARKET_SEGMENT_ID_NO_VALUE;
        }

        uint32_t getTargetPartyIDSessionID () const
        {
            return mTargetPartyIDSessionID;
        }

        bool setTargetPartyIDSessionID (uint32_t v)
        {
            mTargetPartyIDSessionID = v;
            return ((TARGET_PARTY_IDSESSION_ID_MIN <= mTargetPartyIDSessionID && mTargetPartyIDSessionID <= TARGET_PARTY_IDSESSION_ID_MAX) || mTargetPartyIDSessionID == TARGET_PARTY_IDSESSION_ID_NO_VALUE);
        }

        bool isTargetPartyIDSessionIDValid () const
        {
            return (mTargetPartyIDSessionID != TARGET_PARTY_IDSESSION_ID_NO_VALUE);
        }

        void resetTargetPartyIDSessionID ()
        {
            mTargetPartyIDSessionID = TARGET_PARTY_IDSESSION_ID_NO_VALUE;
        }

        int32_t getTargetPartyIDExecutingTrader () const
        {
            return mTargetPartyIDExecutingTrader;
        }

        bool setTargetPartyIDExecutingTrader (int32_t v)
        {
            mTargetPartyIDExecutingTrader = v;
            return ((TARGET_PARTY_IDEXECUTING_TRADER_MIN <= mTargetPartyIDExecutingTrader && mTargetPartyIDExecutingTrader <= TARGET_PARTY_IDEXECUTING_TRADER_MAX) || mTargetPartyIDExecutingTrader == TARGET_PARTY_IDEXECUTING_TRADER_NO_VALUE);
        }

        bool isTargetPartyIDExecutingTraderValid () const
        {
            return (mTargetPartyIDExecutingTrader != TARGET_PARTY_IDEXECUTING_TRADER_NO_VALUE);
        }

        void resetTargetPartyIDExecutingTrader ()
        {
            mTargetPartyIDExecutingTrader = TARGET_PARTY_IDEXECUTING_TRADER_NO_VALUE;
        }

        uint32_t getPartyIDEnteringTrader () const
        {
            return mPartyIDEnteringTrader;
        }

        bool setPartyIDEnteringTrader (uint32_t v)
        {
            mPartyIDEnteringTrader = v;
            return ((PARTY_IDENTERING_TRADER_MIN <= mPartyIDEnteringTrader && mPartyIDEnteringTrader <= PARTY_IDENTERING_TRADER_MAX) || mPartyIDEnteringTrader == PARTY_IDENTERING_TRADER_NO_VALUE);
        }

        bool isPartyIDEnteringTraderValid () const
        {
            return (mPartyIDEnteringTrader != PARTY_IDENTERING_TRADER_NO_VALUE);
        }

        void resetPartyIDEnteringTrader ()
        {
            mPartyIDEnteringTrader = PARTY_IDENTERING_TRADER_NO_VALUE;
        }

        int16_t getNoNotAffectedOrders () const
        {
            return mNoNotAffectedOrders;
        }

        bool setNoNotAffectedOrders (int16_t v)
        {
            mNoNotAffectedOrders = v;
            return ((NO_NOT_AFFECTED_ORDERS_MIN <= mNoNotAffectedOrders && mNoNotAffectedOrders <= NO_NOT_AFFECTED_ORDERS_MAX) || mNoNotAffectedOrders == NO_NOT_AFFECTED_ORDERS_NO_VALUE);
        }

        bool isNoNotAffectedOrdersValid () const
        {
            return (mNoNotAffectedOrders != NO_NOT_AFFECTED_ORDERS_NO_VALUE);
        }

        void resetNoNotAffectedOrders ()
        {
            mNoNotAffectedOrders = NO_NOT_AFFECTED_ORDERS_NO_VALUE;
        }

        int16_t getNoAffectedOrders () const
        {
            return mNoAffectedOrders;
        }

        bool setNoAffectedOrders (int16_t v)
        {
            mNoAffectedOrders = v;
            return ((NO_AFFECTED_ORDERS_MIN <= mNoAffectedOrders && mNoAffectedOrders <= NO_AFFECTED_ORDERS_MAX) || mNoAffectedOrders == NO_AFFECTED_ORDERS_NO_VALUE);
        }

        bool isNoAffectedOrdersValid () const
        {
            return (mNoAffectedOrders != NO_AFFECTED_ORDERS_NO_VALUE);
        }

        void resetNoAffectedOrders ()
        {
            mNoAffectedOrders = NO_AFFECTED_ORDERS_NO_VALUE;
        }

        int16_t getNoAffectedOrderRequests () const
        {
            return mNoAffectedOrderRequests;
        }

        bool setNoAffectedOrderRequests (int16_t v)
        {
            mNoAffectedOrderRequests = v;
            return ((NO_AFFECTED_ORDER_REQUESTS_MIN <= mNoAffectedOrderRequests && mNoAffectedOrderRequests <= NO_AFFECTED_ORDER_REQUESTS_MAX) || mNoAffectedOrderRequests == NO_AFFECTED_ORDER_REQUESTS_NO_VALUE);
        }

        bool isNoAffectedOrderRequestsValid () const
        {
            return (mNoAffectedOrderRequests != NO_AFFECTED_ORDER_REQUESTS_NO_VALUE);
        }

        void resetNoAffectedOrderRequests ()
        {
            mNoAffectedOrderRequests = NO_AFFECTED_ORDER_REQUESTS_NO_VALUE;
        }

        int8_t getPartyIDEnteringFirm () const
        {
            return mPartyIDEnteringFirm;
        }

        bool setPartyIDEnteringFirm (int8_t v)
        {
            mPartyIDEnteringFirm = v;
            return ((PARTY_IDENTERING_FIRM_MIN <= mPartyIDEnteringFirm && mPartyIDEnteringFirm <= PARTY_IDENTERING_FIRM_MAX) || mPartyIDEnteringFirm == PARTY_IDENTERING_FIRM_NO_VALUE);
        }

        bool isPartyIDEnteringFirmValid () const
        {
            return (mPartyIDEnteringFirm != PARTY_IDENTERING_FIRM_NO_VALUE);
        }

        void resetPartyIDEnteringFirm ()
        {
            mPartyIDEnteringFirm = PARTY_IDENTERING_FIRM_NO_VALUE;
        }

        uint8_t getMassActionReason () const
        {
            return mMassActionReason;
        }

        bool setMassActionReason (uint8_t v)
        {
            mMassActionReason = v;
            return ((MASS_ACTION_REASON_MIN <= mMassActionReason && mMassActionReason <= MASS_ACTION_REASON_MAX) || mMassActionReason == MASS_ACTION_REASON_NO_VALUE);
        }

        bool isMassActionReasonValid () const
        {
            return (mMassActionReason != MASS_ACTION_REASON_NO_VALUE);
        }

        void resetMassActionReason ()
        {
            mMassActionReason = MASS_ACTION_REASON_NO_VALUE;
        }

        int8_t getExecInst () const
        {
            return mExecInst;
        }

        bool setExecInst (int8_t v)
        {
            mExecInst = v;
            return ((EXEC_INST_MIN <= mExecInst && mExecInst <= EXEC_INST_MAX) || mExecInst == EXEC_INST_NO_VALUE);
        }

        bool isExecInstValid () const
        {
            return (mExecInst != EXEC_INST_NO_VALUE);
        }

        void resetExecInst ()
        {
            mExecInst = EXEC_INST_NO_VALUE;
        }

        int8_t getSide () const
        {
            return mSide;
        }

        bool setSide (int8_t v)
        {
            mSide = v;
            return ((SIDE_MIN <= mSide && mSide <= SIDE_MAX) || mSide == SIDE_NO_VALUE);
        }

        bool isSideValid () const
        {
            return (mSide != SIDE_NO_VALUE);
        }

        void resetSide ()
        {
            mSide = SIDE_NO_VALUE;
        }

        string getPad6 () const
        {
            return string (mPad6, PAD6_MAX_LENGTH);
        }

        bool setPad6 (const string& v)
        {
            memset (mPad6, '\0', sizeof (mPad6));
            size_t size = min ((size_t) v.size (), (size_t) PAD6_MAX_LENGTH);
            strncpy (mPad6, v.c_str (), size);
            return (v.size () <= PAD6_MAX_LENGTH);
        }

        bool isPad6Valid () const
        {
            return (memcmp (mPad6, PAD6_NO_VALUE, sizeof (mPad6)) != 0);
        }

        void resetPad6 ()
        {
            memcpy (mPad6, PAD6_NO_VALUE, sizeof (mPad6));
        }

        const vector<xetraNotAffectedOrdersGrpCompPacket>& getNotAffectedOrdersGrp () const
        {
            return mNotAffectedOrdersGrp;
        }

        bool setNotAffectedOrdersGrp (const vector<xetraNotAffectedOrdersGrpCompPacket>& v)
        {
            mNotAffectedOrdersGrp = v;
            mNoNotAffectedOrders = v.size ();
            return (NOT_AFFECTED_ORDERS_GRP_MIN <= v.size () && v.size () <= NOT_AFFECTED_ORDERS_GRP_MAX);
        }

        const vector<xetraAffectedOrdGrpCompPacket>& getAffectedOrdGrp () const
        {
            return mAffectedOrdGrp;
        }

        bool setAffectedOrdGrp (const vector<xetraAffectedOrdGrpCompPacket>& v)
        {
            mAffectedOrdGrp = v;
            mNoAffectedOrders = v.size ();
            return (AFFECTED_ORD_GRP_MIN <= v.size () && v.size () <= AFFECTED_ORD_GRP_MAX);
        }

        const vector<xetraAffectedOrderRequestsGrpCompPacket>& getAffectedOrderRequestsGrp () const
        {
            return mAffectedOrderRequestsGrp;
        }

        bool setAffectedOrderRequestsGrp (const vector<xetraAffectedOrderRequestsGrpCompPacket>& v)
        {
            mAffectedOrderRequestsGrp = v;
            mNoAffectedOrderRequests = v.size ();
            return (AFFECTED_ORDER_REQUESTS_GRP_MIN <= v.size () && v.size () <= AFFECTED_ORDER_REQUESTS_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mRBCHeaderME.getRawSize()
                + sizeof (mMassActionReportID)
                + sizeof (mSecurityID)
                + sizeof (mPrice)
                + sizeof (mMarketSegmentID)
                + sizeof (mTargetPartyIDSessionID)
                + sizeof (mTargetPartyIDExecutingTrader)
                + sizeof (mPartyIDEnteringTrader)
                + sizeof (mNoNotAffectedOrders)
                + sizeof (mNoAffectedOrders)
                + sizeof (mNoAffectedOrderRequests)
                + sizeof (mPartyIDEnteringFirm)
                + sizeof (mMassActionReason)
                + sizeof (mExecInst)
                + sizeof (mSide)
                + sizeof (mPad6)
                + eti::getRawSize (mNotAffectedOrdersGrp)
                + eti::getRawSize (mAffectedOrdGrp)
                + eti::getRawSize (mAffectedOrderRequestsGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoNotAffectedOrders = mNotAffectedOrdersGrp.size ();
            mNoAffectedOrders = mAffectedOrdGrp.size ();
            mNoAffectedOrderRequests = mAffectedOrderRequestsGrp.size ();
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeaderME.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMassActionReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTargetPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mTargetPartyIDExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoNotAffectedOrders, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoAffectedOrders, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoAffectedOrderRequests, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPartyIDEnteringFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMassActionReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mExecInst, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mNotAffectedOrdersGrp.size (); i++)
            {
                state = mNotAffectedOrdersGrp[i].serialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            for (size_t i = 0; i < mAffectedOrdGrp.size (); i++)
            {
                state = mAffectedOrdGrp[i].serialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            for (size_t i = 0; i < mAffectedOrderRequestsGrp.size (); i++)
            {
                state = mAffectedOrderRequestsGrp[i].serialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = mMessageHeaderOut.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRBCHeaderME.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMassActionReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSecurityID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPrice, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMarketSegmentID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTargetPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mTargetPartyIDExecutingTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDEnteringTrader, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoNotAffectedOrders, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoAffectedOrders, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoAffectedOrderRequests, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPartyIDEnteringFirm, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMassActionReason, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mExecInst, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mSide, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad6, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mNotAffectedOrdersGrp.resize (mNoNotAffectedOrders);
            for (vector<xetraNotAffectedOrdersGrpCompPacket>::iterator it = mNotAffectedOrdersGrp.begin (); it != mNotAffectedOrdersGrp.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            mAffectedOrdGrp.resize (mNoAffectedOrders);
            for (vector<xetraAffectedOrdGrpCompPacket>::iterator it = mAffectedOrdGrp.begin (); it != mAffectedOrdGrp.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            mAffectedOrderRequestsGrp.resize (mNoAffectedOrderRequests);
            for (vector<xetraAffectedOrderRequestsGrpCompPacket>::iterator it = mAffectedOrderRequestsGrp.begin (); it != mAffectedOrderRequestsGrp.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            mMessageHeaderOut.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "DeleteAllOrderBroadcast::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[RBCHeaderME=" << mRBCHeaderME.toString () << "],"
                << "[MassActionReportID=" << getMassActionReportID () << "],"
                << "[SecurityID=" << getSecurityID () << "],"
                << "[Price=" << getPrice () << "],"
                << "[MarketSegmentID=" << getMarketSegmentID () << "],"
                << "[TargetPartyIDSessionID=" << getTargetPartyIDSessionID () << "],"
                << "[TargetPartyIDExecutingTrader=" << getTargetPartyIDExecutingTrader () << "],"
                << "[PartyIDEnteringTrader=" << getPartyIDEnteringTrader () << "],"
                << "[NoNotAffectedOrders=" << getNoNotAffectedOrders () << "],"
                << "[NoAffectedOrders=" << getNoAffectedOrders () << "],"
                << "[NoAffectedOrderRequests=" << getNoAffectedOrderRequests () << "],"
                << "[PartyIDEnteringFirm=" << getPartyIDEnteringFirm () << "],"
                << "[MassActionReason=" << getMassActionReason () << "],"
                << "[ExecInst=" << getExecInst () << "],"
                << "[Side=" << getSide () << "],"
                << "[Pad6=" << getPad6 () << "],"
                << "[NotAffectedOrdersGrp=" << eti::toString (getNotAffectedOrdersGrp ()) << "],"
                << "[AffectedOrdGrp=" << eti::toString (getAffectedOrdGrp ()) << "],"
                << "[AffectedOrderRequestsGrp=" << eti::toString (getAffectedOrderRequestsGrp ()) << "]";
            return sss.str();
        }
};

const uint64_t xetraDeleteAllOrderBroadcastPacket::MASS_ACTION_REPORT_ID_MIN = 0UL;
const uint64_t xetraDeleteAllOrderBroadcastPacket::MASS_ACTION_REPORT_ID_MAX = 18446744073709551614UL;
const uint64_t xetraDeleteAllOrderBroadcastPacket::MASS_ACTION_REPORT_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int64_t xetraDeleteAllOrderBroadcastPacket::SECURITY_ID_MIN = -9223372036854775807L;
const int64_t xetraDeleteAllOrderBroadcastPacket::SECURITY_ID_MAX = 9223372036854775807L;
const int64_t xetraDeleteAllOrderBroadcastPacket::SECURITY_ID_NO_VALUE = 0x8000000000000000;
const double xetraDeleteAllOrderBroadcastPacket::PRICE_MIN = -92233720368.54775807;
const double xetraDeleteAllOrderBroadcastPacket::PRICE_MAX = 92233720368.54775807;
const int64_t xetraDeleteAllOrderBroadcastPacket::PRICE_NO_VALUE = 0x8000000000000000;
const int32_t xetraDeleteAllOrderBroadcastPacket::MARKET_SEGMENT_ID_MIN = -2147483647;
const int32_t xetraDeleteAllOrderBroadcastPacket::MARKET_SEGMENT_ID_MAX = 2147483647;
const int32_t xetraDeleteAllOrderBroadcastPacket::MARKET_SEGMENT_ID_NO_VALUE = 0x80000000;
const uint32_t xetraDeleteAllOrderBroadcastPacket::TARGET_PARTY_IDSESSION_ID_MIN = 0;
const uint32_t xetraDeleteAllOrderBroadcastPacket::TARGET_PARTY_IDSESSION_ID_MAX = 4294967294;
const uint32_t xetraDeleteAllOrderBroadcastPacket::TARGET_PARTY_IDSESSION_ID_NO_VALUE = 0xFFFFFFFF;
const int32_t xetraDeleteAllOrderBroadcastPacket::TARGET_PARTY_IDEXECUTING_TRADER_MIN = 0;
const int32_t xetraDeleteAllOrderBroadcastPacket::TARGET_PARTY_IDEXECUTING_TRADER_MAX = 2147483647;
const int32_t xetraDeleteAllOrderBroadcastPacket::TARGET_PARTY_IDEXECUTING_TRADER_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraDeleteAllOrderBroadcastPacket::PARTY_IDENTERING_TRADER_MIN = 0;
const uint32_t xetraDeleteAllOrderBroadcastPacket::PARTY_IDENTERING_TRADER_MAX = 4294967294;
const uint32_t xetraDeleteAllOrderBroadcastPacket::PARTY_IDENTERING_TRADER_NO_VALUE = 0xFFFFFFFF;
const int16_t xetraDeleteAllOrderBroadcastPacket::NO_NOT_AFFECTED_ORDERS_MIN = 0;
const int16_t xetraDeleteAllOrderBroadcastPacket::NO_NOT_AFFECTED_ORDERS_MAX = 500;
const int16_t xetraDeleteAllOrderBroadcastPacket::NO_NOT_AFFECTED_ORDERS_NO_VALUE = 0xFFFF;
const int16_t xetraDeleteAllOrderBroadcastPacket::NO_AFFECTED_ORDERS_MIN = 0;
const int16_t xetraDeleteAllOrderBroadcastPacket::NO_AFFECTED_ORDERS_MAX = 500;
const int16_t xetraDeleteAllOrderBroadcastPacket::NO_AFFECTED_ORDERS_NO_VALUE = 0xFFFF;
const int16_t xetraDeleteAllOrderBroadcastPacket::NO_AFFECTED_ORDER_REQUESTS_MIN = 0;
const int16_t xetraDeleteAllOrderBroadcastPacket::NO_AFFECTED_ORDER_REQUESTS_MAX = 500;
const int16_t xetraDeleteAllOrderBroadcastPacket::NO_AFFECTED_ORDER_REQUESTS_NO_VALUE = 0xFFFF;
const int8_t xetraDeleteAllOrderBroadcastPacket::PARTY_IDENTERING_FIRM_MIN = 1;
const int8_t xetraDeleteAllOrderBroadcastPacket::PARTY_IDENTERING_FIRM_MAX = 3;
const int8_t xetraDeleteAllOrderBroadcastPacket::PARTY_IDENTERING_FIRM_NO_VALUE = 0xFF;
const uint8_t xetraDeleteAllOrderBroadcastPacket::MASS_ACTION_REASON_MIN = 0;
const uint8_t xetraDeleteAllOrderBroadcastPacket::MASS_ACTION_REASON_MAX = 200;
const uint8_t xetraDeleteAllOrderBroadcastPacket::MASS_ACTION_REASON_NO_VALUE = 0xFF;
const int8_t xetraDeleteAllOrderBroadcastPacket::EXEC_INST_MIN = 1;
const int8_t xetraDeleteAllOrderBroadcastPacket::EXEC_INST_MAX = 6;
const int8_t xetraDeleteAllOrderBroadcastPacket::EXEC_INST_NO_VALUE = 0xFF;
const int8_t xetraDeleteAllOrderBroadcastPacket::SIDE_MIN = 1;
const int8_t xetraDeleteAllOrderBroadcastPacket::SIDE_MAX = 2;
const int8_t xetraDeleteAllOrderBroadcastPacket::SIDE_NO_VALUE = 0xFF;
const char xetraDeleteAllOrderBroadcastPacket::PAD6_NO_VALUE[6] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraDeleteAllOrderBroadcastPacket::PAD6_MAX_LENGTH = 6;
const size_t xetraDeleteAllOrderBroadcastPacket::NOT_AFFECTED_ORDERS_GRP_MIN = 0;
const size_t xetraDeleteAllOrderBroadcastPacket::NOT_AFFECTED_ORDERS_GRP_MAX = 500;
const size_t xetraDeleteAllOrderBroadcastPacket::AFFECTED_ORD_GRP_MIN = 0;
const size_t xetraDeleteAllOrderBroadcastPacket::AFFECTED_ORD_GRP_MAX = 500;
const size_t xetraDeleteAllOrderBroadcastPacket::AFFECTED_ORDER_REQUESTS_GRP_MIN = 0;
const size_t xetraDeleteAllOrderBroadcastPacket::AFFECTED_ORDER_REQUESTS_GRP_MAX = 500;


} // namespace neueda

#endif // XETRA_DELETEALLORDERBROADCAST_PACKET_H
