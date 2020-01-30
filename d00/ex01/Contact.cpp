/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Contact.cpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 11:08:06 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 18:41:19 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::add(std::string first_name,
					std::string last_name,
					std::string nickname,
					std::string login,
					std::string postal_address,
					std::string email_address,
					std::string phone_number,
					std::string birthday_date,
					std::string favorite_meal,
					std::string underwear_color,
					std::string darkest_secret	)
{
	_first_name = first_name;
	_last_name = last_name;
	_nickname = nickname;
	_login = login;
	_postal_address = postal_address;
	_email_address = email_address;
	_phone_number = phone_number;
	_birthday_date = birthday_date;
	_favorite_meal = favorite_meal;
	_underwear_color = underwear_color;
	_darkest_secret = darkest_secret;
}

void	display_short_col(std::string s1, int len)
{
	int i;
	int j;

	for (i = 0; i < 10 - len; i++)
	{
		std::cout << ' ';
	}

	j = 0;
	while (s1[j] && i < 10)
	{
		if (j == 9)
			std::cout << '.';
		else
			std::cout << s1[j];
		i++;
		j++;
	}
	std::cout << '|';
}

void	Contact::display(bool all, int id) const
{
	if (all)
	{
		/* Diplay all informations */
		std::cout << "First_name      : " << _first_name << std::endl;
		std::cout << "Last_name       : " << _last_name << std::endl;
		std::cout << "Nickname        : " << _nickname << std::endl;
		std::cout << "Login           : " << _login << std::endl;
		std::cout << "Postal_address  : " << _postal_address << std::endl;
		std::cout << "Email_address   : " << _email_address << std::endl;
		std::cout << "Phone_number    : " << _phone_number << std::endl;
		std::cout << "Birthday_date   : " << _birthday_date << std::endl;
		std::cout << "Favorite_meal   : " << _favorite_meal << std::endl;
		std::cout << "Underwear_color : " << _underwear_color << std::endl;
		std::cout << "Darkest_secret  : " << _darkest_secret << std::endl;
	}
	else
	{
		/* Display the fourth informatations */
		std::cout << '|';
		display_short_col(std::to_string(id), 1);
		display_short_col(_first_name, _first_name.length());
		display_short_col(_last_name, _last_name.length());
		display_short_col(_nickname, _nickname.length());
		std::cout << std::endl;
	}
}
