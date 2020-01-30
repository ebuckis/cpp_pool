/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   NinjaTrap.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 16:53:04 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 18:08:58 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP_
#define NINJATRAP_HPP_

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public virtual ClapTrap
{
	public :
		NinjaTrap(std::string name);
		~NinjaTrap(void);

		unsigned int rangedAttack(std::string const & target) const;
		unsigned int meleeAttack(std::string const & target) const;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		unsigned int ninjaShoebox(ClapTrap &target) const;
		unsigned int ninjaShoebox(NinjaTrap &target);
		unsigned int ninjaShoebox(ScavTrap &target) const;
		unsigned int ninjaShoebox(FragTrap &target);

	protected :
		NinjaTrap(void);

	private :
};

#endif