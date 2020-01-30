/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/23 10:36:51 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/23 14:26:26 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> table(10, 42);

	easyfind(i, 5);
	for (int i = 0; i < 10; i++)
	{
		table[i] = i;
	}

	int sol = 0;
	sol = easyfind(table, 5);
	std::cout << sol << std::endl;

	std::list<int> lst;

	for (int i = 0; i < 22; i++)
	{
		lst.push_back(i * 2);
	}

	sol = 0;
	
	std::cout << "44 " << easyfind(lst, 44) << std::endl;
	std::cout << "22 " << easyfind(lst, 22) << std::endl;
	std::cout << "333 " << easyfind(lst, 333) << std::endl;



	return 0;
}