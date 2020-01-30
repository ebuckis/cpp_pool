/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ScavTrap.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 13:53:41 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 16:37:02 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_energyPoint		= 50;
	this->_maxEnergyPoint	= 50;
	this->_melAttackDmg		= 20;
	this->_rangeAttackDmg	= 15;
	this->_armorDmgReduc	= 3;
	std::cout << "A new <5C4V-TP> is born, his name is " << name << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "<5C4V-TP> " << this->_name << " runs away."  << std::endl;
}

unsigned int ScavTrap::rangedAttack(std::string const & target) const
{
	std::cout << "<5C4V-TP> " << this->_name << " attacks " << target << " at range, causing " << this->_melAttackDmg << " points of damage !" <<std::endl;
	return ClapTrap::rangedAttack(target);
}

unsigned int ScavTrap::meleeAttack(std::string const & target) const
{
	std::cout << "<5C4V-TP> " << this->_name << " attacks " << target << " at melee, causing " << this->_melAttackDmg << " points of damage !" <<std::endl;
	return ClapTrap::meleeAttack(target); 
}

void ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "<5C4V-TP> " << this->_name;
	ClapTrap::takeDamage(amount);
}

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "<5C4V-TP> " << this->_name;
	ClapTrap::beRepaired(amount);
}

void			ScavTrap::challengeNewcomer (std::string const & target) const
{
	static const std::string chall[5] = {
		"lick his elbow",
		"recite the alphabet backwards",
		"eat sand",
		"drink curdled milk",
		"play to the Russian roulette with an automatic gun"
	};
	int rd;
	rd = std::rand() % 5;

	std::cout << "<5C4V-TP> " << this->_name << " challenges " << target << " to " << chall[rd] << "." << std::endl;
}
