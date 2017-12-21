#ifndef _COMMON_HDR_
#define _COMMON_HDR_

#ifndef __STDC_LIMIT_MACROS
#define __STDC_LIMIT_MACROS
#endif

#define __STDC_CONSTANT_MACROS

#include <errno.h>
#include <fcntl.h>
#include <limits.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/stat.h>

#include "compat.h"

#define SIM_DOUBLE_EPSILON 0.000001

#ifndef htonll
#define htonll(x) \
    (((uint64_t)htonl ((uint32_t)x)) << 32 | htonl ((uint32_t)(x >> 32)))
#endif
#ifndef ntohll
#define ntohll(x) \
    (((uint64_t)ntohl ((uint32_t)x)) << 32 | ntohl((uint32_t)(x >> 32)))
#endif

#endif /* _COMMON_HDR_ */
