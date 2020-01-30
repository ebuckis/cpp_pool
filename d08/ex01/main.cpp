/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/23 16:38:09 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/23 16:54:09 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	Span sp(5);

	try
	{
		sp.addNumber(8);
		std::cout << sp.longestSpan() <<std::endl;
		std::cout << sp.shortestSpan() <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	/* test2 */
	
	try
	{
		sp.addNumber(0);
		sp.addNumber(-654);
		sp.addNumber(9855);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << sp.longestSpan() <<std::endl;
	std::cout << sp.shortestSpan() <<std::endl;



	try
	{
		sp.addNumber(8);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
	std::cout << sp.longestSpan() <<std::endl;
	std::cout << sp.shortestSpan() <<std::endl;

		try
	{
		sp.addNumber(-2);
		sp.addNumber(22);
		sp.addNumber(222);
		sp.addNumber(2222);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << sp.longestSpan() <<std::endl;
	std::cout << sp.shortestSpan() <<std::endl;

	return 0;
}