/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   RamModule.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/24 18:12:23 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 22:13:45 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef RamModule_HPP_
#define RamModule_HPP_

#include "IMonitorModule.hpp"
#include <sstream>
#include <fstream>

class RamModule : public IMonitorModule
{
	private:
		bool	_isInit;
		long	_blockUsed;
		long	_blockFree;
		std::string	title;
	
	public:
		static const std::string name;

		/* Canonical */
		RamModule(void);
		~RamModule(void);
		RamModule &operator=(RamModule const &);
		RamModule(RamModule const &);

		//    RamModule(/* args */);

		/* Interface methods */
		virtual void updateData(void);
		virtual std::string getData(void) const;
		virtual	void	verif_data(void) const;
		virtual std::string getTitle();
};

#endif 