//===========================================================================//
//                                                                           //
//  Copyright (C) 2012 - 2017                                                //
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

#pragma once
#include "Camera.h"
#include "afxcmn.h"

// CCameraConfiguration-Dialogfeld

class CCameraConfiguration : public CPropertyPage
{
	DECLARE_DYNAMIC(CCameraConfiguration)

public:
	CCameraConfiguration();
	virtual ~CCameraConfiguration();

	// Dialogfelddaten
	enum { IDD = IDD_DIALOG_TIMING };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterstützung
	virtual BOOL OnInitDialog();
	BOOL PreTranslateMessage(MSG* pMsg);
	DECLARE_MESSAGE_MAP()

	// Functions
	void UpdateControls();
	void UpdatePixelClock();
	void UpdateFramerate();
	void UpdateExposure();

    void UpdateNextPixelclock();
    void UpdatePrevPixelclock();

public:
	void SetCameraHandle(Camera *pCam);

private:
	// handle to camera
	Camera *m_pCam;

	// slider
	CSliderCtrl m_sliderPixelClock;
	CSliderCtrl m_sliderFrame;
	CSliderCtrl m_sliderExpousure;

	// variables
	int	m_nPixelClock;
	int	m_nMaxPixelclock;
	int	m_nMinPixelclock;

	int	m_nPixelClockList[150];
	int	m_nNumberOfSupportedPixelClocks;

	double	m_dblMinExp;
	double	m_dblMaxExp;
	double	m_dblIncExp;

	bool m_bUpDown;

public:
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);

	afx_msg void OnDeltaposPixelclock(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnDeltaposFramerate(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnDeltaposTime(NMHDR *pNMHDR, LRESULT *pResult);

	afx_msg void OnBnClickedButtonDefault();
	afx_msg void OnBnClickedCheckNormal();
	afx_msg void OnBnClickedCheckFittowindow();

	afx_msg void OnEnKillfocusEditPixelclock();
	afx_msg void OnEnKillfocusEditFramerate();
	afx_msg void OnEnKillfocusEditExposure();

	afx_msg void OnEnChangeEditPixelclock();

	afx_msg void OnBnSetfocusCheckNormal();

	afx_msg void OnNMCustomdrawSliderPixelclock(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNMCustmdrawSliderPixelclock(NMHDR *pNMHDR, LRESULT *pResult);
};
