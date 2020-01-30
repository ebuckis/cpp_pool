/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Human.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 12:56:40 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 08:59:13 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef HUMAN_HPP_
#define	HUMAN_HPP_

#include "Brain.hpp"

class Human
{
	public :
		Human(void);
		std::string	identify() const;
		Brain const &getBrain() const;

	private :
		Brain const _brain;
};

#endif