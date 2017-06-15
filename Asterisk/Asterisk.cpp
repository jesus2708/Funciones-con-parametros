#include "stdafx.h"  //________________________________________ Asterisk.cpp
#include "Asterisk.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Asterisk app;
	return app.BeginDialog(IDI_Asterisk, hInstance);
}

void Asterisk::Window_Open(Win::Event& e)
{
	Line(3);
	Line(4);
	Line(5);
}
void Asterisk::Line(int asteriskCount)
{
	for (int i = 0; i < asteriskCount; i++)tbx1.Text += L"*";
	tbx1.Text += L"\r\n";
}
