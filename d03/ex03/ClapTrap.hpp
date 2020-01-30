/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ClapTrap.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 14:48:04 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 16:01:19 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP_
#define CLAPTRAP_HPP_

#include <iostream>

class ClapTrap
{
	public :
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &);
		~ClapTrap(void);
		ClapTrap & operator=(const ClapTrap &);

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

	protected :
		ClapTrap(void);
		unsigned int	_hp;
		unsigned int	_maxhp;
		unsigned int	_energyPoint;
		unsigned int	_maxEnergyPoint;
		unsigned int	_level;
		std::string		_name;
		unsigned int	_melAttackDmg;
		unsigned int	_rangeAttackDmg;
		unsigned int	_armorDmgReduc;

	private :
};


#endif