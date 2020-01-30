/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Projectile.cpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bnoyer <bnoyer@student.42.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 15:14:26 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/19 23:31:21 by bnoyer      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Projectile.hpp"

/*
** Constructor/Destructor
*/
	#include <ncurses.h>
	#include <sstream>
	#include <string>

Projectile::Projectile(void) : AEntity('|', Vector2d(false, -1, -1), Vector2d(true, 0, -1), 8)
{
	//set speed
	this->_dmg = 1;
	// this->_nFrame = 8;
}

Projectile::Projectile(Projectile const & copy)
{
	*this = copy;
}

Projectile::Projectile(Projectile const & copy, Vector2d org)
{
	*this = copy;
	this->_pos.setY(org.getY() - 1);
	this->_pos.setX(org.getX());
}

Projectile & Projectile::operator=(Projectile const & copy)
{
	if (this != &copy)
	{
		this->_dmg = copy._dmg;
		this->_pos = copy._pos;
		this->_speed = copy._speed;
		this->_skin = copy._skin;
	}
	return (*this);
}

Projectile::Projectile(char skin, Vector2d pos, Vector2d speed, unsigned dmg, unsigned frm)
: AEntity(skin, pos, speed, frm), _dmg(dmg)
{
}

Projectile::~Projectile(void)
{
}


bool	Projectile::colision(AEntity & col)
{
	(void)col;
	return false;
}

bool	Projectile::colision(ASpaceShip & col)
{
	this->die();
	col.takeDamage(this->_dmg);
	return false;
}


bool	Projectile::colision(Projectile & col)
{
	this->die();
	col.die();
	return false;
}


bool	Projectile::update_pos(unsigned long frm)
{
	if (frm % this->_nFrame != 0)
		return (false);

	this->_pos = this->_pos + this->_speed;
	if (this->_pos.getY() < 0)
		this->die();
	return true;
}
/*
** Getters/Setters
*/

unsigned	Projectile::getDmg(void) const
{
	return (this->_dmg);
}

void	Projectile::setDmg(unsigned value)
{
	this->_dmg  = value;
}


