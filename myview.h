
// myview.h : interface of the myview class
//

#pragma once


class myview : public CView
{
protected: // create from serialization only
	myview() noexcept;
	DECLARE_DYNCREATE(myview)

// Attributes
public:
	mydocument* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~myview();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in myview.cpp
inline mydocument* myview::GetDocument() const
   { return reinterpret_cast<mydocument*>(m_pDocument); }
#endif

