/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieHorde.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 11:56:07 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 12:20:11 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP_
#define ZOMBIEHORDE_HPP_
#include "Zombie.hpp"

class ZombieHorde
{
	public :
		ZombieHorde(int n);
		void announce(void);
		void destroyArmy(void);

	private :
		Zombie*	_horde;
		int		_n;
};

#endif