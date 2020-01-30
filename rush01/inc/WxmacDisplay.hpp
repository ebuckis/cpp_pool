/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   WxmacDisplay.hpp                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/25 21:44:27 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 21:58:19 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#ifndef WXMACDISPLAY_H
#define WXMACDISPLAY_H

#include <iostream>
#include "IMonitorDisplay.hpp"
#include <vector>
#include <wx/wx.h>

class WxmacDisplay : public IMonitorDisplay
{

public:
	WxmacDisplay(void);
	WxmacDisplay(WxmacDisplay const &src);
	~WxmacDisplay(void);

	WxmacDisplay &operator=(WxmacDisplay const &rhs);
	void addModule(IMonitorModule *module);
	const std::vector<IMonitorModule *> *getModules(void) const;
	IMonitorModule *getModules(size_t index) const;
	void *getDataModule(size_t index) const;

	virtual void display(std::vector<IMonitorModule *>);
	virtual void refresh(std::vector<IMonitorModule *>);

private:
	std::vector<IMonitorModule *> _modules;
};

#endif
