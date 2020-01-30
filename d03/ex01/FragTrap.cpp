/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   FragTrap.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 18:30:47 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 14:37:39 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap(std::string name) : _hp(100), _maxhp(100), _energyPoint(100),
							_maxEnergyPoint(100), _level(1), _name(name),
							_melAttackDmg(30), _rangeAttackDmg(20), _armorDmgReduc(5)
{
	std::cout << "A new <FR4G-TP> is born, his name is " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap & frag)
{
	*this = frag;
	std::cout << "A new <FR4G-TP> " << this->_name << " has just been cloned." << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "<FR4G-TP> " << this->_name << " left the fight."  << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &copy)
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

unsigned int FragTrap::rangedAttack(std::string const & target) const
{
	std::cout << "<FR4G-TP> " << this->_name << " attacks " << target << " at range, causing " << this->_melAttackDmg << " points of damage !" <<std::endl;
	return this->_rangeAttackDmg;
}

unsigned int FragTrap::meleeAttack(std::string const & target) const
{
	std::cout << "<FR4G-TP> " << this->_name << " attacks " << target << " at melee, causing " << this->_melAttackDmg << " points of damage !" <<std::endl;
	return this->_melAttackDmg;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << "<FR4G-TP> " << this->_name << ": he is already dead." <<std::endl;
	}
	else if (amount <= this->_armorDmgReduc)
	{
		std::cout << "<FR4G-TP> " << this->_name << ": Armour reduces damages." <<std::endl;
	}
	else if (this->_hp <= amount - this->_armorDmgReduc)
	{
		std::cout << "<FR4G-TP> " << this->_name << ": losts all this HP, he dies." <<std::endl;
		this->_hp = 0;
	}
	else
	{
		this->_hp -= amount - this->_armorDmgReduc;
		std::cout << "<FR4G-TP> " << this->_name << ": losts " << amount - this->_armorDmgReduc << " HP." << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	unsigned int heal = 0;

	heal = this->_maxhp - this->_hp;
	if (heal == 0)
	{
		std::cout << "<FR4G-TP> " << this->_name << ": is already full life." << std::endl;
		return ;
	}
	
	if (heal > amount)
		heal = amount;

	this->_hp += heal;
	std::cout << "<FR4G-TP> " << this->_name << ": " << heal << " HP had restored for " << this->_name << "." <<std::endl;
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

/*
** Getters
*/

unsigned int	FragTrap::gethp() const
{
	return this->_hp;
}

unsigned int	FragTrap::getMaxhp() const
{
	return this->_maxhp;
}

unsigned int	FragTrap::getEnergyPoint() const
{
	return this->_energyPoint;
}

unsigned int	FragTrap::getMaxEnergyPoint() const
{
	return this->_maxEnergyPoint;
}

unsigned int	FragTrap::getLevel() const
{
	return this->_level;
}

std::string		FragTrap::getName() const
{
	return this->_name;
}

unsigned int	FragTrap::getMelAttackDmg() const
{
	return this->_melAttackDmg;
}

unsigned int	FragTrap::getRangeAttackDmg() const
{
	return this->_rangeAttackDmg;
}

unsigned int	FragTrap::getArmorDmgReduc() const
{
	return this->_armorDmgReduc;
}
