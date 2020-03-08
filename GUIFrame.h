///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/combobox.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class GUIFrame
///////////////////////////////////////////////////////////////////////////////
class GUIFrame : public wxFrame
{
private:

protected:
	wxStaticText* label1;
	wxComboBox* fluidTypeCB;
	wxButton* aboutButton;
	wxStaticText* label2;
	wxComboBox* fluidCB;
	wxButton* fluidButton;
	wxStaticText* label4;
	wxComboBox* input1CB;
	wxTextCtrl* input1SE;
	wxTextCtrl* input1LE;
	wxStaticText* label5;
	wxComboBox* input2CB;
	wxTextCtrl* input2SE;
	wxTextCtrl* input2LE;
	wxStaticText* label3;
	wxButton* outputBottom;
	wxComboBox* outputCB;
	wxTextCtrl* outputSE;
	wxTextCtrl* outputLE;

	// Virtual event handlers, overide them in your derived class
	virtual void OnClose(wxCloseEvent& event) { event.Skip(); }
	virtual void OnFluidTypeSelection(wxCommandEvent& event) { event.Skip(); }
	virtual void OnAbout(wxCommandEvent& event) { event.Skip(); }
	virtual void OnFluidSelection(wxCommandEvent& event) { event.Skip(); }
	virtual void OnFluidButton(wxCommandEvent& event) { event.Skip(); }
	virtual void OnInput1Selection(wxCommandEvent& event) { event.Skip(); }
	virtual void OnInput2Selection(wxCommandEvent& event) { event.Skip(); }
	virtual void OnCalculate(wxCommandEvent& event) { event.Skip(); }
	virtual void OnOutputSelection(wxCommandEvent& event) { event.Skip(); }


public:

	GUIFrame(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Property Calculator"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(780, 340), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);

	~GUIFrame();

};

