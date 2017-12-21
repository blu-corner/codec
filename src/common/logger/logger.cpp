#include "logger.h"

logger* logger::mLogger;

const char* const logger::levels[] = {
    "DEBUG", "INFO", "WARN", "ERROR", "FATAL"
};

logger::logger () : mLevel (INFO), mSizeLimit (0)
{
    mFile = stderr;
    simMutex_create (&mLock);

    simMutex_create (&mStreamLock);
    mStreamLevel = DEBUG;
}

void
logger::endl (logger& l)
{
    l.log (l.mStreamLevel, "%s", l.mStream.str ().c_str ());

    l.mStream.str ("");
    l.mStream.clear ();

    simMutex_unlock (&l.mStreamLock);
}

bool
logger::open (const std::string& path, size_t limit)
{
    scopeLock lock (&mLock);

    if (limit < 1024)
        limit = 1024;

    FILE* f = fopen (path.c_str (), "a");
    if (f == NULL)
        return false;
    setbuf (f, NULL);

    struct stat sb;

    if (fstat (fileno (f), &sb) != 0)
    {
        fclose (f);
        return false;
    }

    mPath = path;
    mFile = f;

    mSize = sb.st_size;
    mSizeLimit = limit;

    info ("Log \"%s\" opened (process %lu, size %zu)",
          mPath.c_str (),
          (u_long)simgetpid (),
          mSize);

    return true;
}

void
logger::flush ()
{
    scopeLock lock (&mLock);

    fflush (mFile);
}

void
logger::roll ()
{
    timeval tv;
    simgettimeofday (&tv, NULL);

    tm tm;
    time_t t = tv.tv_sec;
    gmtime_r (&t, &tm);

    char tmp[256];
    snprintf (tmp,
              sizeof tmp,
              "_%04u%02u%02u_%02u%02u%02u",
              tm.tm_year + 1900,
              tm.tm_mon + 1,
              tm.tm_mday,
              tm.tm_hour,
              tm.tm_min,
              tm.tm_sec);

    std::string to (mPath);
    to += tmp;

    size_t limit = mSizeLimit;
    mSizeLimit = 0;

    if (::rename (mPath.c_str (), to.c_str ()) != 0)
    {
        err ("Couldn't rename log \"%s\" to \"%s\"",
             mPath.c_str (),
             to.c_str ());
        return;
    }

    FILE* f = mFile;
    if (!open (mPath, limit))
    {
        err ("Couldn't open log \"%s\"", mPath.c_str ());
        return;
    }
    fclose (f);

    info ("Log \"%s\" moved to \"%s\" (process %lu)",
          mPath.c_str (),
          to.c_str (),
          (u_long)simgetpid ());
}

void
logger::setLevel (level ll)
{
    mLevel = ll;
}

bool
logger::setLevel (const char* s)
{
    for (u_int i = 0; i < sizeof levels / (sizeof levels[0]); i++)
    {
        if (strncasecmp (s, levels[i], strlen (s)) == 0)
        {
            setLevel ((level)i);
            return true;
        }
    }
    return false;
}

logger&
logger::err ()
{
    simMutex_lock (&mStreamLock);
    mStreamLevel = ERROR;
    return *this;
}

void
logger::err (const char* fmt, ...)
{
    va_list ap;

    va_start (ap, fmt);
    vlog (ERROR, fmt, ap);
    va_end (ap);
}

logger&
logger::warn ()
{
    simMutex_lock (&mStreamLock);
    mStreamLevel = WARN;
    return *this;
}

void
logger::warn (const char* fmt, ...)
{
    va_list ap;

    va_start (ap, fmt);
    vlog (WARN, fmt, ap);
    va_end (ap);
}

logger&
logger::info ()
{
    simMutex_lock (&mStreamLock);
    mStreamLevel = INFO;
    return *this;
}

void
logger::info (const char* fmt, ...)
{
    va_list ap;

    va_start (ap, fmt);
    vlog (INFO, fmt, ap);
    va_end (ap);
}

logger&
logger::debug ()
{
    simMutex_lock (&mStreamLock);
    mStreamLevel = DEBUG;
    return *this;
}

void
logger::debug (const char* fmt, ...)
{
    va_list ap;

    va_start (ap, fmt);
    vlog (DEBUG, fmt, ap);
    va_end (ap);
}

void
logger::fatal (const char* fmt, ...)
{
    va_list ap;

    va_start (ap, fmt);
    vlog (FATAL, fmt, ap);
    va_end (ap);

    exit (1);
}

void
logger::log (level ll, const char* fmt, ...)
{
    va_list ap;

    va_start (ap, fmt);
    vlog (ll, fmt, ap);
    va_end (ap);
}

void
logger::vlog (level ll, const char* fmt, va_list ap)
{
    scopeLock lock (&mLock);

    if (mLevel > ll)
        return;

    timeval tv;
    simgettimeofday (&tv, NULL);

    tm tm;
    time_t t = tv.tv_sec;
    gmtime_r (&t, &tm);

    size_t size = 1;
    size += fprintf (mFile,
                     "%04u-%02u-%02u %02u:%02u:%02u.%06u %-5s ",
                     tm.tm_year + 1900,
                     tm.tm_mon + 1,
                     tm.tm_mday,
                     tm.tm_hour,
                     tm.tm_min,
                     tm.tm_sec,
                     (u_int)tv.tv_usec,
                     levels[(int)ll]);
    size += vfprintf (mFile, fmt, ap);
    fputc ('\n', mFile);

    mSize += size;
    if (mSizeLimit != 0 && mSize > mSizeLimit)
        roll ();

    flush ();
}
