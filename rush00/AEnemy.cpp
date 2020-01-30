/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   AEnemy.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bnoyer <bnoyer@student.42.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 13:24:08 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/19 23:30:46 by bnoyer      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "AEnemy.hpp"
#include "Game.hpp"

#include <iostream>

#include <ncurses.h>

AEnemy::AEnemy(void) : ASpaceShip(ACS_DIAMOND, Vector2d(false, 20, 0), Vector2d(true, 0, 1), 16)
{
	this->_skin = 'x';
}

AEnemy::AEnemy(char skin, Vector2d pos, Vector2d speed) : ASpaceShip(skin, pos, speed, 16), _hp(1)
{
	this->_nFrame = 16;
}

AEnemy::~AEnemy(void)
{

}

AEnemy::AEnemy(AEnemy const & copy)
{
	(void)copy;
}



bool	AEnemy::update_pos(unsigned long frm)
{
	if (frm % this->_nFrame != 0)
		return 0;
	this->_pos = this->_pos + this->_speed;
	return 1;
}

void	AEnemy::takeDamage(unsigned int dmg)
{
	Game::score++;
	if (this->_hp > dmg)
		this->_hp -= dmg;
	else
		this->_hp = 0;
	if (this->_hp == 0)
		this->die();
}

void	AEnemy::die(void)
{
	Game::score += 5;
	this->_alive = 0;
}

bool	AEnemy::colision(AEntity & col)
{
	(void)col;
	return (true);
}
bool	AEnemy::colision(ASpaceShip & col)
{
	this->takeDamage(1000);
	this->die();
	col.takeDamage(1);
	return false;
}

bool	AEnemy::colision(Projectile & col)
{
	this->takeDamage(col.getDmg());
	col.die();
	return false;
}

