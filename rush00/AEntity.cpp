/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   AEntity.cpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bnoyer <bnoyer@student.42.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 11:26:56 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/19 22:36:33 by bnoyer      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "AEntity.hpp"
#include "Game.hpp"

#include <ncurses.h>


/*
** Constructor / Canonical function
*/

AEntity::AEntity(void) : _skin('.'), _nFrame(1), _alive(1)
{
	Game::new_entity(this);
}

AEntity::AEntity(char skin, Vector2d pos, Vector2d speed, unsigned frm) :  _skin(skin), _pos(pos), _speed(speed), _nFrame(frm), _alive(1)
{
	Game::new_entity(this);
}

AEntity::AEntity(AEntity const &)
{
	Game::new_entity(this);
	// std::cout << "Entity creation" << std::endl;
}

AEntity & AEntity::operator=(AEntity const &)
{
	//TODO:
	// std::cout << "Entity =" << std::endl;
	return (*this);
}

AEntity::~AEntity(void)
{
}

/*
** Setters / Getters
*/

void	AEntity::setPos(Vector2d newPos)
{
	this->_pos.setX(newPos.getX());
	this->_pos.setY(newPos.getY());
	this->_pos.setM(false);
}

void	AEntity::setSpeed(Vector2d newSpeed)
{
	this->_speed.setX(newSpeed.getX());
	this->_speed.setY(newSpeed.getY());
	this->_speed.setM(true);
}

void	AEntity::setNFrame(unsigned val)
{
	this->_nFrame = val;
}

void	AEntity::setPos(int x, int y)
{
	this->_pos.setX(x);
	this->_pos.setY(y);
	this->_pos.setM(false);
}

void	AEntity::setSpeed(int x, int y)
{
	this->_speed.setX(x);
	this->_speed.setY(y);
	this->_speed.setM(true);
}

Vector2d	&AEntity::getPos()
{
	return this->_pos;
}

Vector2d	&AEntity::getSpeed()
{
	return this->_speed;
}

char		AEntity::getSkin() const
{
	return this->_skin;
}

void	AEntity::display(void)
{
	move(this->getPos().getY() + 15, this->getPos().getX() + 30);
	addch(this->_skin);
}

bool	AEntity::isAlive()
{
	return (this->_alive);
}

void	AEntity::die()
{
	this->_alive = false;
}

/*void	AEntity::display(void)
{
	std::cout << this->getPos().getY() << this->getPos().getX() << std::endl;
}
*/
