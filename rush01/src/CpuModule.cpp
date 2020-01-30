/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   CpuModule.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/24 17:10:48 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 22:10:26 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include "CpuModule.hpp"

/* Canonical */
CpuModule::CpuModule(void)
{
	this->_isInit = false;
	this->updateData();
	title = "CPU";
}

CpuModule::~CpuModule(void)
{

}

CpuModule &CpuModule::operator=(CpuModule const &copy)
{
	if (this != &copy)
	{
		this->_cpu = copy._cpu;
		this->_isInit = copy._isInit;
	}
	return (*this);
}

CpuModule::CpuModule(CpuModule const &copy)
{
	*this = copy;
}

/* Interface methods */

void	CpuModule::verif_data(void) const
{
	if (!this->_isInit)
		throw std::exception();
}

void CpuModule::updateData(void)
{
	char buffer[128];
    size_t bufferlen = 128;

    sysctlbyname("machdep.cpu.brand_string",&buffer,&bufferlen,NULL,0);
	this->_cpu = std::string(buffer);
	this->_isInit = true;

}

std::string CpuModule::getData(void) const
{
	this->verif_data();
	return std::string(this->_cpu);
}

std::string CpuModule::getTitle(void)
{
	return title;
}

const std::string CpuModule::name = "CPU Information";