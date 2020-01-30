/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   HostModule.cpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/24 14:12:31 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 22:09:58 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "HostModule.hpp"

/* Canonical */
HostModule::HostModule(void)
{
	this->_isInit = false;
	this->updateData();
	title = "User / Host";
}

HostModule::~HostModule(void)
{
}

HostModule & HostModule::operator=(HostModule const & copy)
{
	if (this != &copy)
	{
		this->_isInit = copy._isInit;
		this->_hostName = copy._hostName;
		this->_userName = copy._userName;
	}
	return (*this);
}

HostModule::HostModule(HostModule const & copy)
{
	*this = copy;
}

/* Interface methods */

void	HostModule::verif_data(void) const
{
	if (!this->_isInit)
		throw std::exception();
}

void	HostModule::updateData(void)
{
    char	name[256];
	char	*user;

	user = getenv("USER");
    if (!user || gethostname(name, 256) == -1) {
		throw std::exception();//TODO: claquer un autre exception ?
    }

    this->_hostName = std::string(name);
	this->_userName = std::string(user);
	this->_isInit = true;
}

std::string	HostModule::getData(void) const
{
	this->verif_data();
	return std::string("HostName:" + this->_hostName + " | UserName:" + this->_userName);
}

std::string HostModule::getTitle(void)
{
	return title;
}

const std::string HostModule::name = "HostName/UserName";