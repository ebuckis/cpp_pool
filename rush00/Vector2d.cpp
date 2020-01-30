/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Vector2d.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 16:13:15 by bnoyer       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/19 15:13:54 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Vector2d.hpp"

Vector2d::Vector2d(bool m, int x, int y) : _x(x), _y(y), _m(m)
{

}

Vector2d::Vector2d(Vector2d const & rhs)
{
	*this = rhs;
}

Vector2d::~Vector2d(void)
{

}

Vector2d::Vector2d(void) : _x(0), _y(0), _m(false)
{

}

Vector2d & Vector2d::operator=(Vector2d const &src)
{
	this->setX(src.getX());
	this->setY(src.getY());
	this->setM(src.getM());
	return (*this);
}

Vector2d	Vector2d::operator+(Vector2d const &src)
{
//	if (this->getM() == src.getM() == false)
//		return(*this);
	this->setX(this->getX() + src.getX());
	this->setY(this->getY() + src.getY());
	return (*this);
}

Vector2d	Vector2d::operator-(Vector2d const &src)
{
	if (this->getM() == src.getM() == false)
		return(*this);
	this->setX(this->getX() - src.getX());
	this->setY(this->getY() - src.getY());
	return (*this);
}

bool	Vector2d::operator==(Vector2d const &src)
{
	if (this->_x == src._x && this->_y == src._y && this->_m == src._m)
		return (true);
	return false;
}

int			Vector2d::getX(void) const
{
	return (this->_x);
}

int			Vector2d::getY(void) const
{
	return (this->_y);
}

bool		Vector2d::getM(void) const
{
	return (this->_m);
}


void		Vector2d::setX(int x)
{
	this->_x = x;
}

void		Vector2d::setY(int y)
{
	this->_y = y;
}

void		Vector2d::setM(bool m)
{
	this->_m = m;
}

