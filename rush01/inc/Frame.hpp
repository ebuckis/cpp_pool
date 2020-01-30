/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Frame.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/24 21:38:21 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 22:17:04 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FRAME
#define FRAME

#define TIMER_ID 1

#include <wx/wx.h>
#include <wx/stattext.h>
#include <vector>

#include "WxmacDisplay.hpp"
#include "IMonitorModule.hpp"
#include "Panel.hpp"
#include "HostModule.hpp"
#include "CpuModule.hpp"
#include "DateModule.hpp"
#include "OSModule.hpp"
#include "RamModule.hpp"

class Frame : public wxFrame
{
private:
    void OnTimer(wxTimerEvent &event);
    wxTimer _m_timer;
    wxDECLARE_EVENT_TABLE();
    WxmacDisplay *_wxmac;
    std::vector<Panel *> _panels;
    wxPanel *_m_parent;

public:
    Frame(/* args */);
    ~Frame();
    Frame(Frame const &);
    Frame &operator=(Frame const &);

    Frame(const wxString &title, const wxPoint &pos, const wxSize &size);

};

#endif