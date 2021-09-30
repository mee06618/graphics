
// 20151672_P2View.h: CMy20151672P2View 클래스의 인터페이스
//

#pragma once


class CMy20151672P2View : public CView
{
protected: // serialization에서만 만들어집니다.
	CMy20151672P2View() noexcept;
	DECLARE_DYNCREATE(CMy20151672P2View)

// 특성입니다.
public:
	CMy20151672P2Doc* GetDocument() const;

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 구현입니다.
public:
	virtual ~CMy20151672P2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
public:
	HGLRC m_hRC;
	CDC* m_pDC;
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	bool InitializeOpenGL();
	bool SetupPixelFormat();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	void RenderScene();
};

#ifndef _DEBUG  // 20151672_P2View.cpp의 디버그 버전
inline CMy20151672P2Doc* CMy20151672P2View::GetDocument() const
   { return reinterpret_cast<CMy20151672P2Doc*>(m_pDocument); }
#endif

