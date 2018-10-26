/*
 * Copyright 2014-2018 Neueda Ltd.
 */
#ifndef XETRA_PACKET_UTILS_H
#define XETRA_PACKET_UTILS_H

#include "cdr.h"
#include "fields.h"
#include "codec.h"
#include <assert.h>

#ifdef WIN32
#define PACKED(d) __pragma( pack(push, 1) ) d __pragma( pack(pop) )
#else
#define PACKED(d) d __attribute__ ((__packed__))
#endif

namespace neueda
{

namespace xetra
{

template <class T>
inline static codecState
serialize (const T& v, void *buf, size_t len, size_t& used)
{
    size_t size = sizeof (v);
    if (size + used > len)
        return GW_CODEC_SHORT;
    memcpy(used + (char *) buf, &v, size);
    used += size;
    return GW_CODEC_SUCCESS;
}

inline static codecState
serialize (const string& v, size_t maxSize, void *buf, size_t len, size_t& used)
{
    size_t size = min (maxSize, v.size ());
    if (size + used > len)
        return GW_CODEC_SHORT;
    memcpy(used + (char *) buf, v.data (), size);
    used += size;
    return GW_CODEC_SUCCESS;
}

template <class T>
inline static codecState
deserialize (T& v, const void *buf, size_t len, size_t& used)
{
    size_t size = sizeof (v);
    if (size + used > len)
        return GW_CODEC_SHORT;
    memcpy(&v, used + (const char *) buf, size);
    used += size;
    return GW_CODEC_SUCCESS;
}

inline static codecState
deserialize (string& v, size_t size, const void *buf, size_t len, size_t& used)
{
    if (size + used > len)
        return GW_CODEC_SHORT;
    v = string (used + (const char *) buf, size);
    used += size;
    return GW_CODEC_SUCCESS;
}

template <class Struct>
inline static size_t
getRawSize (const vector<Struct>& v)
{
    size_t result = 0;
    for (size_t i = 0; i < v.size (); i++)
        result += v[i].getRawSize ();
    return result;
}

template <class Struct>
inline static string
toString (const vector<Struct>& v)
{
    stringstream sss;
    for (size_t i = 0; i < v.size (); i++)
        sss << v[i].toString ();
    return sss.str ();
}

class codecError
{
public:
    codecState mState;
    string mMessage;

    codecError ()
    : mState (GW_CODEC_ERROR), mMessage ("unknown error")
    {}

    codecError (codecState state)
    : mState (state)
    {}

    codecError (codecState state, const std::string& message)
    : mState (state), mMessage (message)
    {}
};

template <class T, class P, bool (P::*SetValue) (T), void (P::*ResetValue) ()>
static inline void
getInteger (const cdr& d, cdrKey_t key, P& packet)
{
    T v;
    if (d.getInteger (key, v))
        (packet.*SetValue) (v);
    else if (d.contains (key))
    {
        stringstream ss;
        ss << "wrong type for integer field " << FieldUtils::getFieldName (key);
        throw codecError (GW_CODEC_ERROR, ss.str ());
    }
    else
        (packet.*ResetValue) ();
}

template <class P, bool (P::*SetValue) (double), void (P::*ResetValue) ()>
static inline void
getDouble (const cdr& d, cdrKey_t key, P& packet)
{
    double v;
    if (d.getDouble (key, v))
        (packet.*SetValue) (v);
    else if (d.contains (key))
    {
        stringstream ss;
        ss << "wrong type for double field " << FieldUtils::getFieldName (key);
        throw codecError (GW_CODEC_ERROR, ss.str ());
    }
    else
        (packet.*ResetValue) ();
}

template <class P, bool (P::*SetValue) (const string&), void (P::*ResetValue) ()>
static inline void
getString (const cdr& d, cdrKey_t key, P& packet)
{
    string v;
    if (d.getString (key, v))
        (packet.*SetValue) (v);
    else if (d.contains (key))
    {
        stringstream ss;
        ss << "wrong type for string field " << FieldUtils::getFieldName (key);
        throw codecError (GW_CODEC_ERROR, ss.str ());
    }
    else
        (packet.*ResetValue) ();
}

template <class T, class P, T (P::*GetValue) () const, bool (P::*IsValid) () const>
static inline void
setInteger(cdr& d, cdrKey_t key, const P& packet)
{
    if ((packet.*IsValid) ())
    {
        T v = (packet.*GetValue) ();
        d.setInteger (key, v);
    }
}

template <class P, double (P::*GetValue) () const, bool (P::*IsValid) () const>
static inline void
setDouble (cdr& d, cdrKey_t key, const P& packet)
{
    if ((packet.*IsValid) ())
    {
        double v = (packet.*GetValue) ();
        d.setDouble (key, v);
    }
}

template <class P, string (P::*GetValue) () const, bool (P::*IsValid) () const>
static inline void
setString (cdr& d, cdrKey_t key, const P& packet)
{
    if ((packet.*IsValid) ())
    {
        string v = (packet.*GetValue) ();
        d.setString (key, v);
    }
}

} // namespace xetra

} // namespace neueda

#endif // XETRA_PACKET_UTILS_H
