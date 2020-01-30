/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Character.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 13:51:39 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/18 09:40:04 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Character.hpp"

/*
** Constructor
*/

Character::Character(std::string const & name) : _name(name), _nAP(40), _weapon(NULL), _maxAP(40)
{
}

Character::Character(void)
{
}

Character::Character(Character const & copy)
{
	*this = copy;
}

Character::~Character(void)
{
}

Character & Character::operator=(Character const &copy)
{
	this->_name = copy._name;
	this->_weapon = copy._weapon;
	this->_nAP = copy._nAP;
	this->_maxAP = copy._maxAP;
	return (*this);
}

std::ostream & operator<<(std::ostream& os, const Character & charac)
{
	os << charac.getName() << " has " << charac.getNAP() << " AP ";
	if (charac.getWeapon())
	{
		os << " and wialds a " << charac.getWeapon()->getName();
	}
	else
	{
		os << "and is unarmed";
	}
	os << std::endl;
	return os;
}

/*
** Member functions
*/

void	Character::recoverAP(void)
{
	if (this->_nAP <= this->_maxAP - 10)
	{
		this->_nAP += 10;
	}
	else
	{
		this->_nAP = this->_maxAP;
	}
}

void	Character::equip(AWeapon * weapon)
{
	this->_weapon = weapon;
}

void	Character::attack(Enemy * enemy)
{
	if (this->_weapon == NULL || enemy == NULL)
		return ;

	if (this->_nAP >= (unsigned)this->_weapon->getAPCost())
	{
		this->_nAP -= this->_weapon->getAPCost();
		std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
		this->_weapon->attack();
		enemy->takeDamage(this->_weapon->getDamage());

		if (enemy->getHP() <= 0)
		{
			delete enemy;
			enemy = NULL;
		}
	}
}

/*
** Getters
*/

std::string	Character::getName() const
{
	return this->_name;
}

unsigned Character::getNAP() const
{
	return this->_nAP;
}

AWeapon *	Character::getWeapon() const
{
	return this->_weapon;
}

