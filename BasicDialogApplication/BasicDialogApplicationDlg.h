
// BasicDialogApplicationDlg.h : header file
//

#pragma once


// CBasicDialogApplicationDlg dialog
class CBasicDialogApplicationDlg : public CDialogEx
{
// Construction
public:
	CBasicDialogApplicationDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_BASICDIALOGAPPLICATION_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonGreeting();
private:
	// Value displayed in the message/caption
	CString m_messageString;
};
