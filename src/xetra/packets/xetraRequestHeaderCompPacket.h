/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 11/10/2018
 */
#ifndef XETRA_REQUESTHEADERCOMP_PACKET_H
#define XETRA_REQUESTHEADERCOMP_PACKET_H

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

class xetraRequestHeaderCompPacket
{
    public:
        // no value constants
        static const uint32_t MSG_SEQ_NUM_MIN;
        static const uint32_t MSG_SEQ_NUM_MAX;
        static const uint32_t MSG_SEQ_NUM_NO_VALUE;
        static const int32_t SENDER_SUB_ID_MIN;
        static const int32_t SENDER_SUB_ID_MAX;
        static const int32_t SENDER_SUB_ID_NO_VALUE;

        // fields (use with care)
        uint32_t mMsgSeqNum;
        int32_t mSenderSubID;

        // constructor
        xetraRequestHeaderCompPacket ()
        {
            mMsgSeqNum = MSG_SEQ_NUM_NO_VALUE;
            mSenderSubID = SENDER_SUB_ID_NO_VALUE;
        }

        // getters & setters
        uint32_t getMsgSeqNum () const
        {
            return mMsgSeqNum;
        }

        bool setMsgSeqNum (uint32_t v)
        {
            mMsgSeqNum = v;
            return ((MSG_SEQ_NUM_MIN <= mMsgSeqNum && mMsgSeqNum <= MSG_SEQ_NUM_MAX) || mMsgSeqNum == MSG_SEQ_NUM_NO_VALUE);
        }

        bool isMsgSeqNumValid () const
        {
            return (mMsgSeqNum != MSG_SEQ_NUM_NO_VALUE);
        }

        void resetMsgSeqNum ()
        {
            mMsgSeqNum = MSG_SEQ_NUM_NO_VALUE;
        }

        int32_t getSenderSubID () const
        {
            return mSenderSubID;
        }

        bool setSenderSubID (int32_t v)
        {
            mSenderSubID = v;
            return ((SENDER_SUB_ID_MIN <= mSenderSubID && mSenderSubID <= SENDER_SUB_ID_MAX) || mSenderSubID == SENDER_SUB_ID_NO_VALUE);
        }

        bool isSenderSubIDValid () const
        {
            return (mSenderSubID != SENDER_SUB_ID_NO_VALUE);
        }

        void resetSenderSubID ()
        {
            mSenderSubID = SENDER_SUB_ID_NO_VALUE;
        }


        // render current raw size
        size_t getRawSize () const
        {
            size_t result = sizeof (mMsgSeqNum)
                + sizeof (mSenderSubID);
            return result;
        }

        // serialization
        codecState serialize (void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::serialize (mMsgSeqNum, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::serialize (mSenderSubID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // deserialization
        codecState deserialize (const void *buf, size_t len, size_t &used)
        {
            codecState state;
            state = xetra::deserialize (mMsgSeqNum, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            state = xetra::deserialize (mSenderSubID, buf, len, used);
            if (state != GW_CODEC_SUCCESS) return state;
            return GW_CODEC_SUCCESS;
        }

        // string conversion
        string toString () const
        {
            stringstream sss;
            sss << "RequestHeaderComp::"
                << "[MsgSeqNum=" << getMsgSeqNum () << "],"
                << "[SenderSubID=" << getSenderSubID () << "]";
            return sss.str();
        }
};

const uint32_t xetraRequestHeaderCompPacket::MSG_SEQ_NUM_MIN = 0;
const uint32_t xetraRequestHeaderCompPacket::MSG_SEQ_NUM_MAX = 4294967294;
const uint32_t xetraRequestHeaderCompPacket::MSG_SEQ_NUM_NO_VALUE = 0xFFFFFFFF;
const int32_t xetraRequestHeaderCompPacket::SENDER_SUB_ID_MIN = 0;
const int32_t xetraRequestHeaderCompPacket::SENDER_SUB_ID_MAX = 2147483647;
const int32_t xetraRequestHeaderCompPacket::SENDER_SUB_ID_NO_VALUE = 0xFFFFFFFF;


} // namespace neueda

#endif // XETRA_REQUESTHEADERCOMP_PACKET_H
