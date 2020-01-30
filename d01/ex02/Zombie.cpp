/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Zombie.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 09:46:46 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 11:43:36 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Zombie.hpp" 

Zombie::Zombie(std::string name,std::string type) : _name(name), _type(type)
{
}

Zombie::~Zombie(void)
{
	this->announce();
	std::cout << "*Those were his last words* RIP " << this->_name << std::endl;
}
void	Zombie::announce()
{
	std::cout << "<" + this->_name + " (" + this->_type + ")> ";
	std::cout << " Braiiiiiiinnnssss..." << std::endl;
}
