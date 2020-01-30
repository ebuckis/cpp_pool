/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   whatever.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/22 08:32:02 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/23 09:25:44 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>

/* Templates */

template <typename T>
void	swap(T & x, T & y)
{
//	std::cout << "+ MY SWAP +" << std::endl;
	T tmp;

	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
T		min(T const & x, T const & y)
{
//	std::cout << "+ MY MIN +" << std::endl;
	if (x < y)
		return (x);
	return (y);
}

template <typename T>
T		max(T const & x, T const & y)
{
//	std::cout << "+ MY MAX +" << std::endl;
	if (x > y)
		return (x);
	return (y);
}

/* Programm */

int main()
{
	int		a = 1;
	int		b = 0;
	float	c = -9.25;
	float	d = 12344.56789;
	char	e = 'e';
	char	f = 'f';
	std::string	g = "true";
	std::string	h = "false";

	std::cout << "	a : |" << a << "| b : |" << b << "|" << std::endl;
	swap(a, b);
	std::cout << "swap :  a : |" << a << "| b : |" << b << "|" << std::endl << std::endl;
	std::cout << "min : " << min(a, b) << std::endl;
	std::cout << "max : " << max(a, b) << std::endl << std::endl;

	std::cout << "	c : |" << c << "| d : |" << d << "|" << std::endl;
	swap(c, d);
	std::cout << "swap :  c : |" << c << "| d : |" << d << "|" << std::endl << std::endl;
	std::cout << "min : " << min(c, d) << std::endl;
	std::cout << "max : " << max(c, d) << std::endl << std::endl;

	std::cout << "	e : |" << e << "| f : |" << f << "|" << std::endl;
	swap(e, f);
	std::cout << "swap :  e : |" << e << "| f : |" << f << "|" << std::endl << std::endl;
	std::cout << "min : " << min(e, f) << std::endl;
	std::cout << "max : " << max(e, f) << std::endl << std::endl;

	std::cout << "	g : |" << g << "| h : |" << h << "|" << std::endl;
	::swap(g, h);
	std::cout << "swap :  g : |" << g << "| h : |" << h << "|" << std::endl << std::endl;
	std::cout << "min : " << ::min(g, h) << std::endl;
	std::cout << "max : " << ::max(g, h) << std::endl << std::endl;
	//conflict if we call just "min" or "max" with std lib

	return 0;
}