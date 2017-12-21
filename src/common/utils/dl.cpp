#include "dl.h"

dl_handle
dl_open (const char* path)
{
#ifdef linux
	return dlopen (path, RTLD_LAZY);
#else
	return LoadLibrary (path);
#endif
}

dl_address
dl_symbol (dl_handle handle, const char* name)
{
#ifdef linux
	return dlsym (handle, name);
#else
	return GetProcAddress (handle, name);
#endif
}

const char*
dl_error (void)
{
#ifdef linux
    return dlerror ();
#else
    return "";
#endif
}
