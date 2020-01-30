/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Frame.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/24 21:37:55 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 22:49:58 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Frame.hpp"

Frame::Frame(/* args */)
{
}

Frame::~Frame()
{
}

Frame &Frame::operator=(Frame const &g)
{
    (void)g;
    return *this;
}

Frame::Frame(Frame const &g)
{
    *this = g;
}

Frame::Frame(const wxString &title, const wxPoint &pos, const wxSize &size)
    : wxFrame(NULL, wxID_ANY, title, pos, size), _m_timer(this, TIMER_ID)
{
    _wxmac = new WxmacDisplay();

    _wxmac->addModule(new HostModule());
    _wxmac->addModule(new OSModule());
    _wxmac->addModule(new DateModule());
    _wxmac->addModule(new RamModule());
    _wxmac->addModule(new CpuModule());

    _m_parent = new wxPanel(this, wxID_ANY);

    wxBoxSizer *hbox = new wxBoxSizer(wxVERTICAL);

    const std::vector<IMonitorModule *> *lst = _wxmac->getModules();

    for (std::vector<IMonitorModule *>::const_iterator it = lst->begin(); it != lst->end(); it++)
    {
        Panel *panel = new Panel(_m_parent, _wxmac, *it);

        hbox->Add(panel, 1, wxEXPAND | wxALL, 5);
        _panels.push_back(panel);
    }

    _m_parent->SetSizer(hbox);

    Centre();
    _m_timer.Start(1000);
}

void Frame::OnTimer(wxTimerEvent &event)
{
    for (std::vector<Panel *>::iterator it = _panels.begin(); it != _panels.end(); it++)
    {
        (*it)->update(_m_parent, _wxmac);
    }

    (void)event;
}

wxBEGIN_EVENT_TABLE(Frame, wxFrame)
    EVT_TIMER(TIMER_ID, Frame::OnTimer)
wxEND_EVENT_TABLE()