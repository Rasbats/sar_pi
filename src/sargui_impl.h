/******************************************************************************
 *
 * Project:  OpenCPN
 * Purpose:  ROUTE Plugin
 * Author:   SaltyPaws
 *
 ***************************************************************************
 *   Copyright (C) 2012 by Brazil BrokeTail                                *
 *   $EMAIL$                                                               *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************
 */

#ifndef _SARGUI_IMPL_H_
#define _SARGUI_IMPL_H_

#include "sargui.h"
#include "sar_pi.h"

#include <wx/filedlg.h>

class sar_pi;

class CfgDlg : public CfgDlgDef
{
public:
      CfgDlg( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("SAR preferences"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 496,587 ), long style = wxDEFAULT_DIALOG_STYLE );
};

class Dlg : public DlgDef
{
public:
      Dlg( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("SAR Patterns"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 700,550 ), long style = wxDEFAULT_DIALOG_STYLE );
      void OnSurveySelection( wxCommandEvent& event );
      void OnRecordToggle( wxCommandEvent& event );
	void OnNewSurvey( wxCommandEvent& event );
	void OnDeleteSurvey( wxCommandEvent& event );
	void OnSurveyProperties( wxCommandEvent& event );
	void OnZoomToSurvey( wxCommandEvent& event );
	void OnMergeSurvey( wxCommandEvent& event );
	void OnImportSurvey( wxCommandEvent& event );
	void OnExportSurvey( wxCommandEvent& event );
	void OnSurveyCancelClick( wxCommandEvent& event );
	void OnSurveyOkClick( wxCommandEvent& event );
      sar_pi *plugin;
};

#endif
