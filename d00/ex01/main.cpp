/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 11:52:18 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 15:25:26 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook phoneBook;
	bool exit;
	std::string action;
	
	exit = 1;
	while (exit)
	{
		std::cout << "command: ";
		exit = (bool)std::getline(std::cin ,action);

		if (action.compare("ADD") == 0)
		{
			phoneBook.new_contact();
		}
		else if (action.compare("SEARCH") == 0)
		{
			phoneBook.search();
		}
		else if (action.compare("EXIT") == 0)
		{
			exit = 0;
		}
	}
	return (0);
}
