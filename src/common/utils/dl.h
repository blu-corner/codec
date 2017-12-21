#ifndef DL_H
#define DL_H

#include <common.h>

#ifdef linux
typedef void* dl_handle;
typedef void* dl_address;
#else
typedef HMODULE dl_handle;
typedef FARPROC dl_address;
#endif

dl_handle dl_open (const char* path);
dl_address dl_symbol (dl_handle handle, const char* name);
const char* dl_error ();

#endif
