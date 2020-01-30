/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   AWeapon.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 13:51:30 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 16:35:18 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef AWEAPON_HPP_
#define AWEAPON_HPP_

#include <iostream>

class AWeapon
{
	public :
		AWeapon(std::string const & name, int apcost, int damage);
		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;

		virtual ~AWeapon();
		AWeapon(void);
		AWeapon(AWeapon const &);
		AWeapon & operator=(AWeapon const &);

	protected :
		std::string		_name;
		unsigned int	_shotAP;
		unsigned int	_nDmg;
	private :

};

#endif