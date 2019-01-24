# fixCodec

- [Introduction](#introduction)
- [Data Dictionary](#data-dictionary) 
    - [Structure](#data-dictionary-structure)
- [Validation](#validation)

# Introduction

This FIX codec implementation has been designed with flexibility in mind, and 
requires minimal setup. Message validation is mostly the responsibility of the
calling application, allowing users to do as much or as little validation as
they like.

If no data dictionary is specified the codec will:

- store all values as strings within the CDR
- not interpret repeating groups
- encoding will require that the CDR is populated in the required FIX field order e.g. Header fields must be entered into the CDR first

BodyLength and CheckSum will be computed, the user is not required to pass these into the codec.

# Data Dictionary

An example of providing a dictionary to the codec is shown below.

```cpp
string err;
if (!mCodec->loadDataDictionary ("FIX42.xml", err))
    cerr << err << endl;
```

If a data dictionary is configured the codec will:

- parse values into appropriate data types e.g. PRICE to double
- support decoding repeating groups

If a value cannot be converted to the type specified in the data dictionary
a GW_CODEC_ERROR will be returned indicating an invalid value has been provided.

Repeating groups will be stored in the CDR as a cdrArray. The following shows 
creation/extraction of the structure of the cdr for NoPartyIDs (Tag 453).

```cpp
cdr partyOne;
partyOne.setString (PartyID, "id1");
partyOne.setString (PartyIDSource, "D");

cdr partyTwo;
partyTwo.setString (PartyID, "id2");
partyTwo.setString (PartyIDSource, "D");

cdr fixMsg;
fixMsg.appendArray (NoPartyIDs, partyOne);
fixMsg.appendArray (NoPartyIDs, partyTwo);

cout << fixMsg.getArraySize (NoPartyIDs) << endl; // 2

cdrArray* parties = NULL;
fixMsg.getArray (NoPartyIDs, (const cdrArray**)(&parties));

for (cdrArray::const_iterator it = parties->begin ();
     it != parties.end ();
     ++it)
{
    cout << it->toString () << endl; // 448=id[1|2],447=D
}
```

## Data Dictionary Structure

The dictionary is stored in the same XML format as quickfix but not all of the data
will be used, specifically the codec does not need to be aware of all
message contents, but rather only the group(s) and group contents. Field definitions
are required ONLY for fields that are not to be treated as strings.

The following example shows a minimal XML configuration.

```xml
<fix type='FIX' major='4' minor='2' servicepack='0'>
    <messages>
        ...
        <message name='Logon' msgtype='A' msgcat='admin'>
            <group name='NoMsgTypes' required='N'>
                <field name='RefMsgType' required='N' />
                <field name='MsgDirection' required='N' />
            </group>
        </message>
        ...
    </messages>
    <fields>
        <field number='1' name='Account' type='STRING' />
        <field number='2' name='AdvId' type='STRING' />
        <field number='3' name='AdvRefID' type='STRING' />
        <field number='4' name='AdvSide' type='CHAR'>
        ...
    </fields>
</fix>
```

The following types can be specified within the XML file, any other type not
in this list will be treated as a string

- **Integer Types**: INT, LENGTH, DAYOFMONTH 
- **Double Types**: QTY, FLOAT, PRICE, PRICEOFFSET, AMT
- **Datetime Types**: UTCTIMESTAMP, UTCDATE, UTCTIMEONLY, MONTHYEAR, UTCDATE, LOCALMKTDATE

# Validation

It is up to the implementing application to carry out as much or as little 
validation as it requires. The codec will validate the structural integrity of
the message, and ensure that the following fields are present:

- BeginString
- BodyLength
- MsgType
- Checksum

The checksum of the message will be validated and a GW_CODEC_ABORT thrown if it
is incorrect.

When a dictionary is provided if a value cannot be converted to the type specified
in the data dictionary a GW_CODEC_ERROR will be returned indicating an invalid
value has been provided for that field.