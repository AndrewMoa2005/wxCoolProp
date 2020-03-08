/***************************************************************
 * Name:      coolpropMain.cpp
 * Purpose:   Code for Application Frame
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

#include "coolpropMain.h"
#include "description.h"
#include "CoolProp.h"
#include <wx/tokenzr.h>

 //helper functions
enum wxbuildinfoformat {
	short_f, long_f
};

wxString wxbuildinfo(wxbuildinfoformat format)
{
	wxString wxbuild(wxVERSION_STRING);

	if (format == long_f)
	{
#if defined(__WXMSW__)
		wxbuild << _T("-Windows");
#elif defined(__WXMAC__)
		wxbuild << _T("-Mac");
#elif defined(__UNIX__)
		wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
		wxbuild << _T("-Unicode build");
#else
		wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
	}

	return wxbuild;
}


coolpropFrame::coolpropFrame(wxFrame* frame)
	: GUIFrame(frame)
{
	wxArrayString fluid_type_list;
	fluid_type_list.Add(_("PureFluids"));
	fluid_type_list.Add(_("PredefinedMixtures"));
	fluidTypeCB->Set(fluid_type_list);
	fluidTypeCB->SetSelection(0);

	wxArrayString fluid_list;
	wxStringTokenizer fluid_list_tokenizer(
		CoolProp::get_global_param_string("FluidsList"), ",");
	while (fluid_list_tokenizer.HasMoreTokens())
	{
		fluid_list.Add(fluid_list_tokenizer.GetNextToken());
	}
	fluidCB->Set(fluid_list);
	fluidCB->SetSelection(2);

	wxArrayString param_list;
	wxStringTokenizer param_list_tokenizer(
		CoolProp::get_global_param_string("parameter_list"), ",");
	while (param_list_tokenizer.HasMoreTokens())
	{
		param_list.Add(param_list_tokenizer.GetNextToken());
	}
	input1CB->Set(param_list);
	input1CB->SetSelection(70);
	input1SE->SetValue(wxString::FromDouble(101325.0));

	input2CB->Set(param_list);
	input2CB->SetSelection(104);
	input2SE->SetValue(wxString::FromDouble(300.0));

	outputCB->Set(param_list);
	outputCB->SetSelection(22);

	updateDescription();
}

coolpropFrame::~coolpropFrame()
{
}

void coolpropFrame::OnClose(wxCloseEvent& event)
{
	Destroy();
}

void coolpropFrame::OnFluidTypeSelection(wxCommandEvent& event)
{

	wxArrayString fluid_list;
	wxStringTokenizer fluid_list_tokenizer;
	if (fluidTypeCB->GetSelection() > 0)
		fluid_list_tokenizer.SetString(
			CoolProp::get_global_param_string("predefined_mixtures"), ",");
	else
		fluid_list_tokenizer.SetString(
			CoolProp::get_global_param_string("FluidsList"), ",");
	while (fluid_list_tokenizer.HasMoreTokens())
	{
		fluid_list.Add(fluid_list_tokenizer.GetNextToken());
	}
	fluidCB->Set(fluid_list);
	fluidCB->SetSelection(2);
}

void coolpropFrame::OnAbout(wxCommandEvent& event)
{
	wxString msg = _("CoolProp Version : ");
	msg << CoolProp::get_global_param_string("version")
		<< _("\n") << wxbuildinfo(long_f)
		<< _("\n") << _("By : Andrew Moa");
	wxMessageBox(msg, _("About ..."));
}

void coolpropFrame::OnFluidSelection(wxCommandEvent& event)
{
	//	updateDescription();
}

void coolpropFrame::OnFluidButton(wxCommandEvent& event)
{
	wxString flr = fluidCB->GetStringSelection();
	wxString msg;
	msg << _("aliases : ")
		<< CoolProp::get_fluid_param_string(flr.ToStdString(), "aliases")
		<< "\n";
	msg << _("CAS : ")
		<< CoolProp::get_fluid_param_string(flr.ToStdString(), "CAS")
		<< "\n";
	msg << _("ASHRAE34 : ")
		<< CoolProp::get_fluid_param_string(flr.ToStdString(), "ASHRAE34")
		<< "\n";
	/*	msg << _("REFPROP Name : ")
			<< CoolProp::get_fluid_param_string(flr.ToStdString(), "REFPROPName")
			<< "\n";
		msg << _("Bibtex : ")
			<< CoolProp::get_fluid_param_string(flr.ToStdString(), "Bibtex-XXX")
			<< "\n";
		msg << _("pure : ")
			<< CoolProp::get_fluid_param_string(flr.ToStdString(), "pure")
			<< "\n";
			*/
	msg << _("formula : ")
		<< CoolProp::get_fluid_param_string(flr.ToStdString(), "formula");

	wxMessageBox(msg, flr << _(" Description"));
}

void coolpropFrame::OnInput1Selection(wxCommandEvent& event)
{
	updateDescription();
}

void coolpropFrame::OnInput2Selection(wxCommandEvent& event)
{
	updateDescription();
}

void coolpropFrame::OnOutputSelection(wxCommandEvent& event)
{
	updateDescription();
}

void coolpropFrame::OnCalculate(wxCommandEvent& event)
{
	double input1, input2, output;
	if (!input1SE->GetValue().ToDouble(&input1))
	{
		outputSE->SetValue(_("error !"));
		return;
	}
	if (!input2SE->GetValue().ToDouble(&input2))
	{
		outputSE->SetValue(_("error !"));
		return;
	}
	output = CoolProp::PropsSI(
		outputCB->GetStringSelection().ToStdString(),
		input1CB->GetStringSelection().ToStdString(), input1,
		input2CB->GetStringSelection().ToStdString(), input2,
		fluidCB->GetStringSelection().ToStdString()
	);
	if ((output < 0.01) && (output > -0.01))
		outputSE->SetValue(wxString::Format("%6e", output));
	else if ((output < -1e3) || (output > 1e3))
		outputSE->SetValue(wxString::Format("%g", output));
	else
		outputSE->SetValue(wxString::Format("%6f", output));
}

void coolpropFrame::updateDescription()
{
	input1LE->SetValue(paramDescription(input1CB->GetStringSelection()));
	input2LE->SetValue(paramDescription(input2CB->GetStringSelection()));
	outputLE->SetValue(paramDescription(outputCB->GetStringSelection()));
}