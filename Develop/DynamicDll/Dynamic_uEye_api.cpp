// ############################################################################
//
//  Project:  CuEyeDll Dynymic loading of uEye DLL
//
//  Module:    Dynamic_uEye_api.cpp  
//
//  Target:    Win32    Win NT
//
// ----------------------------------------------------------------------------
//  History:  Ed   When   Who   What                          in Version
//  -------- ---- ------- ---- ------------------------------ -----------------
//
// ----------------------------------------------------------------------------
//
// ############################################################################

//////////////////////////////////////////////////////////////////////
#include "Dynamic_uEye_api.h"
#include <tchar.h>

CuEyeDll::CuEyeDll()
{
    m_hMod = NULL;
}


CuEyeDll::~CuEyeDll()
{
    Disconnect();
}


bool CuEyeDll::IsLoaded()
{
    return m_hMod!=NULL;
}


bool CuEyeDll::_SetPointers(bool Load)
{
    int tried  = 0;
    int made   = 0;

#define UEYE_MACRO_DO(name) tried++;if (!Load) \
    { \
    made++; \
    is_##name=NULL; \
    } \
                       else \
    { \
    if ((is_##name=(IS__##name)GetProcAddress(m_hMod,"is_"#name))!=NULL) \
    made++; \
    }
#define DECLARE(pars)

#include "uEye_api_Macro.h"

#undef DECLARE
#undef UEYE_MACRO_DO

    return tried==made;
}


long CuEyeDll::Connect(const TCHAR* dllname)
{
    long lRet = ICB_SUCCESS;

    if (dllname != NULL)
    {
        if (_tcslen(dllname) != 0)
        {
            m_hMod = LoadLibrary(dllname);

            if (m_hMod != NULL)
            {                       
                if (!_SetPointers(true))
                {
                    Disconnect();
                    lRet = ICB_NO_SUCCESS;
                }
            }
            else
                lRet = ICB_NO_SUCCESS;
        }
        else
            lRet = ICB_NO_SUCCESS;
    }
    else
        lRet = ICB_NO_SUCCESS;

    return lRet;
}


long CuEyeDll::Disconnect()
{
    _SetPointers(false);
    if (m_hMod != NULL)
        FreeLibrary(m_hMod);
    m_hMod = NULL;
    return ICB_SUCCESS;
}
