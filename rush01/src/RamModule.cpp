/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   RamModule.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/24 18:05:34 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 22:09:21 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "RamModule.hpp"

/* Canonical */
RamModule::RamModule(void)
{
	this->_isInit = false;
	this->updateData();
	title = "RAM";
}

RamModule::~RamModule(void)
{
}

RamModule &RamModule::operator=(RamModule const &copy)
{
	if (this != &copy)
	{
		this->_isInit = copy._isInit;
		this->_blockFree = copy._blockFree;
		this->_blockUsed = copy._blockUsed;
	}
	return (*this);
}

RamModule::RamModule(RamModule const &copy)
{
	*this = copy;
}

/* Interface methods */

void	RamModule::verif_data(void) const
{
	if (!this->_isInit)
		throw std::exception();
}

void RamModule::updateData(void)
{
	if (std::system("top -l 1 | grep Phys | awk '{print $2, $6}' | sed -e \"s/M//g\" > /tmp/ram_info"))
		throw std::exception();

	std::ifstream myfile("/tmp/ram_info");
	
	myfile >> this->_blockUsed >> this->_blockFree;
	this->_isInit = true;
}

std::string RamModule::getData(void) const
{
	this->verif_data();
	int percent = ((this->_blockUsed * 100) / (this->_blockFree + this->_blockUsed));
	
	std::stringstream ss;
	ss <<	"Blocks used : " << percent << "/100";

	return std::string(ss.str());
}

std::string RamModule::getTitle(void)
{
	return title;
}

const std::string RamModule::name = "RAM";