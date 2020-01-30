/* ************************************************************************** */

/*                                                          LE - /            */
/*                                                              /             */
/*   SuperTrap.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 18:31:02 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 16:40:38 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP_
#define SUPERTRAP_HPP_

#include <iostream>
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public :
		SuperTrap(std::string name);
		~SuperTrap(void);

		unsigned int rangedAttack(std::string const & target) const;
		unsigned int meleeAttack(std::string const & target) const;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private :
		//SuperTrap(void);
};

#endif