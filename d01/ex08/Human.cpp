/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Human.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 19:00:45 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 19:47:16 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Human.hpp"
#include <map>

void Human::meleeAttack(std::string const &target)
{
	std::cout << target << " gets hit with an ax." << std::endl;
}

void Human::rangedAttack(std::string const &target)
{
	std::cout << target << " gets hit with an ax." << std::endl;
}

void Human::intimidatingShout(std::string const &target)
{
	std::cout << target << " gets hit with an ax." << std::endl;
}

void Human::action(std::string const &action_name, std::string const &target)
{
	void *ptr = this->intimidatingShout;
}
