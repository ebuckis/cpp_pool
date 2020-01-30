/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Panel.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/25 21:16:33 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 22:28:20 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Panel.hpp"

Panel::Panel(Panel const &rhs) { *this = rhs; }
Panel::~Panel(void) {}

Panel const &Panel::operator=(Panel const &obj)
{
	if (this == &obj)
		return *this;

	this->_module = obj._module;
	this->_m_title = obj._m_title;
	this->_m_content = obj._m_content;

	return *this;
}

Panel::Panel(wxPanel *parent, WxmacDisplay *wxmac, IMonitorModule *module)
	: wxPanel(parent, -1, wxPoint(-1, -1), wxSize(-1, -1), wxBORDER_SUNKEN), _module(module)
{
	this->_m_title = new wxStaticText(this, -1, wxString::Format(wxT("%s"), module->getTitle()), wxPoint(10, 5));

	wxFont font = _m_title->GetFont();
	font.SetWeight(wxFONTWEIGHT_BOLD);
	_m_title->SetFont(font);

	this->_m_content = new wxStaticText(this, -1, wxString::Format("..."), wxPoint(10, 30));

	(void)wxmac;
}

void Panel::update(wxPanel *parent, WxmacDisplay *wxmac) const
{
	(void)parent;
	(void)wxmac;

	this->_m_content->SetLabel(wxString::Format(wxT("%s"), _module->getData()));
}
