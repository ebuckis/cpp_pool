/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/16 10:24:34 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/16 14:43:02 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap perso1("Michel");
	ScavTrap perso2("Jean");
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
		
	return 0;
}