/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   FragTrap.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 18:30:47 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 09:10:09 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_maxhp = 100;
	this->_energyPoint = 100;
	this->_maxEnergyPoint = 100;
	this->_level = 1;
	this->_melAttackDmg = 30;
	this->_rangeAttackDmg = 20;
	this->_armorDmgReduc = 5;

	std::cout << "A new <FR4G-TP> is born, his name is " << name << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "<FR4G-TP> " << this->_name << " left the fight."  << std::endl;
}

FragTrap::FragTrap(void)
{
		this->_hp = 100;
	this->_maxhp = 100;
	this->_energyPoint = 100;
	this->_maxEnergyPoint = 100;
	this->_level = 1;
	this->_melAttackDmg = 30;
	this->_rangeAttackDmg = 20;
	this->_armorDmgReduc = 5;
}

/*
** Methods
*/

unsigned int FragTrap::rangedAttack(std::string const & target) const
{
	std::cout << "<FR4G-TP> " << this->_name << " attacks " << target << " at range, causing " << this->_melAttackDmg << " points of damage !" <<std::endl;
	return ClapTrap::rangedAttack(target);
}

unsigned int FragTrap::meleeAttack(std::string const & target) const
{
	std::cout << "<FR4G-TP> " << this->_name << " attacks " << target << " at melee, causing " << this->_melAttackDmg << " points of damage !" <<std::endl;
	return ClapTrap::meleeAttack(target); 
}

void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "<FR4G-TP> " << this->_name;
	ClapTrap::takeDamage(amount);
}

void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "<FR4G-TP> " << this->_name;
	ClapTrap::beRepaired(amount);
}

unsigned int FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int rd;
	static const std::string attackArr[5] = {
		"French kiss",
		"Foam sword",
		"Bamboo hit",
		"Rifle",
		"Nuclear bomb"
	};

	if (this->_energyPoint < 25)
	{
		std::cout << "<FR4G-TP> " << this->_name << " has not enougth energy point, the attack fails." << std::endl;
		return (0);
	}

	this->_energyPoint -= 25;
	rd = std::rand() % 5;
	
	std::cout << "<FR4G-TP> " << this->_name << " uses Suuuuuuper attack " << attackArr[rd] << " on " + target << ", causing " << rd * (rd + 1) * 2 << " points of damage !" <<std::endl;
	return (rd * (rd + 1) * 2);
}
