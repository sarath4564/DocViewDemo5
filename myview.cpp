
// myview.cpp : implementation of the myview class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "DocViewDemo5.h"
#endif

#include "mydocument.h"
#include "myview.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// myview

IMPLEMENT_DYNCREATE(myview, CView)

BEGIN_MESSAGE_MAP(myview, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// myview construction/destruction

myview::myview() noexcept
{
	// TODO: add construction code here

}

myview::~myview()
{
}

BOOL myview::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// myview drawing

void myview::OnDraw(CDC*pDC)
{
	pDC->TextOut(10, 20, _T("Welcome to C"));
	
}


// myview printing

BOOL myview::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void myview::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void myview::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// myview diagnostics

#ifdef _DEBUG
void myview::AssertValid() const
{
	CView::AssertValid();
}

void myview::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

mydocument* myview::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(mydocument)));
	return (mydocument*)m_pDocument;
}
#endif //_DEBUG


// myview message handlers
