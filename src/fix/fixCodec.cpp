#include "fixCodec.h"

namespace neueda
{

bool
fixCodec::getFixFieldFromNode (xmlNode* field, fixField& f) const
{
    string type;
    bool required;
    int64_t tag;

    string name ((const char*)xmlGetProp (field, (const xmlChar*)"name"));
    string req ((const char*)xmlGetProp (field, (const xmlChar*)"required"));

    if (!utils_parseBool (req, required))
        return false;

    fieldNameToTypeMap::const_iterator it = mFieldNameToTypeMap.find (name);
    if (it == mFieldNameToTypeMap.end ())
        return false;

    type = it->second;

    if (!getFixTagByName (name, tag))
        return false;

    f.setTag (tag);
    f.setType (type);
    f.setRequired (required);

    return true;
}

bool
fixCodec::processDictionaryGroup (xmlNode* node, string& err)
{
    xmlNode* field;
    int64_t parentTag = 0;

    string name ((const char*)xmlGetProp (node, (const xmlChar*)"name"));

    if (!getFixTagByName (name, parentTag))
    {
        err.assign ("failed to get fix tag for %s", name.c_str ());
        return false;
    }

    fixGroup* g = new fixGroup (parentTag);

    for (field = node->children; field; field = field->next)
    {
        if (xmlStrcmp (field->name, (const xmlChar*)"field") == 0)
        {
            fixField* f = new fixField ();
            if (!getFixFieldFromNode (field, *f))
            {
                delete g;
                return false;
            }

            g->addField (f);
        }
        else if (xmlStrcmp (field->name, (const xmlChar*)"group") == 0)
        {
            if (!processDictionaryGroup (field, err))
            {
                delete g;
                return false;
            }
        }
    }

    mRepeatingGroups.insert (pair<int64_t, fixGroup*> (parentTag, g));
    return true;
}

bool
fixCodec::processDictionaryMessages (xmlNode* node, string& err)
{
    xmlNode* cur = NULL;
    xmlNode* msg = NULL;
    xmlNode* field = NULL;

    for (cur = node; cur; cur = cur->next)
    {
        if (xmlStrcmp (cur->name, (const xmlChar*)"fix") == 0)
        {
            if (!processDictionaryMessages (cur->children, err))
                return false;
        }
        else if (xmlStrcmp (cur->name, (const xmlChar*)"messages") == 0)
        {
            for (msg = cur->children; msg; msg = msg->next)
            {
                if (xmlStrcmp (msg->name, (const xmlChar*)"message") == 0)
                {
                    for (field = msg->children; field; field = field->next)
                    {
                        if (xmlStrcmp (field->name, (const xmlChar*)"group") == 0)
                        {
                            if (!processDictionaryGroup (field, err))
                                return false;
                        }
                    }
                }
            }
        }
        else if (xmlStrcmp (cur->name, (const xmlChar*)"header") == 0)
        {
            for (field = cur->children; field; field = field->next)
            {
                if (xmlStrcmp (field->name, (const xmlChar*)"field") == 0)
                {
                    fixField ff;
                    if (!getFixFieldFromNode (field, ff))
                    {
                        err.assign ("failed to parse header field");
                        return false;
                    }

                    mHeaderTags.push_back (ff.getTag ());
                }
            }
        }
    }

    return true;
}

bool
fixCodec::processDictionaryFields (xmlNode* node, string& err)
{
    xmlNode* cur = NULL;
    xmlNode* field = NULL;

    for (cur = node; cur; cur = cur->next)
    {
        if (xmlStrcmp (cur->name, (const xmlChar*)"fields") == 0)
        {
            for (field = cur->children; field; field = field->next)
            {
                if (xmlStrcmp (field->name, (const xmlChar*)"field") == 0)
                {
                    xmlChar* t = NULL;
                    int64_t tag;

                    t = xmlGetProp (field, (const xmlChar*)"number");
                    string name ((const char*)xmlGetProp (field, (const xmlChar*)"name"));
                    string type ((const char*)xmlGetProp (field, (const xmlChar*)"type"));

                    if (!utils_parseNumber ((const char*)t, tag))
                    {
                        err.assign ("failed to parse tag to number for field %s",
                                    name.c_str ());
                        return false;
                    }

                    fixField* f = new fixField ();
                    f->setName (name);
                    f->setTag (tag);
                    f->setType (type);
                    mFieldDefs.insert (pair<int64_t, fixField*> (tag, f));

                    mFieldNameToTagMap.insert (pair<string, int64_t> (name, tag));
                    mFieldNameToTypeMap.insert (pair<string, string> (name, type));
                }
            }
        }
        else
        {
            if (!processDictionaryFields (cur->children, err))
                return false;
        }
    }

    return true;
}

bool
fixCodec::loadDataDictionary (const char* xml, string& err)
{
    xmlDoc* doc = NULL;
    xmlNode* root_element = NULL;

    LIBXML_TEST_VERSION

    /*parse the file and get the DOM */
    doc = xmlReadFile (xml, NULL, 0);

    if (doc == NULL)
    {
        err.assign ("error: could not parse file %s\n", xml);
        return false;
    }

    root_element = xmlDocGetRootElement (doc);

    if (!processDictionaryFields (root_element, err))
    {
        err.assign ("failed to process dictionary fields");
        setLastError (err);
        return false;
    }
    if (!processDictionaryMessages (root_element, err))
    {
        err.assign ("failed to process dictionary messages");
        setLastError (err);
        return false;
    }

    return true;
}

codecState
fixCodec::validate (const void* buf,
                    size_t len,
                    size_t& used,
                    string& err)
{
    /* 8=BeginString
       9=BodyLength
       35=MsgType
       .... 
       10=ChkSum 

       BodyLength is length from first tag after 10 to start of 10 */

    if (len <= 2)
        return GW_CODEC_SHORT;

    const char* tmp = (const char*)buf;

    size_t start = used;
    size_t checksumEnd = 0;

    int64_t tag = 0;
    string sval;
    codecState ret;

    ret = decodeTagValue (tmp, len, used, tag, sval);
    if (ret != GW_CODEC_SUCCESS)
        return ret;
        
    if (tag != 8)
    {
        err.assign ("first tag must be BeginString(8)");
        return GW_CODEC_ERROR;
    }

    string stag;

    if ((sval != "FIX.4.2")  &&
        (sval != "FIX.4.3")  &&
        (sval != "FIX.4.4")  &&
        (sval != "FIXT.1.1"))
    {
        utils_toString (tag, stag);
        setLastField (stag);

        err.assign ("invalid fix version " + sval);
        return GW_CODEC_ABORT;
    }    

    ret = decodeTagValue (tmp, len, used, tag, sval);
    if (ret != GW_CODEC_SUCCESS)
        return ret;

    /* Check next field is 9 */
    if (tag != 9)
    {
        err.assign ("second tag must be BodyLength(9)");
        return GW_CODEC_ABORT;
    }

    uint32_t bodyLen;
    if (!utils_parseNumber (sval, bodyLen))
    {
        utils_toString (tag, stag);
        setLastField (stag);

        err.assign ("BodyLength must be a integer");
        return GW_CODEC_ABORT;
    }

    if (used + bodyLen >= len)
        return GW_CODEC_SHORT;

    tmp += bodyLen;
    used += bodyLen;
    // store the point where we process last body field
    checksumEnd = used;

    /* Now should be pointing to tag 10 */
    ret = decodeTagValue (tmp, len, used, tag, sval);
    if (ret != GW_CODEC_SUCCESS)
        return ret;

    if (tag != 10)
    {
        err.assign ("last tag should be CheckSum(10)");
        return GW_CODEC_ABORT;
    }

    if (sval.length() > 3)
    {
        utils_toString (tag, stag);
        setLastField (stag);

        err.assign ("CheckSum tag must be a integer in range 0 - 255");
        return GW_CODEC_ABORT;
    }

    int32_t msgchecksum;
    if (!utils_parseNumber (sval, msgchecksum))
    {
        utils_toString (tag, stag);
        setLastField (stag);

        err.assign ("CheckSum tag must be a integer in range 0 - 255");
        return GW_CODEC_ABORT;
    }

    uint8_t checksum = 0;
    for (int i = start; i < checksumEnd; i++)
        checksum += ((char*)buf)[i]; 

    if (msgchecksum != (checksum))
    {
        utils_toString (tag, stag);
        setLastField (stag);

        err.assign ("CheckSum invalid");
        return GW_CODEC_ABORT;
    }

    used = tmp - (char*)buf;

    return GW_CODEC_SUCCESS;
}

codecState
fixCodec::decodeTagValue (const char*& buf,
                          size_t len,
                          size_t& used,
                          int64_t& tag,
                          string& sval)
{
    string err;
    tag = 0;
    size_t i = 0;
    sval.clear ();

    while (buf[i] != '=')
    {
        if (!isdigit (buf[i]))
        {
            err.assign ("failed to parse tag to integer");
            setLastError (err);
            return GW_CODEC_ABORT;
        }

        tag = (tag * 10) + (buf[i++] - '0');
        if (i >= len)
            return GW_CODEC_SHORT;
    }
    i++; // =

    while (buf[i] != '\001')
    {
        sval.push_back (buf[i++]);

        if (i >= len)
            return GW_CODEC_SHORT;
    }
    i++; // SOH
    buf += i;
    used += i;

    return GW_CODEC_SUCCESS;
}

codecState
fixCodec::decodeGroup (cdr& d,
                       fixGroup* group,
                       const char*& buf,
                       size_t len,
                       size_t& used,
                       int64_t& lastTag,
                       string& lastVal)
{
    int64_t tag;
    string err;
    string sval;
    cdrArray block;
    cdr item;
    fixGroup* nextGroup = NULL;
    codecState ret;

    while (used <= len)
    {
        if (lastTag == 0)
        {
            // we haven't got a lastTag to process so we read the next
            // tag/value
            ret = decodeTagValue (buf, len, used, tag, sval);
            if (ret != GW_CODEC_SUCCESS)
                return ret;
        }
        else
        {
            tag = lastTag;
            sval.assign (lastVal);
        }

        if (group->isFirstTag (tag))
        {
            if (item.size () > 0)
            {
                block.push_back (item);
                item.clear ();
            }
            getFixValue (item, tag, sval);
        }
        else if (group->hasTag (tag))
        {
            if (getRepeatingGroup (tag, nextGroup))
            {
                // nested group
                lastTag = 0;
                lastVal.clear ();
                ret = decodeGroup (item,
                                   nextGroup,
                                   buf,
                                   len,
                                   used,
                                   lastTag,
                                   lastVal);
                if (ret != GW_CODEC_SUCCESS)
                    return ret;
            }
            else
                getFixValue (item, tag, sval);
        }
        else
        {
            if (item.size () > 0)
            {
                block.push_back (item);
                item.clear ();
            }

            d.setArray (group->parent (), block);
            // block.clear ();

            // reached a tag not in group, we store it to lastTag
            // and it will be picked up for processing in the next
            // iteration.
            lastTag = tag;
            lastVal.assign (sval);
            return GW_CODEC_SUCCESS;
        }

        lastTag = 0;
        lastVal.clear ();
    } // while
    return GW_CODEC_SUCCESS;
}

codecState
fixCodec::decode (cdr& target,
                  const void* buf,
                  size_t len,
                  size_t& used)
{
    string err;

    codecState ret;
    ret = validate (buf, len, used, err);
    if (ret != GW_CODEC_SUCCESS)
    {
        setLastError (err);
        return ret;
    }

    string sval;
    string lastVal;

    int64_t tag = 0;
    int64_t lastTag = 0;

    fixGroup* group = NULL;

    const char* tmp = (const char*)buf;

    size_t msgLen = used;
    used = 0;

    while (used < msgLen)
    {
        if (lastTag == 0)
        {
            ret = decodeTagValue (tmp, msgLen, used, tag, sval);
            if (ret != GW_CODEC_SUCCESS)
                return ret;
        }
        else
        {
            tag = lastTag;
            sval.assign (lastVal);

            lastTag = 0;
            lastVal.clear ();
        }

        if (getRepeatingGroup (tag, group))
        {
            ret = decodeGroup (target,
                               group,
                               tmp,
                               msgLen,
                               used,
                               lastTag,
                               lastVal);
            if (ret != GW_CODEC_SUCCESS)
                return ret;

            if (lastTag != 0)
                continue;
        }
        else
        {
            getFixValue (target, tag, sval);
        }

        lastTag = 0;
        lastVal.clear ();
    }

    return GW_CODEC_SUCCESS;
}

codecState
fixCodec::encodeCdr (const cdr& d,
                     void* buf,
                     size_t len,
                     size_t& used)
{
    char* p = (char*)buf;
    codecState state;

    for (cdr::const_iterator it = d.begin (); it != d.end (); ++it)
    {
        // ignore the following fields these will be filled in at the end
        // explicitly ignore BeginString, BodyLength and CheckSum for case
        // where data dictionary is not loaded
        if (isHeaderTag (it->first) || it->first == BeginString ||
            it->first == BodyLength || it->first == CheckSum)
           continue; 

        switch (it->second.mType)
        {
            case CDR_ARRAY:
            {
                char* tmp = p + used;
                tmp += snprintf (p + used, len - used,
                                 "%lld=%lu\001",
                                 it->first, it->second.mArray.size());
                used += tmp - (p + used);

                if (used >= len)
                    return GW_CODEC_SHORT;

                for (cdrArray::const_iterator aIt = it->second.mArray.begin ();
                     aIt != it->second.mArray.end ();
                     ++aIt)
                {
                    state = encodeCdr (*aIt, buf, len, used);
                    if (state != GW_CODEC_SUCCESS)
                        return state;
                }
                break;
            }
            default:
            {
                fixField f;
                if (!getFixFieldDefByTag (it->first, f))
                {
                    state = fixField::setAsString (it->first, it->second, len, p, used);
                    if (state != GW_CODEC_SUCCESS)
                        return state;
                }
                else
                    state = f.set (it->first, it->second, len, p, used);
                    if (state != GW_CODEC_SUCCESS)
                        return state;
                break;
            }
        }
    }

    return GW_CODEC_SUCCESS;
}

codecState
fixCodec::encodeHeader (const string& beginString,
                        const size_t& bodyLen,
                        const string& msgType,
                        char* p,
                        const size_t len,
                        size_t& used)
{
    codecState state;
    // bodyLen += msgType.length () + 1;  // 4 represents 35= & \001

    state = fixField::writeStringVal (BeginString, beginString.c_str (), len, p, used);
    if (state != GW_CODEC_SUCCESS)
        return state;

    string bl;
    utils_toString (bodyLen, bl);
    state = fixField::writeStringVal (BodyLength, bl.c_str (), len, p, used);
    if (state != GW_CODEC_SUCCESS)
        return state;
    //
    // state = fixField::writeStringVal (MsgType, msgType.c_str (), len, p, used);
    // if (state != GW_CODEC_SUCCESS)
    //     return state;

    return GW_CODEC_SUCCESS;
}

codecState
fixCodec::encode (const cdr& d,
                  void* buf,
                  size_t len,
                  size_t& used)
{
    string err;
    codecState state;

    size_t origUsed = used;

    string beginString;
    string msgType;
    size_t bodyLen = 0;

    char* p = (char*)buf;

    if (!d.getString (BeginString, beginString))
    {
        err.assign ("missing required tag BeginString");
        setLastError (err);
        return GW_CODEC_ERROR;
    }

    if (!d.getString (MsgType, msgType))
    {
        err.assign ("missing required tag MsgType");
        setLastError (err);
        return GW_CODEC_ERROR;
    }

    setLastMessage (msgType);

    // iterate through the header fields parsed from the data dictionary
    // and populate these into the buffer first as order is important for
    // these fields
    tags::iterator it;
    for (it = mHeaderTags.begin (); it != mHeaderTags.end (); ++it)
    {
        // ignore begin and length as these will be set later
        if (*it != BeginString && *it != BodyLength)
        {
            if (d.contains (*it))
            {
                const cdrItem* item;
                item = d.getItem (*it);

                fixField ff;
                if (!getFixFieldDefByTag (*it, ff))
                {
                    state = fixField::setAsString (*it, *item, len, p, used);
                    if (state != GW_CODEC_SUCCESS)
                        return state;
                }
                else
                {
                    state = ff.set (*it, *item, len, p, used);
                    if (state != GW_CODEC_SUCCESS)
                        return state;
                }
            }
        }
    }

    state = encodeCdr (d, buf, len, used);
    if (state != GW_CODEC_SUCCESS)
        return state;

    bodyLen = used;

    size_t hdrUsed = 0;
    char hdr[128];
    size_t hdrLen = 128;
    char* h = hdr;

    memset (hdr, '\0', 128);

    state = encodeHeader (beginString, bodyLen, msgType,
                          h, hdrLen, hdrUsed);
    if (state != GW_CODEC_SUCCESS)
        return state;

    if (used + hdrUsed > len)
        return GW_CODEC_SHORT;

    // move along to insert hdr
    memmove ((char*)buf + hdrUsed, (char*) buf, used); 

    // copy hdr in
    memcpy ((char*)buf, hdr, hdrUsed);

    used += hdrUsed;

    uint8_t checksum = 0;
    for (int i = origUsed; i < used; i++)
        checksum += ((char*)buf)[i]; 

    uint32_t cs = (unsigned int)(checksum % 256);

    char s[4];
    snprintf (s, sizeof (s), "%03d", cs);

    // write the checksum and we're done
    return fixField::writeStringVal (CheckSum, s, len, (char*)buf, used);
}

}
