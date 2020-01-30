/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Rifle.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 16:03:30 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/18 16:59:06 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Rifle.hpp"

/*Rifle::Rifle(void) : AWeapon()
{
	std::cout << "Rifle void constructor" << std::endl;
}

Rifle::Rifle(Rifle const & copy) : AWeapon(copy)
{
	std::cout << "Rifle copy constructor" << std::endl;
	*this = copy;
}

Rifle::Rifle(Projectile * proj) : AWeapon(proj)
{
	std::cout << "Rifle arg constructor" << std::endl;
}

Rifle & Rifle::operator=(Rifle const &)
{
	std::cout << "Rifle = operator" << std::endl;
}*/

Rifle::~Rifle(void)
{
	std::cout << "Rifle destructor" << std::endl;
}
