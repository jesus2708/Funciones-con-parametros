#pragma once  //______________________________________ Asterisk.h  
#include "Resource.h"
class Asterisk: public Win::Dialog
{
public:
	Asterisk()
	{
	}
	~Asterisk()
	{
	}
	void Line(int asteriskCount);
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbx1;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(3.17500);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(2.69875);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Asterisk";
		tbx1.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_MULTILINE | ES_LEFT | ES_WINNORMALCASE, 0.55563, 0.29104, 2.43417, 2.22250, hWnd, 1000);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		tbx1.Font = fontArial009A;
	}
	//_________________________________________________
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		return false;
	}
};
