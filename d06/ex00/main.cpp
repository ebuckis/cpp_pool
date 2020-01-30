/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 14:54:55 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 15:23:44 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>
#include "Parser.hpp"

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong number of argument." << std::endl;
		return 1;
	}

	Parser p(av[1]);

	p.charCast();
	return 0;
}