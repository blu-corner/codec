/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 24/04/2019
 */
#ifndef EUREX_DELETEALLORDERRESPONSE_PACKET_H
#define EUREX_DELETEALLORDERRESPONSE_PACKET_H

#include <string>
#include <vector>
#include <sstream>
#include <cstddef>
#include <stdint.h>
#include "eurexPackets.h"
#include "eurexPacketUtils.h"

namespace neueda
{

using namespace std;

class eurexDeleteAllOrderResponsePacket
{
    public:
        // no value constants
        static const uint64_t MASS_ACTION_REPORT_ID_MIN;
        static const uint64_t MASS_ACTION_REPORT_ID_MAX;
        static const uint64_t MASS_ACTION_REPORT_ID_NO_VALUE;
        static const int16_t NO_NOT_AFFECTED_ORDERS_MIN;
        static const int16_t NO_NOT_AFFECTED_ORDERS_MAX;
        static const int16_t NO_NOT_AFFECTED_ORDERS_NO_VALUE;
        static const int16_t NO_AFFECTED_ORDER_REQUESTS_MIN;
        static const int16_t NO_AFFECTED_ORDER_REQUESTS_MAX;
        static const int16_t NO_AFFECTED_ORDER_REQUESTS_NO_VALUE;
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;
        static const size_t NOT_AFFECTED_ORDERS_GRP_MIN;
        static const size_t NOT_AFFECTED_ORDERS_GRP_MAX;
        static const size_t AFFECTED_ORDER_REQUESTS_GRP_MIN;
        static const size_t AFFECTED_ORDER_REQUESTS_GRP_MAX;

        // fields (use with care)
        eurexMessageHeaderOutCompPacket mMessageHeaderOut;
        eurexResponseHeaderMECompPacket mResponseHeaderME;
        uint64_t mMassActionReportID;
        int16_t mNoNotAffectedOrders;
        int16_t mNoAffectedOrderRequests;
        char mPad4[4];
        vector<eurexNotAffectedOrdersGrpCompPacket> mNotAffectedOrdersGrp;
        vector<eurexAffectedOrderRequestsGrpCompPacket> mAffectedOrderRequestsGrp;

        // constructor
        eurexDeleteAllOrderResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10121;
            mMassActionReportID = MASS_ACTION_REPORT_ID_NO_VALUE;
            mNoNotAffectedOrders = NO_NOT_AFFECTED_ORDERS_NO_VALUE;
            mNoAffectedOrderRequests = NO_AFFECTED_ORDER_REQUESTS_NO_VALUE;
            memcpy(mPad4, PAD4_NO_VALUE, sizeof (mPad4));
        }

        // getters & setters
        const eurexMessageHeaderOutCompPacket& getMessageHeaderOut () const
        {
            return mMessageHeaderOut;
        }

        bool setMessageHeaderOut (const eurexMessageHeaderOutCompPacket& v)
        {
            mMessageHeaderOut = v;
            return true;
        }

        const eurexResponseHeaderMECompPacket& getResponseHeaderME () const
        {
            return mResponseHeaderME;
        }

        bool setResponseHeaderME (const eurexResponseHeaderMECompPacket& v)
        {
            mResponseHeaderME = v;
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

        string getPad4 () const
        {
            return string (mPad4, PAD4_MAX_LENGTH);
        }

        bool setPad4 (const string& v)
        {
            memset (mPad4, '\0', sizeof (mPad4));
            size_t size = min ((size_t) v.size (), (size_t) PAD4_MAX_LENGTH);
            strncpy (mPad4, v.c_str (), size);
            return (v.size () <= PAD4_MAX_LENGTH);
        }

        bool isPad4Valid () const
        {
            return (memcmp (mPad4, PAD4_NO_VALUE, sizeof (mPad4)) != 0);
        }

        void resetPad4 ()
        {
            memcpy (mPad4, PAD4_NO_VALUE, sizeof (mPad4));
        }

        const vector<eurexNotAffectedOrdersGrpCompPacket>& getNotAffectedOrdersGrp () const
        {
            return mNotAffectedOrdersGrp;
        }

        bool setNotAffectedOrdersGrp (const vector<eurexNotAffectedOrdersGrpCompPacket>& v)
        {
            mNotAffectedOrdersGrp = v;
            mNoNotAffectedOrders = v.size ();
            return (NOT_AFFECTED_ORDERS_GRP_MIN <= v.size () && v.size () <= NOT_AFFECTED_ORDERS_GRP_MAX);
        }

        const vector<eurexAffectedOrderRequestsGrpCompPacket>& getAffectedOrderRequestsGrp () const
        {
            return mAffectedOrderRequestsGrp;
        }

        bool setAffectedOrderRequestsGrp (const vector<eurexAffectedOrderRequestsGrpCompPacket>& v)
        {
            mAffectedOrderRequestsGrp = v;
            mNoAffectedOrderRequests = v.size ();
            return (AFFECTED_ORDER_REQUESTS_GRP_MIN <= v.size () && v.size () <= AFFECTED_ORDER_REQUESTS_GRP_MAX);
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mResponseHeaderME.getRawSize()
                + sizeof (mMassActionReportID)
                + sizeof (mNoNotAffectedOrders)
                + sizeof (mNoAffectedOrderRequests)
                + sizeof (mPad4)
                + eurex::getRawSize (mNotAffectedOrdersGrp)
                + eurex::getRawSize (mAffectedOrderRequestsGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoNotAffectedOrders = mNotAffectedOrdersGrp.size ();
            mNoAffectedOrderRequests = mAffectedOrderRequestsGrp.size ();
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mResponseHeaderME.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mMassActionReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mNoNotAffectedOrders, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mNoAffectedOrderRequests, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::serialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            for (size_t i = 0; i < mNotAffectedOrdersGrp.size (); i++)
            {
                state = mNotAffectedOrdersGrp[i].serialize (buf, len, used);
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
            state = mResponseHeaderME.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mMassActionReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mNoNotAffectedOrders, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mNoAffectedOrderRequests, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eurex::deserialize (mPad4, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mNotAffectedOrdersGrp.resize (mNoNotAffectedOrders);
            for (vector<eurexNotAffectedOrdersGrpCompPacket>::iterator it = mNotAffectedOrdersGrp.begin (); it != mNotAffectedOrdersGrp.end (); ++it)
            {
                state = it->deserialize (buf, len, used);
                if (state != GW_CODEC_SUCCESS) return state;
            }
            mAffectedOrderRequestsGrp.resize (mNoAffectedOrderRequests);
            for (vector<eurexAffectedOrderRequestsGrpCompPacket>::iterator it = mAffectedOrderRequestsGrp.begin (); it != mAffectedOrderRequestsGrp.end (); ++it)
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
            sss << "DeleteAllOrderResponse::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[ResponseHeaderME=" << mResponseHeaderME.toString () << "],"
                << "[MassActionReportID=" << getMassActionReportID () << "],"
                << "[NoNotAffectedOrders=" << getNoNotAffectedOrders () << "],"
                << "[NoAffectedOrderRequests=" << getNoAffectedOrderRequests () << "],"
                << "[Pad4=" << getPad4 () << "],"
                << "[NotAffectedOrdersGrp=" << eurex::toString (getNotAffectedOrdersGrp ()) << "],"
                << "[AffectedOrderRequestsGrp=" << eurex::toString (getAffectedOrderRequestsGrp ()) << "]";
            return sss.str();
        }
};

const uint64_t eurexDeleteAllOrderResponsePacket::MASS_ACTION_REPORT_ID_MIN = 0UL;
const uint64_t eurexDeleteAllOrderResponsePacket::MASS_ACTION_REPORT_ID_MAX = 18446744073709551614UL;
const uint64_t eurexDeleteAllOrderResponsePacket::MASS_ACTION_REPORT_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int16_t eurexDeleteAllOrderResponsePacket::NO_NOT_AFFECTED_ORDERS_MIN = 0;
const int16_t eurexDeleteAllOrderResponsePacket::NO_NOT_AFFECTED_ORDERS_MAX = 500;
const int16_t eurexDeleteAllOrderResponsePacket::NO_NOT_AFFECTED_ORDERS_NO_VALUE = 0xFFFF;
const int16_t eurexDeleteAllOrderResponsePacket::NO_AFFECTED_ORDER_REQUESTS_MIN = 0;
const int16_t eurexDeleteAllOrderResponsePacket::NO_AFFECTED_ORDER_REQUESTS_MAX = 500;
const int16_t eurexDeleteAllOrderResponsePacket::NO_AFFECTED_ORDER_REQUESTS_NO_VALUE = 0xFFFF;
const char eurexDeleteAllOrderResponsePacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t eurexDeleteAllOrderResponsePacket::PAD4_MAX_LENGTH = 4;
const size_t eurexDeleteAllOrderResponsePacket::NOT_AFFECTED_ORDERS_GRP_MIN = 0;
const size_t eurexDeleteAllOrderResponsePacket::NOT_AFFECTED_ORDERS_GRP_MAX = 500;
const size_t eurexDeleteAllOrderResponsePacket::AFFECTED_ORDER_REQUESTS_GRP_MIN = 0;
const size_t eurexDeleteAllOrderResponsePacket::AFFECTED_ORDER_REQUESTS_GRP_MAX = 500;


} // namespace neueda

#endif // EUREX_DELETEALLORDERRESPONSE_PACKET_H
