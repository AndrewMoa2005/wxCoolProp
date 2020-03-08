/***************************************************************
 * Name:      coolpropMain.h
 * Purpose:   Defines Application Frame
 * Author:    陈瑞祥 (Andrew.Moa2005@163.om)
 * Created:   2020-03-08
 * Copyright: 陈瑞祥 ()
 * License:
 **************************************************************/

#ifndef COOLPROPMAIN_H
#define COOLPROPMAIN_H

#include "coolpropApp.h"

#include "GUIFrame.h"

class coolpropFrame : public GUIFrame
{
public:
	coolpropFrame(wxFrame* frame);
	~coolpropFrame();
private:
	virtual void OnClose(wxCloseEvent& event);
	virtual void OnFluidTypeSelection(wxCommandEvent& event);
	virtual void OnAbout(wxCommandEvent& event);
	virtual void OnFluidSelection(wxCommandEvent& event);
	virtual void OnFluidButton(wxCommandEvent& event);
	virtual void OnInput1Selection(wxCommandEvent& event);
	virtual void OnInput2Selection(wxCommandEvent& event);
	virtual void OnOutputSelection(wxCommandEvent& event);
	virtual void OnCalculate(wxCommandEvent& event);

	void  updateDescription();
};

#endif // COOLPROPMAIN_H
