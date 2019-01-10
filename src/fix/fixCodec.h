#pragma once
#include <stdint.h>
#include <iostream>
#include <map>
#include "cdr.h"
#include "utils.h"
#include "codec.h"
#include "fixGroup.h"
#include "fixField.h"
#include <libxml/parser.h>
#include <libxml/tree.h>

namespace neueda
{

using namespace std;

class fixCodec;

typedef map<int64_t, fixField*> fixFieldDefs;
typedef vector<int64_t> tags;
typedef vector<fixField*> fields;
typedef map<int64_t, fixGroup*> groupMap;
typedef map<string, int64_t> fieldNameToTagMap;
typedef map<string, string> fieldNameToTypeMap;
typedef map<char, fields> msgFieldMap;

class fixCodec: public codec
{
public:
    bool loadDataDictionary (const char* xml, string& err);

    codecState decode (cdr& target,
                       const void* buf,
                       size_t len,
                       size_t& used);

    codecState encode (const cdr& source,
                       void* buf,
                       size_t len,
                       size_t& used);

    string getType () const { return "fix"; }

private:
    codecState encodeCdr (const cdr& d,
                          void* buf,
                          size_t len,
                          size_t& used);

    codecState encodeHeader (const string& beginString,
                             const size_t& bodyLen,
                             const string& msgType,
                             char* p,
                             const size_t len,
                             size_t& used);

    codecState decodeTagValue (char*& buf,
                               size_t len,
                               size_t& used,
                               int64_t& tag,
                               string& val);

    codecState decodeGroup (cdr& d,
                            fixGroup* group,
                            char*& buf,
                            size_t len,
                            size_t& used,
                            int64_t& lastTag,
                            string& lastVal);

    codecState validate (const void* buf,
                         size_t len,
                         size_t& used,
                         string& err);

    void parseFieldType (int64_t tag, string& type);

    bool processDictionaryFields (xmlNode* node, string& err);

    bool processDictionaryGroup (xmlNode* node, string& err);

    bool processDictionaryMessages (xmlNode* node, string& err);

    bool getFixFieldFromNode (xmlNode* node, fixField& f);

    bool getFixTagByName (const string& name, int64_t& tag)
    {
        fieldNameToTagMap::iterator it = mFieldNameToTagMap.find (name);        
        if (it == mFieldNameToTagMap.end ())
            return false;

        tag = it->second;
        return true;
    }

    void getFixValue (cdr& d, int64_t tag, string& val)
    {
        fixField f;
        if (!getFixFieldDefByTag (tag, f))
        {
            // no field def treat as string
            d.setString (tag, val);
        }
        else
            f.get (val.c_str (), d);
    }

    void addGroup (int64_t tag, fixGroup* rg)
    {
        mRepeatingGroups.insert (pair<int64_t, fixGroup*> (tag, rg));
    }

    bool isGroupTag (int64_t tag)
    {
        groupMap::iterator it = mRepeatingGroups.find (tag);
        return it != mRepeatingGroups.end ();
    }

    bool isHeaderTag (int64_t tag)
    {
        if (find (mHeaderTags.begin (), mHeaderTags.end (), tag)
            != mHeaderTags.end ())
            return true;
        else
            return false;
    }

    bool getRepeatingGroup (int64_t tag, fixGroup*& group)
    {
        groupMap::iterator it = mRepeatingGroups.find (tag);
        if (it == mRepeatingGroups.end ())
            return false;
        
        group = it->second;
        return true;
    }

    bool getFixFieldDefByTag (int64_t tag, fixField& f)
    {
        fixFieldDefs::iterator it = mFieldDefs.find (tag);
        if (it == mFieldDefs.end ())
            return false;
        f = *(it->second);
        return true;
    }

    fieldNameToTagMap       mFieldNameToTagMap;
    fieldNameToTypeMap      mFieldNameToTypeMap;
    groupMap                mRepeatingGroups;
    msgFieldMap             mMsgFieldMap;
    tags                    mHeaderTags;
    fixFieldDefs            mFieldDefs;
};

}
