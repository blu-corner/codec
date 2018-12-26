/*
 * Copyright 2014-2018 Neueda
 */
#ifndef GW_CODEC_H
#define GW_CODEC_H

#include <string>
#include <iomanip>
#include "cdr.h"
#include "fields.h"

using namespace std;

namespace neueda
{

enum codecState
{
    GW_CODEC_SUCCESS,
    GW_CODEC_ERROR,
    GW_CODEC_ABORT,
    GW_CODEC_SHORT
};

class codec
{
public:
    typedef codec* (*getCodec) ();

    virtual ~codec () { }
    
    /**
     * decode the given buffer into a cdr
     * @param target cdr that buffer will be decoded into
     * @param buf buffer to be decoded
     * @param len length of the buffer
     * @param used size of data that that has been processed
     * @return codecState:
     *     GW_CODEC_SUCCESS - target filled in and used set to the amount of
     *                        data consumed;
     *     GW_CODEC_ERROR   - potentially recoverable error: used is set to the
     *                        size of the bad message;
     *     GW_CODEC_ABORT   - unrecoverable error: used is invalid;
     *     GW_CODEC_SHORT   - more data needed, used set to zero.
     */
    virtual codecState decode (cdr& target,
                               const void* buf,
                               size_t len,
                               size_t& used) = 0;

    /**
     * encode a cdr into the given buffer
     * @param source cdr to be encoded
     * @param buf buffer cdr is to be encoded into
     * @param len length of the buffer
     * @param used amount of data that the encode has processed
     * @return codecState:
     *     GW_CODEC_SUCCESS - used set to amount of buffer used;
     *     GW_CODEC_ERROR   - could not construct a message;
     *     GW_CODEC_SHORT   - buffer is too short.
     */
    virtual codecState encode (const cdr& source,
                               void* buf,
                               size_t len,
                               size_t& used) = 0;

    /**
     * return the string type of this codec
     * @return string type of this codec e.g. lse
     */
    virtual string getType() const = 0;

    /**
     * Returns a prettyPrinted version of the CDR for screen output
     * @param cdr The cdr to pretty print
     * @param indent The number of spaces to prepend to each line
     * @return pretty printed cdr string
     */
    static string prettyPrintCdr (const cdr& d, int indent = 0)
    {
        stringstream ss;
        int count = 0;

        for (cdr::const_iterator it = d.begin (); it != d.end (); ++it)
        {
            stringstream key;
            key << FieldUtils::getFieldName (it->first) 
                << "(" << it->first << ")";

            if (count != 0)
                ss << endl;

            string value;
            if (!it->second.asString (value))
                continue;

            // the indents chosen below i.e. 35,39 are arbirtrary because they
            // looked nice.
            if (it->second.mType == CDR_ARRAY)
            {
                ss << setw (35 + indent) << key.str () << " = " << endl;
                for (cdrArray::const_iterator aIt = it->second.mArray.begin ();
                     aIt != it->second.mArray.end ();
                     ++aIt)
                {
                    ss << setw (39 + indent) << "[" << endl;
                    ss << codec::prettyPrintCdr (*aIt, 30) << endl;
                    ss << setw (39 + indent) << "]" << endl;
                }
            }
            else
                ss << setw (35 + indent) << key.str () << " = " << value;

            count++;
        }
        return ss.str ();
    }

    /**
     * return the last error set by the codec
     * @return error string error
     */
    const string& getLastError () { return mError; }

    /**
     * set error
     * @param error
     */
    void setLastError (const string error) { mError.assign (error); };

    /**
     * clear the last error
     */
    void clearLastError () { mError.clear (); };

    /**
     * return the last message that was being processed
     * @return msgtype string of last msgtype
     */
    const string& getLastMessage () { return mMsgType; }

    /**
     * set last message
     * @param msgType string message type being processed
     */
    void setLastMessage (const string msgtype) { mMsgType.assign (msgtype); };

    /**
     * clear the last error
     */
    void clearLastMessage () { mMsgType.clear (); };

    /**
     * return the last field that was being processed
     * @return field string of last field
     */
    const string& getLastField () { return mField; }

    /**
     * set last field
     * @param field string name of field being processed
     */
    void setLastField (const string field) { mField.assign (field); };

    /**
     * clear the last field
     */
    void clearLastField () { mField.clear (); };

protected:
    string mError;
    string mMsgType;
    string mField;

    typedef map <string, string> TypeToNameMap;
    TypeToNameMap mMsgTypes;
};

} // namespace neueda

#endif /* GW_CODEC_H */
