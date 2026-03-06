/******************************************************************************
 *
 * Project:  OpenCPN
 * Purpose:  SAR Plugin
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

#ifndef _CALCULATORGUI_IMPL_H_
#define _CALCULATORGUI_IMPL_H_

// #include <cstdlib>
// #include <cstdio>
#ifdef WX_PRECOMP
#include "wx/wx.h"
#endif

#include "SARgui.h"
#include "bitmaps.h"
#include "SAR_pi.h"
#include "NavFunc.h"
#include "tinyxml2.h"
#include <wx/string.h>
#include <wx/event.h>

using namespace std;

using namespace tinyxml2;

namespace tinyxml2 {
  class XMLDocument;
  class XMLElement;
  class XMLNode;
}

class SAR_pi;

class sarRoute;

class waypoint {
public:
  wxString id;
  wxString name;
  wxString lat, lon;
  bool name_visible;
  bool icon_blank;
};

class sarRoute {
public:
  wxString routeName;
  std::vector<waypoint> waypoints;
  wxArrayString m_arrayPoints;
};

//GUI classes
class CfgDlg : public CfgDlgDef {
public:
  CfgDlg(wxWindow* parent, wxWindowID id = wxID_ANY,
         const wxString& title = _("SAR preferences"),
         const wxPoint& pos = wxDefaultPosition,
         const wxSize& size = wxSize(-1, -1),
         long style = wxDEFAULT_DIALOG_STYLE);
};

class Dlg : public DlgDef {
public:
  Dlg(wxWindow* parent, wxWindowID id = wxID_ANY,
      const wxString& title = _("Search And Rescue"),
      const wxPoint& pos = wxDefaultPosition,
      const wxSize& size = wxSize(-1, -1),
      long style = wxCAPTION | wxDEFAULT_DIALOG_STYLE | wxMINIMIZE_BOX |
                   wxRESIZE_BORDER);

  void OnConvertToDegree(wxCommandEvent& event);
  void ConvertToDegree();

  void OnConvertMeterToNM(wxCommandEvent& event);
  void OnConvertNmToMeter(wxCommandEvent& event);

  void OnNoteBookFit(wxNotebookEvent& event);

  void OnGenerateRoute(wxCommandEvent& event);
  void Calculate(wxCommandEvent& event, bool Export, int Pattern);

  void OnSelectNumberShips(wxCommandEvent& event);
  void OnSelectVectorMethod(wxCommandEvent& event);
  void OnSelectPortStarboard(wxCommandEvent& event);

  void OnShip(wxCommandEvent& event);
  void OnCursor();
  void OnKeyShortcut(wxKeyEvent& event);
  void OnCursorSelect(wxCommandEvent& event);

  void getDatum(double m_lat, double m_lon);

  void AddPoint2(XMLElement* Route, wxString ptlat, wxString ptlon,
                 wxString ptname, wxString ptsym, wxString pttype);

  void setDDMM();
  void OnClose(wxCloseEvent& event);

  void CreateRoute(wxString filename);
  void AddChartRoute(wxString myRoute, wxString mySpeed, wxString myColor);
  int ExportRTZ(wxString routename);

  SAR_pi* plugin;
  double m_ship_lon, m_ship_lat, m_cursor_lon, m_cursor_lat;
  int shipsAvailable;
  int PortStbd;

  tinyxml2::XMLDocument xmlDoc;
  wxArrayString waypointsList;
  tinyxml2::XMLNode* waypoints;
  vector<waypoint> m_waypointList;

  bool m_bChartRoute;
  bool m_bSaveRTZ;
  int rtz_schema;

private:
  wxPoint xy;
  wxSize wh;
  double lat1, lon1, lat2, lon2, targetAz;
  bool error_found;
  bool dbg;
  bool writeWaypointNames;
  bool showMarkIcons;
};

#endif
