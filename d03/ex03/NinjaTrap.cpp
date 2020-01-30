/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   NinjaTrap.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 16:53:12 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 17:41:30 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	this->_hp				= 60;
	this->_maxhp			= 60;
	this->_energyPoint		= 120;
	this->_maxEnergyPoint	= 120;
	this->_melAttackDmg		= 60;
	this->_rangeAttackDmg	= 5;
	this->_armorDmgReduc	= 0;
	std::cout << "A new <N1NJ4-TP> is born, his name is " << name << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "<N1NJ4-TP> " << this->_name << " left the fight."  << std::endl;
}

/*
** Methods
*/

unsigned int NinjaTrap::rangedAttack(std::string const & target) const
{
	std::cout << "<N1NJ4-TP> " << this->_name << " attacks " << target << " at range, causing " << this->_melAttackDmg << " points of damage !" <<std::endl;
	return ClapTrap::rangedAttack(target);
}

unsigned int NinjaTrap::meleeAttack(std::string const & target) const
{
	std::cout << "<N1NJ4-TP> " << this->_name << " attacks " << target << " at melee, causing " << this->_melAttackDmg << " points of damage !" <<std::endl;
	return ClapTrap::meleeAttack(target); 
}

void NinjaTrap::takeDamage(unsigned int amount)
{
	std::cout << "<N1NJ4-TP> " << this->_name;
	ClapTrap::takeDamage(amount);
}

void NinjaTrap::beRepaired(unsigned int amount)
{
	std::cout << "<N1NJ4-TP> " << this->_name;
	ClapTrap::beRepaired(amount);
}

unsigned int NinjaTrap::ninjaShoebox(ClapTrap &target) const
{
	(void)target;
	std::cout << "<N1NJ4-TP> " << this->_name << " sees an unknown, he throws a shuriken at him. Target loses "<< this->_rangeAttackDmg << "HP." << std::endl;
	return this->_rangeAttackDmg;
}

unsigned int NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	if (this == &target)
	{
		std::cout << "<N1NJ4-TP> " << this->_name << " sees an Ninja, runs again him, hurts himself again the mirror. He is dead." << std::endl;
		this->_hp = 0;
		return (0);
	}
	std::cout << "<N1NJ4-TP> " << this->_name << " meets his counterpart, they go to drink a coffee." << std::endl;
	return 0;
}
unsigned int NinjaTrap::ninjaShoebox(ScavTrap &target) const
{
	(void)target;
	std::cout << "<N1NJ4-TP> " << this->_name << " is camouflaged and he jumps on the target and bites him in the neck. Target loses "<< this->_rangeAttackDmg << "HP." << std::endl;
	return 55;
}
unsigned int NinjaTrap::ninjaShoebox(FragTrap &target)
{
	(void)target;
	std::cout << "<N1NJ4-TP> " << this->_name << " is getting his feet caught in his shoelaces.";
	ClapTrap::takeDamage(10);
	return 0;
}
