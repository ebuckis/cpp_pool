/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ISquad.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 16:54:01 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/18 21:29:16 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ISQUAD_HPP_
#define ISQUAD_HPP_

#include <iostream>
#include "ISpaceMarine.hpp"

class ISquad
{
	public:
		virtual ~ISquad() {}
		virtual int getCount() const = 0;
		virtual ISpaceMarine *getUnit(int) const = 0;
		virtual int push(ISpaceMarine *) = 0;
};

#endif