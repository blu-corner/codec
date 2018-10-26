/*
 * Copyright 2014-2018 Neueda
 */
#ifndef _GW_CODEC_HELPERS_H_
#define _GW_CODEC_HELPERS_H_

#ifndef __STDC_LIMIT_MACROS
#define __STDC_LIMIT_MACROS
#endif

#include <sbfCommon.h>
#include "cdr.h"

#ifndef htonll
#define htonll(x) \
    (((uint64_t)htonl ((uint32_t)x)) << 32 | htonl ((uint32_t)(x >> 32)))
#endif
#ifndef ntohll
#define ntohll(x) \
    (((uint64_t)ntohl ((uint32_t)x)) << 32 | ntohl((uint32_t)(x >> 32)))
#endif

using namespace std;
using namespace neueda;

bool codecHelper_setIntBigEndian (cdr& d, cdrKey_t k, void* vp,
                                  size_t size, string& err);
bool codecHelper_getIntBigEndian (const cdr& d, const cdrKey_t k, void* vp,
                                  size_t size, string& err);
void codecHelper_setString (cdr& d, cdrKey_t k, const char* s, size_t len);

#endif
