/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 10:24:34 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 17:36:16 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	FragTrap perso1("Michel");
	ScavTrap perso2("Jean");
	NinjaTrap ninja("Dominique");
	NinjaTrap ninja2("Frederique");
	ClapTrap clap("XkillerX");

	unsigned int dmg;

	dmg = perso1.meleeAttack(perso2.getName());
	if (dmg)
		perso2.takeDamage(dmg);
	dmg = perso2.rangedAttack(perso1.getName());
	if (dmg)
		perso1.takeDamage(dmg);

	dmg = perso1.vaulthunter_dot_exe(perso2.getName());
	if (dmg)
		perso2.takeDamage(dmg);
	dmg = perso1.vaulthunter_dot_exe(perso2.getName());
	if (dmg)
		perso2.takeDamage(dmg);
	dmg = perso1.vaulthunter_dot_exe(perso2.getName());
	if (dmg)
		perso2.takeDamage(dmg);
	
	for (int i = 0; i < 20; i++)
		perso2.beRepaired(10);
	
	for (int i = 0; i < 9; i++)
		perso2.challengeNewcomer(perso1.getName());
	
	perso1 = FragTrap("Retarded");

	FragTrap test(perso1);

	ninja.ninjaShoebox(perso1);
	ninja.ninjaShoebox(perso2);
	ninja.ninjaShoebox(ninja2);
	ninja.ninjaShoebox(ninja);
	ninja.ninjaShoebox(clap);


	return 0;
}