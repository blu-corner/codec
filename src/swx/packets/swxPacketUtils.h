/*
 * Copyright 2014-2018 Neueda Ltd.
 */
#ifndef SWX_PACKET_UTILS_H
#define SWX_PACKET_UTILS_H

#define PACKED(d) d __attribute__ ((__packed__))

#include <string>
#include <string.h>


namespace neueda
{

static inline bool
setLeftPaddedStringBuf (std::string from,
                        char* buf,
                        size_t bufLen,
                        unsigned char paddingByte)
{
    memset (buf, paddingByte, bufLen);

    size_t offset = bufLen - from.size ();
    memcpy (buf+offset, from.c_str (), from.size ());

    return true;
}

static inline bool
getLeftPaddedString (char* buf,
                     size_t bufLen,
                     unsigned char paddingByte,
                     std::string& value)
{
    bool found = false;
    size_t i;
    for (i = 0; i < bufLen; ++i)
    {
        if (buf[i] != paddingByte)
        {
            found = true;
            break;
        }
    }

    if (found == false)
    {
        // is an empty string
        value.clear ();
        return true;
    }

    value.assign (std::string (buf + i, bufLen - i));
    return true;
}

static inline bool
setRightPaddedStringBuf (std::string from,
                         char* buf,
                         size_t bufLen,
                         unsigned char paddingByte)
{
    memset(buf, paddingByte, bufLen);
    memcpy(buf, from.c_str (), from.size ());

    return true;
}

static inline bool
getRightPaddedString (char* buf,
                      size_t bufLen,
                      unsigned char paddingByte,
                      std::string& value)
{
    bool found = false;
    size_t i;
    for (i = bufLen - 1; i < bufLen; --i)
    {
        if (buf[i] != paddingByte)
        {
            found = true;
            break;
        }
    }
    
    if (!found)
    {
        // is an empty value
        value.clear ();
        return true;
    }

    value.assign (std::string (buf, i + 1));
    return true;
}

} // namespace neueda


#endif // SWX_PACKET_UTILS_H
