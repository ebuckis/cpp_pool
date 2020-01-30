/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Character.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 13:51:32 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 16:39:13 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:
		std::string	_name;
		unsigned	_nAP;
		AWeapon		*_weapon;
		unsigned	_maxAP;

	public:
		Character(std::string const &);
		Character(void);
		Character(Character const &);
		~Character(void);

		Character & operator=(Character const &);

		void		recoverAP();
		void		equip(AWeapon*);
		void		attack(Enemy*);
		std::string	getName() const;
		unsigned	getNAP() const;
		AWeapon *	getWeapon() const;
};

std::ostream & operator<<(std::ostream& os, const Character & charac);

#endif