#include <stdint.h>
#include <err.h>
#include <iostream>
#include "lseCodec.h"
#include "codec.h"
#include "codecFactory.h"
#include "cdr.h"
#include "fields.h"

using namespace std;
using namespace neueda;

int main ()
{
    cdr d;
    d.setString(MessageType, "A");
    d.setString(UserName, "username");
    d.setString(Password, "password");
    d.setString(NewPassword, "password1");
    d.setInteger(MessageVersion, 0);

    cout << "prior to encoding lse logon message:" << endl;
    cout << codec::prettyPrintCdr (d) << endl;

    string err;
    codec* lse;
    codecFactory cf;
    if (!cf.get ("lse", lse, err))
        errx (1, "failed to retrieve lse codec %s", err.c_str ());

    char buf[1024];
    size_t used = 0;
    codecState state;
    
    cout << "\nencoding..." << endl;
    state = lse->encode (d, buf, sizeof (buf), used);
    if (state != GW_CODEC_SUCCESS)
        errx (1, "encode error: %s", lse->getLastError ().c_str ());
    
    cdr r;
    used = 0;
    state = lse->decode (r, buf, sizeof (buf), used);
    if (state != GW_CODEC_SUCCESS)
        errx (1, "decode error: %s", lse->getLastError ().c_str ());

    cout << "\ndecoded (includes header fields):" << endl;
    cout << codec::prettyPrintCdr (r) << endl;
}
