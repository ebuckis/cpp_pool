/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Fixed.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/15 09:48:34 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 11:13:06 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iostream>

class Fixed
{
	public :
		Fixed(void);
		Fixed(const Fixed &);
		~Fixed(void);
		Fixed & operator=(const Fixed &);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

	private :
		int _rawBits;
		static const int _nBits;
};

#endif