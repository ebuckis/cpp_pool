/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Sorcerer.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 10:44:14 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 13:27:19 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef	SORCERER_HPP_
#define	SORCERER_HPP_

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
	public :
		Sorcerer(Sorcerer const &);
		~Sorcerer(void);
		Sorcerer & operator=(Sorcerer const &);

		Sorcerer(std::string name, std::string title);

		std::string	getName(void) const;
		std::string	getTitle(void) const;

		void	polymorph(Victim const &) const;

	private :
		Sorcerer(void);
		std::string _name;
		std::string _tiltle;
};

std::ostream & operator<<(std::ostream& os, const Sorcerer & sor);

#endif
