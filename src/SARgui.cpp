///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6-dirty)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "SARgui.h"

///////////////////////////////////////////////////////////////////////////

DlgDef::DlgDef( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxSize( -1,-1 ) );

	bSizer_Main = new wxBoxSizer( wxVERTICAL );

	m_notebook_PatternSelection = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_panel_PS = new wxPanel( m_notebook_PatternSelection, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer_PS_left;
	bSizer_PS_left = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer_PS_RouteSettings;
	sbSizer_PS_RouteSettings = new wxStaticBoxSizer( new wxStaticBox( m_panel_PS, wxID_ANY, _("Route Settings") ), wxVERTICAL );

	wxBoxSizer* bSizer_PS_InitialCourse;
	bSizer_PS_InitialCourse = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3221 = new wxStaticText( sbSizer_PS_RouteSettings->GetStaticBox(), wxID_ANY, _("Initial Course    "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3221->Wrap( -1 );
	bSizer_PS_InitialCourse->Add( m_staticText3221, 0, wxALIGN_CENTER|wxALL, 5 );

	m_Approach_PS = new wxTextCtrl( sbSizer_PS_RouteSettings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_Approach_PS->SetValidator( wxTextValidator( wxFILTER_NUMERIC, &m_validator_string1 ) );

	bSizer_PS_InitialCourse->Add( m_Approach_PS, 0, wxALL, 5 );

	m_staticText3321 = new wxStaticText( sbSizer_PS_RouteSettings->GetStaticBox(), wxID_ANY, _("deg"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3321->Wrap( -1 );
	bSizer_PS_InitialCourse->Add( m_staticText3321, 0, wxALIGN_CENTER|wxALL, 5 );


	sbSizer_PS_RouteSettings->Add( bSizer_PS_InitialCourse, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer_PS_LegLength;
	bSizer_PS_LegLength = new wxBoxSizer( wxHORIZONTAL );

	m_staticText32112 = new wxStaticText( sbSizer_PS_RouteSettings->GetStaticBox(), wxID_ANY, _("Leg Length        "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32112->Wrap( -1 );
	bSizer_PS_LegLength->Add( m_staticText32112, 0, wxALIGN_CENTER|wxALL, 5 );

	m_dx_PS = new wxTextCtrl( sbSizer_PS_RouteSettings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_dx_PS->SetValidator( wxTextValidator( wxFILTER_NUMERIC, &m_validator_string2 ) );

	bSizer_PS_LegLength->Add( m_dx_PS, 0, wxALL, 5 );

	m_staticText33112 = new wxStaticText( sbSizer_PS_RouteSettings->GetStaticBox(), wxID_ANY, _("NM"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33112->Wrap( -1 );
	bSizer_PS_LegLength->Add( m_staticText33112, 0, wxALIGN_CENTER|wxALL, 5 );


	sbSizer_PS_RouteSettings->Add( bSizer_PS_LegLength, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer_PS_LegSpace;
	bSizer_PS_LegSpace = new wxBoxSizer( wxHORIZONTAL );

	m_staticText321111 = new wxStaticText( sbSizer_PS_RouteSettings->GetStaticBox(), wxID_ANY, _("Leg Space         "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText321111->Wrap( -1 );
	bSizer_PS_LegSpace->Add( m_staticText321111, 0, wxALIGN_CENTER|wxALL, 5 );

	m_dy_PS = new wxTextCtrl( sbSizer_PS_RouteSettings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_dy_PS->SetValidator( wxTextValidator( wxFILTER_NUMERIC, &m_validator_string3 ) );

	bSizer_PS_LegSpace->Add( m_dy_PS, 0, wxALL, 5 );

	m_staticText331111 = new wxStaticText( sbSizer_PS_RouteSettings->GetStaticBox(), wxID_ANY, _("NM"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText331111->Wrap( -1 );
	bSizer_PS_LegSpace->Add( m_staticText331111, 0, wxALIGN_CENTER|wxALL, 5 );


	sbSizer_PS_RouteSettings->Add( bSizer_PS_LegSpace, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer_PS_NumberLegs;
	bSizer_PS_NumberLegs = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3211111 = new wxStaticText( sbSizer_PS_RouteSettings->GetStaticBox(), wxID_ANY, _("Number of Legs"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3211111->Wrap( -1 );
	bSizer_PS_NumberLegs->Add( m_staticText3211111, 0, wxALIGN_CENTER|wxALL, 5 );

	m_n_PS = new wxTextCtrl( sbSizer_PS_RouteSettings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_n_PS->SetValidator( wxTextValidator( wxFILTER_NUMERIC, &m_validator_string4 ) );

	bSizer_PS_NumberLegs->Add( m_n_PS, 0, wxALL, 5 );


	sbSizer_PS_RouteSettings->Add( bSizer_PS_NumberLegs, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer_PS_SearchSpeed;
	bSizer_PS_SearchSpeed = new wxBoxSizer( wxHORIZONTAL );

	m_staticText32111112 = new wxStaticText( sbSizer_PS_RouteSettings->GetStaticBox(), wxID_ANY, _("Search Speed    "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32111112->Wrap( -1 );
	bSizer_PS_SearchSpeed->Add( m_staticText32111112, 0, wxALIGN_CENTER|wxALL, 5 );

	m_Speed_PS = new wxTextCtrl( sbSizer_PS_RouteSettings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_Speed_PS->SetValidator( wxTextValidator( wxFILTER_NUMERIC, &m_validator_string5 ) );

	bSizer_PS_SearchSpeed->Add( m_Speed_PS, 0, wxALL, 5 );

	m_staticText33111111 = new wxStaticText( sbSizer_PS_RouteSettings->GetStaticBox(), wxID_ANY, _("kts"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33111111->Wrap( -1 );
	bSizer_PS_SearchSpeed->Add( m_staticText33111111, 0, wxALIGN_CENTER|wxALL, 5 );


	sbSizer_PS_RouteSettings->Add( bSizer_PS_SearchSpeed, 0, wxEXPAND, 5 );


	bSizer_PS_left->Add( sbSizer_PS_RouteSettings, 1, wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer_PS_GenerateRoute;
	sbSizer_PS_GenerateRoute = new wxStaticBoxSizer( new wxStaticBox( m_panel_PS, wxID_ANY, _("Route Generation") ), wxVERTICAL );

	wxBoxSizer* bSizer_PS_checkboxes;
	bSizer_PS_checkboxes = new wxBoxSizer( wxHORIZONTAL );

	m_checkBox1 = new wxCheckBox( sbSizer_PS_GenerateRoute->GetStaticBox(), wxID_ANY, _("Waypoint names"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_checkBox1->SetValue(true);
	bSizer_PS_checkboxes->Add( m_checkBox1, 0, wxALL, 5 );

	m_checkBoxIcons1 = new wxCheckBox( sbSizer_PS_GenerateRoute->GetStaticBox(), wxID_ANY, _("Icons"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_checkBoxIcons1->SetValue(true);
	bSizer_PS_checkboxes->Add( m_checkBoxIcons1, 0, wxALL, 5 );


	sbSizer_PS_GenerateRoute->Add( bSizer_PS_checkboxes, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer_PS_GPX;
	bSizer_PS_GPX = new wxBoxSizer( wxHORIZONTAL );

	m_button3111 = new wxButton( sbSizer_PS_GenerateRoute->GetStaticBox(), wxID_ANY, _("Generate GPX"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button3111->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer_PS_GPX->Add( m_button3111, 0, wxALL, 5 );

	m_cbChartRoute1 = new wxCheckBox( sbSizer_PS_GenerateRoute->GetStaticBox(), wxID_ANY, _("Add to route manager"), wxDefaultPosition, wxDefaultSize, 0 );
	m_cbChartRoute1->SetValue(true);
	bSizer_PS_GPX->Add( m_cbChartRoute1, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	sbSizer_PS_GenerateRoute->Add( bSizer_PS_GPX, 0, wxALL, 5 );

	wxBoxSizer* bSizer_PS_RTZ;
	bSizer_PS_RTZ = new wxBoxSizer( wxHORIZONTAL );

	m_button311112121 = new wxButton( sbSizer_PS_GenerateRoute->GetStaticBox(), ID_RTZ1, _("Generate RTZ"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button311112121->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	bSizer_PS_RTZ->Add( m_button311112121, 0, wxALL, 5 );

	wxString m_choiceSchema1Choices[] = { _("v1.0"), _("v1.1"), _("v1.2") };
	int m_choiceSchema1NChoices = sizeof( m_choiceSchema1Choices ) / sizeof( wxString );
	m_choiceSchema1 = new wxChoice( sbSizer_PS_GenerateRoute->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceSchema1NChoices, m_choiceSchema1Choices, 0 );
	m_choiceSchema1->SetSelection( 0 );
	bSizer_PS_RTZ->Add( m_choiceSchema1, 0, wxALL, 5 );


	sbSizer_PS_GenerateRoute->Add( bSizer_PS_RTZ, 0, wxALL, 5 );


	bSizer_PS_left->Add( sbSizer_PS_GenerateRoute, 0, wxALL|wxEXPAND, 5 );


	bSizer3->Add( bSizer_PS_left, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer_PS_right;
	bSizer_PS_right = new wxBoxSizer( wxHORIZONTAL );


	bSizer_PS_right->Add( 0, 0, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer_PS_right_vertical;
	bSizer_PS_right_vertical = new wxBoxSizer( wxVERTICAL );


	bSizer_PS_right_vertical->Add( 0, 0, 1, wxEXPAND, 5 );

	m_bitmap_trackln1 = new wxStaticBitmap( m_panel_PS, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer_PS_right_vertical->Add( m_bitmap_trackln1, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer14111111;
	bSizer14111111 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText32111111 = new wxStaticText( m_panel_PS, wxID_ANY, _("Route for Ship           "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32111111->Wrap( -1 );
	bSizer14111111->Add( m_staticText32111111, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	wxString m_NshipChoices[] = { _("1 unit only"), _("2 units A&B") };
	int m_NshipNChoices = sizeof( m_NshipChoices ) / sizeof( wxString );
	m_Nship = new wxChoice( m_panel_PS, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_NshipNChoices, m_NshipChoices, 0 );
	m_Nship->SetSelection( 0 );
	bSizer14111111->Add( m_Nship, 0, wxALL, 5 );


	bSizer_PS_right_vertical->Add( bSizer14111111, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer141111112;
	bSizer141111112 = new wxBoxSizer( wxHORIZONTAL );

	m_staticTextPortStbd = new wxStaticText( m_panel_PS, wxID_ANY, _("First turn                    "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextPortStbd->Wrap( -1 );
	bSizer141111112->Add( m_staticTextPortStbd, 0, wxALL, 5 );

	wxString m_NPortStbdChoices[] = { _("Starboard"), _("Port") };
	int m_NPortStbdNChoices = sizeof( m_NPortStbdChoices ) / sizeof( wxString );
	m_NPortStbd = new wxChoice( m_panel_PS, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_NPortStbdNChoices, m_NPortStbdChoices, 0 );
	m_NPortStbd->SetSelection( 1 );
	bSizer141111112->Add( m_NPortStbd, 0, wxALL, 5 );


	bSizer_PS_right_vertical->Add( bSizer141111112, 1, wxALL|wxEXPAND, 5 );


	bSizer_PS_right_vertical->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer_PS_right->Add( bSizer_PS_right_vertical, 0, wxALL|wxEXPAND, 5 );


	bSizer_PS_right->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer3->Add( bSizer_PS_right, 1, wxEXPAND, 5 );


	m_panel_PS->SetSizer( bSizer3 );
	m_panel_PS->Layout();
	bSizer3->Fit( m_panel_PS );
	m_notebook_PatternSelection->AddPage( m_panel_PS, _("Parallel Track Search"), false );
	m_panel_SS = new wxPanel( m_notebook_PatternSelection, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer_SS_Left;
	bSizer_SS_Left = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer_SS_RouteSettings;
	sbSizer_SS_RouteSettings = new wxStaticBoxSizer( new wxStaticBox( m_panel_SS, wxID_ANY, _("Route Settings") ), wxVERTICAL );

	wxBoxSizer* bSizer_SS_Course;
	bSizer_SS_Course = new wxBoxSizer( wxHORIZONTAL );

	m_staticText322 = new wxStaticText( sbSizer_SS_RouteSettings->GetStaticBox(), wxID_ANY, _("Initial Course    "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText322->Wrap( -1 );
	bSizer_SS_Course->Add( m_staticText322, 0, wxALIGN_CENTER|wxALL, 5 );

	m_Approach_ES = new wxTextCtrl( sbSizer_SS_RouteSettings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_Approach_ES->SetValidator( wxTextValidator( wxFILTER_NUMERIC, &m_validator_string6 ) );

	bSizer_SS_Course->Add( m_Approach_ES, 0, wxALL, 5 );

	m_staticText332 = new wxStaticText( sbSizer_SS_RouteSettings->GetStaticBox(), wxID_ANY, _("deg"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText332->Wrap( -1 );
	bSizer_SS_Course->Add( m_staticText332, 0, wxALIGN_CENTER|wxALL, 5 );


	sbSizer_SS_RouteSettings->Add( bSizer_SS_Course, 0, 0, 5 );

	wxBoxSizer* bSizer_SS_LegSpace;
	bSizer_SS_LegSpace = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3211 = new wxStaticText( sbSizer_SS_RouteSettings->GetStaticBox(), wxID_ANY, _("Leg Space         "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3211->Wrap( -1 );
	bSizer_SS_LegSpace->Add( m_staticText3211, 0, wxALIGN_CENTER|wxALL, 5 );

	m_dx_ES = new wxTextCtrl( sbSizer_SS_RouteSettings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer_SS_LegSpace->Add( m_dx_ES, 0, wxALL, 5 );

	m_staticText3311 = new wxStaticText( sbSizer_SS_RouteSettings->GetStaticBox(), wxID_ANY, _("NM"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3311->Wrap( -1 );
	bSizer_SS_LegSpace->Add( m_staticText3311, 0, wxALIGN_CENTER|wxALL, 5 );


	sbSizer_SS_RouteSettings->Add( bSizer_SS_LegSpace, 0, 0, 5 );

	wxBoxSizer* bSizer_SS_NumberLegs;
	bSizer_SS_NumberLegs = new wxBoxSizer( wxHORIZONTAL );

	m_staticText32111 = new wxStaticText( sbSizer_SS_RouteSettings->GetStaticBox(), wxID_ANY, _("Number of Legs"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32111->Wrap( -1 );
	bSizer_SS_NumberLegs->Add( m_staticText32111, 0, wxALIGN_CENTER|wxALL, 5 );

	m_n_ES = new wxTextCtrl( sbSizer_SS_RouteSettings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_n_ES->SetValidator( wxTextValidator( wxFILTER_NUMERIC, &m_validator_string7 ) );

	bSizer_SS_NumberLegs->Add( m_n_ES, 0, wxALL, 5 );


	sbSizer_SS_RouteSettings->Add( bSizer_SS_NumberLegs, 0, 0, 5 );

	wxBoxSizer* bSizer_SS_SearchSpeed;
	bSizer_SS_SearchSpeed = new wxBoxSizer( wxHORIZONTAL );

	m_staticText321111121 = new wxStaticText( sbSizer_SS_RouteSettings->GetStaticBox(), wxID_ANY, _("Search Speed    "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText321111121->Wrap( -1 );
	bSizer_SS_SearchSpeed->Add( m_staticText321111121, 0, wxALIGN_CENTER|wxALL, 5 );

	m_Speed_ES = new wxTextCtrl( sbSizer_SS_RouteSettings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_Speed_ES->SetValidator( wxTextValidator( wxFILTER_NUMERIC, &m_validator_string8 ) );

	bSizer_SS_SearchSpeed->Add( m_Speed_ES, 0, wxALL, 5 );

	m_staticText331111111 = new wxStaticText( sbSizer_SS_RouteSettings->GetStaticBox(), wxID_ANY, _("kts"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText331111111->Wrap( -1 );
	bSizer_SS_SearchSpeed->Add( m_staticText331111111, 0, wxALIGN_CENTER|wxALL, 5 );


	sbSizer_SS_RouteSettings->Add( bSizer_SS_SearchSpeed, 0, wxEXPAND, 5 );


	bSizer_SS_Left->Add( sbSizer_SS_RouteSettings, 1, wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer_SS_RouteGeneration;
	sbSizer_SS_RouteGeneration = new wxStaticBoxSizer( new wxStaticBox( m_panel_SS, wxID_ANY, _("Route Generation") ), wxVERTICAL );

	wxBoxSizer* bSizer_SS_checkboxes;
	bSizer_SS_checkboxes = new wxBoxSizer( wxHORIZONTAL );

	m_checkBox2 = new wxCheckBox( sbSizer_SS_RouteGeneration->GetStaticBox(), wxID_ANY, _("Waypoint names"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_checkBox2->SetValue(true);
	bSizer_SS_checkboxes->Add( m_checkBox2, 0, wxALL, 5 );

	m_checkBoxIcons2 = new wxCheckBox( sbSizer_SS_RouteGeneration->GetStaticBox(), wxID_ANY, _("Icons"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_checkBoxIcons2->SetValue(true);
	bSizer_SS_checkboxes->Add( m_checkBoxIcons2, 0, wxALL, 5 );


	sbSizer_SS_RouteGeneration->Add( bSizer_SS_checkboxes, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer_SS_GPX;
	bSizer_SS_GPX = new wxBoxSizer( wxHORIZONTAL );

	m_button31111 = new wxButton( sbSizer_SS_RouteGeneration->GetStaticBox(), wxID_ANY, _("Generate GPX"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button31111->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer_SS_GPX->Add( m_button31111, 0, wxALL, 5 );

	m_cbChartRoute2 = new wxCheckBox( sbSizer_SS_RouteGeneration->GetStaticBox(), wxID_ANY, _("Add to route manager"), wxDefaultPosition, wxDefaultSize, 0 );
	m_cbChartRoute2->SetValue(true);
	bSizer_SS_GPX->Add( m_cbChartRoute2, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	sbSizer_SS_RouteGeneration->Add( bSizer_SS_GPX, 0, wxALL, 5 );

	wxBoxSizer* bSizer_SS_RTZ;
	bSizer_SS_RTZ = new wxBoxSizer( wxHORIZONTAL );

	m_button31111212 = new wxButton( sbSizer_SS_RouteGeneration->GetStaticBox(), ID_RTZ2, _("Generate RTZ"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button31111212->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	bSizer_SS_RTZ->Add( m_button31111212, 0, wxALL, 5 );

	wxString m_choiceSchema2Choices[] = { _("v1.0"), _("v1.1"), _("v1.2") };
	int m_choiceSchema2NChoices = sizeof( m_choiceSchema2Choices ) / sizeof( wxString );
	m_choiceSchema2 = new wxChoice( sbSizer_SS_RouteGeneration->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceSchema2NChoices, m_choiceSchema2Choices, 0 );
	m_choiceSchema2->SetSelection( 0 );
	bSizer_SS_RTZ->Add( m_choiceSchema2, 0, wxALL, 5 );


	sbSizer_SS_RouteGeneration->Add( bSizer_SS_RTZ, 0, wxALL, 5 );


	bSizer_SS_Left->Add( sbSizer_SS_RouteGeneration, 0, wxALL|wxEXPAND, 5 );


	bSizer4->Add( bSizer_SS_Left, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer_SS_Right;
	bSizer_SS_Right = new wxBoxSizer( wxHORIZONTAL );


	bSizer_SS_Right->Add( 0, 0, 1, wxEXPAND, 5 );

	m_bitmap_exp_sq = new wxStaticBitmap( m_panel_SS, wxID_ANY, wxBitmap( wxT("../Load From File"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer_SS_Right->Add( m_bitmap_exp_sq, 0, wxALL|wxEXPAND, 5 );


	bSizer_SS_Right->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer4->Add( bSizer_SS_Right, 1, wxEXPAND, 5 );


	m_panel_SS->SetSizer( bSizer4 );
	m_panel_SS->Layout();
	bSizer4->Fit( m_panel_SS );
	m_notebook_PatternSelection->AddPage( m_panel_SS, _("Expanding Square Search"), false );
	m_panel_VS = new wxPanel( m_notebook_PatternSelection, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer_VS_Left;
	bSizer_VS_Left = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer_VS_RouteSettings;
	sbSizer_VS_RouteSettings = new wxStaticBoxSizer( new wxStaticBox( m_panel_VS, wxID_ANY, _("Route Settings") ), wxVERTICAL );

	wxBoxSizer* bSizer_VS_InitialCourse;
	bSizer_VS_InitialCourse = new wxBoxSizer( wxHORIZONTAL );

	m_staticText32 = new wxStaticText( sbSizer_VS_RouteSettings->GetStaticBox(), wxID_ANY, _("Initial Course        "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32->Wrap( -1 );
	bSizer_VS_InitialCourse->Add( m_staticText32, 0, wxALIGN_CENTER|wxALL, 5 );

	m_Approach_SS = new wxTextCtrl( sbSizer_VS_RouteSettings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_Approach_SS->SetValidator( wxTextValidator( wxFILTER_NUMERIC, &m_validator_string9 ) );

	bSizer_VS_InitialCourse->Add( m_Approach_SS, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText33 = new wxStaticText( sbSizer_VS_RouteSettings->GetStaticBox(), wxID_ANY, _("deg"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33->Wrap( -1 );
	bSizer_VS_InitialCourse->Add( m_staticText33, 0, wxALIGN_CENTER|wxALL, 5 );


	sbSizer_VS_RouteSettings->Add( bSizer_VS_InitialCourse, 0, 0, 5 );

	wxBoxSizer* bSizer_VS_SearchRadius;
	bSizer_VS_SearchRadius = new wxBoxSizer( wxHORIZONTAL );

	m_staticText321 = new wxStaticText( sbSizer_VS_RouteSettings->GetStaticBox(), wxID_ANY, _("Search Radius      "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText321->Wrap( -1 );
	bSizer_VS_SearchRadius->Add( m_staticText321, 0, wxALIGN_CENTER|wxALL, 5 );

	m_dx_SS = new wxTextCtrl( sbSizer_VS_RouteSettings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer_VS_SearchRadius->Add( m_dx_SS, 0, wxALL, 5 );

	m_staticText331 = new wxStaticText( sbSizer_VS_RouteSettings->GetStaticBox(), wxID_ANY, _("NM"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText331->Wrap( -1 );
	bSizer_VS_SearchRadius->Add( m_staticText331, 0, wxALIGN_CENTER|wxALL, 5 );


	sbSizer_VS_RouteSettings->Add( bSizer_VS_SearchRadius, 0, 0, 5 );

	wxBoxSizer* bSizer_VS_NumberPasses;
	bSizer_VS_NumberPasses = new wxBoxSizer( wxHORIZONTAL );

	m_staticText321111111 = new wxStaticText( sbSizer_VS_RouteSettings->GetStaticBox(), wxID_ANY, _("Number of Passes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText321111111->Wrap( -1 );
	bSizer_VS_NumberPasses->Add( m_staticText321111111, 0, wxALIGN_CENTER|wxALL, 5 );

	wxString m_NcyclesChoices[] = { _("1"), _("2") };
	int m_NcyclesNChoices = sizeof( m_NcyclesChoices ) / sizeof( wxString );
	m_Ncycles = new wxChoice( sbSizer_VS_RouteSettings->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_NcyclesNChoices, m_NcyclesChoices, 0 );
	m_Ncycles->SetSelection( 0 );
	bSizer_VS_NumberPasses->Add( m_Ncycles, 0, wxALL, 5 );


	sbSizer_VS_RouteSettings->Add( bSizer_VS_NumberPasses, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer_VS_SearchSpeed;
	bSizer_VS_SearchSpeed = new wxBoxSizer( wxHORIZONTAL );

	m_staticText321111122 = new wxStaticText( sbSizer_VS_RouteSettings->GetStaticBox(), wxID_ANY, _("Search Speed       "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText321111122->Wrap( -1 );
	bSizer_VS_SearchSpeed->Add( m_staticText321111122, 0, wxALIGN_CENTER|wxALL, 5 );

	m_Speed_SS = new wxTextCtrl( sbSizer_VS_RouteSettings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_Speed_SS->SetValidator( wxTextValidator( wxFILTER_NUMERIC, &m_validator_string10 ) );

	bSizer_VS_SearchSpeed->Add( m_Speed_SS, 0, wxALL, 5 );

	m_staticText331111112 = new wxStaticText( sbSizer_VS_RouteSettings->GetStaticBox(), wxID_ANY, _("kts"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText331111112->Wrap( -1 );
	bSizer_VS_SearchSpeed->Add( m_staticText331111112, 0, wxALIGN_CENTER|wxALL, 5 );


	sbSizer_VS_RouteSettings->Add( bSizer_VS_SearchSpeed, 0, wxEXPAND, 5 );


	bSizer_VS_Left->Add( sbSizer_VS_RouteSettings, 1, wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer_VS_RouteGeneration;
	sbSizer_VS_RouteGeneration = new wxStaticBoxSizer( new wxStaticBox( m_panel_VS, wxID_ANY, _("Route Generation") ), wxVERTICAL );

	wxBoxSizer* bSizer_VS_checkboxes;
	bSizer_VS_checkboxes = new wxBoxSizer( wxHORIZONTAL );

	m_checkBox3 = new wxCheckBox( sbSizer_VS_RouteGeneration->GetStaticBox(), wxID_ANY, _("Waypoint names"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_checkBox3->SetValue(true);
	bSizer_VS_checkboxes->Add( m_checkBox3, 0, wxALL, 5 );

	m_checkBoxIcons3 = new wxCheckBox( sbSizer_VS_RouteGeneration->GetStaticBox(), wxID_ANY, _("Icons"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_checkBoxIcons3->SetValue(true);
	bSizer_VS_checkboxes->Add( m_checkBoxIcons3, 0, wxALL, 5 );


	sbSizer_VS_RouteGeneration->Add( bSizer_VS_checkboxes, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer_VS_GPX;
	bSizer_VS_GPX = new wxBoxSizer( wxHORIZONTAL );

	m_button311111 = new wxButton( sbSizer_VS_RouteGeneration->GetStaticBox(), wxID_ANY, _("Generate GPX"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button311111->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer_VS_GPX->Add( m_button311111, 0, wxALL, 5 );

	m_cbChartRoute3 = new wxCheckBox( sbSizer_VS_RouteGeneration->GetStaticBox(), wxID_ANY, _("Add to route manager"), wxDefaultPosition, wxDefaultSize, 0 );
	m_cbChartRoute3->SetValue(true);
	bSizer_VS_GPX->Add( m_cbChartRoute3, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	sbSizer_VS_RouteGeneration->Add( bSizer_VS_GPX, 0, wxALL, 5 );

	wxBoxSizer* bSizer_VS_RTZ;
	bSizer_VS_RTZ = new wxBoxSizer( wxHORIZONTAL );

	m_button31111211 = new wxButton( sbSizer_VS_RouteGeneration->GetStaticBox(), ID_RTZ3, _("Generate RTZ"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button31111211->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	bSizer_VS_RTZ->Add( m_button31111211, 0, wxALL, 5 );

	wxString m_choiceSchema3Choices[] = { _("v1.0"), _("v1.1"), _("v1.2") };
	int m_choiceSchema3NChoices = sizeof( m_choiceSchema3Choices ) / sizeof( wxString );
	m_choiceSchema3 = new wxChoice( sbSizer_VS_RouteGeneration->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceSchema3NChoices, m_choiceSchema3Choices, 0 );
	m_choiceSchema3->SetSelection( 0 );
	bSizer_VS_RTZ->Add( m_choiceSchema3, 0, wxALL, 5 );


	sbSizer_VS_RouteGeneration->Add( bSizer_VS_RTZ, 0, wxALL, 5 );


	bSizer_VS_Left->Add( sbSizer_VS_RouteGeneration, 0, wxALL|wxEXPAND, 5 );


	bSizer5->Add( bSizer_VS_Left, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer_VS_Right;
	bSizer_VS_Right = new wxBoxSizer( wxVERTICAL );


	bSizer_VS_Right->Add( 0, 0, 1, wxEXPAND, 5 );

	m_bitmap_sector = new wxStaticBitmap( m_panel_VS, wxID_ANY, wxBitmap( wxT("../Load From File"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer_VS_Right->Add( m_bitmap_sector, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer1411111111;
	bSizer1411111111 = new wxBoxSizer( wxHORIZONTAL );


	bSizer1411111111->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText3211111111 = new wxStaticText( m_panel_VS, wxID_ANY, _("Search Method  "), wxPoint( -1,-1 ), wxDefaultSize, 0 );
	m_staticText3211111111->Wrap( -1 );
	bSizer1411111111->Add( m_staticText3211111111, 0, wxALL, 5 );

	wxString m_VSMethodChoices[] = { _("USCG"), _("IAMSAR") };
	int m_VSMethodNChoices = sizeof( m_VSMethodChoices ) / sizeof( wxString );
	m_VSMethod = new wxChoice( m_panel_VS, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_VSMethodNChoices, m_VSMethodChoices, 0 );
	m_VSMethod->SetSelection( 0 );
	bSizer1411111111->Add( m_VSMethod, 0, wxALL, 5 );


	bSizer1411111111->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer_VS_Right->Add( bSizer1411111111, 1, wxEXPAND, 5 );


	bSizer_VS_Right->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer5->Add( bSizer_VS_Right, 1, wxEXPAND, 5 );


	m_panel_VS->SetSizer( bSizer5 );
	m_panel_VS->Layout();
	bSizer5->Fit( m_panel_VS );
	m_notebook_PatternSelection->AddPage( m_panel_VS, _("Sector Search"), false );
	m_panel_QS = new wxPanel( m_notebook_PatternSelection, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer_QS_Left;
	bSizer_QS_Left = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer_QS_RouteSettings;
	sbSizer_QS_RouteSettings = new wxStaticBoxSizer( new wxStaticBox( m_panel_QS, wxID_ANY, _("Route Settings") ), wxVERTICAL );

	wxBoxSizer* bSizer_QS_InitialCourse;
	bSizer_QS_InitialCourse = new wxBoxSizer( wxHORIZONTAL );

	m_staticText323 = new wxStaticText( sbSizer_QS_RouteSettings->GetStaticBox(), wxID_ANY, _("Initial Course    "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText323->Wrap( -1 );
	bSizer_QS_InitialCourse->Add( m_staticText323, 0, wxALIGN_CENTER|wxALL, 5 );

	m_Approach_OR = new wxTextCtrl( sbSizer_QS_RouteSettings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_Approach_OR->SetValidator( wxTextValidator( wxFILTER_NUMERIC, &m_validator_string11 ) );

	bSizer_QS_InitialCourse->Add( m_Approach_OR, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText333 = new wxStaticText( sbSizer_QS_RouteSettings->GetStaticBox(), wxID_ANY, _("deg"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText333->Wrap( -1 );
	bSizer_QS_InitialCourse->Add( m_staticText333, 0, wxALIGN_CENTER|wxALL, 5 );


	sbSizer_QS_RouteSettings->Add( bSizer_QS_InitialCourse, 0, 0, 5 );

	wxBoxSizer* bSizer_QS_LegSpace;
	bSizer_QS_LegSpace = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3212 = new wxStaticText( sbSizer_QS_RouteSettings->GetStaticBox(), wxID_ANY, _("Leg Space         "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3212->Wrap( -1 );
	bSizer_QS_LegSpace->Add( m_staticText3212, 0, wxALIGN_CENTER|wxALL, 5 );

	m_dx_OR = new wxTextCtrl( sbSizer_QS_RouteSettings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer_QS_LegSpace->Add( m_dx_OR, 0, wxALL, 5 );

	m_staticText3312 = new wxStaticText( sbSizer_QS_RouteSettings->GetStaticBox(), wxID_ANY, _("NM"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3312->Wrap( -1 );
	bSizer_QS_LegSpace->Add( m_staticText3312, 0, wxALIGN_CENTER|wxALL, 5 );


	sbSizer_QS_RouteSettings->Add( bSizer_QS_LegSpace, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer_QS_NumberLegs;
	bSizer_QS_NumberLegs = new wxBoxSizer( wxHORIZONTAL );

	m_staticText32121 = new wxStaticText( sbSizer_QS_RouteSettings->GetStaticBox(), wxID_ANY, _("Number of Legs"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32121->Wrap( -1 );
	bSizer_QS_NumberLegs->Add( m_staticText32121, 0, wxALIGN_CENTER|wxALL, 5 );

	m_NLegs_OR = new wxTextCtrl( sbSizer_QS_RouteSettings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_NLegs_OR->SetValidator( wxTextValidator( wxFILTER_NUMERIC, &m_validator_string12 ) );

	bSizer_QS_NumberLegs->Add( m_NLegs_OR, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	sbSizer_QS_RouteSettings->Add( bSizer_QS_NumberLegs, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer_QS_SearchSpeed;
	bSizer_QS_SearchSpeed = new wxBoxSizer( wxHORIZONTAL );

	m_staticText321111123 = new wxStaticText( sbSizer_QS_RouteSettings->GetStaticBox(), wxID_ANY, _("Search Speed    "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText321111123->Wrap( -1 );
	bSizer_QS_SearchSpeed->Add( m_staticText321111123, 0, wxALIGN_CENTER|wxALL, 5 );

	m_Speed_OR = new wxTextCtrl( sbSizer_QS_RouteSettings->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_Speed_OR->SetValidator( wxTextValidator( wxFILTER_NUMERIC, &m_validator_string13 ) );

	bSizer_QS_SearchSpeed->Add( m_Speed_OR, 0, wxALL, 5 );

	m_staticText331111113 = new wxStaticText( sbSizer_QS_RouteSettings->GetStaticBox(), wxID_ANY, _("kts"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText331111113->Wrap( -1 );
	bSizer_QS_SearchSpeed->Add( m_staticText331111113, 0, wxALIGN_CENTER|wxALL, 5 );


	sbSizer_QS_RouteSettings->Add( bSizer_QS_SearchSpeed, 0, wxEXPAND, 5 );


	bSizer_QS_Left->Add( sbSizer_QS_RouteSettings, 1, wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer_QS_RouteGeneration;
	sbSizer_QS_RouteGeneration = new wxStaticBoxSizer( new wxStaticBox( m_panel_QS, wxID_ANY, _("Route Generation") ), wxVERTICAL );

	wxBoxSizer* bSizer_QS_checkboxes;
	bSizer_QS_checkboxes = new wxBoxSizer( wxHORIZONTAL );

	m_checkBox4 = new wxCheckBox( sbSizer_QS_RouteGeneration->GetStaticBox(), wxID_ANY, _("Waypoint names"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_checkBox4->SetValue(true);
	bSizer_QS_checkboxes->Add( m_checkBox4, 0, wxALL, 5 );

	m_checkBoxIcons4 = new wxCheckBox( sbSizer_QS_RouteGeneration->GetStaticBox(), wxID_ANY, _("Icons"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_checkBoxIcons4->SetValue(true);
	bSizer_QS_checkboxes->Add( m_checkBoxIcons4, 0, wxALL, 5 );


	sbSizer_QS_RouteGeneration->Add( bSizer_QS_checkboxes, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer_QS_GPX;
	bSizer_QS_GPX = new wxBoxSizer( wxHORIZONTAL );

	m_button311112 = new wxButton( sbSizer_QS_RouteGeneration->GetStaticBox(), wxID_ANY, _("Generate GPX"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button311112->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer_QS_GPX->Add( m_button311112, 0, wxALL, 5 );

	m_cbChartRoute4 = new wxCheckBox( sbSizer_QS_RouteGeneration->GetStaticBox(), wxID_ANY, _("Add to route manager"), wxDefaultPosition, wxDefaultSize, 0 );
	m_cbChartRoute4->SetValue(true);
	bSizer_QS_GPX->Add( m_cbChartRoute4, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	sbSizer_QS_RouteGeneration->Add( bSizer_QS_GPX, 0, wxALL, 5 );

	wxBoxSizer* bSizer_QS_RTZ;
	bSizer_QS_RTZ = new wxBoxSizer( wxHORIZONTAL );

	m_button3111121 = new wxButton( sbSizer_QS_RouteGeneration->GetStaticBox(), ID_RTZ4, _("Generate RTZ"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button3111121->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString ) );

	bSizer_QS_RTZ->Add( m_button3111121, 0, wxALL, 5 );

	wxString m_choiceSchema4Choices[] = { _("v1.0"), _("v1.1"), _("v1.2") };
	int m_choiceSchema4NChoices = sizeof( m_choiceSchema4Choices ) / sizeof( wxString );
	m_choiceSchema4 = new wxChoice( sbSizer_QS_RouteGeneration->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceSchema4NChoices, m_choiceSchema4Choices, 0 );
	m_choiceSchema4->SetSelection( 0 );
	bSizer_QS_RTZ->Add( m_choiceSchema4, 0, wxALL, 5 );


	sbSizer_QS_RouteGeneration->Add( bSizer_QS_RTZ, 0, wxALL, 5 );


	bSizer_QS_Left->Add( sbSizer_QS_RouteGeneration, 0, wxALL|wxEXPAND, 5 );


	bSizer6->Add( bSizer_QS_Left, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer_QS_Right;
	bSizer_QS_Right = new wxBoxSizer( wxHORIZONTAL );


	bSizer_QS_Right->Add( 0, 0, 1, wxEXPAND, 5 );

	m_bitmap_oil_rig = new wxStaticBitmap( m_panel_QS, wxID_ANY, wxBitmap( wxT("../src\\bitmaps\\oil_rig.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer_QS_Right->Add( m_bitmap_oil_rig, 0, wxALL|wxEXPAND, 5 );


	bSizer_QS_Right->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer6->Add( bSizer_QS_Right, 1, wxEXPAND, 5 );


	m_panel_QS->SetSizer( bSizer6 );
	m_panel_QS->Layout();
	bSizer6->Fit( m_panel_QS );
	m_notebook_PatternSelection->AddPage( m_panel_QS, _("Quadrant Search (Oil Rig)"), true );

	bSizer_Main->Add( m_notebook_PatternSelection, 0, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer_BottomHalf;
	bSizer_BottomHalf = new wxBoxSizer( wxHORIZONTAL );

	wxStaticBoxSizer* sbSizer_DatumCSP;
	sbSizer_DatumCSP = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Datum / CSP (Start of Search)") ), wxVERTICAL );

	m_notebook_CSP = new wxNotebook( sbSizer_DatumCSP->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel_Degrees = new wxPanel( m_notebook_CSP, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer_Dddd;
	bSizer_Dddd = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer_Dddd_Inputs;
	bSizer_Dddd_Inputs = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer1431;
	bSizer1431 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3231 = new wxStaticText( m_panel_Degrees, wxID_ANY, _("Latitude    "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3231->Wrap( -1 );
	bSizer1431->Add( m_staticText3231, 0, wxALIGN_CENTER|wxALL, 5 );

	m_Lat1 = new wxTextCtrl( m_panel_Degrees, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1431->Add( m_Lat1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText3331 = new wxStaticText( m_panel_Degrees, wxID_ANY, _("deg"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3331->Wrap( -1 );
	bSizer1431->Add( m_staticText3331, 0, wxALIGN_CENTER|wxALL, 5 );


	bSizer_Dddd_Inputs->Add( bSizer1431, 0, 0, 5 );

	wxBoxSizer* bSizer14311;
	bSizer14311 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText32311 = new wxStaticText( m_panel_Degrees, wxID_ANY, _("Longitude "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32311->Wrap( -1 );
	bSizer14311->Add( m_staticText32311, 0, wxALIGN_CENTER|wxALL, 5 );

	m_Lon1 = new wxTextCtrl( m_panel_Degrees, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14311->Add( m_Lon1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText33311 = new wxStaticText( m_panel_Degrees, wxID_ANY, _("deg"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33311->Wrap( -1 );
	bSizer14311->Add( m_staticText33311, 0, wxALIGN_CENTER|wxALL, 5 );


	bSizer_Dddd_Inputs->Add( bSizer14311, 0, 0, 5 );


	bSizer_Dddd->Add( bSizer_Dddd_Inputs, 0, wxALIGN_CENTER, 5 );

	wxBoxSizer* bSizer_Dddd_GetPositionButtons;
	bSizer_Dddd_GetPositionButtons = new wxBoxSizer( wxHORIZONTAL );


	bSizer_Dddd_GetPositionButtons->Add( 0, 0, 1, wxEXPAND, 5 );

	m_button_Ship = new wxButton( m_panel_Degrees, wxID_ANY, _("Get ship position"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button_Ship->SetToolTip( _("Copy ship position (GPS fix required)") );

	bSizer_Dddd_GetPositionButtons->Add( m_button_Ship, 0, wxALL, 5 );

	m_Cursor = new wxButton( m_panel_Degrees, wxID_ANY, _("Get cursor position"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer_Dddd_GetPositionButtons->Add( m_Cursor, 0, wxALL, 5 );


	bSizer_Dddd_GetPositionButtons->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer_Dddd->Add( bSizer_Dddd_GetPositionButtons, 1, wxEXPAND, 5 );


	m_panel_Degrees->SetSizer( bSizer_Dddd );
	m_panel_Degrees->Layout();
	bSizer_Dddd->Fit( m_panel_Degrees );
	m_notebook_CSP->AddPage( m_panel_Degrees, _("D.ddd"), false );
	m_panel_DegreesMinutes = new wxPanel( m_notebook_CSP, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer4011;
	bSizer4011 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer_DMMmmm_Inputs;
	bSizer_DMMmmm_Inputs = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer143131;
	bSizer143131 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText323131 = new wxStaticText( m_panel_DegreesMinutes, wxID_ANY, _("Lat "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText323131->Wrap( -1 );
	bSizer143131->Add( m_staticText323131, 0, wxALIGN_CENTER|wxALL, 5 );

	m_Lat1_d1 = new wxTextCtrl( m_panel_DegreesMinutes, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer143131->Add( m_Lat1_d1, 0, wxALL, 5 );

	m_staticText333131 = new wxStaticText( m_panel_DegreesMinutes, wxID_ANY, _("deg"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_staticText333131->Wrap( -1 );
	bSizer143131->Add( m_staticText333131, 0, wxALIGN_CENTER|wxALL, 5 );

	m_Lat1_m1 = new wxTextCtrl( m_panel_DegreesMinutes, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	bSizer143131->Add( m_Lat1_m1, 0, wxALL|wxEXPAND, 5 );

	m_staticText11431 = new wxStaticText( m_panel_DegreesMinutes, wxID_ANY, _("'"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11431->Wrap( -1 );
	bSizer143131->Add( m_staticText11431, 0, wxALIGN_CENTER|wxALL, 5 );

	wxString m_Lat1_NS1Choices[] = { _("N"), _("S") };
	int m_Lat1_NS1NChoices = sizeof( m_Lat1_NS1Choices ) / sizeof( wxString );
	m_Lat1_NS1 = new wxChoice( m_panel_DegreesMinutes, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_Lat1_NS1NChoices, m_Lat1_NS1Choices, 0 );
	m_Lat1_NS1->SetSelection( 0 );
	bSizer143131->Add( m_Lat1_NS1, 0, wxALL, 5 );


	bSizer_DMMmmm_Inputs->Add( bSizer143131, 0, 0, 5 );

	wxBoxSizer* bSizer1431121;
	bSizer1431121 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3231121 = new wxStaticText( m_panel_DegreesMinutes, wxID_ANY, _("Lon"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3231121->Wrap( -1 );
	bSizer1431121->Add( m_staticText3231121, 0, wxALIGN_CENTER|wxALL, 5 );

	m_Lon1_d1 = new wxTextCtrl( m_panel_DegreesMinutes, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer1431121->Add( m_Lon1_d1, 0, wxALL, 5 );

	m_staticText3331121 = new wxStaticText( m_panel_DegreesMinutes, wxID_ANY, _("deg"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3331121->Wrap( -1 );
	bSizer1431121->Add( m_staticText3331121, 0, wxALIGN_CENTER|wxALL, 5 );

	m_Lon1_m1 = new wxTextCtrl( m_panel_DegreesMinutes, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	bSizer1431121->Add( m_Lon1_m1, 0, wxALL|wxEXPAND, 5 );

	m_staticText114121 = new wxStaticText( m_panel_DegreesMinutes, wxID_ANY, _("'"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText114121->Wrap( -1 );
	bSizer1431121->Add( m_staticText114121, 0, wxALIGN_CENTER|wxALL, 5 );

	wxString m_Lon1_EW1Choices[] = { _("E"), _("W") };
	int m_Lon1_EW1NChoices = sizeof( m_Lon1_EW1Choices ) / sizeof( wxString );
	m_Lon1_EW1 = new wxChoice( m_panel_DegreesMinutes, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_Lon1_EW1NChoices, m_Lon1_EW1Choices, 0 );
	m_Lon1_EW1->SetSelection( 0 );
	bSizer1431121->Add( m_Lon1_EW1, 0, wxALL, 5 );


	bSizer_DMMmmm_Inputs->Add( bSizer1431121, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer4011->Add( bSizer_DMMmmm_Inputs, 0, wxALIGN_CENTER, 5 );

	m_button_DMMmmm_ConvertDegree = new wxButton( m_panel_DegreesMinutes, wxID_ANY, _("Convert to decimal degrees"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4011->Add( m_button_DMMmmm_ConvertDegree, 0, wxALIGN_CENTER|wxALL, 5 );


	m_panel_DegreesMinutes->SetSizer( bSizer4011 );
	m_panel_DegreesMinutes->Layout();
	bSizer4011->Fit( m_panel_DegreesMinutes );
	m_notebook_CSP->AddPage( m_panel_DegreesMinutes, _("D MM.mmm"), false );
	m_panel_DegreesMinutesSeconds = new wxPanel( m_notebook_CSP, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer401;
	bSizer401 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer_DMMSS_Inputs;
	bSizer_DMMSS_Inputs = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer14313;
	bSizer14313 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText32313 = new wxStaticText( m_panel_DegreesMinutesSeconds, wxID_ANY, _("Lat "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText32313->Wrap( -1 );
	bSizer14313->Add( m_staticText32313, 0, wxALIGN_CENTER|wxALL, 5 );

	m_Lat1_d = new wxTextCtrl( m_panel_DegreesMinutesSeconds, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer14313->Add( m_Lat1_d, 0, wxALL, 5 );

	m_staticText33313 = new wxStaticText( m_panel_DegreesMinutesSeconds, wxID_ANY, _("deg"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_staticText33313->Wrap( -1 );
	bSizer14313->Add( m_staticText33313, 0, wxALIGN_CENTER|wxALL, 5 );

	m_Lat1_m = new wxTextCtrl( m_panel_DegreesMinutesSeconds, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	bSizer14313->Add( m_Lat1_m, 0, wxALL, 5 );

	m_staticText1143 = new wxStaticText( m_panel_DegreesMinutesSeconds, wxID_ANY, _("'"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1143->Wrap( -1 );
	bSizer14313->Add( m_staticText1143, 0, wxALIGN_CENTER|wxALL, 5 );

	m_Lat1_s = new wxTextCtrl( m_panel_DegreesMinutesSeconds, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	bSizer14313->Add( m_Lat1_s, 0, wxALL, 5 );

	m_staticText1153 = new wxStaticText( m_panel_DegreesMinutesSeconds, wxID_ANY, _("\""), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1153->Wrap( -1 );
	bSizer14313->Add( m_staticText1153, 0, wxALIGN_CENTER|wxALL, 5 );

	wxString m_Lat1_NSChoices[] = { _("N"), _("S") };
	int m_Lat1_NSNChoices = sizeof( m_Lat1_NSChoices ) / sizeof( wxString );
	m_Lat1_NS = new wxChoice( m_panel_DegreesMinutesSeconds, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_Lat1_NSNChoices, m_Lat1_NSChoices, 0 );
	m_Lat1_NS->SetSelection( 0 );
	bSizer14313->Add( m_Lat1_NS, 0, wxALL, 5 );


	bSizer_DMMSS_Inputs->Add( bSizer14313, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer143112;
	bSizer143112 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText323112 = new wxStaticText( m_panel_DegreesMinutesSeconds, wxID_ANY, _("Lon"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText323112->Wrap( -1 );
	bSizer143112->Add( m_staticText323112, 0, wxALIGN_CENTER|wxALL, 5 );

	m_Lon1_d = new wxTextCtrl( m_panel_DegreesMinutesSeconds, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	bSizer143112->Add( m_Lon1_d, 0, wxALL, 5 );

	m_staticText333112 = new wxStaticText( m_panel_DegreesMinutesSeconds, wxID_ANY, _("deg"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText333112->Wrap( -1 );
	bSizer143112->Add( m_staticText333112, 0, wxALIGN_CENTER|wxALL, 5 );

	m_Lon1_m = new wxTextCtrl( m_panel_DegreesMinutesSeconds, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	bSizer143112->Add( m_Lon1_m, 0, wxALL, 5 );

	m_staticText11412 = new wxStaticText( m_panel_DegreesMinutesSeconds, wxID_ANY, _("'"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11412->Wrap( -1 );
	bSizer143112->Add( m_staticText11412, 0, wxALIGN_CENTER|wxALL, 5 );

	m_Lon1_s = new wxTextCtrl( m_panel_DegreesMinutesSeconds, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), 0 );
	bSizer143112->Add( m_Lon1_s, 0, wxALL, 5 );

	m_staticText11512 = new wxStaticText( m_panel_DegreesMinutesSeconds, wxID_ANY, _("\""), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11512->Wrap( -1 );
	bSizer143112->Add( m_staticText11512, 0, wxALIGN_CENTER|wxALL, 5 );

	wxString m_Lon1_EWChoices[] = { _("E"), _("W") };
	int m_Lon1_EWNChoices = sizeof( m_Lon1_EWChoices ) / sizeof( wxString );
	m_Lon1_EW = new wxChoice( m_panel_DegreesMinutesSeconds, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_Lon1_EWNChoices, m_Lon1_EWChoices, 0 );
	m_Lon1_EW->SetSelection( 1 );
	bSizer143112->Add( m_Lon1_EW, 0, wxALL, 5 );


	bSizer_DMMSS_Inputs->Add( bSizer143112, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer401->Add( bSizer_DMMSS_Inputs, 0, wxALIGN_CENTER|wxEXPAND, 5 );

	m_button_DMMSS_ConvertDegree = new wxButton( m_panel_DegreesMinutesSeconds, wxID_ANY, _("Convert to decimal degrees"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer401->Add( m_button_DMMSS_ConvertDegree, 0, wxALIGN_CENTER|wxALL, 5 );


	m_panel_DegreesMinutesSeconds->SetSizer( bSizer401 );
	m_panel_DegreesMinutesSeconds->Layout();
	bSizer401->Fit( m_panel_DegreesMinutesSeconds );
	m_notebook_CSP->AddPage( m_panel_DegreesMinutesSeconds, _("D MM SS"), true );

	sbSizer_DatumCSP->Add( m_notebook_CSP, 0, 0, 5 );


	bSizer_BottomHalf->Add( sbSizer_DatumCSP, 1, wxALL, 5 );

	wxBoxSizer* bSizer_BottomRight;
	bSizer_BottomRight = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer_SearchTimeDistance;
	sbSizer_SearchTimeDistance = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Search Distance / Time") ), wxVERTICAL );

	wxBoxSizer* bSizer_RouteDistance;
	bSizer_RouteDistance = new wxBoxSizer( wxHORIZONTAL );

	m_Distance = new wxStaticText( sbSizer_SearchTimeDistance->GetStaticBox(), wxID_ANY, _("--"), wxDefaultPosition, wxDefaultSize, 0 );
	m_Distance->Wrap( -1 );
	bSizer_RouteDistance->Add( m_Distance, 0, wxALIGN_CENTER|wxALL, 5 );


	bSizer_RouteDistance->Add( 10, 0, 1, wxEXPAND, 5 );

	m_staticText73 = new wxStaticText( sbSizer_SearchTimeDistance->GetStaticBox(), wxID_ANY, _("NM"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText73->Wrap( -1 );
	bSizer_RouteDistance->Add( m_staticText73, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	sbSizer_SearchTimeDistance->Add( bSizer_RouteDistance, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer_RouteTime;
	bSizer_RouteTime = new wxBoxSizer( wxHORIZONTAL );

	m_Hours = new wxStaticText( sbSizer_SearchTimeDistance->GetStaticBox(), wxID_ANY, _("--"), wxDefaultPosition, wxDefaultSize, 0 );
	m_Hours->Wrap( -1 );
	bSizer_RouteTime->Add( m_Hours, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_staticText72 = new wxStaticText( sbSizer_SearchTimeDistance->GetStaticBox(), wxID_ANY, _("h"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText72->Wrap( -1 );
	bSizer_RouteTime->Add( m_staticText72, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_Minutes = new wxStaticText( sbSizer_SearchTimeDistance->GetStaticBox(), wxID_ANY, _("--"), wxDefaultPosition, wxDefaultSize, 0 );
	m_Minutes->Wrap( -1 );
	bSizer_RouteTime->Add( m_Minutes, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_staticText62 = new wxStaticText( sbSizer_SearchTimeDistance->GetStaticBox(), wxID_ANY, _("m"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText62->Wrap( -1 );
	bSizer_RouteTime->Add( m_staticText62, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_Seconds = new wxStaticText( sbSizer_SearchTimeDistance->GetStaticBox(), wxID_ANY, _("--"), wxDefaultPosition, wxDefaultSize, 0 );
	m_Seconds->Wrap( -1 );
	bSizer_RouteTime->Add( m_Seconds, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_staticText64 = new wxStaticText( sbSizer_SearchTimeDistance->GetStaticBox(), wxID_ANY, _("s"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText64->Wrap( -1 );
	bSizer_RouteTime->Add( m_staticText64, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	sbSizer_SearchTimeDistance->Add( bSizer_RouteTime, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer_BottomRight->Add( sbSizer_SearchTimeDistance, 1, wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer_DistanceConverter;
	sbSizer_DistanceConverter = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Distance Converter") ), wxHORIZONTAL );

	m_meterDistance = new wxTextCtrl( sbSizer_DistanceConverter->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 70,-1 ), 0 );
	sbSizer_DistanceConverter->Add( m_meterDistance, 0, wxALIGN_CENTER|wxALL, 5 );

	m_staticText66 = new wxStaticText( sbSizer_DistanceConverter->GetStaticBox(), wxID_ANY, _("m"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText66->Wrap( -1 );
	sbSizer_DistanceConverter->Add( m_staticText66, 0, wxALIGN_CENTER|wxALL, 5 );

	wxBoxSizer* bSizer771;
	bSizer771 = new wxBoxSizer( wxVERTICAL );

	m_buttonMeterToNM = new wxButton( sbSizer_DistanceConverter->GetStaticBox(), wxID_ANY, _("-->"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonMeterToNM->SetMinSize( wxSize( 40,25 ) );

	bSizer771->Add( m_buttonMeterToNM, 0, wxALL, 5 );

	m_buttonNmToMeter = new wxButton( sbSizer_DistanceConverter->GetStaticBox(), wxID_ANY, _("<--"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonNmToMeter->SetMinSize( wxSize( 40,25 ) );

	bSizer771->Add( m_buttonNmToMeter, 0, wxALL, 5 );


	sbSizer_DistanceConverter->Add( bSizer771, 1, wxEXPAND, 5 );

	m_NmDistance = new wxTextCtrl( sbSizer_DistanceConverter->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 70,-1 ), 0 );
	sbSizer_DistanceConverter->Add( m_NmDistance, 0, wxALIGN_CENTER|wxALL, 5 );

	m_staticText67 = new wxStaticText( sbSizer_DistanceConverter->GetStaticBox(), wxID_ANY, _("NM"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText67->Wrap( -1 );
	sbSizer_DistanceConverter->Add( m_staticText67, 0, wxALIGN_CENTER|wxALL, 5 );


	bSizer_BottomRight->Add( sbSizer_DistanceConverter, 1, wxALL|wxEXPAND, 5 );


	bSizer_BottomHalf->Add( bSizer_BottomRight, 0, wxEXPAND, 5 );


	bSizer_Main->Add( bSizer_BottomHalf, 0, 0, 5 );


	this->SetSizer( bSizer_Main );
	this->Layout();
	bSizer_Main->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( DlgDef::OnClose ) );
	m_button3111->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnPSGPX ), NULL, this );
	m_button311112121->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnPSGPX ), NULL, this );
	m_Nship->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( DlgDef::OnSelectNumberShips ), NULL, this );
	m_NPortStbd->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( DlgDef::OnSelectPortStarboard ), NULL, this );
	m_button31111->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnESGPX ), NULL, this );
	m_button31111212->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnESGPX ), NULL, this );
	m_button311111->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnSSGPX ), NULL, this );
	m_button31111211->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnSSGPX ), NULL, this );
	m_VSMethod->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( DlgDef::OnSelectVectorMethod ), NULL, this );
	m_button311112->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnORGPX ), NULL, this );
	m_button3111121->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnORGPX ), NULL, this );
	m_notebook_CSP->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( DlgDef::key_shortcut ), NULL, this );
	m_notebook_CSP->Connect( wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED, wxNotebookEventHandler( DlgDef::OnNoteBookFit ), NULL, this );
	m_panel_Degrees->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( DlgDef::key_shortcut ), NULL, this );
	m_Lat1->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( DlgDef::key_shortcut ), NULL, this );
	m_Lon1->Connect( wxEVT_KEY_DOWN, wxKeyEventHandler( DlgDef::key_shortcut ), NULL, this );
	m_button_Ship->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnShip ), NULL, this );
	m_Cursor->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnCursorSelect ), NULL, this );
	m_button_DMMmmm_ConvertDegree->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnConvertToDegree ), NULL, this );
	m_button_DMMSS_ConvertDegree->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnConvertToDegree ), NULL, this );
	m_buttonMeterToNM->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnConvertMeterToNM ), NULL, this );
	m_buttonNmToMeter->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnConvertNmToMeter ), NULL, this );
}

DlgDef::~DlgDef()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( DlgDef::OnClose ) );
	m_button3111->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnPSGPX ), NULL, this );
	m_button311112121->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnPSGPX ), NULL, this );
	m_Nship->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( DlgDef::OnSelectNumberShips ), NULL, this );
	m_NPortStbd->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( DlgDef::OnSelectPortStarboard ), NULL, this );
	m_button31111->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnESGPX ), NULL, this );
	m_button31111212->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnESGPX ), NULL, this );
	m_button311111->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnSSGPX ), NULL, this );
	m_button31111211->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnSSGPX ), NULL, this );
	m_VSMethod->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( DlgDef::OnSelectVectorMethod ), NULL, this );
	m_button311112->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnORGPX ), NULL, this );
	m_button3111121->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnORGPX ), NULL, this );
	m_notebook_CSP->Disconnect( wxEVT_KEY_DOWN, wxKeyEventHandler( DlgDef::key_shortcut ), NULL, this );
	m_notebook_CSP->Disconnect( wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED, wxNotebookEventHandler( DlgDef::OnNoteBookFit ), NULL, this );
	m_panel_Degrees->Disconnect( wxEVT_KEY_DOWN, wxKeyEventHandler( DlgDef::key_shortcut ), NULL, this );
	m_Lat1->Disconnect( wxEVT_KEY_DOWN, wxKeyEventHandler( DlgDef::key_shortcut ), NULL, this );
	m_Lon1->Disconnect( wxEVT_KEY_DOWN, wxKeyEventHandler( DlgDef::key_shortcut ), NULL, this );
	m_button_Ship->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnShip ), NULL, this );
	m_Cursor->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnCursorSelect ), NULL, this );
	m_button_DMMmmm_ConvertDegree->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnConvertToDegree ), NULL, this );
	m_button_DMMSS_ConvertDegree->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnConvertToDegree ), NULL, this );
	m_buttonMeterToNM->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnConvertMeterToNM ), NULL, this );
	m_buttonNmToMeter->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DlgDef::OnConvertNmToMeter ), NULL, this );

}

CfgDlgDef::CfgDlgDef( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer_Settings;
	bSizer_Settings = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer_GeneralSettings;
	sbSizer_GeneralSettings = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("General settings") ), wxHORIZONTAL );

	m_staticText17 = new wxStaticText( sbSizer_GeneralSettings->GetStaticBox(), wxID_ANY, _("Opacity"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	sbSizer_GeneralSettings->Add( m_staticText17, 0, wxALIGN_CENTER|wxALL, 5 );

	m_sOpacity = new wxSlider( sbSizer_GeneralSettings->GetStaticBox(), wxID_ANY, 255, 0, 255, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	sbSizer_GeneralSettings->Add( m_sOpacity, 0, wxALIGN_CENTER|wxALL|wxEXPAND, 5 );


	bSizer_Settings->Add( sbSizer_GeneralSettings, 0, wxALL|wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer_CpuSettings;
	sbSizer_CpuSettings = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("CPU saving settings") ), wxVERTICAL );

	m_CaptureShip = new wxCheckBox( sbSizer_CpuSettings->GetStaticBox(), wxID_ANY, _("Capture Ship Position"), wxDefaultPosition, wxDefaultSize, 0 );
	m_CaptureShip->SetValue(true);
	m_CaptureShip->SetToolTip( _("Leave ticked, so you can use ship's position") );

	sbSizer_CpuSettings->Add( m_CaptureShip, 0, wxALL, 5 );

	m_CaptureCursor = new wxCheckBox( sbSizer_CpuSettings->GetStaticBox(), wxID_ANY, _("Capture Cursor Position"), wxDefaultPosition, wxDefaultSize, 0 );
	m_CaptureCursor->SetValue(true);
	m_CaptureCursor->SetToolTip( _("Leave ticked, so that you can use cursor position.") );

	sbSizer_CpuSettings->Add( m_CaptureCursor, 0, wxALL, 5 );


	bSizer_Settings->Add( sbSizer_CpuSettings, 0, wxALL|wxEXPAND, 5 );

	m_sdbSizer_OkCancel = new wxStdDialogButtonSizer();
	m_sdbSizer_OkCancelOK = new wxButton( this, wxID_OK );
	m_sdbSizer_OkCancel->AddButton( m_sdbSizer_OkCancelOK );
	m_sdbSizer_OkCancelCancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer_OkCancel->AddButton( m_sdbSizer_OkCancelCancel );
	m_sdbSizer_OkCancel->Realize();

	bSizer_Settings->Add( m_sdbSizer_OkCancel, 0, wxALL|wxEXPAND, 5 );


	this->SetSizer( bSizer_Settings );
	this->Layout();
	bSizer_Settings->Fit( this );

	this->Centre( wxBOTH );
}

CfgDlgDef::~CfgDlgDef()
{
}
