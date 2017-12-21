#ifndef GW_CODEC_H
#define GW_CODEC_H

#include <string>
#include "cdr.h"

using namespace std;
using namespace CommonDataRepresentation;

namespace GwCodec
{

enum gwCodecState
{
    GW_CODEC_SUCCESS,
    GW_CODEC_ERROR,
    GW_CODEC_ABORT,
    GW_CODEC_SHORT
};

class gwCodec
{
public:
    typedef gwCodec* (*getCodec) ();
    /*
     * Returns:
     *     GW_CODEC_SUCCESS - target filled in and used set to the amount of
     *                        data consumed;
     *     GW_CODEC_ERROR   - potentially recoverable error: used is set to the
     *                        size of the bad message;
     *     GW_CODEC_ABORT   - unrecoverable error: used is invalid;
     *     GW_CODEC_SHORT   - more data needed, used set to zero.
     */
    virtual gwCodecState decode (cdr& target,
                                 const void* buf,
                                 size_t len,
                                 size_t& used) = 0;

    /*
     * Returns:
     *     GW_CODEC_SUCCESS - used set to amount of buffer used;
     *     GW_CODEC_ERROR   - could not construct a message;
     *     GW_CODEC_SHORT   - buffer is too short.
     */
    virtual gwCodecState encode (const cdr& source,
                                 void* buf,
                                 size_t len,
                                 size_t& used) = 0;

    virtual string getType() const = 0;

    const string& getLastError () { return mError; }
    void setLastError (const string error) { mError.assign (error); };
    void clearLastError () { mError.clear (); };

protected:
    string mError;
};

}

#endif /* GW_CODEC_H */
