
// ChildView.h : ��������� ������ CChildView
//


#pragma once

#include "My2DObject13.h"
#include <vector>

// ���� CChildView

class CChildView : public CWnd
{
// ��������
public:
	CChildView();

// ��������
protected:
	//CMy2DObject13 figure;
	std::vector<CMy2DObject13*> m_Objects;
	int m_nCacthed;
	//int m_bCatched;
	CPoint m_MousePos;
	int FindObject(CPoint point);

// ��������
public:

// ���������������
	protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	

// ����������
public:
	virtual ~CChildView();

	// ��������� ������� ����� ���������
protected:
	afx_msg void OnPaint();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnNewFigure();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
};

