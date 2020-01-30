/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieEvent.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 09:46:51 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 11:38:11 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ZombieEvent.hpp" 

std::string	my_rand_name(void)
{
	static const std::string first[] = {
		"Knee", "Neck", "Leg", "Head", "Heart", "Brain", "Finger", "Arm", "Eye", "Tongue"};
	static const std::string second[] = {
		"Eater", "Bender", "Killer", "Smasher", "Shredder", "Devourer", "Breaker", "Rapist", "Thief", "Addict"};
	int i;
	int j;

	i = std::rand() % 10;
	j = std::rand() % 10;
	return (first[i] + " " + second[j]);
}

ZombieEvent::ZombieEvent(void)
{
	this->_type = "walker";
}

void 	ZombieEvent::setZombieType(std::string newType)
{
	this->_type = newType;
}

Zombie* ZombieEvent::newZombieType(std::string name) const
{
	Zombie*	newOne = new Zombie(name, this->_type);
	return newOne;
}

Zombie	ZombieEvent::randomChump(void) const
{
	Zombie	randomOne(my_rand_name(), this->_type);
	randomOne.announce();
	return randomOne;
}

void	ZombieEvent::killZombie(Zombie *who)
{
	delete who;
}
