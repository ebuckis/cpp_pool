/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 13:51:44 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 16:51:22 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Character.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"

int main()
{
	Character *zaz = new Character("zaz");
	std::cout << *zaz;
	Enemy *b = new RadScorpion();
	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	std::cout << b->getType() << " has " << b->getHP() << " HP" << std::endl;

	Enemy *c = new SuperMutant();

	zaz->equip(pf);
	while (c->getHP() && zaz->getNAP())
	{
		std::cout << c->getType() << " has " << c->getHP() << " HP" << std::endl;
		zaz->attack(c);
	}
	
	for (int i = 0; i < 10; i++)
	{
		zaz->recoverAP();
		std::cout << *zaz;
	}

	return 0;
}