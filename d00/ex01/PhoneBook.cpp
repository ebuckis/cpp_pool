/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   PhoneBook.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 12:12:33 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 18:41:46 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_id = 0;
}

void PhoneBook::search(void) const
{
	int	needed;
	std::string tmp;

	if (_id == 0)
	{
		std::cout << "Sorry, the phone book is empty" << std::endl;
		return ;
	}

	needed = -1;
	std::cout << "|        ID|First Name| Last Name| Nickname |" << std::endl;
	for (int i = 0; i < _id; i++)
	{
		_list[i].display(0, i);
	}
	while (needed < 0 || needed >= _id)
	{
		std::cout << "Enter an id, shown in the table above" << std::endl;
		if (0 == (bool)std::getline(std::cin , tmp))
			return ;
		if (isdigit(tmp[0]))
			needed = std::stoi(tmp);
	}
	_list[needed].display(1, 0);
}

void PhoneBook::new_contact(void)
{
	std::string input[11];
	const char info[11][20] = {
		"first_name",
		"last_name",
		"nickname",
		"login",
		"postal_address",
		"email_address",
		"phone_number",
		"birthday_date",
		"favorite_meal",
		"underwear_color",
		"darkest_secret",
	};

	if (_id >= 8)
	{
		std::cout << "Sorry, the phone book is full. Try to kill your extra friends." << std::endl;
		return ;
	}

	for (int i = 0; i < 11; i++)
	{
		std::cout << "Enter your " << info[i] << " :" << std::endl;
		if (0 == (bool)std::getline(std::cin , input[i]))
			return ;
		if (input[i].length() == 0)
			i--;
	}

	_list[_id].add(input[0], 
					input[1], 
					input[2], 
					input[3], 
					input[4], 
					input[5], 
					input[6], 
					input[7], 
					input[8], 
					input[9], 
					input[10]);
	_id++;
}
