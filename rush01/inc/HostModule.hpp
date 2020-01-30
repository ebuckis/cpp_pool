/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   HostModule.hpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/24 14:06:36 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 22:13:25 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef HOSTMODULE_HPP_
#define HOSTMODULE_HPP_

#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <iostream>
#include <stdlib.h>

#include "IMonitorModule.hpp"

class HostModule : public IMonitorModule
{
private:
    std::string _hostName;
    std::string _userName;
	std::string	title;
	bool	_isInit;

public:
	static const std::string name;

	/* Canonical */
    HostModule(void);
    ~HostModule(void);
    HostModule & operator=(HostModule const &);
    HostModule(HostModule const &);

//    HostModule(/* args */);

	/* Interface methods */
	virtual void	updateData(void);
	virtual std::string	getData(void) const;
	virtual	void	verif_data(void) const;
	virtual std::string getTitle();
};


#endif