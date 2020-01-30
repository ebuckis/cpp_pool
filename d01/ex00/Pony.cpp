/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Pony.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 08:19:49 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 09:41:43 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, int age) : _name(name), _color(color), _age(age)
{
	std::cout << "You've adopted a new pet, you call it " << this->_name << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "You send " << this->_name << " to the slaughterhouse." << std::endl;
}

void	Pony::run(void)
{
	std::cout << "PataclopPataclop" << std::endl;
	std::cout << "*It doesn't look " << this->_age << "*" << std::endl;
}

void	Pony::neigh(void)
{
	std::cout << "Huuuuuuuuu ! Prrrrr" << std::endl;
	std::cout << "*It a beautiful " << this->_color << " pony*" << std::endl;
}