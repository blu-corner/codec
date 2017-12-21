#ifndef GW_CODEC_FACTORY_H
#define GW_CODEC_FACTORY_H

#include <string>
#include <sstream>
#include "dl.h"
#include "gwCodec.h"
#include "logger.h"

using namespace std;

namespace GwCodec
{

class gwCodecFactory
{
public:
    gwCodec* get (string& type)
    {
        logger& l = logger::get ();
        stringstream lib;
        lib << "libgw" << type << "codec.so";
        dl_handle handle = dl_open (lib.str ().c_str ());

        // if (handle == NULL)
        //     l.fatal ("no codec found for type %s", type.c_str ());

        gwCodec::getCodec g = (gwCodec::getCodec)dl_symbol (handle, "getCodec");
        // if (g == NULL)
        //     l.fatal ("can't find getCodec function in %s", lib.str ().c_str ());

        gwCodec* codec = g ();
        // if (codec == NULL)
        //     l.fatal ("failed to get codec");

        return codec;
    }
};

}

#endif /* _GW_CODEC_FACTORY_H_ */
