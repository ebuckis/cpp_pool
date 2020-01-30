/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 08:19:46 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 09:42:21 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Pony.hpp"

Pony	*ponyOnTheHeap(std::string name, std::string color, int age)
{
	return (new Pony(name, color, age));
}

Pony	ponyOnTheStack(std::string name, std::string color, int age)
{
	return (Pony(name, color, age));
}

int main()
{
	Pony	*pony1 = ponyOnTheHeap("Barbouille", "Black", 18);
	Pony	pony2 = ponyOnTheStack("Barbibul", "Blue", 15);

	pony1->neigh();
	pony2.run();
	delete pony1;
	return (0);
}