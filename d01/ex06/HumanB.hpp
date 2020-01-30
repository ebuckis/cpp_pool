/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   HumanB.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 16:19:15 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 17:03:02 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef HUMANB_HPP_
#define HUMANB_HPP_

#include "Weapon.hpp"

class HumanB
{
	public :
		HumanB(std::string name);
		void	attack(void) const;
		void	setWeapon(Weapon &wp);

	private :
		Weapon*	_weapon;
		std::string	_name;
};


#endif