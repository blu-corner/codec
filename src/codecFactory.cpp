/*
 * Copyright 2014-2018 Neueda
 */
#include "codecFactory.h"
#include "dl.h"

#include <string>
#include <sstream>

namespace neueda
{
bool
codecFactory::get (const char* type, codec*& codec, std::string& errorMessage)
{
    std::ostringstream lib;
    lib << "lib" << type << "codec" << SBF_SHLIB_SUFFIX;
    dl_handle handle = dl_open (lib.str ().c_str ());

    if (handle == NULL)
    {
        std::ostringstream ss;
        ss << dl_error ()
           << " - "
           << "no codec found for type "
           << type;
        errorMessage.assign (ss.str ());
        return false;
    }

    codec::getCodec g = (codec::getCodec)dl_symbol (handle, "getCodec");
    if (g == NULL)
    {
        std::ostringstream ss;
        ss << "can't find getCodec function in "
           << lib.str ();
        errorMessage.assign (ss.str ());
        return false;
    }

    codec = g ();
    if (codec == NULL)
    {
        std::ostringstream ss;
        ss << "failed to get codec";
        errorMessage.assign (ss.str ());
        return false;
    }
    
    return true;
}
};
