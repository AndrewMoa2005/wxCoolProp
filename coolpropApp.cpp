/***************************************************************
 * Name:      coolpropApp.cpp
 * Purpose:   Code for Application Class
 * Author:    陈瑞祥 (Andrew.Moa2005@163.om)
 * Created:   2020-03-08
 * Copyright: 陈瑞祥 ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "coolpropApp.h"
#include "coolpropMain.h"

IMPLEMENT_APP(coolpropApp);

bool coolpropApp::OnInit()
{
	coolpropFrame* frame = new coolpropFrame(0L);
	frame->SetIcon(wxICON(aaaa)); // To Set App Icon
	frame->Show();

	return true;
}
