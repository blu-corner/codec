/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 21/05/2019
 */
#ifndef XETRA_DELETEALLORDERRESPONSE_PACKET_H
#define XETRA_DELETEALLORDERRESPONSE_PACKET_H

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

class xetraDeleteAllOrderResponsePacket
{
    public:
        // no value constants
        static const uint64_t MASS_ACTION_REPORT_ID_MIN;
        static const uint64_t MASS_ACTION_REPORT_ID_MAX;
        static const uint64_t MASS_ACTION_REPORT_ID_NO_VALUE;
        static const int16_t NO_NOT_AFFECTED_ORDERS_MIN;
        static const int16_t NO_NOT_AFFECTED_ORDERS_MAX;
        static const int16_t NO_NOT_AFFECTED_ORDERS_NO_VALUE;
        static const int16_t NO_AFFECTED_ORDERS_MIN;
        static const int16_t NO_AFFECTED_ORDERS_MAX;
        static const int16_t NO_AFFECTED_ORDERS_NO_VALUE;
        static const int16_t NO_AFFECTED_ORDER_REQUESTS_MIN;
        static const int16_t NO_AFFECTED_ORDER_REQUESTS_MAX;
        static const int16_t NO_AFFECTED_ORDER_REQUESTS_NO_VALUE;
        static const char PAD2_NO_VALUE[2];
        static const size_t PAD2_MAX_LENGTH;
        static const size_t NOT_AFFECTED_ORDERS_GRP_MIN;
        static const size_t NOT_AFFECTED_ORDERS_GRP_MAX;
        static const size_t AFFECTED_ORD_GRP_MIN;
        static const size_t AFFECTED_ORD_GRP_MAX;
        static const size_t AFFECTED_ORDER_REQUESTS_GRP_MIN;
        static const size_t AFFECTED_ORDER_REQUESTS_GRP_MAX;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraResponseHeaderMECompPacket mResponseHeaderME;
        uint64_t mMassActionReportID;
        int16_t mNoNotAffectedOrders;
        int16_t mNoAffectedOrders;
        int16_t mNoAffectedOrderRequests;
        char mPad2[2];
        vector<xetraNotAffectedOrdersGrpCompPacket> mNotAffectedOrdersGrp;
        vector<xetraAffectedOrdGrpCompPacket> mAffectedOrdGrp;
        vector<xetraAffectedOrderRequestsGrpCompPacket> mAffectedOrderRequestsGrp;

        // constructor
        xetraDeleteAllOrderResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10121;
            mMassActionReportID = MASS_ACTION_REPORT_ID_NO_VALUE;
            mNoNotAffectedOrders = NO_NOT_AFFECTED_ORDERS_NO_VALUE;
            mNoAffectedOrders = NO_AFFECTED_ORDERS_NO_VALUE;
            mNoAffectedOrderRequests = NO_AFFECTED_ORDER_REQUESTS_NO_VALUE;
            memcpy(mPad2, PAD2_NO_VALUE, sizeof (mPad2));
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

        const xetraResponseHeaderMECompPacket& getResponseHeaderME () const
        {
            return mResponseHeaderME;
        }

        bool setResponseHeaderME (const xetraResponseHeaderMECompPacket& v)
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

        string getPad2 () const
        {
            return string (mPad2, PAD2_MAX_LENGTH);
        }

        bool setPad2 (const string& v)
        {
            memset (mPad2, '\0', sizeof (mPad2));
            size_t size = min ((size_t) v.size (), (size_t) PAD2_MAX_LENGTH);
            strncpy (mPad2, v.c_str (), size);
            return (v.size () <= PAD2_MAX_LENGTH);
        }

        bool isPad2Valid () const
        {
            return (memcmp (mPad2, PAD2_NO_VALUE, sizeof (mPad2)) != 0);
        }

        void resetPad2 ()
        {
            memcpy (mPad2, PAD2_NO_VALUE, sizeof (mPad2));
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
                + mResponseHeaderME.getRawSize()
                + sizeof (mMassActionReportID)
                + sizeof (mNoNotAffectedOrders)
                + sizeof (mNoAffectedOrders)
                + sizeof (mNoAffectedOrderRequests)
                + sizeof (mPad2)
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
            state = mResponseHeaderME.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mMassActionReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoNotAffectedOrders, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoAffectedOrders, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mNoAffectedOrderRequests, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::serialize (mPad2, buf, len, used);
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
            state = mResponseHeaderME.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mMassActionReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoNotAffectedOrders, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoAffectedOrders, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mNoAffectedOrderRequests, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = eti::deserialize (mPad2, buf, len, used);
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
            sss << "DeleteAllOrderResponse::"
                << "[MessageHeaderOut=" << mMessageHeaderOut.toString () << "],"
                << "[ResponseHeaderME=" << mResponseHeaderME.toString () << "],"
                << "[MassActionReportID=" << getMassActionReportID () << "],"
                << "[NoNotAffectedOrders=" << getNoNotAffectedOrders () << "],"
                << "[NoAffectedOrders=" << getNoAffectedOrders () << "],"
                << "[NoAffectedOrderRequests=" << getNoAffectedOrderRequests () << "],"
                << "[Pad2=" << getPad2 () << "],"
                << "[NotAffectedOrdersGrp=" << eti::toString (getNotAffectedOrdersGrp ()) << "],"
                << "[AffectedOrdGrp=" << eti::toString (getAffectedOrdGrp ()) << "],"
                << "[AffectedOrderRequestsGrp=" << eti::toString (getAffectedOrderRequestsGrp ()) << "]";
            return sss.str();
        }
};

const uint64_t xetraDeleteAllOrderResponsePacket::MASS_ACTION_REPORT_ID_MIN = 0UL;
const uint64_t xetraDeleteAllOrderResponsePacket::MASS_ACTION_REPORT_ID_MAX = 18446744073709551614UL;
const uint64_t xetraDeleteAllOrderResponsePacket::MASS_ACTION_REPORT_ID_NO_VALUE = 0xFFFFFFFFFFFFFFFF;
const int16_t xetraDeleteAllOrderResponsePacket::NO_NOT_AFFECTED_ORDERS_MIN = 0;
const int16_t xetraDeleteAllOrderResponsePacket::NO_NOT_AFFECTED_ORDERS_MAX = 500;
const int16_t xetraDeleteAllOrderResponsePacket::NO_NOT_AFFECTED_ORDERS_NO_VALUE = 0xFFFF;
const int16_t xetraDeleteAllOrderResponsePacket::NO_AFFECTED_ORDERS_MIN = 0;
const int16_t xetraDeleteAllOrderResponsePacket::NO_AFFECTED_ORDERS_MAX = 500;
const int16_t xetraDeleteAllOrderResponsePacket::NO_AFFECTED_ORDERS_NO_VALUE = 0xFFFF;
const int16_t xetraDeleteAllOrderResponsePacket::NO_AFFECTED_ORDER_REQUESTS_MIN = 0;
const int16_t xetraDeleteAllOrderResponsePacket::NO_AFFECTED_ORDER_REQUESTS_MAX = 500;
const int16_t xetraDeleteAllOrderResponsePacket::NO_AFFECTED_ORDER_REQUESTS_NO_VALUE = 0xFFFF;
const char xetraDeleteAllOrderResponsePacket::PAD2_NO_VALUE[2] = {0x00, 0x00};
const size_t xetraDeleteAllOrderResponsePacket::PAD2_MAX_LENGTH = 2;
const size_t xetraDeleteAllOrderResponsePacket::NOT_AFFECTED_ORDERS_GRP_MIN = 0;
const size_t xetraDeleteAllOrderResponsePacket::NOT_AFFECTED_ORDERS_GRP_MAX = 500;
const size_t xetraDeleteAllOrderResponsePacket::AFFECTED_ORD_GRP_MIN = 0;
const size_t xetraDeleteAllOrderResponsePacket::AFFECTED_ORD_GRP_MAX = 500;
const size_t xetraDeleteAllOrderResponsePacket::AFFECTED_ORDER_REQUESTS_GRP_MIN = 0;
const size_t xetraDeleteAllOrderResponsePacket::AFFECTED_ORDER_REQUESTS_GRP_MAX = 500;


} // namespace neueda

#endif // XETRA_DELETEALLORDERRESPONSE_PACKET_H
