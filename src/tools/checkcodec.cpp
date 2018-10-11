#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <strings.h>
#include <stdlib.h>
#include <stdint.h>
#include "cdr.h"
#include "codec.h"
#include "codecFactory.h"

using namespace std;
using namespace neueda;

static char HELP[] =
"\
Usage:\n\
   checkcodec [options] codec files...\n\
\n\
Description:\n\
   Checks a codec by decoding and encoding input files and comparing their\n\
   byte streams. If differences are found, the tool tries to compare both\n\
   CDRs to give further information. Optionally, encoded byte stream can\n\
   be dumped to a file.\n\
\n\
Options:\n\
   -d   Dump encoded files.\n\
   -h   Displays this help and exists.\n\
\n\
Examples:\n\
   >> checkcodec xetra sent.dat received.dat\n\
      Checks xetra codec with sent.dat and received.dat.\n\
   >> checkcodec -d xetra samples/*.dat\n\
      Checks xetra codec with .dat files in samples and dumps encoded files.\n\
";

typedef struct Context
{
    string codec;
    vector<string> filenames;
    bool dumpEncodedFiles;

    Context (): dumpEncodedFiles (false)
    {}
}
Context;

static void checkArguments(Context &ctx, int argc, char **argv)
{
    if (argc < 3)
    {
        cout << HELP << endl;
        exit (-1);
    }

    for (int i = 1; i < argc; i++)
    {
        if (strcasecmp (argv[i], "-d") == 0)
            ctx.dumpEncodedFiles = true;
        else if (strcasecmp (argv[i], "-h") == 0)
        {
            cout << HELP << endl;
            exit (0);
        }
        else if (ctx.codec.empty ())
            ctx.codec.assign (std::string (argv[i]));
        else
            ctx.filenames.push_back (std::string (argv[i]));
    }
}

static bool readBinFile (const string &filename, vector<uint8_t>& buffer)
{
    // open file
    FILE *f = fopen (filename.c_str (), "rb");
    if (!f) return false;

    // create a buffer with its size
    fseek (f, 0, SEEK_END);
    size_t size = ftell (f);
    buffer = vector<uint8_t> (size);

    // read contents into buffer
    fseek (f, 0, SEEK_SET);
    size_t readSize = fread (buffer.data (), size, 1, f);
    fclose (f);
    return (readSize == 1);
}

static bool writeBinFile (const string& filename, const vector<uint8_t>& buffer)
{
    FILE *f = fopen (filename.c_str (), "wb");
    size_t writeSize = fwrite (buffer.data (), buffer.size (), 1, f);
    fclose (f);
    return (writeSize == 1);
}

static unsigned cdrDiff (const cdr& reference, const cdr& copy, stringstream& err, const string& indent = "  ", const string& currentPath = "")
{
    unsigned result = 0;
    for (cdr::const_iterator itRef = reference.begin (); itRef != reference.end (); ++itRef)
    {
        stringstream path;
        path << currentPath << "/" << FieldUtils::getFieldName (itRef->first) << "(" << itRef->first << ")";
        if (!copy.contains (itRef->first))
        {
            err << indent << "Missing key " << path.str() << " in copy." << endl;
            result += 1;
            continue;
        }

        const cdrItem *copyItem = copy.getItem (itRef->first);
        if (copyItem->mType != itRef->second.mType)
        {
            string refType, copyType;
            itRef->second.asString (refType);
            copyItem->asString (copyType);
            err << indent << "Wrong type for key " << path.str () << ": " << refType << " vs " << copyType << "." << endl;
            result += 1;
        }
        else if (itRef->second.mType != CDR_ARRAY)
        {
            string refValue, copyValue;
            itRef->second.asString (refValue);
            copyItem->asString (copyValue);
            if (refValue != copyValue)
            {
                err << indent << "Wrong value for key " << path.str () << ": [" << refValue << "] vs [" << copyValue << "]." << endl;
                result += 1;
            }
        }
        else if (itRef->second.mType == CDR_ARRAY)
        {
            if (copyItem->mArray.size () != itRef->second.mArray.size ())
            {
                err << indent << "Wrong size for array key " << path.str () << ": " << itRef->second.mArray.size () << " vs " << copyItem->mArray.size () << "." << endl;
                result += 1;
            }
            for (size_t i = 0; i < itRef->second.mArray.size (); i++)
                result += cdrDiff (itRef->second.mArray[i], copyItem->mArray[i], err, indent, path.str ());
        }
        else
        {
            err << indent << "Unknown type " << itRef->second.mType << "." << endl;
            result += 1;
        }
    }
    return result;
}

static bool checkMessage(codec* c, uint8_t *inputPtr, size_t len, size_t offset, size_t& usedInput, uint8_t *outputPtr, stringstream& err)
{
    // common variables
    cdr inputCdr;
    usedInput = 0;
    codecState state;

    // decode message from input
    state = c->decode (inputCdr, inputPtr, len, usedInput);
    if (state != GW_CODEC_SUCCESS)
    {
        err << "Decoding failure: " << c->getLastError () << "." << endl;
        return false;
    }

    // encode message from previous CDR
    size_t usedOutput;
    state = c->encode (inputCdr, outputPtr, len, usedOutput);
    if (state != GW_CODEC_SUCCESS)
    {
        err << "Encoding failure: " << c->getLastError () << "." << endl;
        return false;
    }

    // debug by scrambling bytes
    /*
    //cout << "CDR: " << inputCdr.toString () << endl;
    for (int i = 0; i < rand()%10; i++)
    {
        size_t os = rand() % usedOutput;
        //cout << os << endl;
        outputPtr[os] = rand();
    }
    */

    // compare encodings
    if (usedInput != usedOutput)
    {
        err << "Different size when encoding message: " << usedInput << " vs " << usedOutput << "." << endl;
        return false;
    }

    // compare bytestreams
    for (size_t i = 0; i < usedInput; i++)
        if (inputPtr[i] != outputPtr[i])
        {
            // report binary difference
            err << "Difference at offset " << (offset + i) << ": ";
            err << "0x" << uppercase << setfill('0') << setw(2) << hex << (int) inputPtr[i];
            err << " vs ";
            err << "0x" << uppercase << setfill('0') << setw(2) << hex << (int) outputPtr[i];
            err << endl;

            // re-decode message and compare with previous CDR
            cdr outputCdr;
            state = c->decode (outputCdr, outputPtr, len, usedOutput);
            if (state == GW_CODEC_SUCCESS && usedInput == usedOutput)
            {
                err << "CDR Differences:" << endl;
                unsigned differences = cdrDiff (inputCdr, outputCdr, err);
                err << "Discovered " << differences << " differences." << endl;

                cout << "---- inputCdr ----" << endl;
                cout << neueda::codec::prettyPrintCdr (inputCdr) << endl;
                cout << "---- outputCdr ----" << endl;
                cout << neueda::codec::prettyPrintCdr (outputCdr) << endl;
            }
            else
            {
                err << "Could not regenerate CDR to report differences. " << c->getLastError () << endl;
            }
            return false;
        }
    return true;
}

static bool checkFile (const Context& ctx, codec* c, const string& filename, stringstream& err)
{
    cout << "Checking " << c->getType () << " file " << filename << "..." << endl;
    
    vector<uint8_t> input;
    if (!readBinFile (filename, input))
    {
        err << "Cannot read file contents." << endl;
        return false;
    }
    vector<uint8_t> output(input.size ());

    size_t inputLength = input.size ();
    size_t outputLength = 0;
    uint8_t *inputPtr = input.data ();
    uint8_t *outputPtr = output.data ();
    bool result = true;
    while (result && inputLength > 0)
    {
        // check message
        size_t used = 0;
        result = checkMessage (c, inputPtr, inputLength, outputLength, used, outputPtr, err);

        // prepare next iteration
        inputLength -= used;
        outputLength += used;
        inputPtr += used;
        outputPtr += used;
    }

    // dump encoded file
    if (ctx.dumpEncodedFiles)
    {
        output.resize (outputLength); // truncate
        if (!writeBinFile (filename + ".out", output))
            err << "Cannot dump encoded bytestream." << endl;
    }
    return result;
}

int main (int argc, char **argv)
{
    // process arguments
    Context ctx;
    checkArguments (ctx, argc, argv);

    // load codec
    string errorMsg;
    codec* c;
    codecFactory cf;
    if (!cf.get (ctx.codec.c_str (), c, errorMsg))
    {
        cout << "Error loading codec " << ctx.codec << ": " << errorMsg << endl;
        exit (-2);
    }
    // check files
    size_t numErrors = 0;
    for (size_t i = 0; i < ctx.filenames.size (); ++i)
    {
        stringstream error;
        if (checkFile (ctx, c, ctx.filenames[i], error))
            cout << " OK" << endl;
        else
        {
            numErrors++;
            cout << endl << "ERROR: " << error.str () << endl;
        }
    }

    // print results
    if (numErrors == 0)
        cout << "No errors found." << endl;
    else
        cout << numErrors << " errors found of " << ctx.filenames.size () << " analysed files." << endl;
    return numErrors;
}
