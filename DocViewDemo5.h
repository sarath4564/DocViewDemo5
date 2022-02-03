
// DocViewDemo5.h : main header file for the DocViewDemo5 application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// myapp:
// See DocViewDemo5.cpp for the implementation of this class
//

class myapp : public CWinApp
{
public:
	myapp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern myapp theApp;
