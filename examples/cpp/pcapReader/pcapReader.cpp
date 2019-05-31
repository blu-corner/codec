#include "codecFactory.h"
#include "properties.h"
#include "logger.h"
#include "codec.h"

#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <arpa/inet.h>

#include <err.h>
#include <pcap.h>
#include <time.h>


/* structs from BSD */
#define ETHER_ADDR_LEN  6
#define SIZE_ETHERNET 14

/* Ethernet header */
struct sniff_ethernet {
    u_char ether_dhost[ETHER_ADDR_LEN]; /* Destination host address */
    u_char ether_shost[ETHER_ADDR_LEN]; /* Source host address */
    u_short ether_type; /* IP? ARP? RARP? etc */
};

/* IP header */
struct sniff_ip {
    u_char ip_vhl;      /* version << 4 | header length >> 2 */
    u_char ip_tos;      /* type of service */
    u_short ip_len;     /* total length */
    u_short ip_id;      /* identification */
    u_short ip_off;     /* fragment offset field */
#define IP_RF 0x8000        /* reserved fragment flag */
#define IP_DF 0x4000        /* dont fragment flag */
#define IP_MF 0x2000        /* more fragments flag */
#define IP_OFFMASK 0x1fff   /* mask for fragmenting bits */
    u_char ip_ttl;      /* time to live */
    u_char ip_p;        /* protocol */
    u_short ip_sum;     /* checksum */
    struct in_addr ip_src,ip_dst; /* source and dest address */
};
#define IP_HL(ip)       (((ip)->ip_vhl) & 0x0f)
#define IP_V(ip)        (((ip)->ip_vhl) >> 4)

/* TCP header */
typedef u_int tcp_seq;

struct sniff_tcp {
    u_short th_sport;   /* source port */
    u_short th_dport;   /* destination port */
    tcp_seq th_seq;     /* sequence number */
    tcp_seq th_ack;     /* acknowledgement number */
    u_char th_offx2;    /* data offset, rsvd */
#define TH_OFF(th)  (((th)->th_offx2 & 0xf0) >> 4)
    u_char th_flags;
#define TH_FIN 0x01
#define TH_SYN 0x02
#define TH_RST 0x04
#define TH_PUSH 0x08
#define TH_ACK 0x10
#define TH_URG 0x20
#define TH_ECE 0x40
#define TH_CWR 0x80
#define TH_FLAGS (TH_FIN|TH_SYN|TH_RST|TH_ACK|TH_URG|TH_ECE|TH_CWR)
    u_short th_win;     /* window */
    u_short th_sum;     /* checksum */
    u_short th_urp;     /* urgent pointer */
};

struct sniff_udp {
  u_short source;
  u_short dest;
  u_short len;
  u_short check;
};

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
packetCb (u_char* args, const struct pcap_pkthdr* hdr, const u_char* pData)
{
    neueda::cdr       cdr;
    size_t            used = 0;
    size_t            consumed = 0;
    const u_char*     payload; 
    dataBuffer*       buff = (dataBuffer*)args;
    codecState        state;
    struct sniff_ip*  ip;
    struct sniff_tcp* tcp;
    size_t            ipLen;
    size_t            sizeIp;
    size_t            sizeTcp;
    size_t            sizePayload;

    ip = (struct sniff_ip*)(pData + SIZE_ETHERNET);
    sizeIp = IP_HL (ip) * 4;
    ipLen = ntohs (ip->ip_len);
    
    if (ip->ip_p != IPPROTO_TCP)
        return;

    tcp = (struct sniff_tcp*)(pData + SIZE_ETHERNET + sizeIp);
    sizeTcp = TH_OFF (tcp) * 4;
    if (sizeTcp < 20)
        errx (1, "invalid tcp packet");

    payload = (pData + SIZE_ETHERNET + sizeIp + sizeTcp);
    sizePayload = ipLen - (sizeIp + sizeTcp);
     
    if (sizePayload == 0)
        return;

    memcpy (buff->mData + buff->mLen, payload, sizePayload);
    buff->mLen += sizePayload;

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
            break;
        case 'v':
            venue.assign (optarg);
            break;
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
                                                    PCAP_TSTAMP_PRECISION_MICRO,
                                                    errorBuffer);

    if (pcap_loop (pcap, 0, packetCb, (u_char*)&buff) < 0)
        errx (1, "pcap oop failed! aborting");
    
    return 0;
}

