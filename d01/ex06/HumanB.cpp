/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   HumanB.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 16:19:09 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 17:03:00 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string name) : _name(name)
{
}

void	HumanB::setWeapon(Weapon& wp)
{
	this->_weapon = &wp;
}

void	HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}