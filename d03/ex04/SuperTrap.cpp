/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   SuperTrap.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 18:30:47 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 09:10:38 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name)//, FragTrap(name), NinjaTrap(name)
{
	this->_hp 				= FragTrap::gethp();
	this->_maxhp 			= FragTrap::_maxhp;
	this->_energyPoint		= NinjaTrap::_energyPoint;
	this->_maxEnergyPoint	= NinjaTrap::getMaxEnergyPoint();
	this->_melAttackDmg		= NinjaTrap::_melAttackDmg;
	this->_rangeAttackDmg	= FragTrap::_rangeAttackDmg;
	this->_armorDmgReduc	= FragTrap::_armorDmgReduc;
	std::cout << "A new <5UP3R-TP> is born, his name is " << name << std::endl;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "<5UP3R-TP> " << this->_name << " left the fight."  << std::endl;
}

/*
** Methods
*/

unsigned int SuperTrap::rangedAttack(std::string const & target) const
{
	return FragTrap::rangedAttack(target);
}

unsigned int SuperTrap::meleeAttack(std::string const & target) const
{
	return NinjaTrap::meleeAttack(target); 
}

void SuperTrap::takeDamage(unsigned int amount)
{
	std::cout << "<5UP3R-TP> " << this->_name;
	ClapTrap::takeDamage(amount);
}

void SuperTrap::beRepaired(unsigned int amount)
{
	std::cout << "<5UP3R-TP> " << this->_name;
	ClapTrap::beRepaired(amount);
}
