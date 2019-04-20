//===========================================================================//
//                                                                           //
//  Copyright (C) 2009 - 2017                                                //
//  IDS Imaging GmbH                                                         //
//  Dimbacherstr. 6-8                                                        //
//  D-74182 Obersulm-Willsbach                                               //
//                                                                           //
//  The information in this document is subject to change without            //
//  notice and should not be construed as a commitment by IDS Imaging GmbH.  //
//  IDS Imaging GmbH does not assume any responsibility for any errors       //
//  that may appear in this document.                                        //
//                                                                           //
//  This document, or source code, is provided solely as an example          //
//  of how to utilize IDS software libraries in a sample application.        //
//  IDS Imaging GmbH does not assume any responsibility for the use or       //
//  reliability of any portion of this document or the described software.   //
//                                                                           //
//  General permission to copy or modify, but not for profit, is hereby      //
//  granted,  provided that the above copyright notice is included and       //
//  reference made to the fact that reproduction privileges were granted	 //
//	by IDS Imaging GmbH.				                                     //
//                                                                           //
//  IDS cannot assume any responsibility for the use or misuse of any        //
//  portion of this software for other than its intended diagnostic purpose	 //
//  in calibrating and testing IDS manufactured cameras and software.		 //
//                                                                           //
//===========================================================================//

#if !defined(AFX_UEYEDIRECTRENDERER_H__2FB55A27_05FF_4407_900A_0F219C9952C2__INCLUDED_)
#define AFX_UEYEDIRECTRENDERER_H__2FB55A27_05FF_4407_900A_0F219C9952C2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"


class CUEyeDirectRendererApp : public CWinApp
{
public:
	CUEyeDirectRendererApp ();

	virtual BOOL InitInstance ();

    DECLARE_MESSAGE_MAP ()
};

#endif // !defined(AFX_UEYEDIRECTRENDERER_H__2FB55A27_05FF_4407_900A_0F219C9952C2__INCLUDED_)
