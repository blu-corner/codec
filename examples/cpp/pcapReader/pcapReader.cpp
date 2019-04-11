#include <pcap.h>
#include <time.h>

#include "codecFactory.h"
#include "properties.h"
#include "logger.h"
#include "codec.h"

#include "sys/mman.h"
#include "sys/stat.h"
#include "fcntl.h"
#include "unistd.h"

#include <err.h>

#define kEthernetLen 14
#define kIpSize 20
#define kTCPSize 32

static neueda::logger* logger;
static neueda::codec* codec;


void pcapHandler (u_char* args,
                  const struct pcap_pkthdr* hdr, 
                  const u_char* packet)
{
    static u_int       num = 0;
    std::string        cdrbuffer;
    neueda::cdr        cdr;
    size_t             used;
    const u_char       *payload = (const u_char *)(packet + kEthernetLen + kIpSize + kTCPSize);
    neueda::codecState state    = codec->decode(cdr, payload, hdr->len, used);


    if (state != neueda::GW_CODEC_SUCCESS)
    {
        logger->debug("*Partial Msg unread*");
    }
    else
    {
        std::cout << "Received  : " << ctime((const time_t*)&hdr->ts.tv_sec);
        std::cout << "Micro Sec : " << hdr->ts.tv_usec <<std::endl;
        std::cout << "Msg Num   : " << ++num << std::endl;
        std::cout << codec->prettyPrintCdr (cdr) << std::endl;
    }
};


size_t getFileSize (const char* filename)
{
    struct stat st;
    if (stat (filename, &st) != 0)
        return 0;
    
    return st.st_size;
};


int main (int argc, char **argv)
{
    size_t             file_size;
    bool               ok;
    int                cmd_args;
    char               error_buffer[PCAP_ERRBUF_SIZE];
    std::string        errorMessage;
    std::string        filename;
    std::string        venue;
    neueda::properties properties;

    properties.setProperty ("lh.console.enabled", "true");
    properties.setProperty ("lh.console.color", "true");
    properties.setProperty ("lh.console.level", "debug");

    ok = neueda::logService::get ().configure (properties, errorMessage);
    if (not ok)
    {
        std::string e("failed to configure logger: " + errorMessage);
        errx (1, "%s", e.c_str ());
    }
    logger = neueda::logService::getLogger ("PRINT_PCAP");

    while ((cmd_args = getopt(argc, argv, "f:v:")) != -1)
    {
        switch (cmd_args)
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
        errx (1, "Venue not specified! Aborting");
    }

    neueda::codecFactory factory;
    ok = factory.get (venue.c_str (), codec, errorMessage);
    if (not ok)
    {
        errx (1, "%s", errorMessage.c_str ());
    }

    if (filename.empty ())
    {
        errx (1, "Filename was not provided! Aborting");
    }

    logger->info ("Filename provided: %s\n", filename.c_str ());
    
    file_size = getFileSize(filename.c_str());
    if (file_size == 0)
        errx(1, "Could not stat file");
    
    logger->debug ("File size: %lu\n", file_size);

    pcap_t* handle = pcap_open_offline_with_tstamp_precision (
        filename.c_str (),
        PCAP_TSTAMP_PRECISION_NANO,
        error_buffer);

    if(pcap_loop (handle, 0, pcapHandler, NULL) < 0)
    {
        errx (1, "Pcap Loop Failed! Aborting");
    }
    
    return 0;
};
