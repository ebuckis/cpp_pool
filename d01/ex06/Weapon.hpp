/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Weapon.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 16:19:13 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 16:36:08 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef WEAPON_HPP_
#define WEAPON_HPP_

#include <iostream>

class Weapon
{
	public :
		Weapon(std::string type);
		std::string const	&getType() const;
		void				setType(std::string type);
	private :
		std::string _type;

};

#endif