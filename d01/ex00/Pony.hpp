/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Pony.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 08:19:51 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 09:33:46 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PONY_HPP_
#define PONY_HPP_

#include <iostream>

class Pony
{
	public :	
		Pony(std::string name, std::string color, int age);
		~Pony(void);
		void run(void);
		void neigh(void);

	private :
		std::string _name;
		std::string _color;
		int 		_age;
};

#endif
