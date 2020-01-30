/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   AWeapon.cpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 13:51:38 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 16:38:16 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include  "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _shotAP(apcost), _nDmg(damage)
{

}

AWeapon::~AWeapon()
{
}

std::string 	AWeapon::getName() const
{
	return this->_name;
}

int		AWeapon::getAPCost() const
{
	return this->_shotAP;
}

int		AWeapon::getDamage() const
{
	return this->_nDmg;
}

AWeapon::AWeapon(AWeapon const &copy)
{
	*this = copy;
}

AWeapon & AWeapon::operator=(AWeapon const &copy)
{
	this->_name = copy._name;
	this->_nDmg = copy._nDmg;
	this->_shotAP = copy._shotAP;
	return (*this);
}
