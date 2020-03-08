///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif //WX_PRECOMP

#include "GUIFrame.h"

///////////////////////////////////////////////////////////////////////////

GUIFrame::GUIFrame(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxSize(780, 340), wxDefaultSize);

	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer(0, 3, 5, 5);
	fgSizer1->SetFlexibleDirection(wxBOTH);
	fgSizer1->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

	fgSizer1->SetMinSize(wxSize(780, 340));
	label1 = new wxStaticText(this, wxID_ANY, wxT("Fluid Type"), wxDefaultPosition, wxDefaultSize, 0);
	label1->Wrap(-1);
	fgSizer1->Add(label1, 0, wxALIGN_CENTER_VERTICAL | wxALIGN_RIGHT | wxALL, 5);

	fluidTypeCB = new wxComboBox(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY);
	fgSizer1->Add(fluidTypeCB, 0, wxALIGN_CENTER_VERTICAL | wxALL | wxEXPAND, 5);

	aboutButton = new wxButton(this, wxID_ANY, wxT("About"), wxDefaultPosition, wxDefaultSize, 0);
	fgSizer1->Add(aboutButton, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	label2 = new wxStaticText(this, wxID_ANY, wxT("Fluid"), wxDefaultPosition, wxDefaultSize, 0);
	label2->Wrap(-1);
	fgSizer1->Add(label2, 0, wxALIGN_CENTER_VERTICAL | wxALIGN_RIGHT | wxALL, 5);

	fluidCB = new wxComboBox(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY);
	fgSizer1->Add(fluidCB, 0, wxALIGN_CENTER_VERTICAL | wxALL | wxEXPAND, 5);

	fluidButton = new wxButton(this, wxID_ANY, wxT("Fluid Param"), wxDefaultPosition, wxDefaultSize, 0);
	fgSizer1->Add(fluidButton, 0, wxALIGN_CENTER_VERTICAL | wxALL, 5);

	label4 = new wxStaticText(this, wxID_ANY, wxT("Input 1"), wxDefaultPosition, wxDefaultSize, 0);
	label4->Wrap(-1);
	fgSizer1->Add(label4, 0, wxALIGN_CENTER_VERTICAL | wxALIGN_RIGHT | wxALL, 5);

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer(wxVERTICAL);

	input1CB = new wxComboBox(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY);
	bSizer1->Add(input1CB, 0, wxALL | wxEXPAND, 5);

	input1SE = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	bSizer1->Add(input1SE, 0, wxALL | wxEXPAND, 5);


	fgSizer1->Add(bSizer1, 1, wxALIGN_CENTER_VERTICAL | wxEXPAND, 5);

	input1LE = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE | wxTE_READONLY);
	input1LE->SetMinSize(wxSize(350, 50));

	fgSizer1->Add(input1LE, 0, wxALIGN_CENTER_VERTICAL | wxALL | wxEXPAND, 5);

	label5 = new wxStaticText(this, wxID_ANY, wxT("Input 2"), wxDefaultPosition, wxDefaultSize, 0);
	label5->Wrap(-1);
	fgSizer1->Add(label5, 0, wxALIGN_CENTER_VERTICAL | wxALIGN_RIGHT | wxALL, 5);

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer(wxVERTICAL);

	input2CB = new wxComboBox(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY);
	bSizer2->Add(input2CB, 0, wxALL | wxEXPAND, 5);

	input2SE = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	bSizer2->Add(input2SE, 0, wxALL | wxEXPAND, 5);


	fgSizer1->Add(bSizer2, 1, wxALIGN_CENTER_VERTICAL | wxEXPAND, 5);

	input2LE = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE | wxTE_READONLY);
	input2LE->SetMinSize(wxSize(350, 50));

	fgSizer1->Add(input2LE, 0, wxALIGN_CENTER_VERTICAL | wxALL | wxEXPAND, 5);

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer(wxVERTICAL);

	label3 = new wxStaticText(this, wxID_ANY, wxT("Output"), wxDefaultPosition, wxDefaultSize, 0);
	label3->Wrap(-1);
	bSizer3->Add(label3, 0, wxALIGN_RIGHT | wxALL, 5);

	outputBottom = new wxButton(this, wxID_ANY, wxT("Calculate"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer3->Add(outputBottom, 0, wxALL, 5);


	fgSizer1->Add(bSizer3, 1, wxALIGN_CENTER_VERTICAL | wxEXPAND, 5);

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer(wxVERTICAL);

	outputCB = new wxComboBox(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY);
	bSizer4->Add(outputCB, 0, wxALL | wxEXPAND, 5);

	outputSE = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY);
	bSizer4->Add(outputSE, 0, wxALL | wxEXPAND, 5);


	fgSizer1->Add(bSizer4, 1, wxALIGN_CENTER_VERTICAL | wxEXPAND, 5);

	outputLE = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE | wxTE_READONLY);
	outputLE->SetMinSize(wxSize(350, 50));

	fgSizer1->Add(outputLE, 0, wxALIGN_CENTER_VERTICAL | wxALL | wxEXPAND, 5);


	this->SetSizer(fgSizer1);
	this->Layout();

	// Connect Events
	this->Connect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(GUIFrame::OnClose));
	fluidTypeCB->Connect(wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler(GUIFrame::OnFluidTypeSelection), NULL, this);
	aboutButton->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(GUIFrame::OnAbout), NULL, this);
	fluidCB->Connect(wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler(GUIFrame::OnFluidSelection), NULL, this);
	fluidButton->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(GUIFrame::OnFluidButton), NULL, this);
	input1CB->Connect(wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler(GUIFrame::OnInput1Selection), NULL, this);
	input2CB->Connect(wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler(GUIFrame::OnInput2Selection), NULL, this);
	outputBottom->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(GUIFrame::OnCalculate), NULL, this);
	outputCB->Connect(wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler(GUIFrame::OnOutputSelection), NULL, this);
}

GUIFrame::~GUIFrame()
{
	// Disconnect Events
	this->Disconnect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(GUIFrame::OnClose));
	fluidTypeCB->Disconnect(wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler(GUIFrame::OnFluidTypeSelection), NULL, this);
	aboutButton->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(GUIFrame::OnAbout), NULL, this);
	fluidCB->Disconnect(wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler(GUIFrame::OnFluidSelection), NULL, this);
	fluidButton->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(GUIFrame::OnFluidButton), NULL, this);
	input1CB->Disconnect(wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler(GUIFrame::OnInput1Selection), NULL, this);
	input2CB->Disconnect(wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler(GUIFrame::OnInput2Selection), NULL, this);
	outputBottom->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(GUIFrame::OnCalculate), NULL, this);
	outputCB->Disconnect(wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler(GUIFrame::OnOutputSelection), NULL, this);

}
