/*
 * Copyright 2014-2018 Neueda
 */
#include "codecFactory.h"
#include "properties.h"
#include "logger.h"
#include "codec.h"

#include "sys/mman.h"
#include "sys/stat.h"
#include "fcntl.h"
#include "unistd.h"

#include <err.h>

static size_t
getFileSize (const char* filename)
{
    struct stat st;

    if (stat (filename, &st) != 0)
        return 0;

    return st.st_size;
}

int main (int argc, char** argv)
{
    neueda::properties properties;
    properties.setProperty ("lh.console.enabled", "true");
    properties.setProperty ("lh.console.color", "true");
    properties.setProperty ("lh.console.level", "debug");

    int c;
    std::string filename;
    std::string venue;
    while ((c = getopt(argc, argv, "f:v:")) != -1)
    {
        switch (c)
        {
            case 'f':
                if (optarg)
                    filename.assign (optarg);
                break;
            case 'v':
                if (optarg)
                    venue.assign (optarg);
                break;
        }
    }

    if (venue.empty ())
    {
        errx (1, "no venue specified");
    }

    std::string errorMessage;
    
    neueda::codecFactory factory;
    neueda::codec* codec = NULL;
    bool ok = factory.get (venue.c_str (), codec, errorMessage);
    if (not ok)
    {
        errx (1, "%s", errorMessage.c_str ());
    }
    
    ok = neueda::logService::get ().configure (properties, errorMessage);
    if (not ok)
    {
        std::string e("failed to configure logger: " + errorMessage);
        errx (1, "%s", e.c_str ());
    }

    neueda::logger* logger = neueda::logService::getLogger ("PRINT_MESSAGES");
    if (filename.empty ())
    {
        errx (1, "Filename was not provided! Aborting");
    }

    size_t size = getFileSize (filename.c_str());
    if (size == 0)
        errx(1, "Could not stat file");

    int fdfile = open (filename.c_str(), O_RDONLY);
    if (fdfile < 0)
        errx (1, "Could not open file");

    unsigned char* data = (unsigned char*)mmap(NULL, size, PROT_READ, MAP_SHARED, fdfile, 0);
    if (data == MAP_FAILED)
    {
        close (fdfile);
        errx (1, "Could not create mmap from the file");
    }

    neueda::codecState state;
    uint offset = 0;

    while (offset < size)
    {
        neueda::cdr cdr;
        int len = size - offset;
        size_t used;
        state = codec->decode (cdr, (void*)(data + offset), len, used);

        if (state != neueda::GW_CODEC_SUCCESS)
        {
            //DEBUG
            switch (state)
            {
                case neueda::GW_CODEC_ERROR:
                    logger->debug("Status: ERRROR");
                    break;
                case neueda::GW_CODEC_ABORT:
                    logger->debug("Status: ABORT");
                    break;
                case neueda::GW_CODEC_SHORT:
                    logger->debug("Status: SHORT");
                    break;
                default:
                    logger->debug("Status: N/A");
            }
            //DEBUG

            close (fdfile);
            errx(1, "Couldn't decode message, exiting.");
        }

        std::cout << neueda::codec::prettyPrintCdr (cdr) << std::endl;
        offset += used;
    }

    delete codec;
    munmap (data, size);
    close (fdfile);

    return 0;
}
