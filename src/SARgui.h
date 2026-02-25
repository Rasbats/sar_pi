///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6-dirty)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/valtext.h>
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/checkbox.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/choice.h>
#include <wx/statbox.h>
#include <wx/panel.h>
#include <wx/statbmp.h>
#include <wx/notebook.h>
#include <wx/dialog.h>
#include <wx/slider.h>

///////////////////////////////////////////////////////////////////////////

#define ID_RTZ1 6000
#define ID_RTZ2 6001
#define ID_RTZ3 6002
#define ID_RTZ4 6003

///////////////////////////////////////////////////////////////////////////////
/// Class DlgDef
///////////////////////////////////////////////////////////////////////////////
class DlgDef : public wxDialog
{
	private:

	protected:
		wxNotebook* m_notebook1;
		wxPanel* m_panel1;
		wxPanel* wx_panel_dome;
		wxStaticText* m_staticText3221;
		wxTextCtrl* m_Approach_PS;
		wxStaticText* m_staticText3321;
		wxStaticText* m_staticText32112;
		wxTextCtrl* m_dx_PS;
		wxStaticText* m_staticText33112;
		wxStaticText* m_staticText321111;
		wxTextCtrl* m_dy_PS;
		wxStaticText* m_staticText331111;
		wxStaticText* m_staticText3211111;
		wxTextCtrl* m_n_PS;
		wxStaticText* m_staticText32111112;
		wxTextCtrl* m_Speed_PS;
		wxStaticText* m_staticText33111111;
		wxStaticLine* m_staticline8;
		wxCheckBox* m_checkBox1;
		wxCheckBox* m_checkBoxIcons1;
		wxButton* m_button3111;
		wxCheckBox* m_cbChartRoute1;
		wxButton* m_button311112121;
		wxChoice* m_choiceSchema1;
		wxStaticBitmap* m_bitmap_trackln1;
		wxStaticText* m_staticText32111111;
		wxChoice* m_Nship;
		wxStaticText* m_staticTextPortStbd;
		wxChoice* m_NPortStbd;
		wxPanel* m_panel2;
		wxPanel* m_panel7;
		wxStaticText* m_staticText322;
		wxTextCtrl* m_Approach_ES;
		wxStaticText* m_staticText332;
		wxStaticText* m_staticText3211;
		wxTextCtrl* m_dx_ES;
		wxStaticText* m_staticText3311;
		wxStaticText* m_staticText32111;
		wxTextCtrl* m_n_ES;
		wxStaticText* m_staticText321111121;
		wxTextCtrl* m_Speed_ES;
		wxStaticText* m_staticText331111111;
		wxStaticLine* m_staticline12;
		wxCheckBox* m_checkBox2;
		wxCheckBox* m_checkBoxIcons2;
		wxButton* m_button31111;
		wxCheckBox* m_cbChartRoute2;
		wxButton* m_button31111212;
		wxChoice* m_choiceSchema2;
		wxStaticBitmap* m_bitmap_exp_sq;
		wxPanel* m_panel3;
		wxPanel* m_panel8;
		wxStaticText* m_staticText32;
		wxTextCtrl* m_Approach_SS;
		wxStaticText* m_staticText33;
		wxStaticText* m_staticText321;
		wxTextCtrl* m_dx_SS;
		wxStaticText* m_staticText331;
		wxStaticText* m_staticText321111111;
		wxChoice* m_Ncycles;
		wxStaticText* m_staticText321111122;
		wxTextCtrl* m_Speed_SS;
		wxStaticText* m_staticText331111112;
		wxStaticLine* m_staticline11;
		wxCheckBox* m_checkBox3;
		wxCheckBox* m_checkBoxIcons3;
		wxButton* m_button311111;
		wxCheckBox* m_cbChartRoute3;
		wxButton* m_button31111211;
		wxChoice* m_choiceSchema3;
		wxStaticBitmap* m_bitmap_sector;
		wxStaticText* m_staticText3211111111;
		wxChoice* m_VSMethod;
		wxPanel* m_panek4;
		wxPanel* m_panel10;
		wxStaticText* m_staticText323;
		wxTextCtrl* m_Approach_OR;
		wxStaticText* m_staticText333;
		wxStaticText* m_staticText3212;
		wxTextCtrl* m_dx_OR;
		wxStaticText* m_staticText3312;
		wxStaticText* m_staticText32121;
		wxTextCtrl* m_NLegs_OR;
		wxStaticText* m_staticText321111123;
		wxTextCtrl* m_Speed_OR;
		wxStaticText* m_staticText331111113;
		wxStaticLine* m_staticline1;
		wxCheckBox* m_checkBox4;
		wxCheckBox* m_checkBoxIcons4;
		wxButton* m_button311112;
		wxCheckBox* m_cbChartRoute4;
		wxButton* m_button3111121;
		wxChoice* m_choiceSchema4;
		wxStaticBitmap* m_bitmap_oil_rig;
		wxNotebook* m_wxNotebook234;
		wxPanel* m_panel11;
		wxStaticText* m_staticText3231;
		wxTextCtrl* m_Lat1;
		wxStaticText* m_staticText3331;
		wxStaticText* m_staticText32311;
		wxTextCtrl* m_Lon1;
		wxStaticText* m_staticText33311;
		wxPanel* m_panel14;
		wxButton* m_button11;
		wxButton* m_Cursor;
		wxPanel* m_panelDegreesMinutes;
		wxStaticText* m_staticText323131;
		wxTextCtrl* m_Lat1_d1;
		wxStaticText* m_staticText333131;
		wxTextCtrl* m_Lat1_m1;
		wxStaticText* m_staticText11431;
		wxChoice* m_Lat1_NS1;
		wxStaticText* m_staticText3231121;
		wxTextCtrl* m_Lon1_d1;
		wxStaticText* m_staticText3331121;
		wxTextCtrl* m_Lon1_m1;
		wxStaticText* m_staticText114121;
		wxChoice* m_Lon1_EW1;
		wxButton* m_button811;
		wxPanel* m_panel15;
		wxStaticText* m_staticText32313;
		wxTextCtrl* m_Lat1_d;
		wxStaticText* m_staticText33313;
		wxTextCtrl* m_Lat1_m;
		wxStaticText* m_staticText1143;
		wxTextCtrl* m_Lat1_s;
		wxStaticText* m_staticText1153;
		wxChoice* m_Lat1_NS;
		wxStaticText* m_staticText323112;
		wxTextCtrl* m_Lon1_d;
		wxStaticText* m_staticText333112;
		wxTextCtrl* m_Lon1_m;
		wxStaticText* m_staticText11412;
		wxTextCtrl* m_Lon1_s;
		wxStaticText* m_staticText11512;
		wxChoice* m_Lon1_EW;
		wxButton* m_button81;
		wxPanel* m_panel111;
		wxStaticText* m_staticText32211;
		wxStaticText* m_Distance;
		wxStaticText* m_staticText73;
		wxStaticText* m_Hours;
		wxStaticText* m_staticText72;
		wxStaticText* m_Minutes;
		wxStaticText* m_staticText62;
		wxStaticText* m_Seconds;
		wxStaticText* m_staticText64;
		wxStaticLine* m_staticline5;
		wxStaticText* m_staticText65;
		wxTextCtrl* m_meterDistance;
		wxStaticText* m_staticText66;
		wxButton* m_buttonMeterToNM;
		wxButton* m_buttonNmToMeter;
		wxTextCtrl* m_NmDistance;
		wxStaticText* m_staticText67;

		// Virtual event handlers, override them in your derived class
		virtual void OnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnPSGPX( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSelectNumberShips( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSelectPortStarboard( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnESGPX( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSSGPX( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSelectVectorMethod( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnORGPX( wxCommandEvent& event ) { event.Skip(); }
		virtual void key_shortcut( wxKeyEvent& event ) { event.Skip(); }
		virtual void OnNoteBookFit( wxNotebookEvent& event ) { event.Skip(); }
		virtual void OnShip( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnCursorSelect( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnConvertToDegree( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnConvertMeterToNM( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnConvertNmToMeter( wxCommandEvent& event ) { event.Skip(); }


	public:
		wxBoxSizer* bSframe;
		wxString m_validator_string1;
		wxString m_validator_string2;
		wxString m_validator_string3;
		wxString m_validator_string4;
		wxString m_validator_string5;
		wxString m_validator_string6;
		wxString m_validator_string7;
		wxString m_validator_string8;
		wxString m_validator_string9;
		wxString m_validator_string10;
		wxString m_validator_string11;
		wxString m_validator_string12;
		wxString m_validator_string13;

		DlgDef( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("SAR"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE|wxMINIMIZE_BOX|wxRESIZE_BORDER );

		~DlgDef();

};

///////////////////////////////////////////////////////////////////////////////
/// Class CfgDlgDef
///////////////////////////////////////////////////////////////////////////////
class CfgDlgDef : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText17;
		wxStdDialogButtonSizer* m_sdbSizer1;
		wxButton* m_sdbSizer1OK;
		wxButton* m_sdbSizer1Cancel;

	public:
		wxSlider* m_sOpacity;
		wxCheckBox* m_CaptureShip;
		wxCheckBox* m_CaptureCursor;

		CfgDlgDef( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("SAR preferences"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE );

		~CfgDlgDef();

};

