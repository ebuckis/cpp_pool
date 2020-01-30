/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Player.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bnoyer <bnoyer@student.42.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 12:52:04 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/19 23:31:05 by bnoyer      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Player.hpp"
#include "AWeapon.hpp"
#include "AEnemy.hpp"

#include "rush.h"

#include <ncurses.h>

Player::Player(char skin, int y, int x) :
ASpaceShip(skin, Vector2d(false, x, y), Vector2d(true, 1, 1), 1), _nbLife(3)
{
	this->_weapon = new AWeapon();
}

Player::Player(void) :
ASpaceShip('A', Vector2d(false, (COL_CUST - 1) / 2, LINE_CUST - 1), Vector2d(true, 1, 1), 1), _nbLife(3)
{
	this->_nFrame = 1;
}

Player::Player(Player const &rhs)
{
	*this = rhs;
}

Player::~Player(void)
{
}

Player &Player::operator=(Player const &src)
{
	this->setNbLife(src.getNbLife());
	this->setWeapon(src.getWeapon());
	return (*this);
}

void	Player::setNbLife(unsigned const nb)
{
	this->_nbLife = nb;
}

void	Player::setWeapon(AWeapon *wp)
{
	this->_weapon = wp;
}

unsigned	Player::getNbLife(void) const
{
	return (this->_nbLife);
}

AWeapon	*Player::getWeapon(void) const
{
	return (this->_weapon);
}


bool	Player::update_pos(unsigned long frm)
{
	(void)frm;
	return 0;
}

void	Player::takeDamage(unsigned int dmg)
{
	if (dmg > 0 && this->_nbLife > 0)
		this->_nbLife -= 1;
	if (this->_nbLife == 0)
		this->die();
}

void	Player::die(void)
{
	this->_alive = 0;
}

void	Player::shot(void)
{
	if (this->_weapon)
		this->_weapon->shot(this->getPos());

}

unsigned Player::getNbLife()
{
	return this->_nbLife;
}

bool	Player::colision(AEntity & col)
{
	this->takeDamage(1);
	col.die();
	return false;
}

bool	Player::colision(AEnemy & col)
{
	this->takeDamage(1);
	col.die();
	return false;
}

bool	Player::colision(Projectile & col)
{
	this->takeDamage(1);
	col.die();
	return false;
}
