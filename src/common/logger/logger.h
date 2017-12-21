#ifndef LOGGER_H
#define LOGGER_H

// #include "common.h"
#include "scopeLock.h"

#include <string>
#include <sstream>
#include <cstdarg>

/*
 * Logging class. Singleton. Use:
 *
 *     logger& l = logger::get ();
 *     l.warn ("%s %d", "hello", 0);
 *     l.warn () << "hello " << 0 << logger::endl;
 *
 * Note that the latter takes a lock in warn () and drops it in endl ().
 */

class logger
{
public:
    static logger& get ()
    {
        if (mLogger == NULL)
            mLogger = new logger ();
        return *mLogger;
    }

    bool open (const std::string& path, size_t limit = 64 * 1024 * 1024);
    void flush ();
    void roll ();

#undef DEBUG
#undef INFO
#undef WARN
#undef ERROR
#undef FATAL
    enum level { DEBUG = 0, INFO, WARN, ERROR, FATAL };
    static const char* const levels[];

    void setLevel (level ll);
    bool setLevel (const char* s);

    static void endl (logger& l);

    template<class T>
    logger& operator<< (const T& t)
    {
        mStream << t;
        return *this;
    }
    void operator<< (void (*f) (logger&))
    {
        f (*this);
    }

    logger& err ();
    void err (const char* fmt, ...);

    logger& warn ();
    void warn (const char* fmt, ...);

    logger& info ();
    void info (const char* fmt, ...);

    logger& debug ();
    void debug (const char* fmt, ...);

    void fatal (const char* fmt, ...);

    void log (level ll, const char* fmt, ...);
    void vlog (level ll, const char* fmt, va_list ap);

private:
    logger ();
    ~logger () {};
    logger (const logger&) {};
    const logger& operator= (const logger&) { return *this; };

    static logger*     mLogger;
    level              mLevel;

    FILE*              mFile;
    std::string        mPath;

    size_t             mSize;
    size_t             mSizeLimit;

    std::ostringstream mStream;
    level              mStreamLevel;
    simMutex           mStreamLock;

    simMutex           mLock;
};

#endif // LOGGER_H
