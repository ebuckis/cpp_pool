/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ClapTrap.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 14:48:02 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 18:14:31 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _hp(100), _maxhp(100), _level(1), _name(name)
{
	std::cout << "A new <CL4P-TP> with a new name." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &trap)
{
	std::cout << "A new <CL4P-TP> by copy." << std::endl;
	*this = trap;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "A <CL4P-TP> has disappeared." << std::endl;
}

ClapTrap::ClapTrap(void) {}

ClapTrap & ClapTrap::operator=(const ClapTrap &copy)
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

/*
** Methods
*/

unsigned int ClapTrap::rangedAttack(std::string const &target) const
{
	(void)target;
	return (this->_rangeAttackDmg);
}

unsigned int ClapTrap::meleeAttack(std::string const &target) const
{
	(void)target;
	return (this->_melAttackDmg);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << ": he is already dead." <<std::endl;
	}
	else if (amount <= this->_armorDmgReduc)
	{
		std::cout << ": Armour reduces damages." <<std::endl;
	}
	else if (this->_hp <= amount - this->_armorDmgReduc)
	{
		std::cout << ": losts all this HP, he dies." <<std::endl;
		this->_hp = 0;
	}
	else
	{
		this->_hp -= amount - this->_armorDmgReduc;
		std::cout << ": losts " << amount - this->_armorDmgReduc << " HP." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int heal = 0;

	heal = this->_maxhp - this->_hp;
	if (heal == 0)
	{
		std::cout << ": is already full life." << std::endl;
		return ;
	}
	
	if (heal > amount)
		heal = amount;

	this->_hp += heal;
	std::cout << ": " << heal << " HP had restored for " << this->_name << "." <<std::endl;
}

/*
** Getter
*/

unsigned int	ClapTrap::gethp() const
{
	return this->_hp;
}

unsigned int	ClapTrap::getMaxhp() const
{
	return this->_maxhp;
}

unsigned int	ClapTrap::getEnergyPoint() const
{
	return this->_energyPoint;
}

unsigned int	ClapTrap::getMaxEnergyPoint() const
{
	return this->_maxEnergyPoint;
}

unsigned int	ClapTrap::getLevel() const
{
	return this->_level;
}

std::string		ClapTrap::getName() const
{
	return this->_name;
}

unsigned int	ClapTrap::getMelAttackDmg() const
{
	return this->_melAttackDmg;
}

unsigned int	ClapTrap::getRangeAttackDmg() const
{
	return this->_rangeAttackDmg;
}

unsigned int	ClapTrap::getArmorDmgReduc() const
{
	return this->_armorDmgReduc;
}