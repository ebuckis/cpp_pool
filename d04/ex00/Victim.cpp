/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Victim.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 10:44:04 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 13:27:54 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Victim.hpp"

/*
** Constructor
*/

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just popped !"  << std::endl;
}

Victim::Victim(Victim const & copy)
{
	*this = copy;
}

/*
** Destructor
*/

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
}

/*
** Operator overload
*/

Victim & Victim::operator=(Victim const & copy)
{
	if (this != &copy)
	{
		this->_name = copy._name;
	}
	return (*this);
}

std::ostream & operator<<(std::ostream& os, const Victim & vic)
{
	os << "I'm " << vic.getName() << ", and I like otters !" << std::endl;
	return os;
}

/*
** Getters
*/

std::string	Victim::getName(void) const
{
	return this->_name;
}

/*
** Methods
*/

void	Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}