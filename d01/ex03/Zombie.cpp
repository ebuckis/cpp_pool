/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Zombie.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 09:46:46 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 12:09:42 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Zombie.hpp" 

Zombie::Zombie(void)
{
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::setType(std::string type)
{
	this->_type = type;
}

Zombie::~Zombie(void)
{
	std::cout << "RIP " << this->_name << std::endl;
}
void	Zombie::announce()
{
	std::cout << "<" + this->_name + " (" + this->_type + ")> ";
	std::cout << " Braiiiiiiinnnssss..." << std::endl;
}
