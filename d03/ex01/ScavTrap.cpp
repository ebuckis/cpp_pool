/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ScavTrap.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 13:53:41 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 14:36:54 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name) : _hp(100), _maxhp(100), _energyPoint(50),
									_maxEnergyPoint(50), _level(1), _name(name),
									_melAttackDmg(20), _rangeAttackDmg(15), _armorDmgReduc(3)
{
	std::cout << "A new <5C4V-TP> is born, his name is " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav)
{
	*this = scav;
	std::cout << "A new <5C4V-TP> " << this->_name << " has just been cloned." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "<5C4V-TP> " << this->_name << " runs away."  << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &copy)
{	
	if (this != &copy)
	{
		this->_hp				= copy._hp;
		this->_maxhp			= copy._maxhp;
		this->_energyPoint		= copy._energyPoint;
		this->_maxEnergyPoint	= copy._maxEnergyPoint;
		this->_level			= copy._level;
		this->_name				= copy._name;
		this->_melAttackDmg		= copy._melAttackDmg;
		this->_rangeAttackDmg	= copy._rangeAttackDmg;
		this->_armorDmgReduc	= copy._armorDmgReduc;
	}
	return (*this);
}


unsigned int ScavTrap::rangedAttack(std::string const & target) const
{
	std::cout << "<5C4V-TP> " << this->_name << " attacks " << target << " at range, causing " << this->_melAttackDmg << " points of damage !" <<std::endl;
	return this->_rangeAttackDmg;
}

unsigned int ScavTrap::meleeAttack(std::string const & target) const
{
	std::cout << "<5C4V-TP> " << this->_name << " attacks " << target << " at melee, causing " << this->_melAttackDmg << " points of damage !" <<std::endl;
	return this->_melAttackDmg;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << "<5C4V-TP> " << this->_name << ": he is already dead." <<std::endl;
	}
	else if (amount <= this->_armorDmgReduc)
	{
		std::cout << "<5C4V-TP> " << this->_name << ": Armour reduces damages." <<std::endl;
	}
	else if (this->_hp <= amount - this->_armorDmgReduc)
	{
		std::cout << "<5C4V-TP> " << this->_name << ": losts all this HP, he dies." <<std::endl;
		this->_hp = 0;
	}
	else
	{
		this->_hp -= amount - this->_armorDmgReduc;
		std::cout << "<5C4V-TP> " << this->_name << ": losts " << amount - this->_armorDmgReduc << " HP." << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{
	unsigned int heal = 0;

	heal = this->_maxhp - this->_hp;
	if (heal == 0)
	{
		std::cout << "<5C4V-TP> " << this->_name << ": is already full life." << std::endl;
		return ;
	}
	
	if (heal > amount)
		heal = amount;

	this->_hp += heal;
	std::cout << "<5C4V-TP> " << this->_name << ": " << heal << " HP had restored for " << this->_name << "." <<std::endl;
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



unsigned int	ScavTrap::gethp() const
{
	return this->_hp;
}

unsigned int	ScavTrap::getMaxhp() const
{
	return this->_maxhp;
}

unsigned int	ScavTrap::getEnergyPoint() const
{
	return this->_energyPoint;
}

unsigned int	ScavTrap::getMaxEnergyPoint() const
{
	return this->_maxEnergyPoint;
}

unsigned int	ScavTrap::getLevel() const
{
	return this->_level;
}

std::string		ScavTrap::getName() const
{
	return this->_name;
}

unsigned int	ScavTrap::getMelAttackDmg() const
{
	return this->_melAttackDmg;
}

unsigned int	ScavTrap::getRangeAttackDmg() const
{
	return this->_rangeAttackDmg;
}

unsigned int	ScavTrap::getArmorDmgReduc() const
{
	return this->_armorDmgReduc;
}

