/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieHorde.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 11:54:40 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 12:27:28 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string	my_rand_name(void)
{
	static const std::string first[] = {
		"Knee", "Neck", "Leg", "Head", "Heart", "Brain", "Finger", "Arm", "Eye", "Tongue"};
	static const std::string second[] = {
		"Eater", "Bender", "Killer", "Smasher", "Shredder", "Devourer", "Breaker", "Rapist", "Thief", "Addict"};

	return (first[std::rand() % 10] + " " + second[std::rand() % 10]);
}

ZombieHorde::ZombieHorde(int n)
{
	if (n < 0)
		n = 0;

	this->_n = n;	
	this->_horde = new Zombie[n];

	for (int i = 0; i < n; i++)
	{
		this->_horde[i].setName(my_rand_name());
		this->_horde[i].setType("Flying");
	}
}

void	ZombieHorde::announce(void)
{
	for (int i = 0; i < this->_n; i++)
	{
		this->_horde[i].announce();
	}
}

void	ZombieHorde::destroyArmy(void)
{
		delete [] this->_horde;
	
}