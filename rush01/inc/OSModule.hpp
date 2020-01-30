/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   OSModule.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/24 15:58:59 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 22:13:40 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef OSMODULE_HPP_
#define OSMODULE_HPP_

#include <sys/utsname.h>

#include "IMonitorModule.hpp"

class OSModule : public IMonitorModule
{
	private:
		struct utsname	_osStruct;
		bool		_isInit;
		std::string	title;

	public:
		static const std::string name;

		/* Canonical */
		OSModule(void);
		~OSModule(void);
		OSModule &operator=(OSModule const &);
		OSModule(OSModule const &);

		//    OSModule(/* args */);

		/* Interface methods */
		virtual void	updateData(void);
		virtual std::string getData(void) const;
		virtual	void	verif_data(void) const;
		virtual std::string getTitle();
};

#endif
