#include "codecFactory.h"
#include "properties.h"
#include "logger.h"
#include "codec.h"

#include "sys/mman.h"
#include "sys/stat.h"
#include "fcntl.h"
#include "unistd.h"

#include <err.h>
#include <pcap.h>
#include <time.h>

#define ETH_HEADER_LEN 14
#define IP_HEADER_LEN 20
#define TCP_HEADER_LEN 32
#define PKT_OFFSET (ETH_HEADER_LEN + IP_HEADER_LEN + TCP_HEADER_LEN)

using namespace neueda;
using namespace std;

struct dataBuffer 
{
    dataBuffer () :
        mLen (0)
    {
    }

    u_char mData[8192];
    size_t mLen;

    codec* mCodec;
};

static void 
packetCb (u_char* args, const struct pcap_pkthdr* hdr, const u_char* packet)
{
    neueda::cdr   cdr;
    size_t        used = 0;
    size_t        consumed = 0;
    size_t        size = hdr->len - PKT_OFFSET;
    const u_char* payload = (const u_char *)(packet + PKT_OFFSET);
    dataBuffer*   buff = (dataBuffer*)args;
    codecState    state;

    memcpy (buff->mData + buff->mLen, payload, size);
    buff->mLen += (hdr->len - PKT_OFFSET);

    while (buff->mLen)
    {
        u_char* data = buff->mData + consumed;
        state = buff->mCodec->decode (cdr, data, buff->mLen, used);
        if (state == GW_CODEC_SUCCESS)
        {
            cout << "Received Time    : " << ctime ((const time_t*)&hdr->ts.tv_sec);
            cout << "Timestamp (Nanos):" << hdr->ts.tv_sec << "." << hdr->ts.tv_usec << endl;
            cout << buff->mCodec->prettyPrintCdr (cdr) << endl;

            buff->mLen -= used;
            consumed += used;
        }
        else if ((state == GW_CODEC_ABORT) || 
                 (state == GW_CODEC_ERROR))
        {
            errx (1, "codec state error/abort [%s]", buff->mCodec->getLastError ().c_str ());
        }
        else if (state == GW_CODEC_SHORT)
        {
            /* copy remaining to front of buffer and exit */
            memcpy (buff->mData, buff->mData + consumed, buff->mLen);
            break;
        }
    }
}

static size_t 
getFileSize (const char* filename)
{
    struct stat st;
    if (stat (filename, &st) != 0)
        return 0;
    
    return st.st_size;
};

int main (int argc, char **argv)
{
    size_t             fileSize;
    int                opt;
    char               errorBuffer[PCAP_ERRBUF_SIZE];
    string             error;
    string             filename;
    string             venue;
    neueda::properties properties;
    pcap_t*            pcap = NULL;
    logger*            logger = NULL;
    codec*             codec = NULL;
    dataBuffer         buff;

    properties.setProperty ("lh.console.enabled", "true");
    properties.setProperty ("lh.console.color", "true");
    properties.setProperty ("lh.console.level", "debug");

    if (!neueda::logService::get ().configure (properties, error))
        errx (1, "led to configure logger: %s", error.c_str ());

    logger = neueda::logService::getLogger ("pcap_reader");

    while ((opt = getopt(argc, argv, "f:v:")) != -1)
    {
        switch (opt)
        {
        case 'f':
            filename.assign (optarg);
        case 'v':
            venue.assign (optarg);
        default:
            errx (1, "unknown arg");    
        }
    }

    if (venue.empty ())
        errx (1, "venue not specified! aborting");
    if (filename.empty ())
        errx (1, "filename was not provided!aAborting");

    neueda::codecFactory factory;
    if (!factory.get (venue.c_str (), codec, error))
        errx (1, "failed to load codec: %s", error.c_str ());
    buff.mCodec = codec;

    logger->info ("filename provided: %s\n", filename.c_str ());
    
    fileSize = getFileSize (filename.c_str ());
    if (!fileSize)
        errx (1, "could not stat file");
    
    logger->debug ("file size: %lu\n", fileSize);
    pcap = pcap_open_offline_with_tstamp_precision (filename.c_str (),
                                                    PCAP_TSTAMP_PRECISION_NANO,
                                                    errorBuffer);

    if (pcap_loop (pcap, 0, packetCb, (u_char*)&buff) < 0)
        errx (1, "pcap oop failed! aborting");
    
    return 0;
}

