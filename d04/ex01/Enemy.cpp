/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Enemy.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 13:51:42 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 16:38:48 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Enemy.hpp"

/*
** Constructor
*/

Enemy::Enemy(int hp, std::string const &type) : _hp(hp), _type(type)
{
}

Enemy::~Enemy(void)
{
	
}

Enemy::Enemy(Enemy const & copy)
{
	*this = copy;
}

Enemy & Enemy::operator=(Enemy const &copy)
{
	this->_hp = copy._hp;
	this->_type = copy._type;
	return (*this);
}

/*
** Methods
*/

void Enemy::takeDamage(int dmg)
{
	if (dmg < 0)
		return ;

	if (this->_hp >= (unsigned)dmg)
	{
		this->_hp -= dmg;
	}
	else if (this->_hp != 0)
	{
		this->_hp = 0;
	}
}

/*
** Getters
*/

std::string Enemy::getType() const
{
	return this->_type;
}

int Enemy::getHP() const
{
	return this->_hp;
}
