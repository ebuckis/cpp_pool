/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   DateModule.hpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/24 15:39:22 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 22:13:06 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef DATEMODULE_HPP_
#define DATEMODULE_HPP_

#include <ctime>

#include "IMonitorModule.hpp"

class DateModule : public IMonitorModule
{
	private:
		std::string	_date;
		std::string	title;
		bool	_isInit;

	public:
		static const std::string name;

		/* Canonical */
		DateModule(void);
		~DateModule(void);
		DateModule &operator=(DateModule const &);
		DateModule(DateModule const &);

		//    DateModule(/* args */);

		/* Interface methods */
		virtual void updateData(void);
		virtual std::string getData(void) const;
		virtual	void	verif_data(void) const;
		virtual std::string getTitle();
};

#endif 