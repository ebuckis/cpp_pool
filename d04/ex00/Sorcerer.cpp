/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Sorcerer.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 10:44:06 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 13:27:49 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Sorcerer.hpp"

/*
** Constructor
*/

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _tiltle(title)
{
	std::cout << this->_name << ", " << this->_tiltle << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & copy)
{
	*this = copy;
}

/*
** Destructor
*/

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_tiltle << ", is dead. Consequences will never be the same !" << std::endl;
}

/*
** Operator overload
*/

Sorcerer & Sorcerer::operator=(Sorcerer const & copy)
{
	if (this != &copy)
	{
		this->_name = copy._name;
		this->_tiltle = copy._tiltle;
	}
	return (*this);
}

std::ostream & operator<<(std::ostream& os, const Sorcerer & sor)
{
	os << "I am " << sor.getName() << ", " << sor.getTitle() << ", and I like ponies !" << std::endl;
	return os;
}

/*
** Getters
*/

std::string	Sorcerer::getTitle(void) const
{
	return this->_tiltle;
}

std::string	Sorcerer::getName(void) const
{
	return this->_name;
}

/*
** Member function
*/

void	Sorcerer::polymorph(Victim const & vic) const
{
	vic.getPolymorphed();
}
