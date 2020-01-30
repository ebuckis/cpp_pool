/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Fixed.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 09:29:40 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 17:32:59 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** Init variable
*/

int	const Fixed::_nBits = 8;
bool Fixed::verbose = false;

/*
** Consturctor
*/

Fixed::Fixed(void) : _rawBits(0)
{
	if (Fixed::verbose)
		std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	if (Fixed::verbose)
		std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(int const i)
{
	if (Fixed::verbose)
		std::cout << "Int constructor called" << std::endl;
	this->_rawBits = i << this->_nBits;
}

Fixed::Fixed(float const f)
{
	if (Fixed::verbose)
		std::cout << "Float constructor called" << std::endl;

	this->_rawBits = (int)std::roundf(f * (1 << this->_nBits));
}

/*
** Destructor
*/

Fixed::~Fixed(void)
{
	if (Fixed::verbose)
		std::cout << "Destructor called" << std::endl;
}

/*
** Operator
*/

Fixed & Fixed::operator=(const Fixed &copy)
{
	if (Fixed::verbose)
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

/* Operations */

Fixed Fixed::operator+(const Fixed & op) const
{
	Fixed res;

	res.setRawBits(this->_rawBits + op.getRawBits());
	return (res);
}

Fixed Fixed::operator-(const Fixed & op) const
{
	Fixed res;

	res.setRawBits(this->_rawBits - op.getRawBits());
	return (res);
}

Fixed Fixed::operator*(const Fixed & op) const
{
	Fixed res(this->toFloat() * op.toFloat());
	return (res);
}

Fixed Fixed::operator/(const Fixed & op) const
{
	Fixed res(this->toFloat() / op.toFloat());
	return (res);
}

/* Compare */

bool Fixed::operator<(const Fixed & op) const
{
	return (this->_rawBits < op.getRawBits());
}

bool Fixed::operator<=(const Fixed & op) const
{
	return (this->_rawBits <= op.getRawBits());
}

bool Fixed::operator>(const Fixed & op) const
{
	return (this->_rawBits > op.getRawBits());
}

bool Fixed::operator>=(const Fixed & op) const
{
	return (this->_rawBits >= op.getRawBits());
}

bool Fixed::operator==(const Fixed & op) const
{
	return (this->_rawBits == op.getRawBits());
}

bool Fixed::operator!=(const Fixed & op) const
{
	return (this->_rawBits != op.getRawBits());
}

/* Incrementations */

Fixed Fixed::operator++(void)
{
	this->_rawBits += 1;
	Fixed ret(*this);
	return (ret);
}

Fixed Fixed::operator++(int)
{
	Fixed ret(*this);
	this->_rawBits += 1;
	return (ret);
}

Fixed Fixed::operator--(void)
{
	this->_rawBits -= 1;
	Fixed ret(*this);
	return (ret);
}

Fixed Fixed::operator--(int)
{
	Fixed ret(*this);
	this->_rawBits -= 1;
	return (ret);
}

/*
** Getters
*/

int		Fixed::getRawBits( void ) const
{
	if (Fixed::verbose)
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

/*
** Non-member functions
*/

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a > b)
		return (a);
	return (b);
}
