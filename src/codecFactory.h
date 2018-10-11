/*
 * Copyright 2014-2018 Neueda
 */
#ifndef GW_CODEC_FACTORY_H
#define GW_CODEC_FACTORY_H

#include "codec.h"


namespace neueda
{

class codecFactory
{
public:
    virtual bool get (const char* type, codec*& codec, std::string& errorMessage);
};

} // namespace neueda

#endif /* _GW_CODEC_FACTORY_H_ */
