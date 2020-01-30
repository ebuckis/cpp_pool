/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ScavTrap.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 13:53:43 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 14:36:41 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP_
#define SCAVTRAP_HPP_

#include <iostream>

class ScavTrap
{
	public :
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &);
		~ScavTrap(void);
		ScavTrap & operator=(const ScavTrap &);

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
		void			challengeNewcomer (std::string const & ) const;

	private :
		ScavTrap(void);
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