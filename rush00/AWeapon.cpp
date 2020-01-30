/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   AWeapon.cpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bnoyer <bnoyer@student.42.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 14:13:48 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/19 22:51:41 by bnoyer      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
	// std::cout << "AWeapon void constructor" << std::endl;
	this->_proj = new Projectile();
	this->_projDir = Vector2d(true, -1, 0);
	//pos
}

AWeapon::AWeapon(Projectile * proj)
{
	// std::cout << "AWeapon arg constructor" << std::endl;
	Projectile *tmpProj = NULL;

	if (this->_proj != NULL && proj != NULL)
		delete this->_proj;

	if (proj)
		tmpProj = new Projectile(*proj);
	else
		tmpProj = this->_proj;
	this->_proj = tmpProj;
	//pos
}

AWeapon::AWeapon(AWeapon const &copy)
{
	// std::cout << "AWeapon copy constructor" << std::endl;
	*this = copy;
}

AWeapon & AWeapon::operator=(AWeapon const & copy)
{
	// std::cout << "AWeapon = operator" << std::endl;
	if (this == &copy)
	{
		this->_proj = new Projectile(*copy._proj);
		//pos
	}
	return (*this);
}

AWeapon::~AWeapon(void)
{
	// std::cout << "AWeapon destructor" << std::endl;
}

void	AWeapon::shot(Vector2d org) const
{
	// std::cout << "AWeapon shot" << std::endl;
	new Projectile(*(this->_proj), org);
}

void	AWeapon::setProjectilDir(Vector2d dir)
{
	this->_projDir = dir;
}
