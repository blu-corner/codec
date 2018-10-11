/*
 * Copyright 2014-2018 Neueda Ltd.
 * 
 * Generated 22:51:13 05/10/18
 */
#ifndef _OPTIQ_QUOTESCLEARINGDATASET_PACKET_H_
#define _OPTIQ_QUOTESCLEARINGDATASET_PACKET_H_

#include <string>
#include <sstream>
#include <stdint.h>

#include "optiqConstants.h"
#include "optiqPacketUtils.h"
/* #include "OptiqMessageHeaderPacket.h" */


namespace neueda
{

PACKED(class optiqQuotesClearingDatasetPacket
{
public:
        char mClearingFirmID[8];
        char mClientID[8];
        char mAccountNumber[12];
        uint8_t mTechnicalOrigin;
        uint16_t mOpenClose;
        uint8_t mClearingInstruction;
        char mFreeText[18];

    optiqQuotesClearingDatasetPacket ()
    {
        memset (mClearingFirmID, 0, 8);
        memset (mClientID, 0, 8);
        memset (mAccountNumber, 0, 12);
        mTechnicalOrigin = 0;
        mOpenClose = 0;
        mClearingInstruction = 0;
        memset (mFreeText, 0, 18);
    }

    
    string getClearingFirmID () const
    {
        return getString (mClearingFirmID, sizeof (mClearingFirmID));
    }

    bool setClearingFirmID (const string& val)
    {
        return setString (mClearingFirmID, val, sizeof (mClearingFirmID));
    }
    
    string getClientID () const
    {
        return getString (mClientID, sizeof (mClientID));
    }

    bool setClientID (const string& val)
    {
        return setString (mClientID, val, sizeof (mClientID));
    }
    
    string getAccountNumber () const
    {
        return getString (mAccountNumber, sizeof (mAccountNumber));
    }

    bool setAccountNumber (const string& val)
    {
        return setString (mAccountNumber, val, sizeof (mAccountNumber));
    }
    
    uint8_t getTechnicalOrigin () const
    {
        return mTechnicalOrigin;
    }

    bool setTechnicalOrigin (uint8_t val)
    {
        mTechnicalOrigin = val;
        return true;
    }
    
    uint16_t getOpenClose () const
    {
        return mOpenClose;
    }

    bool setOpenClose (uint16_t val)
    {
        mOpenClose = val;
        return true;
    }
    bool getOpenClose_FieldActivelyUsed () const
    {
        return ((mOpenClose >> OPTIQ_OPENCLOSE_FIELDACTIVELYUSED) & 1);
    }

    void setOpenClose_FieldActivelyUsed ()
    {
        mOpenClose |= OPTIQ_OPENCLOSE_FIELDACTIVELYUSED;
    }

    bool getOpenClose_Leg1 () const
    {
        return ((mOpenClose >> OPTIQ_OPENCLOSE_LEG1) & 1);
    }

    void setOpenClose_Leg1 ()
    {
        mOpenClose |= OPTIQ_OPENCLOSE_LEG1;
    }

    bool getOpenClose_Leg2 () const
    {
        return ((mOpenClose >> OPTIQ_OPENCLOSE_LEG2) & 1);
    }

    void setOpenClose_Leg2 ()
    {
        mOpenClose |= OPTIQ_OPENCLOSE_LEG2;
    }

    bool getOpenClose_Leg3 () const
    {
        return ((mOpenClose >> OPTIQ_OPENCLOSE_LEG3) & 1);
    }

    void setOpenClose_Leg3 ()
    {
        mOpenClose |= OPTIQ_OPENCLOSE_LEG3;
    }

    bool getOpenClose_Leg4 () const
    {
        return ((mOpenClose >> OPTIQ_OPENCLOSE_LEG4) & 1);
    }

    void setOpenClose_Leg4 ()
    {
        mOpenClose |= OPTIQ_OPENCLOSE_LEG4;
    }

    bool getOpenClose_Leg5 () const
    {
        return ((mOpenClose >> OPTIQ_OPENCLOSE_LEG5) & 1);
    }

    void setOpenClose_Leg5 ()
    {
        mOpenClose |= OPTIQ_OPENCLOSE_LEG5;
    }

    bool getOpenClose_Leg6 () const
    {
        return ((mOpenClose >> OPTIQ_OPENCLOSE_LEG6) & 1);
    }

    void setOpenClose_Leg6 ()
    {
        mOpenClose |= OPTIQ_OPENCLOSE_LEG6;
    }

    bool getOpenClose_Leg7 () const
    {
        return ((mOpenClose >> OPTIQ_OPENCLOSE_LEG7) & 1);
    }

    void setOpenClose_Leg7 ()
    {
        mOpenClose |= OPTIQ_OPENCLOSE_LEG7;
    }

    bool getOpenClose_Leg8 () const
    {
        return ((mOpenClose >> OPTIQ_OPENCLOSE_LEG8) & 1);
    }

    void setOpenClose_Leg8 ()
    {
        mOpenClose |= OPTIQ_OPENCLOSE_LEG8;
    }

    bool getOpenClose_Leg9 () const
    {
        return ((mOpenClose >> OPTIQ_OPENCLOSE_LEG9) & 1);
    }

    void setOpenClose_Leg9 ()
    {
        mOpenClose |= OPTIQ_OPENCLOSE_LEG9;
    }

    
    uint8_t getClearingInstruction () const
    {
        return mClearingInstruction;
    }

    bool setClearingInstruction (uint8_t val)
    {
        mClearingInstruction = val;
        return true;
    }
    
    string getFreeText () const
    {
        return getString (mFreeText, sizeof (mFreeText));
    }

    bool setFreeText (const string& val)
    {
        return setString (mFreeText, val, sizeof (mFreeText));
    }

});

} // namespace neueda

#endif
