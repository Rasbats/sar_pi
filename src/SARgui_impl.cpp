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

#include "SARgui_impl.h"

using namespace tinyxml2;

CfgDlg::CfgDlg(wxWindow* parent, wxWindowID id, const wxString& title,
               const wxPoint& pos, const wxSize& size, long style)
    : CfgDlgDef(parent, id, title, pos, size, style) {}

Dlg::Dlg(wxWindow* parent, wxWindowID id, const wxString& title,
         const wxPoint& pos, const wxSize& size, long style)
    : DlgDef(parent, id, title, pos, size, style) {
  this->Fit();

  initialize_bitmaps();
  dbg = true;  // for debug output set to true

  // initialise images
  m_bitmap_trackln1->SetBitmap(_img_trackln1);
  m_bitmap_sector->SetBitmap(_img_sector_uscg);
  m_bitmap_exp_sq->SetBitmap(_img_exp_sq);
  m_bitmap_oil_rig->SetBitmap(_img_oil_rig);
  m_notebook1->SetSelection(0);
  m_wxNotebook234->SetSelection(0);
  m_Nship->SetSelection(0);
  m_NPortStbd->SetSelection(0);
  shipsAvailable = 0;
  PortStbd = 0;
}

void Dlg::OnConvertToDegree(wxCommandEvent& event) { ConvertToDegree(); }

void Dlg::ConvertToDegree() {
  double DDLat;
  double DDLon;

  double DDLat1;
  double DDLon1;

  double MMLat;
  double MMLon;

  double SSLat;
  double SSLon;

  int DDlat1;
  int DDlon1;

  int MMlat1;
  int MMlon1;

  int NS;
  int EW;

  double MMlat0;
  double MMlon0;

  double MMlat2;
  double MMlon2;

  double SSlat1;
  double SSlon1;

  double value;

  wxString s;
  wxString s1;
  wxString m1;
  wxString d1;

  // set cell values to 0 if they are empty. This ensures conversion goes ok.
  double test_value;
  if (!this->m_Lat1_d->GetValue().ToDouble(&test_value)) {
    m_Lat1_d->SetValue(wxString::Format("%i", 0));
  }
  if (!this->m_Lat1_m->GetValue().ToDouble(&test_value)) {
    m_Lat1_m->SetValue(wxString::Format("%i", 0));
  }
  if (!this->m_Lat1_s->GetValue().ToDouble(&test_value)) {
    m_Lat1_s->SetValue(wxString::Format("%i", 0));
  }

  if (!this->m_Lon1_d->GetValue().ToDouble(&test_value)) {
    m_Lon1_d->SetValue(wxString::Format("%i", 0));
  }
  if (!this->m_Lon1_m->GetValue().ToDouble(&test_value)) {
    m_Lon1_m->SetValue(wxString::Format("%i", 0));
  }
  if (!this->m_Lon1_s->GetValue().ToDouble(&test_value)) {
    m_Lon1_s->SetValue(wxString::Format("%i", 0));
  }

  if (!this->m_Lat1_d1->GetValue().ToDouble(&test_value)) {
    m_Lat1_d1->SetValue(wxString::Format("%i", 0));
  }
  if (!this->m_Lat1_m1->GetValue().ToDouble(&test_value)) {
    m_Lat1_m1->SetValue(wxString::Format("%i", 0));
  }

  if (!this->m_Lon1_d1->GetValue().ToDouble(&test_value)) {
    m_Lon1_d1->SetValue(wxString::Format("%i", 0));
  }
  if (!this->m_Lon1_m1->GetValue().ToDouble(&test_value)) {
    m_Lon1_m1->SetValue(wxString::Format("%i", 0));
  }

  switch (m_wxNotebook234->GetSelection()) {
    case 0:
      s = m_Lat1->GetValue();
      s.ToDouble(&value);
      DDLat = value;
      s = m_Lon1->GetValue();
      s.ToDouble(&value);
      DDLon = value;

      DDlat1 = abs(int(DDLat));
      DDlon1 = abs(int(DDLon));

      // set the ddmm page

      m_Lat1_d1->SetValue(wxString::Format(_T("%i"), (int)DDlat1));
      m_Lon1_d1->SetValue(wxString::Format(_T("%i"), (int)DDlon1));

      MMlat0 = (fabs(DDLat) - double(DDlat1)) * 60;
      MMlon0 = (fabs(DDLon) - double(DDlon1)) * 60;

      m_Lat1_m1->SetValue(wxString::Format("%.6f", MMlat0));
      m_Lon1_m1->SetValue(wxString::Format("%.6f", MMlon0));

      if (DDLat > 0) {
        m_Lat1_NS1->SetSelection(0);
        m_Lat1_NS->SetSelection(0);
      } else {
        m_Lat1_NS1->SetSelection(1);
        m_Lat1_NS->SetSelection(1);
      }

      if (DDLon > 0) {
        m_Lon1_EW1->SetSelection(0);
        m_Lon1_EW->SetSelection(0);
      } else {
        m_Lon1_EW1->SetSelection(1);
        m_Lon1_EW->SetSelection(1);
      }

      // set the ddmmss page

      m_Lat1_d->SetValue(wxString::Format(_T("%i"), abs((int)DDlat1)));
      m_Lon1_d->SetValue(wxString::Format(_T("%i"), abs((int)DDlon1)));

      m_Lat1_m->SetValue(wxString::Format(_T("%i"), abs((int)MMlat0)));
      m_Lon1_m->SetValue(wxString::Format(_T("%i"), abs((int)MMlon0)));

      MMlat2 = int(MMlat0);
      MMlon2 = int(MMlon0);

      SSlat1 = (MMlat0 - MMlat2) * 60;
      SSlon1 = (MMlon0 - MMlon2) * 60;

      m_Lat1_s->SetValue(wxString::Format("%.6f", SSlat1));
      m_Lon1_s->SetValue(wxString::Format("%.6f", SSlon1));

      break;

    case 1:

      d1 = m_Lat1_d1->GetValue();
      d1.ToDouble(&value);
      DDLat = value;
      d1 = m_Lon1_d1->GetValue();
      d1.ToDouble(&value);
      DDLon = value;

      m1 = m_Lat1_m1->GetValue();
      m1.ToDouble(&value);
      MMLat = value;
      m1 = m_Lon1_m1->GetValue();
      m1.ToDouble(&value);
      MMLon = value;

      DDLat1 = DDLat + (MMLat / 60);
      DDLon1 = DDLon + (MMLon / 60);

      // wxMessageBox(wxString::Format(_T("%f"), DDLat1));
      // wxMessageBox(wxString::Format(_T("%f"), DDLon1));

      NS = m_Lat1_NS1->GetSelection();
      if (NS == 1) {
        DDLat1 *= -1;
      }
      EW = m_Lon1_EW1->GetSelection();
      if (EW == 1) {
        DDLon1 *= -1;
      }

      // set the dd.dddd page

      m_Lat1->SetValue(wxString::Format("%.6f", DDLat1));
      m_Lon1->SetValue(wxString::Format("%.6f", DDLon1));

      MMlat1 = int(MMLat);
      MMlon1 = int(MMLon);

      // set the ddmmss page
      if (m_Lat1_NS1->GetSelection() == 0) {
        m_Lat1_NS->SetSelection(0);
      } else {
        m_Lat1_NS->SetSelection(1);
      }
      if (m_Lon1_EW1->GetSelection() == 0) {
        m_Lon1_EW->SetSelection(0);
      } else {
        m_Lon1_EW->SetSelection(1);
      }

      m_Lat1_d->SetValue(wxString::Format(_T("%i"), abs((int)DDLat1)));
      m_Lon1_d->SetValue(wxString::Format(_T("%i"), abs((int)DDLon1)));

      m_Lat1_m->SetValue(wxString::Format(_T("%i"), MMlat1));
      m_Lon1_m->SetValue(wxString::Format(_T("%i"), MMlon1));

      MMlat2 = (MMLat - double(MMlat1)) * 60;
      MMlon2 = (MMLon - double(MMlon1)) * 60;

      m_Lat1_s->SetValue(wxString::Format("%.6f", MMlat2));
      m_Lon1_s->SetValue(wxString::Format("%.6f", MMlon2));

      m_wxNotebook234->SetSelection(0);
      m_Lat1->SetFocus();

      break;
    case 2:
      d1 = m_Lat1_d->GetValue();
      d1.ToDouble(&value);
      DDLat = value;
      d1 = m_Lon1_d->GetValue();
      d1.ToDouble(&value);
      DDLon = value;

      m1 = m_Lat1_m->GetValue();
      m1.ToDouble(&value);
      MMLat = value;
      m1 = m_Lon1_m->GetValue();
      m1.ToDouble(&value);
      MMLon = value;

      s1 = m_Lat1_s->GetValue();
      s1.ToDouble(&value);
      SSLat = value;
      s1 = m_Lon1_s->GetValue();
      s1.ToDouble(&value);
      SSLon = value;

      DDLat1 = DDLat + MMLat / 60 + SSLat / 3600;
      DDLon1 = DDLon + MMLon / 60 + SSLon / 3600;

      NS = m_Lat1_NS->GetSelection();
      if (NS == 1) {
        DDLat1 *= -1;
        m_Lat1_NS1->SetSelection(1);
        m_Lat1_NS->SetSelection(1);
      } else {
        m_Lat1_NS1->SetSelection(0);
        m_Lat1_NS->SetSelection(0);
      }

      EW = m_Lon1_EW->GetSelection();
      if (EW == 1) {
        DDLon1 *= -1;
        m_Lon1_EW1->SetSelection(1);
        m_Lon1_EW->SetSelection(1);
      } else {
        m_Lon1_EW1->SetSelection(0);
        m_Lon1_EW->SetSelection(0);
      }

      // set dd.ddd page

      m_Lat1->SetValue(wxString::Format("%.6f", DDLat1));
      m_Lon1->SetValue(wxString::Format("%.6f", DDLon1));

      // set ddmm page

      m_Lat1_d1->SetValue(wxString::Format(_T("%i"), abs((int)DDLat1)));
      m_Lon1_d1->SetValue(wxString::Format(_T("%i"), abs((int)DDLon1)));

      DDLat1 = MMLat + SSLat / 60;
      DDLon1 = MMLon + SSLon / 60;

      m_Lat1_m1->SetValue(wxString::Format("%.6f", DDLat1));
      m_Lon1_m1->SetValue(wxString::Format("%.6f", DDLon1));

      m_wxNotebook234->SetSelection(0);
      m_Lat1->SetFocus();

      break;
  }
}

void Dlg::OnConvertMeterToNM(wxCommandEvent& event) { ConvertMeterToNM(); }

void Dlg::ConvertMeterToNM() {
  double meters;
  if (!m_meterDistance->GetValue().ToDouble(&meters)) {
    wxMessageBox(_("Invalid input for conversion"), _("Error"),
                 wxOK | wxICON_ERROR);
    m_meterDistance->SetValue(wxString::Format("%d", 0));
    m_NmDistance->SetValue(wxString::Format("%d", 0));
    return;
  }

  const double nm = mtoNM(meters);
  m_NmDistance->SetValue(wxString::Format("%.5f", nm));
}

void Dlg::OnConvertNmToMeter(wxCommandEvent& event) { ConvertNmToMeter(); }

void Dlg::ConvertNmToMeter() {
  double nm;
  if (!m_NmDistance->GetValue().ToDouble(&nm)) {
    wxMessageBox(_("Invalid input for conversion"), _("Error"),
                 wxOK | wxICON_ERROR);
    m_meterDistance->SetValue(wxString::Format("%d", 0));
    m_NmDistance->SetValue(wxString::Format("%d", 0));
    return;
  }

  const double meters = NMtom(nm);
  m_meterDistance->SetValue(wxString::Format("%.0f", meters));
}

void Dlg::OnNoteBookFit(wxNotebookEvent& event) {
  this->m_panel11->Layout();
  this->m_wxNotebook234->InvalidateBestSize();
  this->Fit();
  if (dbg) printf("Resizing window \n");
}

void Dlg::OnFit(wxCommandEvent& event) {
  this->m_wxNotebook234->InvalidateBestSize();
  this->m_panel11->Fit();
  this->m_panel11->Layout();
  this->Fit();
  this->Layout();
  if (dbg) printf("Resizing window \n");
}

void Dlg::Addpoint2(XMLElement* Route, wxString ptlat, wxString ptlon,
                    wxString ptname, wxString ptsym, wxString pttype) {
  tinyxml2::XMLElement* m_waypoint = xmlDoc.NewElement("rtept");
  Route->InsertEndChild(m_waypoint);
  m_waypoint->SetAttribute("lat", ptlat.mb_str());
  m_waypoint->SetAttribute("lon", ptlon.mb_str());

  tinyxml2::XMLElement* name = xmlDoc.NewElement("name");
  m_waypoint->InsertFirstChild(name);
  name->SetText(ptname.mb_str());

  tinyxml2::XMLElement* symbol = xmlDoc.NewElement("sym");
  m_waypoint->InsertFirstChild(symbol);
  symbol->SetText(ptsym.mb_str());

  tinyxml2::XMLElement* type = xmlDoc.NewElement("type");
  m_waypoint->InsertFirstChild(type);
  type->SetText(pttype.mb_str());

  tinyxml2::XMLElement* extensions = xmlDoc.NewElement("extensions");
  m_waypoint->InsertFirstChild(extensions);
  tinyxml2::XMLElement* viz = xmlDoc.NewElement("opencpn:viz_name");
  extensions->InsertFirstChild(viz);
  viz->SetText("1");

  // done adding point
}

void Dlg::OnCalculate(wxCommandEvent& event) {
  int nb = 0;
  nb = m_notebook1->GetSelection();
  // wxMessageBox(wxString::Format("%i", nb));
  switch (nb) {
    case 0: {
      Calculate(event, false, 1);
      break;
    }
    case 1: {
      Calculate(event, false, 2);
      break;
    }
    case 2: {
      Calculate(event, false, 3);
      break;
    }
    case 3: {
      Calculate(event, false, 4);
      break;
    }
  }
}

void Dlg::OnPSGPX(wxCommandEvent& event) {
  // wxMessageBox(_("Function not yet implemented :p")) ;
  m_bSaveRTZ = false;
  rtz_schema = 0;
  int sel = 0;
  switch (event.GetId()) {
    case ID_RTZ1:
      sel = this->m_Nship->GetSelection();
      if (sel == 1) {
        wxMessageBox(_("RTZ for this pattern is not available"), "RTZ");
        m_bSaveRTZ = false;
        return;
      } else
        m_bSaveRTZ = true;
      rtz_schema = this->m_choiceSchema1->GetSelection();
      [[fallthrough]];  // fallthrough is explicit
    default:
      event.Skip();
      break;
  }
  Calculate(event, true, 1);
}

void Dlg::OnESGPX(wxCommandEvent& event) {
  // wxMessageBox(_("Function not yet implemented :p")) ;
  m_bSaveRTZ = false;
  rtz_schema = 0;

  switch (event.GetId()) {
    case ID_RTZ2:
      m_bSaveRTZ = true;
      rtz_schema = this->m_choiceSchema2->GetSelection();
      [[fallthrough]];  // fallthrough is explicit
    default:
      event.Skip();
      break;
  }
  Calculate(event, true, 2);
}

void Dlg::OnSSGPX(wxCommandEvent& event) {
  // wxMessageBox(_("Function not yet implemented :p")) ;
  m_bSaveRTZ = false;
  rtz_schema = 0;
  int sel = 0;
  switch (event.GetId()) {
    case ID_RTZ3:
      sel = this->m_Ncycles->GetSelection();
      if (sel == 1) {
        wxMessageBox(_("RTZ for this pattern is not available"), "RTZ");
        m_bSaveRTZ = false;
        return;
      } else
        m_bSaveRTZ = true;
      rtz_schema = this->m_choiceSchema3->GetSelection();
      [[fallthrough]];  // fallthrough is explicit
    default:
      event.Skip();
      break;
  }
  Calculate(event, true, 3);
}

void Dlg::OnORGPX(wxCommandEvent& event) {
  // wxMessageBox(_("Function not yet implemented :p")) ;
  m_bSaveRTZ = false;
  rtz_schema = 0;

  switch (event.GetId()) {
    case ID_RTZ4:
      m_bSaveRTZ = true;
      rtz_schema = this->m_choiceSchema4->GetSelection();
      [[fallthrough]];  // fallthrough is explicit
    default:
      event.Skip();
      break;
  }
  Calculate(event, true, 4);
}

void Dlg::Calculate(wxCommandEvent& event, bool write_file, int Pattern) {
  /*
  1 Parallel TRack Search
  2 Expanding Square Search
  3 Sector Search
  4 Quadrant Search (Oil Rig)
  */

  shipsAvailable = this->m_Nship->GetSelection();
  PortStbd = this->m_NPortStbd->GetSelection();

  m_bChartRoute = false;

  wxString defaultFileName = "";
  int df = PortStbd;

  switch (Pattern) {
    // Parallel Track Search (PS)
    case 1: {
      int ch = shipsAvailable;
      wxString chText;

      // Single unit
      if (ch == 0) {
        if (df == 0) {
          defaultFileName = "PS-1";  // starboard
        } else if (df == 1) {
          defaultFileName = "PS-2";  // port
        }
      }

      // 2 units AB
      else if (ch == 1) {
        chText = "PS-AB";
        defaultFileName = chText;
      }
      break;
    }

    // Expanding Square Search (SS)
    case 2: {
      defaultFileName = "SS";
      break;
    }

    // Sector Search (VS)
    case 3: {
      int vh = this->m_Ncycles->GetSelection();
      int VSMethod = this->m_VSMethod->GetSelection();
      wxString VS;

      // Method
      if (VSMethod == 0) {
        VS = "USCG";
      } else if (VSMethod == 1) {
        VS = "IAMSAR";
      }

      // Number of passes
      if (vh == 0) {
        defaultFileName = VS + "-VS";
      } else if (vh == 1) {
        defaultFileName = VS + "-VS-12";
      }

      break;
    }

    // Quadrant Search - Oil Rig (QS)
    case 4: {
      defaultFileName = "QS";
      break;
    }

    default: {
      defaultFileName = wxEmptyString;
      break;
    }
  }

  bool error_occurred = false;
  bool user_canceled = false;

  ConvertToDegree();

  double lat1, lon1;
  if (!this->m_Lat1->GetValue().ToDouble(&lat1)) {
    lat1 = 0.0;
  }
  if (!this->m_Lon1->GetValue().ToDouble(&lon1)) {
    lon1 = 0.0;
  }

  if (lat1 == 0 && lon1 == 0) {
    wxMessageBox(_("No Datum Point has been entered"), _("Error"));
    return;
  }
  // if (error_occurred) wxMessageBox(_T("error in conversion of input
  // coordinates"));

  if (shipsAvailable == 0 && Pattern == 1)
    wxMessageBox(
        _("For this search pattern the Start Point entered is the CSP"),
        _("Start Position"), wxCENTRE);

  // error_occurred=false;
  wxString s;
  if (write_file) {
    wxFileDialog dlg(this, _("Export SAR track GPX file as"), wxEmptyString,
                     defaultFileName,
                     _T("GPX files (*.gpx)|*.gpx|All files (*.*)|*.*"),
                     wxFD_SAVE | wxFD_OVERWRITE_PROMPT);
    if (dlg.ShowModal() == wxID_CANCEL) {
      user_canceled = true;  // the user changed idea...
      if (shipsAvailable == 1) {
        this->m_bitmap_trackln1->SetBitmap(_img_trackln_both);
      }
      if (PortStbd == 0) {
        this->m_NPortStbd->SetSelection(0);
        m_bitmap_trackln1->SetBitmap(_img_trackln1);
      }
      if (PortStbd == 1) {
        this->m_NPortStbd->SetSelection(1);
        m_bitmap_trackln1->SetBitmap(_img_trackln1_port);
      }
    }
    // dlg.ShowModal();
    s = dlg.GetPath();
    //  std::cout<<s<< std::endl;
    if (!user_canceled && s.IsEmpty()) {
      error_occurred = true;
      if (dbg) printf("Empty Path\n");
    }
  }

  // Validate input ranges
  if (!error_occurred && !user_canceled) {
    if (std::abs(lat1) > 90) {
      error_occurred = true;
    }
    if (std::abs(lon1) > 180) {
      error_occurred = true;
    }
    if (error_occurred) wxMessageBox(_("error in input range validation"));
  }

  // Start GPX

  XMLDeclaration* decl2 = xmlDoc.NewDeclaration();
  decl2->SetValue(
      "xml version="
      "\"1.0\" "
      "encoding="
      "\"UTF-8\"");
  xmlDoc.LinkEndChild(decl2);
  XMLElement* pRoot = xmlDoc.NewElement("gpx");
  XMLElement* Route = xmlDoc.NewElement("rte");
  XMLElement* Route2 = xmlDoc.NewElement("rte");
  XMLElement* RouteName = xmlDoc.NewElement("name");
  XMLElement* RouteName2 = xmlDoc.NewElement("name");
  XMLElement* Extensions = xmlDoc.NewElement("extensions");
  XMLElement* Extensions2 = xmlDoc.NewElement("extensions");

  XMLElement* textSpeed = xmlDoc.NewElement("opencpn:planned_speed");
  XMLElement* gpxx = xmlDoc.NewElement("gpxx:RouteExtension");
  XMLElement* gpxxDisplayColor = xmlDoc.NewElement("gpxx:DisplayColor");

  // for second cycles:
  XMLElement* textSpeed2 = xmlDoc.NewElement("opencpn:planned_speed");
  XMLElement* gpxx2 = xmlDoc.NewElement("gpxx:RouteExtension");
  XMLElement* gpxxDisplayColor2 = xmlDoc.NewElement("gpxx:DisplayColor");

  wxString mySpeed;

  writeWaypointNames = true;
  showMarkIcons = true;

  XMLElement* text4 = xmlDoc.NewElement("");

  switch (Pattern) {
    case 1: {
      writeWaypointNames = this->m_checkBox1->GetValue();
      showMarkIcons = this->m_checkBoxIcons1->GetValue();
      break;
    }
    case 2: {
      text4->SetText(defaultFileName.mb_str());
      writeWaypointNames = this->m_checkBox2->GetValue();
      showMarkIcons = this->m_checkBoxIcons2->GetValue();
      break;
    }
    case 3: {
      int nc = this->m_Ncycles->GetCurrentSelection();
      if (nc == 0) {
        text4->SetText(defaultFileName.mb_str());
      } else if (nc == 1) {
        wxString newName = defaultFileName + "-1";
        text4->SetText(newName.mb_str());
      }

      writeWaypointNames = this->m_checkBox3->GetValue();
      showMarkIcons = this->m_checkBoxIcons3->GetValue();
      break;
    }
    case 4: {
      text4->SetText(defaultFileName.mb_str());
      writeWaypointNames = this->m_checkBox4->GetValue();
      showMarkIcons = this->m_checkBoxIcons4->GetValue();
      break;
    }
    default: {
      break;
    }
  }

  if (write_file && !user_canceled && !error_occurred) {
    // Add pRoot to xmlDoc after prolog
    xmlDoc.InsertEndChild(pRoot);
    pRoot->SetAttribute("version", "1.1");
    pRoot->SetAttribute("creator", "Route_pi by SaltyPaws/Rasbats");
    pRoot->SetAttribute("xmlns:xsi",
                        "http://www.w3.org/2001/XMLSchema-instance");
    pRoot->SetAttribute("xmlns:gpxx",
                        "http://www.garmin.com/xmlschemas/GpxExtensions/v3");
    pRoot->SetAttribute("xsi:schemaLocation",
                        "http://www.topografix.com/GPX/1/1 "
                        "http://www.topografix.com/GPX/1/1/gpx.xsd");
    pRoot->SetAttribute("xmlns:opencpn", "http://www.opencpn.org");

    // XMLElement* StartN = xmlDoc.NewElement("opencpn:start");
    // XMLElement* text5 = xmlDoc.NewElement("Datum");
    // Extensions->LinkEndChild(StartN);
    // StartN->LinkEndChild(text5);

    //  XMLElement* EndN = xmlDoc.NewElement("opencpn:end");
    //  XMLElement* text6 = xmlDoc.NewElement("End of grid");
    //  Extensions->LinkEndChild(EndN);
    //  EndN->LinkEndChild(text6);

    switch (Pattern) {
      case 1: {
        mySpeed = m_Speed_PS->GetValue();
        if (mySpeed == "") mySpeed = "6";
        textSpeed->SetText(mySpeed.mb_str());
        int nShips = this->m_Nship->GetSelection();
        if (nShips == 1) textSpeed2->SetText(mySpeed.mb_str());
        if (this->m_cbChartRoute1->IsChecked()) m_bChartRoute = true;
        break;
      }
      case 2: {
        mySpeed = m_Speed_ES->GetValue();
        if (mySpeed == "") mySpeed = "6";
        textSpeed->SetText(mySpeed.mb_str());
        if (this->m_cbChartRoute2->IsChecked()) m_bChartRoute = true;
        break;
      }
      case 3: {
        mySpeed = m_Speed_SS->GetValue();
        if (mySpeed == "") mySpeed = "6";
        textSpeed->SetText(mySpeed.mb_str());
        int nCycles = this->m_Ncycles->GetSelection();
        if (nCycles == 1) textSpeed2->SetText(mySpeed.mb_str());
        if (this->m_cbChartRoute3->IsChecked()) m_bChartRoute = true;
        break;
      }
      case 4: {
        mySpeed = m_Speed_OR->GetValue();
        if (mySpeed == "") mySpeed = "6";
        textSpeed->SetText(mySpeed.mb_str());
        if (this->m_cbChartRoute4->IsChecked()) m_bChartRoute = true;
        break;
      }
      default: {
        mySpeed = "0";
        textSpeed->SetText(mySpeed.mb_str());
        break;
      }
    }
  }

  if (error_occurred) {
    wxLogMessage(_("Error occurred, aborting SAR calc!"));
    // wxMessageBox(_("Route interval > Distance, 0 or negative") );
  }

  // Call SAR routine here
  /*
  1 Parallel Search
  2 Expanding Square
  3 Sector search
  4 Oil Rig
  */

  double approach = 0;
  double leg_distancex = 0;
  double leg_distancey = 0;
  long nlegs = 0;
  double speed = 0;
  double SAR_distance = 0;
  double startSARdist;
  double startCse;
  int i = 0;
  int n = 0;
  int nleg = 0;
  wxString wpt_title = "";
  wxString wpt_mark = "";

  if (!user_canceled && !error_occurred) {
    switch (Pattern) {
      // Parallel Track Search
      case 1: {
        if (dbg) cout << "Parallel Track Search\n";

        // Get value or set default is input is empty
        if (!this->m_Approach_PS->GetValue().ToDouble(&approach)) {
          approach = 0.0;
          this->m_Approach_PS->SetValue(wxString::Format("%f", approach));
        }  // approach course (°)
        if (!this->m_dx_PS->GetValue().ToDouble(&leg_distancex)) {
          leg_distancex = 1.0;
          this->m_dx_PS->SetValue(wxString::Format("%f", leg_distancex));
        }  // leg distance (NM)
        if (!this->m_dy_PS->GetValue().ToDouble(&leg_distancey)) {
          leg_distancey = 1.0;
          this->m_dy_PS->SetValue(wxString::Format("%f", leg_distancey));
        }  // track space (NM)
        if (!this->m_n_PS->GetValue().ToLong(&nlegs)) {
          nlegs = 3;
          this->m_n_PS->SetValue(wxString::Format("%d", nlegs));
        }  // number of legs
        if (!this->m_Speed_PS->GetValue().ToDouble(&speed)) {
          speed = 5.0;
          this->m_Speed_PS->SetValue(wxString::Format("%f", speed));
        }  // search velocity (kts)

        // Check for minimum values
        if (leg_distancex < 0.00054) {
          leg_distancex = 0.00054;
          this->m_dx_PS->SetValue(wxString::Format("%f", leg_distancex));
        }
        if (leg_distancey < 0.00054) {
          leg_distancey = 0.00054;
          this->m_dy_PS->SetValue(wxString::Format("%f", leg_distancey));
        }
        if (speed < 0) {
          speed = 0;
          this->m_Speed_PS->SetValue(wxString::Format("%f", speed));
        }
        if (nlegs < 1) {
          nlegs = 1;
          this->m_n_PS->SetValue(wxString::Format("%d", nlegs));
        }

        /*pattern
        *datum
        *Start of search
                datum +approach+90-->-dx/2
        *Leg1
        start+approach-->distance
        pt1+approach+90-->width
        *leg2
        pt2+approach+180-->distance
        pt3+approach-90-->width
        leg3
        pt4+approach-->distance
        pt5+approach+90-->width
        */

        double latDatum, lonDatum;
        latDatum = lat1;
        lonDatum = lon1;

        double lati, loni, ESheading, ESdistance;
        double initDistance, initHdg;
        double latTemp, lonTemp;

        if (shipsAvailable != 0) {
          initHdg = approach + 180;

          initDistance = leg_distancex / 2;

          destRhumb(latDatum, lonDatum, -initHdg, initDistance, &latTemp,
                    &lonTemp);
        }

        switch (shipsAvailable) {
          case 0:  // IAMSAR single unit
          {
            if (write_file) {
              int ps = this->m_NPortStbd->GetSelection();
              wxString colour = "Blue";
              if (ps == 0)
                colour = "Green";
              else if (ps == 1)
                colour = "Red";

              RouteName->SetText(defaultFileName.mb_str());
              Route->LinkEndChild(RouteName);

              Extensions->LinkEndChild(textSpeed);

              gpxxDisplayColor->SetText(colour.mb_str());
              gpxx->LinkEndChild(gpxxDisplayColor);

              Extensions->LinkEndChild(gpxx);
              Route->LinkEndChild(Extensions);
            }

            // wxMessageBox(wxString::Format("%f", ESdistance));

            // destRhumb(latTemp, lonTemp, -hdgTemp, distTemp, &lati,
            // &loni);

            // distRhumb(latDatum, lonDatum, lati, loni, &startSARdist,
            // &startCse);

            if (write_file) {
              Addpoint2(Route, wxString::Format("%f", lat1),
                        wxString::Format("%f", lon1), "CSP", "diamond", "WPT");
            }

            int ps = PortStbd;

            // lat1 = lati;
            // lon1 = loni;

            for (int x = 1; x <= nlegs; x++) {  // Loop over the number of legs
              for (int y = 0; y <= 1; y++) {    // Loop over the tracks
                if (y == 0) {
                  if (x % 2 != 0) {
                    ESheading = approach;
                    wpt_title = "";
                    if (writeWaypointNames) {
                      wpt_title << "" << x << "." << y + 2 << "";
                    }
                  } else {
                    ESheading = approach + 180.0;
                    wpt_title = "";
                    if (writeWaypointNames) {
                      wpt_title << "" << x << "." << y + 2 << "";
                    }
                  }
                  ESdistance = leg_distancex;
                } else {
                  if (x == nlegs) break;
                  wpt_title = "";
                  if (writeWaypointNames) {
                    wpt_title << "" << x + 1 << "." << y << "";
                  }
                  ESdistance = leg_distancey;
                  if (ps == 1) {
                    ESheading = approach - 90.0;
                  } else
                    ESheading = approach + 90.0;
                }

                n++;

                destRhumb(lat1, lon1, -ESheading, ESdistance, &lati, &loni);
                SAR_distance += ESdistance;

                if (showMarkIcons) {
                  wpt_mark = "diamond";
                } else {
                  wpt_mark = "Marks-Blank";
                }

                if (write_file) {
                  Addpoint2(Route, wxString::Format("%f", lati),
                            wxString::Format("%f", loni), wpt_title, wpt_mark,
                            "WPT");
                }

                lat1 = lati;
                lon1 = loni;
              }
            }

            if (write_file) pRoot->LinkEndChild(Route);

            this->m_Distance->SetLabel(wxString::Format("%g", SAR_distance));
            if (speed <= 0.0) {
              m_Hours->SetLabel("--");
              m_Minutes->SetLabel("--");
              m_Seconds->SetLabel("--");
            } else {
              double sTime = SAR_distance / speed;  // decimal hours

              int hours = static_cast<int>(sTime);
              double fractionalHours = sTime - hours;
              int minutes = static_cast<int>(fractionalHours * 60);
              double fractionalMinutes = (fractionalHours * 60) - minutes;
              int seconds = static_cast<int>(fractionalMinutes * 60);

              m_Hours->SetLabel(wxString::Format("%d", hours));
              m_Minutes->SetLabel(wxString::Format("%d", minutes));
              m_Seconds->SetLabel(wxString::Format("%d", seconds));
            }
            break;
          }
          // end single unit - parallel-iamsar
          case 1:  // two units - iamsar
          {
            if (write_file) {
              RouteName->SetText("PS-AB-1");
              Route->LinkEndChild(RouteName);

              Extensions->LinkEndChild(textSpeed);

              gpxxDisplayColor->SetText("Green");
              gpxx->LinkEndChild(gpxxDisplayColor);

              Extensions->LinkEndChild(gpxx);
              Route->LinkEndChild(Extensions);
            }

            for (i = 1; i <= 2; i++) {
              if (i == 1) {
                if (write_file) {
                  Addpoint2(Route, wxString::Format("%f", latDatum),
                            wxString::Format("%f", lonDatum), "Datum",
                            "diamond", "WPT");
                }
                ESheading = approach - 90.0;
                ESdistance = leg_distancey / 2;
                destRhumb(latTemp, lonTemp, -ESheading, ESdistance, &lati,
                          &loni);
                distRhumb(latDatum, lonDatum, lati, loni, &startSARdist,
                          &startCse);
                SAR_distance += startSARdist;
                wpt_title = "";
                if (writeWaypointNames) {
                  wpt_title << "" << 1 << "." << 1 << "";
                }
                if (showMarkIcons) {
                  wpt_mark = "diamond";
                } else {
                  wpt_mark = "Marks-Blank";
                }
                if (write_file) {
                  Addpoint2(Route, wxString::Format("%f", lati),
                            wxString::Format("%f", loni), wpt_title, wpt_mark,
                            "WPT");
                }
                lat1 = lati;
                lon1 = loni;
              }

              // calculate start position

              if (i == 2) {
                if (write_file) {
                  Addpoint2(Route2, wxString::Format("%f", latDatum),
                            wxString::Format("%f", lonDatum), _T(""), "",
                            "WPT");
                }
                ESheading = approach + 90.0;
                ESdistance = leg_distancey / 2;
                destRhumb(latTemp, lonTemp, -ESheading, ESdistance, &lati,
                          &loni);
                distRhumb(latDatum, lonDatum, lati, loni, &startSARdist,
                          &startCse);
                SAR_distance += startSARdist;
                wpt_title = "";
                if (writeWaypointNames) {
                  wpt_title << "" << 1 << "." << 1 << "";
                }

                if (showMarkIcons) {
                  wpt_mark = "diamond";
                } else {
                  wpt_mark = "Marks-Blank";
                }
                if (write_file) {
                  Addpoint2(Route2, wxString::Format("%f", lati),
                            wxString::Format("%f", loni), wpt_title, wpt_mark,
                            "WPT");
                }
                lat1 = lati;
                lon1 = loni;
              }
              wpt_title << "";
              wpt_title << "Start " << i << "." << 1 << "";

              for (int x = 1; x <= nlegs;
                   x++) {                       // Loop over the number of legs
                for (int y = 0; y <= 1; y++) {  // Loop over the tracks
                  if (y == 0) {
                    if (x % 2 != 0) {
                      ESheading = approach;
                      wpt_title = "";
                      if (writeWaypointNames) {
                        wpt_title << "" << x << "." << y + 2 << "";
                      }
                    } else {
                      ESheading = approach + 180.0;
                      wpt_title = "";
                      if (writeWaypointNames) {
                        wpt_title << "" << x << "." << y + 2 << "";
                      }
                    }
                    ESdistance = leg_distancex;
                  } else {
                    if (x == nlegs) break;
                    wpt_title = "";
                    if (writeWaypointNames) {
                      wpt_title << "" << x + 1 << "." << y << "";
                    }
                    ESdistance = leg_distancey;

                    if (i == 1) ESheading = approach - 90.0;
                    if (i == 2) ESheading = approach + 90.0;
                  }

                  n++;

                  destRhumb(lat1, lon1, -ESheading, ESdistance, &lati, &loni);
                  SAR_distance += ESdistance;

                  if (showMarkIcons) {
                    wpt_mark = "diamond";
                  } else {
                    wpt_mark = "Marks-Blank";
                  }

                  if (i == 1) {
                    if (write_file) {
                      Addpoint2(Route, wxString::Format("%f", lati),
                                wxString::Format("%f", loni), wpt_title,
                                wpt_mark, "WPT");
                    }
                  } else {
                    if (write_file) {
                      Addpoint2(Route2, wxString::Format("%f", lati),
                                wxString::Format("%f", loni), wpt_title,
                                wpt_mark, "WPT");
                    }
                  }

                  lat1 = lati;
                  lon1 = loni;
                }
              }
              if (write_file) pRoot->LinkEndChild(Route);
              if (i == 1) {
                if (write_file) {
                  wxString routeNameText = "PS-AB-2";
                  RouteName2->SetText(routeNameText.mb_str());
                  Route2->LinkEndChild(RouteName2);

                  Extensions2->LinkEndChild(textSpeed2);

                  gpxxDisplayColor2->SetText("Red");
                  gpxx2->LinkEndChild(gpxxDisplayColor2);

                  Extensions2->LinkEndChild(gpxx2);
                  Route2->LinkEndChild(Extensions2);
                }
              }
              if (write_file) pRoot->LinkEndChild(Route2);
            }

            this->m_Distance->SetLabel(
                wxString::Format("%g", SAR_distance / 2));
            this->m_Hours->SetLabel(
                wxString::Format("%g", (SAR_distance / speed) / 2));
            break;
          }

            // end two units both on same GPX
        }

        break;
      }

      // Expanding Square Search
      case 2: {
        if (dbg) cout << "Expanding Square Search\n";

        if (write_file) {
          RouteName->SetText(defaultFileName.mb_str());
          Route->LinkEndChild(RouteName);

          Extensions->LinkEndChild(textSpeed);

          gpxxDisplayColor->SetText("Blue");
          gpxx->LinkEndChild(gpxxDisplayColor);

          Extensions->LinkEndChild(gpxx);
          Route->LinkEndChild(Extensions);
        }

        double approach = 0.0;
        double leg_distancex = 0.0;
        long nlegs = 0.0;
        double speed = 0.0;
        double SAR_distance = 0;

        // Get value or set default is input is empty
        if (!this->m_Approach_ES->GetValue().ToDouble(&approach)) {
          approach = 0.0;
          this->m_Approach_ES->SetValue(wxString::Format("%f", approach));
        }  // approach course
        if (!this->m_dx_ES->GetValue().ToDouble(&leg_distancex)) {
          leg_distancex = 1.0;
          this->m_dx_ES->SetValue(wxString::Format("%f", leg_distancex));
        }  // leg distance
        if (!this->m_n_ES->GetValue().ToLong(&nlegs)) {
          nlegs = 5;
          this->m_n_ES->SetValue(wxString::Format("%d", nlegs));
        }  // number of legs
        if (!this->m_Speed_ES->GetValue().ToDouble(&speed)) {
          speed = 5.0;
          this->m_Speed_ES->SetValue(wxString::Format("%f", speed));
        }  // search velocity

        // Check for minimum values
        if (leg_distancex < 0.00054) {
          leg_distancex = 0.00054;
          this->m_dx_ES->SetValue(wxString::Format("%f", leg_distancex));
        }
        if (speed < 0) {
          speed = 0;
          this->m_Speed_ES->SetValue(wxString::Format("%f", speed));
        }
        if (nlegs < 1) {
          nlegs = 1;
          this->m_n_ES->SetValue(wxString::Format("%d", nlegs));
        }

        /* Pattern
        Datum
        square 1
        1 Datum+distance-->approach
        2 pt1+distance-->approach+90
        3 pt2+distancex2--approach+180
        4 pt3+distancex2-->approach+270
        5 pt4+distancex3-->approach
        6 pt5+distancex3-->approach+90
        7 pt6+distancex4-->approach+180
        */

        // add  datum
        if (write_file) {
          Addpoint2(Route, wxString::Format("%f", lat1),
                    wxString::Format("%f", lon1), "Datum", "diamond", "WPT");
        }

        int multiplier = 0;
        double lati, loni;
        int x = 1;
        int count = 0;
        for (x = 1; x <= nlegs;
             x++) {  // Loop over the number of search squares
          count++;
          double ESdistance = leg_distancex;
          double ESheading = 0;
          wxString wpt_title;

          switch (count) {
            case 1: {
              ESheading = -approach;
              multiplier++;
              break;
            }
            case 2: {
              ESheading = -approach - 90.0;
              break;
            }
            case 3: {
              ESheading = -approach - 180.0;
              multiplier++;
              break;
            }
            case 4: {
              ESheading = -approach - 270.0;
              count = 0;
              break;
            }
          }
          ESdistance = leg_distancex * multiplier;

          n++;
          wpt_title = "";

          if (writeWaypointNames) {
            wpt_title << "E" << x;
          }

          destRhumb(lat1, lon1, ESheading, ESdistance, &lati, &loni);
          SAR_distance += ESdistance;

          if (showMarkIcons) {
            wpt_mark = "diamond";
          } else {
            wpt_mark = "Marks-Blank";
          }

          if (write_file) {
            Addpoint2(Route, wxString::Format("%f", lati),
                      wxString::Format("%f", loni), wpt_title, wpt_mark, "WPT");
          }
          lat1 = lati;
          lon1 = loni;
        }
        if (write_file) pRoot->LinkEndChild(Route);
        this->m_Distance->SetLabel(wxString::Format("%g", SAR_distance));
        if (speed <= 0.0) {
          m_Hours->SetLabel("--");
          m_Minutes->SetLabel("--");
          m_Seconds->SetLabel("--");
        } else {
          double sTime = SAR_distance / speed;  // decimal hours

          int hours = static_cast<int>(sTime);
          double fractionalHours = sTime - hours;
          int minutes = static_cast<int>(fractionalHours * 60);
          double fractionalMinutes = (fractionalHours * 60) - minutes;
          int seconds = static_cast<int>(fractionalMinutes * 60);

          m_Hours->SetLabel(wxString::Format("%d", hours));
          m_Minutes->SetLabel(wxString::Format("%d", minutes));
          m_Seconds->SetLabel(wxString::Format("%d", seconds));
        }
        break;
      }

      // Sector Search
      case 3: {
        // USCG
        if (this->m_VSMethod->GetCurrentSelection() == 0) {
          cout << "Sector Search USCG\n";

          if (write_file) {
            RouteName->SetText(defaultFileName.mb_str());
            Route->LinkEndChild(RouteName);

            Extensions->LinkEndChild(textSpeed);

            gpxxDisplayColor->SetText("Red");
            gpxx->LinkEndChild(gpxxDisplayColor);

            Extensions->LinkEndChild(gpxx);
            Route->LinkEndChild(Extensions);
          }

          double approach = 0;
          double leg_distancex = 0;
          double speed = 0;
          double SAR_distance = 0;
          bool two_cycles = false;

          // Get value or set default is input is empty
          if (!this->m_Approach_SS->GetValue().ToDouble(&approach)) {
            approach = 0.0;
            this->m_Approach_SS->SetValue(wxString::Format("%f", approach));
          }  // approach course
          if (!this->m_dx_SS->GetValue().ToDouble(&leg_distancex)) {
            leg_distancex = 1.0;
            this->m_dx_SS->SetValue(wxString::Format("%f", leg_distancex));
          }  // leg distance
          if (!this->m_Speed_SS->GetValue().ToDouble(&speed)) {
            speed = 5.0;
            this->m_Speed_SS->SetValue(wxString::Format("%f", speed));
          }  // search velocity
          if (this->m_Ncycles->GetCurrentSelection()) two_cycles = true;  // S=1

          // Check for minimum values
          if (leg_distancex < 0.00054) {
            leg_distancex = 0.00054;
            this->m_dx_SS->SetValue(wxString::Format("%f", leg_distancex));
          }
          if (speed < 0) {
            speed = 0;
            this->m_Speed_SS->SetValue(wxString::Format("%f", speed));
          }

          /* Pattern
          Datum
          Go Downwind for 1 mile,
          *** alter 120 degrees to starboard, this course for 1 mile
          then
          Alter to starboard 120 degrees and go on this course for 2
          miles going through datum then Alter to starboard 120
          degrees for 1 mile then Alter to starboard 120 degrees for 2
          miles going through datum

             then
             Alter to starboard 120 degrees for 1 mile
             then
             Alter 120 degrees to starboard for 1 mile back to datum
             then go down the Blue track as follows
             Alter 30 degrees to starboard for 1 mile
             then go to the *** above and do the same again
             */
          // add  datum

          double lati, loni;
          double latDatum, lonDatum;
          double ESheading = -approach;
          double legStretch;

          latDatum = lat1;
          lonDatum = lon1;

          // Add the CSP to the pattern
          if (write_file) {
            Addpoint2(Route, wxString::Format("%f", lat1),
                      wxString::Format("%f", lon1), "Datum", _T("diamond"),
                      "WPT");
          }

          for (int x = 1; x <= ((two_cycles) ? 16 : 8);
               x++) {  // Loop over the legs

            wxString wpt_title;
            wxString wpt_mark;

            if (x % 2 == 0) {
              legStretch = leg_distancex;  // the default

            } else if (x < 12) {
              if (x == 1 || x == 7 || x == 11) {
                legStretch = leg_distancex;
              } else {
                legStretch = leg_distancex * 2;
              }
            }

            if (x % 2 == 0 && x > 11) {
              if (x == 16) {
                legStretch = leg_distancex;
              } else {
                legStretch = leg_distancex * 2;  // the default
              }

            } else if (x > 11) {
              legStretch = leg_distancex;
            }

            // now the names of the waypoints

            if (x < 7) {
              wpt_title = "";
              if (writeWaypointNames) {
                wpt_title << "" << 1 << "." << x << "";
              }
            }

            if (x == 7 || x == 9) {
              wpt_title = "";
              if (writeWaypointNames) {
                wpt_title = "Datum";
              }
            }

            if (x > 9) {
              wpt_title = "";
              if (writeWaypointNames) {
                wpt_title << "" << 2 << "." << x - 9 << "";
              }
            }

            if (x == 16) {
              wpt_title = "";
              if (writeWaypointNames) {
                wpt_title = "Datum";
              }
            }

            n++;

            // The key to not putting in a waypoint when second
            // route is included in the gpx.
            //*********************************************************
            if (x != 9) {
              destRhumb(lat1, lon1, ESheading, legStretch, &lati, &loni);
              SAR_distance += legStretch;

              if (x == 8) {
                SAR_distance -= legStretch;
              }
            }
            if (x == 9) {
              lat1 = latDatum;
              lon1 = lonDatum;
            }
            //*********************************************************
            //
            //
            //
            ESheading -= 120.0;

            nleg++;

            if (showMarkIcons) {
              if (x > 8) {
                wpt_mark = "Sea-Height-Blue";
              } else {
                wpt_mark = "Sea-Height-Red";
              }
            } else {
              wpt_mark = "Marks-Blank";
            }

            if (x > 9) {
              if (x == 16) {
                if (write_file) {
                  Addpoint2(Route2, wxString::Format("%f", latDatum),
                            wxString::Format("%f", lonDatum), wpt_title,
                            "Marks-Blank", "WPT");
                }
              } else {
                if (write_file) {
                  Addpoint2(Route2, wxString::Format("%f", lati),
                            wxString::Format("%f", loni), wpt_title, wpt_mark,
                            "WPT");
                }
              }
            } else {
              if (write_file && (x < 8)) {
                Addpoint2(Route, wxString::Format("%f", lati),
                          wxString::Format("%f", loni), wpt_title, wpt_mark,
                          "WPT");
              }
            }

            if (x == 9) {
              if (write_file) {
                Addpoint2(Route2, wxString::Format("%f", latDatum),
                          wxString::Format("%f", lonDatum), wpt_title,
                          "Marks-Blank", "WPT");
              }
              lati = latDatum;
              loni = lonDatum;
              ESheading -= 30;
            }

            // if (x == 8 && !two_cycles) {
            // }
            if (write_file) pRoot->LinkEndChild(Route);

            nleg++;

            if (x == 8 && two_cycles) {
              if (write_file) {
                wxString routeNameText = "";

                if (this->m_Ncycles->GetCurrentSelection() == 1) {
                  routeNameText = defaultFileName + "-2";
                }

                RouteName2->SetText(routeNameText.mb_str());
                Route2->LinkEndChild(RouteName2);

                Extensions2->LinkEndChild(textSpeed2);

                gpxxDisplayColor2->SetText("Blue");
                gpxx2->LinkEndChild(gpxxDisplayColor2);

                Extensions2->LinkEndChild(gpxx2);

                Route2->LinkEndChild(Extensions2);
              }

            } else {
              lat1 = lati;
              lon1 = loni;
            }
          }

          if (write_file) pRoot->LinkEndChild(Route2);
          this->m_Distance->SetLabel(wxString::Format("%g", SAR_distance));
          if (speed <= 0.0) {
            m_Hours->SetLabel("--");
            m_Minutes->SetLabel("--");
            m_Seconds->SetLabel("--");
          } else {
            double sTime = SAR_distance / speed;  // decimal hours

            int hours = static_cast<int>(sTime);
            double fractionalHours = sTime - hours;
            int minutes = static_cast<int>(fractionalHours * 60);
            double fractionalMinutes = (fractionalHours * 60) - minutes;
            int seconds = static_cast<int>(fractionalMinutes * 60);

            m_Hours->SetLabel(wxString::Format("%d", hours));
            m_Minutes->SetLabel(wxString::Format("%d", minutes));
            m_Seconds->SetLabel(wxString::Format("%d", seconds));
          }
        }

        // IAMSAR
        else if (this->m_VSMethod->GetCurrentSelection() == 1) {
          if (dbg) cout << "Sector Search IAMSAR\n";

          if (write_file) {
            RouteName->SetText(defaultFileName.mb_str());
            Route->LinkEndChild(RouteName);

            Extensions->LinkEndChild(textSpeed);

            gpxxDisplayColor->SetText("Red");
            gpxx->LinkEndChild(gpxxDisplayColor);

            Extensions->LinkEndChild(gpxx);
            Route->LinkEndChild(Extensions);
          }

          double approach = 0;
          double leg_distancex = 0;
          double speed = 0;
          double SAR_distance = 0;
          bool two_cycles = false;

          // Get value or set default is input is empty
          if (!this->m_Approach_SS->GetValue().ToDouble(&approach)) {
            approach = 0.0;
            this->m_Approach_SS->SetValue(wxString::Format("%f", approach));
          }  // approach course
          if (!this->m_dx_SS->GetValue().ToDouble(&leg_distancex)) {
            leg_distancex = 1.0;
            this->m_dx_SS->SetValue(wxString::Format("%f", leg_distancex));
          }  // leg distance
          if (!this->m_Speed_SS->GetValue().ToDouble(&speed)) {
            speed = 5.0;
            this->m_Speed_SS->SetValue(wxString::Format("%f", speed));
          }  // search velocity
          if (this->m_Ncycles->GetSelection() == 1) two_cycles = true;  // S=1

          // Check for minimum values
          if (leg_distancex < 0.00054) {
            leg_distancex = 0.00054;
            this->m_dx_SS->SetValue(wxString::Format("%f", leg_distancex));
          }
          if (speed < 0) {
            speed = 0;
            this->m_Speed_SS->SetValue(wxString::Format("%f", speed));
          }

          /* Pattern
          Datum
          Go Downwind for 1 mile,
          *** alter 120 degrees to starboard, this course for 1 mile
          then
          Alter to starboard 120 degrees and go on this course for 2 miles
          going through datum then Alter to starboard 120 degrees for 1
          mile then Alter to starboard 120 degrees for 2 miles going
          through datum

          then
          Alter to starboard 120 degrees for 1 mile
          then
          Alter 120 degrees to starboard for 1 mile back to datum
          then go down the Blue track as follows
          Alter 30 degrees to starboard for 1 mile
          then go to the *** above and do the same again
          */
          // add  datum

          double lati, loni;
          double latDatum, lonDatum;
          double ESheading = -approach;
          double legStretch;

          destRhumb(lat1, lon1, ESheading - 180, leg_distancex, &lati, &loni);
          latDatum = lat1;
          lonDatum = lon1;

          // Add the CSP to the pattern
          if (write_file) {
            Addpoint2(Route, wxString::Format("%f", lati),
                      wxString::Format("%f", loni), "CSP", _T("circle"), "WPT");
          }
          if (write_file) {
            Addpoint2(Route, wxString::Format("%f", lat1),
                      wxString::Format("%f", lon1), "Datum", "diamond", "WPT");
          }

          lat1 = lati;
          lon1 = loni;

          for (int x = 1; x <= ((two_cycles) ? 16 : 6);
               x++) {  // Loop over the legs

            wxString wpt_title;
            wxString wpt_mark;

            if (x % 2 == 0) {
              legStretch = leg_distancex;  // the default

            } else if (x < 12) {
              if (x == 7 || x == 11) {
                legStretch = leg_distancex;
              } else {
                legStretch = leg_distancex * 2;
              }
            }

            if (x % 2 == 0 && x > 11) {
              if (x == 16) {
                legStretch = leg_distancex;
              } else {
                legStretch = leg_distancex * 2;  // the default
              }

            } else if (x > 11) {
              legStretch = leg_distancex;
            }

            if (x < 7) {
              wpt_title = "";
              if (writeWaypointNames) {
                wpt_title << "" << 1 << "." << x << "";
              }
            }

            if (x == 7 || x == 9) {
              wpt_title = "";
              if (writeWaypointNames) {
                wpt_title = "Datum";
              }
            }

            if (x > 9) {
              wpt_title = "";
              if (writeWaypointNames) {
                wpt_title << "" << 2 << "." << x - 9 << "";
              }
            }

            if (x == 16) {
              wpt_title = "";
              if (writeWaypointNames) {
                wpt_title = "Datum";
              }
            }

            n++;

            // The key to not putting in a waypoint when second route is
            // included in the gpx.
            //*********************************************************
            if (x != 9)
              destRhumb(lat1, lon1, ESheading, legStretch, &lati, &loni);
            //*********************************************************
            //
            SAR_distance += legStretch;
            //
            //
            ESheading -= 120.0;

            nleg++;
            if (showMarkIcons) {
              if (x > 8) {
                wpt_mark = "Sea-Height-Blue";
              } else {
                wpt_mark = "Sea-Height-Red";
              }
            } else {
              wpt_mark = "Marks-Blank";
            }

            if (x > 9) {
              if (write_file) {
                Addpoint2(Route2, wxString::Format("%f", lati),
                          wxString::Format("%f", loni), wpt_title, wpt_mark,
                          "WPT");
              }
            } else {
              if (write_file && (x < 8)) {
                Addpoint2(Route, wxString::Format("%f", lati),
                          wxString::Format("%f", loni), wpt_title, wpt_mark,
                          "WPT");
              }
            }

            if (x == 9) {
              if (write_file) {
                Addpoint2(Route2, wxString::Format("%f", latDatum),
                          wxString::Format("%f", lonDatum), wpt_title, "",
                          "WPT");
              }
              lati = latDatum;
              loni = lonDatum;
              ESheading -= 30;
            }

            if (write_file) pRoot->LinkEndChild(Route);

            nleg++;
            if (write_file) {
              if (x == 8 && two_cycles) {
                if (write_file) {
                  wxString routeNameText;
                  if (this->m_Ncycles->GetSelection() == 0) {
                    routeNameText = "";

                  } else if (this->m_Ncycles->GetSelection() == 1) {
                    routeNameText = "-2";
                    wxString newName = defaultFileName + routeNameText;
                    RouteName2->SetText(newName.mb_str());
                    Route2->LinkEndChild(RouteName2);
                  }

                  Extensions2->LinkEndChild(textSpeed2);

                  gpxxDisplayColor2->SetText("Blue");
                  gpxx2->LinkEndChild(gpxxDisplayColor2);

                  Extensions2->LinkEndChild(gpxx2);

                  Route2->LinkEndChild(Extensions2);
                }

              } else {
                lat1 = lati;
                lon1 = loni;
              }
            }
          }

          if (two_cycles) SAR_distance -= leg_distancex * 3;

          if (write_file) pRoot->LinkEndChild(Route2);
          this->m_Distance->SetLabel(wxString::Format("%g", SAR_distance));
          if (speed <= 0.0) {
            m_Hours->SetLabel("--");
            m_Minutes->SetLabel("--");
            m_Seconds->SetLabel("--");
          } else {
            double sTime = SAR_distance / speed;  // decimal hours

            int hours = static_cast<int>(sTime);
            double fractionalHours = sTime - hours;
            int minutes = static_cast<int>(fractionalHours * 60);
            double fractionalMinutes = (fractionalHours * 60) - minutes;
            int seconds = static_cast<int>(fractionalMinutes * 60);

            m_Hours->SetLabel(wxString::Format("%d", hours));
            m_Minutes->SetLabel(wxString::Format("%d", minutes));
            m_Seconds->SetLabel(wxString::Format("%d", seconds));
          }
          //
          // IAMSAR Sector search end
          //
        }

        break;
      }

      // Quadrant Search (Oil Rig)
      case 4: {
        if (dbg) cout << "Quadrant Search (Oil Rig)\n";

        if (write_file) {
          RouteName->SetText(defaultFileName.mb_str());
          Route->LinkEndChild(RouteName);

          Extensions->LinkEndChild(textSpeed);

          gpxxDisplayColor->SetText("Blue");
          gpxx->LinkEndChild(gpxxDisplayColor);

          Extensions->LinkEndChild(gpxx);
          Route->LinkEndChild(Extensions);
        }

        double approach = 0;
        double leg_distancex = 0;
        long nlegs = 0;
        double speed = 0;
        double SAR_distance = 0;

        // Get value or set default is input is empty
        if (!this->m_Approach_OR->GetValue().ToDouble(&approach)) {
          approach = 0.0;
          this->m_Approach_OR->SetValue(wxString::Format("%f", approach));
        }  // approach course
        if (!this->m_dx_OR->GetValue().ToDouble(&leg_distancex)) {
          leg_distancex = 1.0;
          this->m_dx_OR->SetValue(wxString::Format("%f", leg_distancex));
        }  // leg distance
        if (!this->m_NLegs_OR->GetValue().ToLong(&nlegs)) {
          nlegs = 3;
          this->m_NLegs_OR->SetValue(wxString::Format("%d", nlegs));
        }  // number of legs
        if (!this->m_Speed_OR->GetValue().ToDouble(&speed)) {
          speed = 5.0;
          this->m_Speed_OR->SetValue(wxString::Format("%f", speed));
        }  // search velocity

        if (leg_distancex < 0.00054) {
          leg_distancex = 0.00054;
          this->m_dx_OR->SetValue(wxString::Format("%f", leg_distancex));
        }
        if (speed < 0) {
          speed = 0;
          this->m_Speed_OR->SetValue(wxString::Format("%f", speed));
        }
        if (nlegs < 1) {
          nlegs = 1;
          this->m_NLegs_OR->SetValue(wxString::Format("%d", nlegs));
        }

        /*pattern
        datum
        *Leg1
        datum+approach-->dx
        pt1+approach+90-->dx
        *leg2
        pt2+approach-->dx
        pt3+approach-90-->dx*3
        leg3
        pt4+approach-->dx
        pt5+approach+90-->dx*7
        */

        // add  datum
        if (write_file) {
          Addpoint2(Route, wxString::Format("%f", lat1),
                    wxString::Format("%f", lon1), "Datum", "diamond", "WPT");
        }
        int n = 0;
        int multiplier = 1;
        double lati, loni, ESheading, ESdistance;
        bool sign_flipper = false;
        wxString wpt_title;
        for (int x = 1; x <= nlegs; x++) {  // Loop over the number of legs
          for (int y = 1; y <= 2; y++) {    // Loop over the tracks
            if (y == 1) {
              ESheading = approach;
              ESdistance = leg_distancex;
            } else {
              ESdistance = leg_distancex * multiplier;
              multiplier += 2;
              if (sign_flipper) {
                ESheading = approach - 90;
                sign_flipper = false;
              } else {
                ESheading = approach + 90;
                sign_flipper = true;
              }
            }
            n++;
            wpt_title = "";
            if (writeWaypointNames) {
              wpt_title << "" << x << "." << y << "";
            }
            destRhumb(lat1, lon1, -ESheading, ESdistance, &lati, &loni);
            SAR_distance += ESdistance;

            if (showMarkIcons) {
              wpt_mark = "diamond";
            } else {
              wpt_mark = "Marks-Blank";
            }

            if (write_file) {
              Addpoint2(Route, wxString::Format("%f", lati),
                        wxString::Format("%f", loni), wpt_title, wpt_mark,
                        "WPT");
            }
            lat1 = lati;
            lon1 = loni;
          }
        }
        if (write_file) pRoot->LinkEndChild(Route);
        this->m_Distance->SetLabel(wxString::Format("%g", SAR_distance));
        if (speed <= 0.0) {
          m_Hours->SetLabel("--");
          m_Minutes->SetLabel("--");
          m_Seconds->SetLabel("--");
        } else {
          double sTime = SAR_distance / speed;  // decimal hours

          int hours = static_cast<int>(sTime);
          double fractionalHours = sTime - hours;
          int minutes = static_cast<int>(fractionalHours * 60);
          double fractionalMinutes = (fractionalHours * 60) - minutes;
          int seconds = static_cast<int>(fractionalMinutes * 60);

          m_Hours->SetLabel(wxString::Format("%d", hours));
          m_Minutes->SetLabel(wxString::Format("%d", minutes));
          m_Seconds->SetLabel(wxString::Format("%d", seconds));
        }

        break;
      }

      default: {
        if (dbg) cout << "Error, bad input, quitting\n";
        break;
      }
    }

    if (write_file) {
      // check if string ends with .gpx or .GPX
      if (!s.EndsWith(_T(".gpx"))) {
        s = s + _T(".gpx");
      }
      wxCharBuffer buffer = s.ToUTF8();
      if (dbg) std::cout << buffer.data() << std::endl;
      xmlDoc.SaveFile(buffer.data());
      xmlDoc.Clear();

      if (m_bChartRoute) CreateRoute(s);
    }

    if (error_occurred) {
      wxLogMessage(_("Error in calculation. Please check input!"));
      wxMessageBox(_("Error in calculation. Please check input!"));
    }
  }
}

void Dlg::OnSelectNumberShips(wxCommandEvent& event) {
  shipsAvailable = this->m_Nship->GetSelection();

  switch (shipsAvailable) {
    case 0: {
      m_bitmap_trackln1->SetBitmap(_img_trackln1);
      m_staticTextPortStbd->Show();
      m_NPortStbd->Show();
      break;
    }
    case 1: {
      m_bitmap_trackln1->SetBitmap(_img_trackln_both);
      m_staticTextPortStbd->Hide();
      m_NPortStbd->Hide();
      break;
    }
  }

  m_notebook1->Refresh();
  event.Skip();
}

void Dlg::OnSelectVectorMethod(wxCommandEvent& event) {
  int s = this->m_VSMethod->GetCurrentSelection();

  switch (s) {
    case 0: {
      m_bitmap_sector->SetBitmap(_img_sector_uscg);
      break;
    }
    case 1: {
      m_bitmap_sector->SetBitmap(_img_sector_iamsar);
      break;
    }

    default: {
      break;
    }
  }
  event.Skip();
}

void Dlg::OnSelectPortStarboard(wxCommandEvent& event) {
  PortStbd = this->m_NPortStbd->GetSelection();

  switch (PortStbd) {
    case 0: {
      m_bitmap_trackln1->SetBitmap(_img_trackln1);
      break;
    }
    case 1: {
      m_bitmap_trackln1->SetBitmap(_img_trackln1_port);
      break;
    }
  }
  event.Skip();
}

void Dlg::OnClose(wxCloseEvent& event) { plugin->OnSARDialogClose(); }

void Dlg::OnCursor(wxCommandEvent& event) { OnCursor(); }
void Dlg::OnCursor(void) {
  this->m_Lat1->SetValue(wxString::Format("%.6f", plugin->GetCursorLat()));
  this->m_Lon1->SetValue(wxString::Format("%.6f", plugin->GetCursorLon()));

  setDDMM();  // Copies the lat.lon to the DDMM page

  m_wxNotebook234->SetSelection(0);
  m_Lat1->SetFocus();
}

void Dlg::OnShip(wxCommandEvent& event) { OnShip(); }
void Dlg::OnShip(void) {
  this->m_Lat1->SetValue(wxString::Format("%.6f", plugin->GetShipLat()));
  this->m_Lon1->SetValue(wxString::Format("%.6f", plugin->GetShipLon()));

  setDDMM();  // Copies the lat.lon to the DDMM page

  m_wxNotebook234->SetSelection(0);
  m_Lat1->SetFocus();
}

void Dlg::key_shortcut(wxKeyEvent& event) {
  // of course, it doesn't have to be the control key. You can use others:
  // http://docs.wxwidgets.org/stable/wx_wxkeyevent.html
  if (event.GetModifiers() == wxMOD_CONTROL) {
    switch (event.GetKeyCode()) {
      case 'S':  // can return the upper ASCII value of a key
        // do whatever you like for a Ctrl+G event here!
        // wxMessageBox(_("CTRL+G") );
        OnCursor();
        break;  /*
      case WXK_LEFT: // we also have special keycodes for non-ascii values.
          // get a full list of special keycodes here:
          // http://docs.wxwidgets.org/stable/wx_keycodes.html
          wxMessageBox(_("CTRL+Left") );
          break;*/
      default:  // do nothing
        break;
    }
  }
  event.Skip();
}
/*
void Dlg::mouse_shortcut(wxMouseEvent& event) {
    // of course, it doesn't have to be the control key. You can use others:
    // http://docs.wxwidgets.org/stable/wx_wxkeyevent.html
    if(event.LeftDown() == true) {
        wxMessageBox(_("CTRL+G") );
        OnCursor();
    }
    //else{
        event.Skip();
    //}

}*/

void Dlg::OnCursorSelect(wxCommandEvent& event) {
  m_wxNotebook234->SetSelection(0);
  m_Lat1->SetFocus();
  m_Lat1->Clear();
  m_Lon1->Clear();

  wxMessageBox(
      _("To copy the cursor location:\n\n"
        "- Right-click on the chart and choose 'Select SAR Datum Point'\n"
        "- Or, with the plugin window selected and the cursor on the chart, "
        "press <CTRL>+S"));
  event.Skip();
}

void Dlg::getDatum(double m_lat, double m_lon) {
  wxString myLat = wxString::Format("%f", m_lat);
  wxString myLon = wxString::Format("%f", m_lon);

  m_Lat1->SetValue(myLat);
  m_Lon1->SetValue(myLon);

  setDDMM();

  m_wxNotebook234->SetSelection(0);
  m_Lat1->SetFocus();
}

void Dlg::setDDMM() {  // after entering dd.dddd from cursor, menu, lat

  double DDLat;
  double DDLon;

  int DDlat1;
  int DDlon1;

  double MMlat0;
  double MMlon0;

  double MMlat2;
  double MMlon2;

  double SSlat1;
  double SSlon1;

  double value;

  wxString s;
  wxString s1;
  wxString m1;
  wxString d1;

  // set cell values to 0 if they are empty. This ensures conversion goes ok.
  double test_value;
  if (!this->m_Lat1_d->GetValue().ToDouble(&test_value)) {
    m_Lat1_d->SetValue(wxString::Format("%i", 0));
  }
  if (!this->m_Lat1_m->GetValue().ToDouble(&test_value)) {
    m_Lat1_m->SetValue(wxString::Format("%i", 0));
  }
  if (!this->m_Lat1_s->GetValue().ToDouble(&test_value)) {
    m_Lat1_s->SetValue(wxString::Format("%i", 0));
  }

  if (!this->m_Lon1_d->GetValue().ToDouble(&test_value)) {
    m_Lon1_d->SetValue(wxString::Format("%i", 0));
  }
  if (!this->m_Lon1_m->GetValue().ToDouble(&test_value)) {
    m_Lon1_m->SetValue(wxString::Format("%i", 0));
  }
  if (!this->m_Lon1_s->GetValue().ToDouble(&test_value)) {
    m_Lon1_s->SetValue(wxString::Format("%i", 0));
  }

  if (!this->m_Lat1_d1->GetValue().ToDouble(&test_value)) {
    m_Lat1_d1->SetValue(wxString::Format("%i", 0));
  }
  if (!this->m_Lat1_m1->GetValue().ToDouble(&test_value)) {
    m_Lat1_m1->SetValue(wxString::Format("%i", 0));
  }

  if (!this->m_Lon1_d1->GetValue().ToDouble(&test_value)) {
    m_Lon1_d1->SetValue(wxString::Format("%i", 0));
  }
  if (!this->m_Lon1_m1->GetValue().ToDouble(&test_value)) {
    m_Lon1_m1->SetValue(wxString::Format("%i", 0));
  }

  s = m_Lat1->GetValue();
  s.ToDouble(&value);
  DDLat = value;
  s = m_Lon1->GetValue();
  s.ToDouble(&value);
  DDLon = value;

  DDlat1 = abs(int(DDLat));
  DDlon1 = abs(int(DDLon));

  // set the ddmm page

  m_Lat1_d1->SetValue(wxString::Format(_T("%i"), (int)DDlat1));
  m_Lon1_d1->SetValue(wxString::Format(_T("%i"), (int)DDlon1));

  MMlat0 = (fabs(DDLat) - double(DDlat1)) * 60;
  MMlon0 = (fabs(DDLon) - double(DDlon1)) * 60;

  m_Lat1_m1->SetValue(wxString::Format("%.6f", MMlat0));
  m_Lon1_m1->SetValue(wxString::Format("%.6f", MMlon0));

  if (DDLat > 0) {
    m_Lat1_NS1->SetSelection(0);
    m_Lat1_NS->SetSelection(0);
  } else {
    m_Lat1_NS1->SetSelection(1);
    m_Lat1_NS->SetSelection(1);
  }

  if (DDLon > 0) {
    m_Lon1_EW1->SetSelection(0);
    m_Lon1_EW->SetSelection(0);
  } else {
    m_Lon1_EW1->SetSelection(1);
    m_Lon1_EW->SetSelection(1);
  }

  // set the ddmmss page

  m_Lat1_d->SetValue(wxString::Format(_T("%i"), abs((int)DDlat1)));
  m_Lon1_d->SetValue(wxString::Format(_T("%i"), abs((int)DDlon1)));

  m_Lat1_m->SetValue(wxString::Format(_T("%i"), abs((int)MMlat0)));
  m_Lon1_m->SetValue(wxString::Format(_T("%i"), abs((int)MMlon0)));

  MMlat2 = int(MMlat0);
  MMlon2 = int(MMlon0);

  SSlat1 = (MMlat0 - MMlat2) * 60;
  SSlon1 = (MMlon0 - MMlon2) * 60;

  m_Lat1_s->SetValue(wxString::Format("%.6f", SSlat1));
  m_Lon1_s->SetValue(wxString::Format("%.6f", SSlon1));
}

void Dlg::CreateRoute(wxString filename) {
  tinyxml2::XMLDocument mydoc;
  mydoc.LoadFile(filename);

  tinyxml2::XMLNode* pRoot = mydoc.FirstChild();

  wxString rte_name = "";
  wxString rte_speed = "";
  wxString rte_color = "";
  wxString wpt_name = "";

  int i = 0;

  tinyxml2::XMLElement* object = pRoot->NextSiblingElement("gpx");
  for (tinyxml2::XMLElement* rte = object->FirstChildElement("rte"); rte;
       rte = rte->NextSiblingElement(), i++) {
    waypoint myPoint;  // Clear data ready for the run
    m_waypointList.clear();

    for (tinyxml2::XMLElement* e1 = rte->FirstChildElement(); e1;
         e1 = e1->NextSiblingElement(), i++) {
      if (!strcmp(e1->Value(), "name")) {
        rte_name = e1->GetText();
      }

      if (!strcmp(e1->Value(), "extensions")) {
        tinyxml2::XMLElement* s =
            e1->FirstChildElement("opencpn:planned_speed");
        rte_speed = s->GetText();

        tinyxml2::XMLElement* e = e1->FirstChildElement("gpxx:RouteExtension");
        tinyxml2::XMLElement* c = e->FirstChildElement("gpxx:DisplayColor");
        rte_color = c->GetText();
      }

      if (!strcmp(e1->Value(), "rtept")) {
        wxString pt_lat = wxString::FromUTF8(e1->Attribute("lat"));
        wxString pt_lon = wxString::FromUTF8(e1->Attribute("lon"));

        tinyxml2::XMLElement* r = e1->FirstChildElement("name");
        wpt_name = r->GetText();

        myPoint.lat = pt_lat;
        myPoint.lon = pt_lon;
        myPoint.name = wpt_name;
        myPoint.name_visible = true;

        m_waypointList.push_back(myPoint);
      }
    }
    if (m_bChartRoute) AddChartRoute(rte_name, rte_speed, rte_color);
    if (m_bSaveRTZ) ExportRTZ(rte_name);
  }
}

void Dlg::AddChartRoute(wxString myRoute, wxString mySpeed, wxString myColor) {
  PlugIn_Route_Ex* newRoute =
      new PlugIn_Route_Ex;  // for adding a route on OpenCPN chart display

  newRoute->m_NameString = myRoute;
  newRoute->m_isVisible = true;

  double lati, loni, value, value1;
  bool m_bNameVisible = true;

  for (std::vector<waypoint>::iterator itp = m_waypointList.begin();
       itp != m_waypointList.end(); itp++) {
    PlugIn_Waypoint_Ex* wayPoint = new PlugIn_Waypoint_Ex;

    wayPoint->m_MarkName = (*itp).name;

    if (!(*itp).lat.ToDouble(&value)) { /* error! */
    }
    lati = value;
    if (!(*itp).lon.ToDouble(&value1)) { /* error! */
    }
    loni = value1;

    m_bNameVisible = (*itp).name_visible;

    wayPoint->m_lat = lati;
    wayPoint->m_lon = loni;
    wayPoint->IsVisible = true;
    wayPoint->IsNameVisible = m_bNameVisible;

    if (showMarkIcons) {
      wayPoint->IconName = "diamond";
    } else
      wayPoint->IconName = "Marks-Blank";

    newRoute->pWaypointList->Append(wayPoint);
  }

  AddPlugInRouteEx(newRoute, true);

  GetParent()->Refresh();
}

int Dlg::ExportRTZ(wxString routename) {
  wxString rtzFileName;
  wxString fileName;
  wxFileDialog dlg(this, _("Save in RTZ format"), wxEmptyString, routename,
                   _T("RTZ files (*.rtz)|*.rtz|All files (*.*)|*.*"),
                   wxFD_SAVE | wxFD_OVERWRITE_PROMPT);
  if (dlg.ShowModal() == wxID_CANCEL) {
    // error_occured = true;     // the user changed idea...
    return 999;
  } else {
    // dlg.ShowModal();
    fileName = dlg.GetPath();
    rtzFileName = dlg.GetFilename();
    //  std::cout<<s<< std::endl;
    if (dlg.GetPath() == wxEmptyString) {
      wxMessageBox("Error");
      return 999;
    }
  }

  // put the correct version in the RTZ file
  wxString versn;
  int selection = rtz_schema;

  if (selection == 0) {
    versn = "1.0";
  } else if (selection == 1) {
    versn = "1.1";
  } else if (selection == 2) {
    versn = "1.2";
  }

  // Create Main level XML container
  tinyxml2::XMLDocument xmlDoc;
  tinyxml2::XMLDeclaration* decl = xmlDoc.NewDeclaration();

  if (selection == 0) {
    decl->SetValue(
        "xml version="
        "\"1.0\" "
        "encoding="
        "\"UTF-8\" "
        "standalone="
        "\"no\"");
  } else if (selection == 1) {
    decl->SetValue(
        "xml version="
        "\"1.0\" "
        "encoding="
        "\"UTF-8\"");
  }

  xmlDoc.LinkEndChild(decl);

  // Create XML root node called animals
  tinyxml2::XMLElement* pRoot = xmlDoc.NewElement("route");

  const char* value;
  if (selection == 0) {
    value = "http://www.cirm.org/RTZ/1/0";
  } else if (selection == 1) {
    value = "http://www.cirm.org/RTZ/1/1";
  } else if (selection == 2) {
    value = "http://www.cirm.org/RTZ/1/2";
  }

  char* sv = (const_cast<char*>((const char*)versn.mb_str()));

  pRoot->SetAttribute("xmlns", value);
  pRoot->SetAttribute("xmlns:xsi", "http://www.w3.org/2001/XMLSchema-instance");

  if (selection == 0) {
    pRoot->SetAttribute("xmlns:xsd", "http://www.w3.org/2001/XMLSchema");
  }

  pRoot->SetAttribute("version", sv);

  if (selection == 1) {
    pRoot->SetAttribute("xmlns:stm", "http://stmvalidation.eu/STM/1/0/0");
  }

  // Add pRoot to xmlDoc after prolog
  xmlDoc.InsertEndChild(pRoot);

  // ************* Add routeInfo to root node *******

  tinyxml2::XMLElement* routeInfo = xmlDoc.NewElement("routeInfo");
  pRoot->InsertFirstChild(routeInfo);

  // Route name must be the same as the file name, without file extension

  int fl = rtzFileName.length();
  wxString rtzFileBit = rtzFileName.SubString(0, (fl - 5));

  char* rtzFN = (const_cast<char*>((const char*)rtzFileBit.mb_str()));
  routeInfo->SetAttribute("routeName", rtzFN);

  // Insert cat's name as first child of animal

  // ************* Add waypoints *******
  waypoints = xmlDoc.NewElement("waypoints");
  pRoot->InsertEndChild(waypoints);

  int nm = m_waypointList.size();
  if (nm == 0) {
    wxMessageBox("No waypoints available", "Warning");
    return 999;
  }

  int idn = 0;

  for (std::vector<waypoint>::iterator itOut = m_waypointList.begin();
       itOut != m_waypointList.end(); itOut++) {
    tinyxml2::XMLElement* m_waypoint = xmlDoc.NewElement("waypoint");
    waypoints->InsertEndChild(m_waypoint);
    wxString myIdn = wxString::Format(wxT("%i"), idn);
    m_waypoint->SetAttribute("id", myIdn.mb_str());

    if (selection == 2) m_waypoint->SetAttribute("revision", "0");

    m_waypoint->SetAttribute("name", (*itOut).name.mb_str());

    tinyxml2::XMLElement* position = xmlDoc.NewElement("position");

    position->SetAttribute("lat", (*itOut).lat.mb_str());
    position->SetAttribute("lon", (*itOut).lon.mb_str());
    m_waypoint->InsertEndChild(position);

    idn++;
  }
  // done adding waypoints
  // Write xmlDoc into a file

  xmlDoc.SaveFile(fileName);

  return 0;
}
