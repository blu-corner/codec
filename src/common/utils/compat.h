#ifndef COMPAT_H
#define COMPAT_H

#include <sbfCommon.h> // brings in a lot of compat stuff

#define simInline SBF_INLINE
#define SIM_PACKED SBF_PACKED
#define SIM_DLLEXPORT SBF_DLLEXPORT

#define simgettimeofday gettimeofday
#define simgetpid getpid

#define simoptind optind
#define simoptarg optarg
#define simgetopt getopt

#define simMutex sbfMutex
#define simMutex_create(l) sbfMutex_init (l, 1)
#define simMutex_destroy(l) sbfMutex_destroy (l)
#define simMutex_lock(l) sbfMutex_lock (l)
#define simMutex_unlock(l) sbfMutex_unlock (l)

#ifdef WIN32

#pragma warning(disable: 4100)

typedef unsigned int u_int;

#define simtimercmp(a, b, CMP)          \
    (((a)->tv_sec == (b)->tv_sec) ?     \
     ((a)->tv_usec CMP (b)->tv_usec) :  \
     ((a)->tv_sec CMP (b)->tv_sec))

#define simtimerclear(a)                \
    ((a)->tv_sec = (a)->tv_usec = 0)

#define simtimeradd(_a, _b, _res)				     \
  do {							                     \
    (_res)->tv_usec = (_a)->tv_usec + (_b)->tv_usec; \
    (_res)->tv_sec = (_a)->tv_sec + (_b)->tv_sec;	 \
    if ((_res)->tv_usec >= 1000000)			         \
      {							                     \
        (_res)->tv_usec -= 1000000;			         \
        (_res)->tv_sec++;				             \
      }							                     \
  } while (0)

#define simtimersub(_a, _b, _res)				     \
  do {							                     \
    (_res)->tv_usec = (_a)->tv_usec - (_b)->tv_usec; \
    (_res)->tv_sec = (_a)->tv_sec - (_b)->tv_sec;	 \
    if ((_res)->tv_usec < 0) {				         \
      (_res)->tv_usec += 1000000;			         \
      (_res)->tv_sec--;					             \
    }							                     \
  } while (0)

#ifdef  __cplusplus
extern "C" char* simgethostipaddress();
#endif

#else

#define simtimeradd timeradd
#define simtimercmp timercmp
#define simtimerclear timerclear
#define simtimersub timersub

#ifdef  __cplusplus
extern "C" char* simgethostipaddress();
#endif

#endif

#endif // COMPAT_H
