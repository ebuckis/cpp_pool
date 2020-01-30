/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Zombie.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 09:46:49 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 11:43:45 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP_
#define ZOMBIE_HPP_
#include <iostream>

class Zombie
{
	public:
		Zombie(std::string name,std::string type);
		~Zombie(void);
		void	announce(void);

	private :
		std::string _name;
		std::string _type;
};

#endif