/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Human.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 12:56:37 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 08:58:49 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

std::string	Human::identify() const
{
	return (this->_brain.identify());
}

Brain const &Human::getBrain() const
{
	return (this->_brain);
}

