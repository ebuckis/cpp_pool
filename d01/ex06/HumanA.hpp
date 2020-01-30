/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   HumanA.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 16:19:17 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 16:52:02 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef HUMANA_HPP_
#define HUMANA_HPP_

#include "Weapon.hpp"

class HumanA
{
	public :
		HumanA(std::string name, Weapon& wp);
		void	attack(void) const;

	private :
		Weapon&		_weapon;
		std::string	_name;
};

#endif