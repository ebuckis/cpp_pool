/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Contact.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 11:07:56 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 13:42:18 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef CONTACT_HPP_
#define CONTACT_HPP_
#include <iostream>

class Contact
{

	public :

	void	add(std::string first_name,
						std::string last_name,
						std::string nickname,
						std::string login,
						std::string postal_address,
						std::string email_address,
						std::string phone_number,
						std::string birthday_date,
						std::string favorite_meal,
						std::string underwear_color,
						std::string darkest_secret	);

	void	display(bool all, int id) const;

	private :
	
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _login;
	std::string _postal_address;
	std::string _email_address;
	std::string _phone_number;
	std::string _birthday_date;
	std::string _favorite_meal;
	std::string _underwear_color;
	std::string _darkest_secret;

};

#endif