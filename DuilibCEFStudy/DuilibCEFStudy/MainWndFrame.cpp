#include "stdafx.h"
#include "MainWndFrame.h"

const std::wstring MainWndFrame::kClassName = L"MyStudyDuilib";
MainWndFrame::MainWndFrame()
{
}


MainWndFrame::~MainWndFrame()
{
}

std::wstring MainWndFrame::GetSkinFolder()
{
	return L"basic";
}

std::wstring MainWndFrame::GetSkinFile()
{
	return L"basic.xml";
}

std::wstring MainWndFrame::GetWindowClassName() const
{
	return kClassName;
}

void MainWndFrame::InitWindow()
{
	// 做一些初始化工作
}

LRESULT MainWndFrame::OnClose(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
{
	PostQuitMessage(0L);
	return __super::OnClose(uMsg, wParam, lParam, bHandled);
}