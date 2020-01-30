/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 09:46:44 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 12:25:28 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Zombie.hpp" 
#include "ZombieHorde.hpp" 

int main()
{
	ZombieHorde h(5);
	h.announce();
	h.destroyArmy();
	std::cout << "------------------------------------------" << std::endl;
	ZombieHorde q(50);
	q.announce();
	q.destroyArmy();
	std::cout << "------------------------------------------" << std::endl;
	ZombieHorde r(0);
	r.destroyArmy();
	std::cout << "------------------------------------------" << std::endl;
	ZombieHorde f(-1);
	f.destroyArmy();
	return (0);
}