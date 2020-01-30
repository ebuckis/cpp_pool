/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   OSModule.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/24 15:58:41 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 22:09:36 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "OSModule.hpp"

/* Canonical */
OSModule::OSModule(void)
{
	this->_isInit = false;
	this->updateData();
	title = "OS";
}

OSModule::~OSModule(void)
{
}

OSModule &OSModule::operator=(OSModule const &copy)
{
	if (this != &copy)
	{
		this->_osStruct = copy._osStruct;
	}
	return (*this);
}

OSModule::OSModule(OSModule const &copy)
{
	*this = copy;
}

/* Interface methods */

void	OSModule::verif_data(void) const
{
	if (!this->_isInit)
		throw std::exception();
}

void OSModule::updateData(void)
{
		if (uname(&this->_osStruct) == -1)
		throw std::exception();//TODO: whitch exception ?

	this->_isInit = true;
}

//char sysname[];	/* Operating system name (e.g., "Linux") */       
//char nodename[];	/* Name within "some implementation-defined network" */       
//char release[];	/* Operating system release (e.g., "2.6.28") */       
//char version[];	/* Operating system version */       
//char machine[];	/* Hardware identifier */
std::string OSModule::getData(void) const
{
	std::string	res;
	this->verif_data();

	res.append(this->_osStruct.sysname);
	res.append("|");
	res.append(this->_osStruct.nodename);
	res.append("|");
	res.append(this->_osStruct.release);
	res.append("|");
	res.append(this->_osStruct.version);
	res.append("|");
	res.append(this->_osStruct.machine);
	return res;
}

std::string OSModule::getTitle(void)
{
	return title;
}

const std::string OSModule::name = "Operating System Information";