/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef XETRA_DELETEALLORDERRESPONSE_PACKET_H
#define XETRA_DELETEALLORDERRESPONSE_PACKET_H

#include <string>
#include <vector>
#include <sstream>
#include <cstddef>
#include <stdint.h>
#include "xetraPackets.h"
#include "xetraPacketUtils.h"

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
        static const char PAD4_NO_VALUE[4];
        static const size_t PAD4_MAX_LENGTH;
        static const size_t NOT_AFFECTED_ORDERS_GRP_MIN;
        static const size_t NOT_AFFECTED_ORDERS_GRP_MAX;
        static const size_t AFFECTED_ORD_GRP_MIN;
        static const size_t AFFECTED_ORD_GRP_MAX;

        // fields (use with care)
        xetraMessageHeaderOutCompPacket mMessageHeaderOut;
        xetraResponseHeaderMECompPacket mResponseHeaderME;
        uint64_t mMassActionReportID;
        int16_t mNoNotAffectedOrders;
        int16_t mNoAffectedOrders;
        char mPad4[4];
        vector<xetraNotAffectedOrdersGrpCompPacket> mNotAffectedOrdersGrp;
        vector<xetraAffectedOrdGrpCompPacket> mAffectedOrdGrp;

        // constructor
        xetraDeleteAllOrderResponsePacket ()
        {
            mMessageHeaderOut.mTemplateID = 10121;
            mMassActionReportID = MASS_ACTION_REPORT_ID_NO_VALUE;
            mNoNotAffectedOrders = NO_NOT_AFFECTED_ORDERS_NO_VALUE;
            mNoAffectedOrders = NO_AFFECTED_ORDERS_NO_VALUE;
            memcpy(mPad4, PAD4_NO_VALUE, sizeof (mPad4));
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

        string getPad4 () const
        {
            return string (mPad4, PAD4_MAX_LENGTH);
        }

        bool setPad4 (const string& v)
        {
            size_t size = min ((size_t) v.size (), (size_t) PAD4_MAX_LENGTH);
            for (size_t i = 0; i < size; i++)
                mPad4[i] = v[i];
            memset (&mPad4[size], '\0', PAD4_MAX_LENGTH-size);
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


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderOut.getRawSize()
                + mResponseHeaderME.getRawSize()
                + sizeof (mMassActionReportID)
                + sizeof (mNoNotAffectedOrders)
                + sizeof (mNoAffectedOrders)
                + sizeof (mPad4)
                + xetra::getRawSize (mNotAffectedOrdersGrp)
                + xetra::getRawSize (mAffectedOrdGrp);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mNoNotAffectedOrders = mNotAffectedOrdersGrp.size ();
            mNoAffectedOrders = mAffectedOrdGrp.size ();
            mMessageHeaderOut.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderOut.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mResponseHeaderME.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mMassActionReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mNoNotAffectedOrders, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mNoAffectedOrders, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad4, buf, len, used);
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
            state = xetra::deserialize (mMassActionReportID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mNoNotAffectedOrders, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mNoAffectedOrders, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad4, buf, len, used);
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
                << "[Pad4=" << getPad4 () << "],"
                << "[NotAffectedOrdersGrp=" << xetra::toString (getNotAffectedOrdersGrp ()) << "],"
                << "[AffectedOrdGrp=" << xetra::toString (getAffectedOrdGrp ()) << "]";
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
const char xetraDeleteAllOrderResponsePacket::PAD4_NO_VALUE[4] = {0x00, 0x00, 0x00, 0x00};
const size_t xetraDeleteAllOrderResponsePacket::PAD4_MAX_LENGTH = 4;
const size_t xetraDeleteAllOrderResponsePacket::NOT_AFFECTED_ORDERS_GRP_MIN = 0;
const size_t xetraDeleteAllOrderResponsePacket::NOT_AFFECTED_ORDERS_GRP_MAX = 500;
const size_t xetraDeleteAllOrderResponsePacket::AFFECTED_ORD_GRP_MIN = 0;
const size_t xetraDeleteAllOrderResponsePacket::AFFECTED_ORD_GRP_MAX = 500;


} // namespace neueda

#endif // XETRA_DELETEALLORDERRESPONSE_PACKET_H
