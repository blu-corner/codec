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

    /*
     * swig
     */
    virtual ~codec () { }
    
    /*
     * Returns:
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

    /*
     * Returns:
     *     GW_CODEC_SUCCESS - used set to amount of buffer used;
     *     GW_CODEC_ERROR   - could not construct a message;
     *     GW_CODEC_SHORT   - buffer is too short.
     */
    virtual codecState encode (const cdr& source,
                               void* buf,
                               size_t len,
                               size_t& used) = 0;

    virtual string getType() const = 0;

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

    const string& getLastError () { return mError; }
    void setLastError (const string error) { mError.assign (error); };
    void clearLastError () { mError.clear (); };

protected:
    string mError;

    typedef map <string, string> TypeToNameMap;
    TypeToNameMap mMsgTypes;
};

} // namespace neueda

#endif /* GW_CODEC_H */
