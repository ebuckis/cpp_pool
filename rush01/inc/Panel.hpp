/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Panel.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/25 21:16:45 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 21:46:06 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PANEL
#define PANEL

#include <wx/wx.h>
#include <wx/stattext.h>
#include "WxmacDisplay.hpp"
#include "IMonitorModule.hpp"

class Panel : public wxPanel
{
public:
	Panel(wxPanel *parent, WxmacDisplay *wxmac, IMonitorModule *m);
	Panel(Panel const &rhs);
	~Panel(void);

	Panel const &operator=(Panel const &obj);

	void	update(wxPanel *parent, WxmacDisplay *wxmac) const;

private:
	IMonitorModule* _module;
	wxStaticText 	*_m_title;
	wxStaticText 	*_m_content;
};
#endif