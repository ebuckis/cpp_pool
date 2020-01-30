/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   WxmacDisplay.cpp                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/25 21:23:44 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 21:59:46 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "WxmacDisplay.hpp"

WxmacDisplay::WxmacDisplay(void)
{
	return;
}

WxmacDisplay::WxmacDisplay(WxmacDisplay const &src)
{
	*this = src;
	return;
}

WxmacDisplay::~WxmacDisplay(void)
{
	return;
}

WxmacDisplay &WxmacDisplay::operator=(WxmacDisplay const &rhs)
{
	if (this != &rhs)
	{
		this->_modules = rhs._modules;
	}
	return *this;
}

void WxmacDisplay::addModule(IMonitorModule *module)
{
	this->_modules.push_back(module);
}

void *WxmacDisplay::getDataModule(size_t index) const
{
	(void)index;
	return NULL;
}

const std::vector<IMonitorModule *> *WxmacDisplay::getModules(void) const
{
	return &this->_modules;
}

void WxmacDisplay::display(std::vector<IMonitorModule *> m)
{
	(void)m;
}

void WxmacDisplay::refresh(std::vector<IMonitorModule *> m)
{
	(void)m;
}