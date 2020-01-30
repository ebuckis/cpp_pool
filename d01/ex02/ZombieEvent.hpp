/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieEvent.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 09:46:54 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 11:38:25 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP_
#define ZOMBIEEVENT_HPP_

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent
{
	public :
		ZombieEvent(void);
		void 	setZombieType(std::string newType);
		Zombie*	newZombieType(std::string name) const;
		Zombie	randomChump(void) const;
		void 	killZombie(Zombie *who);

	private :
		std::string	_type;
};

#endif