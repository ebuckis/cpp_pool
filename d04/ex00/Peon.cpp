/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Peon.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 10:44:08 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 13:27:42 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Peon.hpp"

/*
** Constructor
*/

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog."  << std::endl;
}

/*
** Destructor
*/

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

/*
** Operator overload
*/

/*
** Getters
*/

/*
** Methods
*/

void	Peon::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}