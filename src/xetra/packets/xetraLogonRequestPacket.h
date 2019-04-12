/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/04/2019
 */
#ifndef XETRA_LOGONREQUEST_PACKET_H
#define XETRA_LOGONREQUEST_PACKET_H

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

class xetraLogonRequestPacket
{
    public:
        // no value constants
        static const uint32_t HEART_BT_INT_MIN;
        static const uint32_t HEART_BT_INT_MAX;
        static const uint32_t HEART_BT_INT_NO_VALUE;
        static const uint32_t PARTY_IDSESSION_ID_MIN;
        static const uint32_t PARTY_IDSESSION_ID_MAX;
        static const uint32_t PARTY_IDSESSION_ID_NO_VALUE;
        static const char DEFAULT_CSTM_APPL_VER_ID_NO_VALUE[30];
        static const size_t DEFAULT_CSTM_APPL_VER_ID_MAX_LENGTH;
        static const char PASSWORD_NO_VALUE[32];
        static const size_t PASSWORD_MAX_LENGTH;
        static const char APPL_USAGE_ORDERS_NO_VALUE[1];
        static const size_t APPL_USAGE_ORDERS_MAX_LENGTH;
        static const char APPL_USAGE_QUOTES_NO_VALUE[1];
        static const size_t APPL_USAGE_QUOTES_MAX_LENGTH;
        static const char ORDER_ROUTING_INDICATOR_NO_VALUE[1];
        static const size_t ORDER_ROUTING_INDICATOR_MAX_LENGTH;
        static const char FIXENGINE_NAME_NO_VALUE[30];
        static const size_t FIXENGINE_NAME_MAX_LENGTH;
        static const char FIXENGINE_VERSION_NO_VALUE[30];
        static const size_t FIXENGINE_VERSION_MAX_LENGTH;
        static const char FIXENGINE_VENDOR_NO_VALUE[30];
        static const size_t FIXENGINE_VENDOR_MAX_LENGTH;
        static const char APPLICATION_SYSTEM_NAME_NO_VALUE[30];
        static const size_t APPLICATION_SYSTEM_NAME_MAX_LENGTH;
        static const char APPLICATION_SYSTEM_VERSION_NO_VALUE[30];
        static const size_t APPLICATION_SYSTEM_VERSION_MAX_LENGTH;
        static const char APPLICATION_SYSTEM_VENDOR_NO_VALUE[30];
        static const size_t APPLICATION_SYSTEM_VENDOR_MAX_LENGTH;
        static const char PAD3_NO_VALUE[3];
        static const size_t PAD3_MAX_LENGTH;

        // fields (use with care)
        xetraMessageHeaderInCompPacket mMessageHeaderIn;
        xetraRequestHeaderCompPacket mRequestHeader;
        uint32_t mHeartBtInt;
        uint32_t mPartyIDSessionID;
        char mDefaultCstmApplVerID[30];
        char mPassword[32];
        char mApplUsageOrders[1];
        char mApplUsageQuotes[1];
        char mOrderRoutingIndicator[1];
        char mFIXEngineName[30];
        char mFIXEngineVersion[30];
        char mFIXEngineVendor[30];
        char mApplicationSystemName[30];
        char mApplicationSystemVersion[30];
        char mApplicationSystemVendor[30];
        char mPad3[3];

        // constructor
        xetraLogonRequestPacket ()
        {
            mMessageHeaderIn.mTemplateID = 10000;
            mHeartBtInt = HEART_BT_INT_NO_VALUE;
            mPartyIDSessionID = PARTY_IDSESSION_ID_NO_VALUE;
            memcpy(mDefaultCstmApplVerID, DEFAULT_CSTM_APPL_VER_ID_NO_VALUE, sizeof (mDefaultCstmApplVerID));
            memcpy(mPassword, PASSWORD_NO_VALUE, sizeof (mPassword));
            memcpy(mApplUsageOrders, APPL_USAGE_ORDERS_NO_VALUE, sizeof (mApplUsageOrders));
            memcpy(mApplUsageQuotes, APPL_USAGE_QUOTES_NO_VALUE, sizeof (mApplUsageQuotes));
            memcpy(mOrderRoutingIndicator, ORDER_ROUTING_INDICATOR_NO_VALUE, sizeof (mOrderRoutingIndicator));
            memcpy(mFIXEngineName, FIXENGINE_NAME_NO_VALUE, sizeof (mFIXEngineName));
            memcpy(mFIXEngineVersion, FIXENGINE_VERSION_NO_VALUE, sizeof (mFIXEngineVersion));
            memcpy(mFIXEngineVendor, FIXENGINE_VENDOR_NO_VALUE, sizeof (mFIXEngineVendor));
            memcpy(mApplicationSystemName, APPLICATION_SYSTEM_NAME_NO_VALUE, sizeof (mApplicationSystemName));
            memcpy(mApplicationSystemVersion, APPLICATION_SYSTEM_VERSION_NO_VALUE, sizeof (mApplicationSystemVersion));
            memcpy(mApplicationSystemVendor, APPLICATION_SYSTEM_VENDOR_NO_VALUE, sizeof (mApplicationSystemVendor));
            memcpy(mPad3, PAD3_NO_VALUE, sizeof (mPad3));
        }

        // getters & setters
        const xetraMessageHeaderInCompPacket& getMessageHeaderIn () const
        {
            return mMessageHeaderIn;
        }

        bool setMessageHeaderIn (const xetraMessageHeaderInCompPacket& v)
        {
            mMessageHeaderIn = v;
            return true;
        }

        const xetraRequestHeaderCompPacket& getRequestHeader () const
        {
            return mRequestHeader;
        }

        bool setRequestHeader (const xetraRequestHeaderCompPacket& v)
        {
            mRequestHeader = v;
            return true;
        }

        uint32_t getHeartBtInt () const
        {
            return mHeartBtInt;
        }

        bool setHeartBtInt (uint32_t v)
        {
            mHeartBtInt = v;
            return ((HEART_BT_INT_MIN <= mHeartBtInt && mHeartBtInt <= HEART_BT_INT_MAX) || mHeartBtInt == HEART_BT_INT_NO_VALUE);
        }

        bool isHeartBtIntValid () const
        {
            return (mHeartBtInt != HEART_BT_INT_NO_VALUE);
        }

        void resetHeartBtInt ()
        {
            mHeartBtInt = HEART_BT_INT_NO_VALUE;
        }

        uint32_t getPartyIDSessionID () const
        {
            return mPartyIDSessionID;
        }

        bool setPartyIDSessionID (uint32_t v)
        {
            mPartyIDSessionID = v;
            return ((PARTY_IDSESSION_ID_MIN <= mPartyIDSessionID && mPartyIDSessionID <= PARTY_IDSESSION_ID_MAX) || mPartyIDSessionID == PARTY_IDSESSION_ID_NO_VALUE);
        }

        bool isPartyIDSessionIDValid () const
        {
            return (mPartyIDSessionID != PARTY_IDSESSION_ID_NO_VALUE);
        }

        void resetPartyIDSessionID ()
        {
            mPartyIDSessionID = PARTY_IDSESSION_ID_NO_VALUE;
        }

        string getDefaultCstmApplVerID () const
        {
            string result;
            for (size_t i = 0; mDefaultCstmApplVerID[i] && i < DEFAULT_CSTM_APPL_VER_ID_MAX_LENGTH; i++)
                result += (mDefaultCstmApplVerID[i]);
            return result;
        }

        bool setDefaultCstmApplVerID (const string& v)
        {
            memset (mDefaultCstmApplVerID, '\0', sizeof (mDefaultCstmApplVerID));
            size_t size = min ((size_t) v.size (), (size_t) DEFAULT_CSTM_APPL_VER_ID_MAX_LENGTH);
            strncpy (mDefaultCstmApplVerID, v.c_str (), size);
            return (v.size () <= DEFAULT_CSTM_APPL_VER_ID_MAX_LENGTH);
        }

        bool isDefaultCstmApplVerIDValid () const
        {
            return (memcmp (mDefaultCstmApplVerID, DEFAULT_CSTM_APPL_VER_ID_NO_VALUE, sizeof (mDefaultCstmApplVerID)) != 0);
        }

        void resetDefaultCstmApplVerID ()
        {
            memcpy (mDefaultCstmApplVerID, DEFAULT_CSTM_APPL_VER_ID_NO_VALUE, sizeof (mDefaultCstmApplVerID));
        }

        string getPassword () const
        {
            string result;
            for (size_t i = 0; mPassword[i] && i < PASSWORD_MAX_LENGTH; i++)
                result += (mPassword[i]);
            return result;
        }

        bool setPassword (const string& v)
        {
            memset (mPassword, '\0', sizeof (mPassword));
            size_t size = min ((size_t) v.size (), (size_t) PASSWORD_MAX_LENGTH);
            strncpy (mPassword, v.c_str (), size);
            return (v.size () <= PASSWORD_MAX_LENGTH);
        }

        bool isPasswordValid () const
        {
            return (memcmp (mPassword, PASSWORD_NO_VALUE, sizeof (mPassword)) != 0);
        }

        void resetPassword ()
        {
            memcpy (mPassword, PASSWORD_NO_VALUE, sizeof (mPassword));
        }

        string getApplUsageOrders () const
        {
            return string (mApplUsageOrders, APPL_USAGE_ORDERS_MAX_LENGTH);
        }

        bool setApplUsageOrders (const string& v)
        {
            memset (mApplUsageOrders, '\0', sizeof (mApplUsageOrders));
            size_t size = min ((size_t) v.size (), (size_t) APPL_USAGE_ORDERS_MAX_LENGTH);
            strncpy (mApplUsageOrders, v.c_str (), size);
            return (v.size () <= APPL_USAGE_ORDERS_MAX_LENGTH);
        }

        bool isApplUsageOrdersValid () const
        {
            return (memcmp (mApplUsageOrders, APPL_USAGE_ORDERS_NO_VALUE, sizeof (mApplUsageOrders)) != 0);
        }

        void resetApplUsageOrders ()
        {
            memcpy (mApplUsageOrders, APPL_USAGE_ORDERS_NO_VALUE, sizeof (mApplUsageOrders));
        }

        string getApplUsageQuotes () const
        {
            return string (mApplUsageQuotes, APPL_USAGE_QUOTES_MAX_LENGTH);
        }

        bool setApplUsageQuotes (const string& v)
        {
            memset (mApplUsageQuotes, '\0', sizeof (mApplUsageQuotes));
            size_t size = min ((size_t) v.size (), (size_t) APPL_USAGE_QUOTES_MAX_LENGTH);
            strncpy (mApplUsageQuotes, v.c_str (), size);
            return (v.size () <= APPL_USAGE_QUOTES_MAX_LENGTH);
        }

        bool isApplUsageQuotesValid () const
        {
            return (memcmp (mApplUsageQuotes, APPL_USAGE_QUOTES_NO_VALUE, sizeof (mApplUsageQuotes)) != 0);
        }

        void resetApplUsageQuotes ()
        {
            memcpy (mApplUsageQuotes, APPL_USAGE_QUOTES_NO_VALUE, sizeof (mApplUsageQuotes));
        }

        string getOrderRoutingIndicator () const
        {
            return string (mOrderRoutingIndicator, ORDER_ROUTING_INDICATOR_MAX_LENGTH);
        }

        bool setOrderRoutingIndicator (const string& v)
        {
            memset (mOrderRoutingIndicator, '\0', sizeof (mOrderRoutingIndicator));
            size_t size = min ((size_t) v.size (), (size_t) ORDER_ROUTING_INDICATOR_MAX_LENGTH);
            strncpy (mOrderRoutingIndicator, v.c_str (), size);
            return (v.size () <= ORDER_ROUTING_INDICATOR_MAX_LENGTH);
        }

        bool isOrderRoutingIndicatorValid () const
        {
            return (memcmp (mOrderRoutingIndicator, ORDER_ROUTING_INDICATOR_NO_VALUE, sizeof (mOrderRoutingIndicator)) != 0);
        }

        void resetOrderRoutingIndicator ()
        {
            memcpy (mOrderRoutingIndicator, ORDER_ROUTING_INDICATOR_NO_VALUE, sizeof (mOrderRoutingIndicator));
        }

        string getFIXEngineName () const
        {
            string result;
            for (size_t i = 0; mFIXEngineName[i] && i < FIXENGINE_NAME_MAX_LENGTH; i++)
                result += (mFIXEngineName[i]);
            return result;
        }

        bool setFIXEngineName (const string& v)
        {
            memset (mFIXEngineName, '\0', sizeof (mFIXEngineName));
            size_t size = min ((size_t) v.size (), (size_t) FIXENGINE_NAME_MAX_LENGTH);
            strncpy (mFIXEngineName, v.c_str (), size);
            return (v.size () <= FIXENGINE_NAME_MAX_LENGTH);
        }

        bool isFIXEngineNameValid () const
        {
            return (memcmp (mFIXEngineName, FIXENGINE_NAME_NO_VALUE, sizeof (mFIXEngineName)) != 0);
        }

        void resetFIXEngineName ()
        {
            memcpy (mFIXEngineName, FIXENGINE_NAME_NO_VALUE, sizeof (mFIXEngineName));
        }

        string getFIXEngineVersion () const
        {
            string result;
            for (size_t i = 0; mFIXEngineVersion[i] && i < FIXENGINE_VERSION_MAX_LENGTH; i++)
                result += (mFIXEngineVersion[i]);
            return result;
        }

        bool setFIXEngineVersion (const string& v)
        {
            memset (mFIXEngineVersion, '\0', sizeof (mFIXEngineVersion));
            size_t size = min ((size_t) v.size (), (size_t) FIXENGINE_VERSION_MAX_LENGTH);
            strncpy (mFIXEngineVersion, v.c_str (), size);
            return (v.size () <= FIXENGINE_VERSION_MAX_LENGTH);
        }

        bool isFIXEngineVersionValid () const
        {
            return (memcmp (mFIXEngineVersion, FIXENGINE_VERSION_NO_VALUE, sizeof (mFIXEngineVersion)) != 0);
        }

        void resetFIXEngineVersion ()
        {
            memcpy (mFIXEngineVersion, FIXENGINE_VERSION_NO_VALUE, sizeof (mFIXEngineVersion));
        }

        string getFIXEngineVendor () const
        {
            string result;
            for (size_t i = 0; mFIXEngineVendor[i] && i < FIXENGINE_VENDOR_MAX_LENGTH; i++)
                result += (mFIXEngineVendor[i]);
            return result;
        }

        bool setFIXEngineVendor (const string& v)
        {
            memset (mFIXEngineVendor, '\0', sizeof (mFIXEngineVendor));
            size_t size = min ((size_t) v.size (), (size_t) FIXENGINE_VENDOR_MAX_LENGTH);
            strncpy (mFIXEngineVendor, v.c_str (), size);
            return (v.size () <= FIXENGINE_VENDOR_MAX_LENGTH);
        }

        bool isFIXEngineVendorValid () const
        {
            return (memcmp (mFIXEngineVendor, FIXENGINE_VENDOR_NO_VALUE, sizeof (mFIXEngineVendor)) != 0);
        }

        void resetFIXEngineVendor ()
        {
            memcpy (mFIXEngineVendor, FIXENGINE_VENDOR_NO_VALUE, sizeof (mFIXEngineVendor));
        }

        string getApplicationSystemName () const
        {
            string result;
            for (size_t i = 0; mApplicationSystemName[i] && i < APPLICATION_SYSTEM_NAME_MAX_LENGTH; i++)
                result += (mApplicationSystemName[i]);
            return result;
        }

        bool setApplicationSystemName (const string& v)
        {
            memset (mApplicationSystemName, '\0', sizeof (mApplicationSystemName));
            size_t size = min ((size_t) v.size (), (size_t) APPLICATION_SYSTEM_NAME_MAX_LENGTH);
            strncpy (mApplicationSystemName, v.c_str (), size);
            return (v.size () <= APPLICATION_SYSTEM_NAME_MAX_LENGTH);
        }

        bool isApplicationSystemNameValid () const
        {
            return (memcmp (mApplicationSystemName, APPLICATION_SYSTEM_NAME_NO_VALUE, sizeof (mApplicationSystemName)) != 0);
        }

        void resetApplicationSystemName ()
        {
            memcpy (mApplicationSystemName, APPLICATION_SYSTEM_NAME_NO_VALUE, sizeof (mApplicationSystemName));
        }

        string getApplicationSystemVersion () const
        {
            string result;
            for (size_t i = 0; mApplicationSystemVersion[i] && i < APPLICATION_SYSTEM_VERSION_MAX_LENGTH; i++)
                result += (mApplicationSystemVersion[i]);
            return result;
        }

        bool setApplicationSystemVersion (const string& v)
        {
            memset (mApplicationSystemVersion, '\0', sizeof (mApplicationSystemVersion));
            size_t size = min ((size_t) v.size (), (size_t) APPLICATION_SYSTEM_VERSION_MAX_LENGTH);
            strncpy (mApplicationSystemVersion, v.c_str (), size);
            return (v.size () <= APPLICATION_SYSTEM_VERSION_MAX_LENGTH);
        }

        bool isApplicationSystemVersionValid () const
        {
            return (memcmp (mApplicationSystemVersion, APPLICATION_SYSTEM_VERSION_NO_VALUE, sizeof (mApplicationSystemVersion)) != 0);
        }

        void resetApplicationSystemVersion ()
        {
            memcpy (mApplicationSystemVersion, APPLICATION_SYSTEM_VERSION_NO_VALUE, sizeof (mApplicationSystemVersion));
        }

        string getApplicationSystemVendor () const
        {
            string result;
            for (size_t i = 0; mApplicationSystemVendor[i] && i < APPLICATION_SYSTEM_VENDOR_MAX_LENGTH; i++)
                result += (mApplicationSystemVendor[i]);
            return result;
        }

        bool setApplicationSystemVendor (const string& v)
        {
            memset (mApplicationSystemVendor, '\0', sizeof (mApplicationSystemVendor));
            size_t size = min ((size_t) v.size (), (size_t) APPLICATION_SYSTEM_VENDOR_MAX_LENGTH);
            strncpy (mApplicationSystemVendor, v.c_str (), size);
            return (v.size () <= APPLICATION_SYSTEM_VENDOR_MAX_LENGTH);
        }

        bool isApplicationSystemVendorValid () const
        {
            return (memcmp (mApplicationSystemVendor, APPLICATION_SYSTEM_VENDOR_NO_VALUE, sizeof (mApplicationSystemVendor)) != 0);
        }

        void resetApplicationSystemVendor ()
        {
            memcpy (mApplicationSystemVendor, APPLICATION_SYSTEM_VENDOR_NO_VALUE, sizeof (mApplicationSystemVendor));
        }

        string getPad3 () const
        {
            return string (mPad3, PAD3_MAX_LENGTH);
        }

        bool setPad3 (const string& v)
        {
            memset (mPad3, '\0', sizeof (mPad3));
            size_t size = min ((size_t) v.size (), (size_t) PAD3_MAX_LENGTH);
            strncpy (mPad3, v.c_str (), size);
            return (v.size () <= PAD3_MAX_LENGTH);
        }

        bool isPad3Valid () const
        {
            return (memcmp (mPad3, PAD3_NO_VALUE, sizeof (mPad3)) != 0);
        }

        void resetPad3 ()
        {
            memcpy (mPad3, PAD3_NO_VALUE, sizeof (mPad3));
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = mMessageHeaderIn.getRawSize()
                + mRequestHeader.getRawSize()
                + sizeof (mHeartBtInt)
                + sizeof (mPartyIDSessionID)
                + sizeof (mDefaultCstmApplVerID)
                + sizeof (mPassword)
                + sizeof (mApplUsageOrders)
                + sizeof (mApplUsageQuotes)
                + sizeof (mOrderRoutingIndicator)
                + sizeof (mFIXEngineName)
                + sizeof (mFIXEngineVersion)
                + sizeof (mFIXEngineVendor)
                + sizeof (mApplicationSystemName)
                + sizeof (mApplicationSystemVersion)
                + sizeof (mApplicationSystemVendor)
                + sizeof (mPad3);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            mMessageHeaderIn.mBodyLen = getRawSize ();
            codecState state;
            state = mMessageHeaderIn.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.serialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mHeartBtInt, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mDefaultCstmApplVerID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPassword, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mApplUsageOrders, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mApplUsageQuotes, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mOrderRoutingIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFIXEngineName, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFIXEngineVersion, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mFIXEngineVendor, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mApplicationSystemName, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mApplicationSystemVersion, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mApplicationSystemVendor, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = mMessageHeaderIn.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = mRequestHeader.deserialize (buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mHeartBtInt, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPartyIDSessionID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mDefaultCstmApplVerID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPassword, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mApplUsageOrders, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mApplUsageQuotes, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mOrderRoutingIndicator, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFIXEngineName, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFIXEngineVersion, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mFIXEngineVendor, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mApplicationSystemName, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mApplicationSystemVersion, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mApplicationSystemVendor, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mPad3, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            mMessageHeaderIn.mBodyLen = getRawSize ();
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "LogonRequest::"
                << "[MessageHeaderIn=" << mMessageHeaderIn.toString () << "],"
                << "[RequestHeader=" << mRequestHeader.toString () << "],"
                << "[HeartBtInt=" << getHeartBtInt () << "],"
                << "[PartyIDSessionID=" << getPartyIDSessionID () << "],"
                << "[DefaultCstmApplVerID=" << getDefaultCstmApplVerID () << "],"
                << "[Password=" << getPassword () << "],"
                << "[ApplUsageOrders=" << getApplUsageOrders () << "],"
                << "[ApplUsageQuotes=" << getApplUsageQuotes () << "],"
                << "[OrderRoutingIndicator=" << getOrderRoutingIndicator () << "],"
                << "[FIXEngineName=" << getFIXEngineName () << "],"
                << "[FIXEngineVersion=" << getFIXEngineVersion () << "],"
                << "[FIXEngineVendor=" << getFIXEngineVendor () << "],"
                << "[ApplicationSystemName=" << getApplicationSystemName () << "],"
                << "[ApplicationSystemVersion=" << getApplicationSystemVersion () << "],"
                << "[ApplicationSystemVendor=" << getApplicationSystemVendor () << "],"
                << "[Pad3=" << getPad3 () << "]";
            return sss.str();
        }
};

const uint32_t xetraLogonRequestPacket::HEART_BT_INT_MIN = 0;
const uint32_t xetraLogonRequestPacket::HEART_BT_INT_MAX = 4294967294;
const uint32_t xetraLogonRequestPacket::HEART_BT_INT_NO_VALUE = 0xFFFFFFFF;
const uint32_t xetraLogonRequestPacket::PARTY_IDSESSION_ID_MIN = 0;
const uint32_t xetraLogonRequestPacket::PARTY_IDSESSION_ID_MAX = 4294967294;
const uint32_t xetraLogonRequestPacket::PARTY_IDSESSION_ID_NO_VALUE = 0xFFFFFFFF;
const char xetraLogonRequestPacket::DEFAULT_CSTM_APPL_VER_ID_NO_VALUE[30] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraLogonRequestPacket::DEFAULT_CSTM_APPL_VER_ID_MAX_LENGTH = 30;
const char xetraLogonRequestPacket::PASSWORD_NO_VALUE[32] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraLogonRequestPacket::PASSWORD_MAX_LENGTH = 32;
const char xetraLogonRequestPacket::APPL_USAGE_ORDERS_NO_VALUE[1] = {0x00};
const size_t xetraLogonRequestPacket::APPL_USAGE_ORDERS_MAX_LENGTH = 1;
const char xetraLogonRequestPacket::APPL_USAGE_QUOTES_NO_VALUE[1] = {0x00};
const size_t xetraLogonRequestPacket::APPL_USAGE_QUOTES_MAX_LENGTH = 1;
const char xetraLogonRequestPacket::ORDER_ROUTING_INDICATOR_NO_VALUE[1] = {0x00};
const size_t xetraLogonRequestPacket::ORDER_ROUTING_INDICATOR_MAX_LENGTH = 1;
const char xetraLogonRequestPacket::FIXENGINE_NAME_NO_VALUE[30] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraLogonRequestPacket::FIXENGINE_NAME_MAX_LENGTH = 30;
const char xetraLogonRequestPacket::FIXENGINE_VERSION_NO_VALUE[30] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraLogonRequestPacket::FIXENGINE_VERSION_MAX_LENGTH = 30;
const char xetraLogonRequestPacket::FIXENGINE_VENDOR_NO_VALUE[30] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraLogonRequestPacket::FIXENGINE_VENDOR_MAX_LENGTH = 30;
const char xetraLogonRequestPacket::APPLICATION_SYSTEM_NAME_NO_VALUE[30] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraLogonRequestPacket::APPLICATION_SYSTEM_NAME_MAX_LENGTH = 30;
const char xetraLogonRequestPacket::APPLICATION_SYSTEM_VERSION_NO_VALUE[30] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraLogonRequestPacket::APPLICATION_SYSTEM_VERSION_MAX_LENGTH = 30;
const char xetraLogonRequestPacket::APPLICATION_SYSTEM_VENDOR_NO_VALUE[30] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const size_t xetraLogonRequestPacket::APPLICATION_SYSTEM_VENDOR_MAX_LENGTH = 30;
const char xetraLogonRequestPacket::PAD3_NO_VALUE[3] = {0x00, 0x00, 0x00};
const size_t xetraLogonRequestPacket::PAD3_MAX_LENGTH = 3;


} // namespace neueda

#endif // XETRA_LOGONREQUEST_PACKET_H
