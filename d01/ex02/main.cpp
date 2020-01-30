/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 09:46:44 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 11:53:47 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Zombie.hpp" 
#include "ZombieEvent.hpp" 

int main()
{
	ZombieEvent ze = ZombieEvent();
	Zombie* michel;
	Zombie unknow0 = ze.randomChump();
	Zombie unknow1 = ze.randomChump();
	Zombie unknow2 = ze.randomChump();
	Zombie unknow3 = ze.randomChump();
	Zombie unknow4 = ze.randomChump();
	Zombie unknow5 = ze.randomChump();

	michel = ze.newZombieType("Michel");
	michel->announce();
	ze.setZombieType("flyer");
	ze.killZombie(michel);
	return (0);
}