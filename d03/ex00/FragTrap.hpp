/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   FragTrap.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 18:31:02 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 14:37:27 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP_
#define FRAGTRAP_HPP_

#include <iostream>

class FragTrap
{
	public :
		FragTrap(std::string name);
		FragTrap(const FragTrap &);
		~FragTrap(void);
		FragTrap & operator=(const FragTrap &);

		unsigned int rangedAttack(std::string const & target) const;
		unsigned int meleeAttack(std::string const & target) const;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		unsigned int	gethp() const;
		unsigned int	getMaxhp() const;
		unsigned int	getEnergyPoint() const;
		unsigned int	getMaxEnergyPoint() const;
		unsigned int	getLevel() const;
		std::string		getName() const;
		unsigned int	getMelAttackDmg() const;
		unsigned int	getRangeAttackDmg() const;
		unsigned int	getArmorDmgReduc() const;
		unsigned int	vaulthunter_dot_exe(std::string const & );

	private :
		FragTrap(void);
		unsigned int	_hp;
		unsigned int	_maxhp;
		unsigned int	_energyPoint;
		unsigned int	_maxEnergyPoint;
		unsigned int	_level;
		std::string		_name;
		unsigned int	_melAttackDmg;
		unsigned int	_rangeAttackDmg;
		unsigned int	_armorDmgReduc;
};

#endif