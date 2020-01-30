/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Fixed.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 09:29:40 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 15:54:04 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** Init variable
*/

int	const Fixed::_nBits = 8;

/*
** Consturctor
*/

Fixed::Fixed(void) : _rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(int const i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = i << this->_nBits;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;

	this->_rawBits = (int)std::roundf(f * (1 << this->_nBits));
}

/*
** Destructor
*/

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

/*
** Operator
*/

Fixed & Fixed::operator=(const Fixed &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &copy)
	{
		this->_rawBits = copy.getRawBits();
	}
	return (*this);
}

// /!\ Not a function member
std::ostream & operator<<(std::ostream& os, const Fixed &fix)
{

	os << fix.toFloat();
	return os;
}

/*
** Getters
*/

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBits);
}

/*
** Setters
*/

void	Fixed::setRawBits( int const raw )
{
	this->_rawBits = raw;
}

/*
** Methods
*/

float	Fixed::toFloat( void ) const
{
	float	f;

	f = (float)(this->_rawBits) / (1 << this->_nBits);

	return (f);
}

int		Fixed::toInt( void ) const
{
	int ret;

	ret = this->_rawBits >> (this->_nBits);
	return (ret);
}
