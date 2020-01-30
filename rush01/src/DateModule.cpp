/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   DateModule.cpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/24 15:38:42 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 22:10:13 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "DateModule.hpp"

/* Canonical */
DateModule::DateModule(void)
{
	this->_isInit = false;
	this->updateData();
	title = "Date / Time";
}

DateModule::~DateModule(void)
{
}

DateModule &DateModule::operator=(DateModule const &copy)
{
	if (this != &copy)
	{
		this->_date = copy._date;
		this->_isInit = copy._isInit;
	}
	return (*this);
}

DateModule::DateModule(DateModule const &copy)
{
	*this = copy;
}

/* Interface methods */

void	DateModule::verif_data(void) const
{
	if (!this->_isInit)
		throw std::exception();
}

void DateModule::updateData(void)
{
	time_t now = time(0);

	// convert now to string form
	char *dt = ctime(&now);

	this->_date = std::string(dt);
	this->_isInit = true;
}
	
std::string DateModule::getData(void) const
{
	this->verif_data();
	return std::string("The local date and time is: " + this->_date);
}

std::string DateModule::getTitle(void)
{
	return title;
}

const std::string DateModule::name = "Date";
