/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Fixed.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 09:48:34 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 17:32:34 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iostream>
#include <cmath>

class Fixed
{
	public :
		Fixed(void);
		Fixed(const Fixed &);
		Fixed(int const);
		Fixed(float const);
		~Fixed(void);

		Fixed & operator=(const Fixed &);
		Fixed operator+(const Fixed &) const;
		Fixed operator-(const Fixed &) const;
		Fixed operator*(const Fixed &) const;
		Fixed operator/(const Fixed &) const;

		bool operator<(const Fixed &) const;
		bool operator<=(const Fixed &) const;
		bool operator>(const Fixed &) const;
		bool operator>=(const Fixed &) const;
		bool operator==(const Fixed &) const;
		bool operator!=(const Fixed &) const;

		Fixed operator++(void);
		Fixed operator++(int);
		Fixed operator--(void);
		Fixed operator--(int);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		static Fixed & min(Fixed &, Fixed &);
		static Fixed & max(Fixed &, Fixed &);
		static Fixed const & min(Fixed const &, Fixed const &);
		static Fixed const & max(Fixed const &, Fixed const &);

		static bool verbose;
	private :
		int _rawBits;
		static const int _nBits;
};

std::ostream & operator<<(std::ostream &, const Fixed &);

#endif