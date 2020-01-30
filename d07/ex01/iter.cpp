/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   iter.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/22 09:10:15 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/23 09:22:56 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	the_function(T & val)
{
	std::cout << val << std::endl;
}

template <typename T, typename U, typename V>
void	iter(T * a, U b, V(*c)(T &))
{
	if (a)
	{
		for (U i = 0; i < b; i++)
		{ 
			(*c)(a[i]);
		}
	}
}


int		main()
{
	void (*p)(int &) = &the_function;
	
	int * tabInt = new int [50];
	tabInt[9] = 1;
	tabInt[19] = 1;
	tabInt[29] = 1;
	tabInt[39] = 1;
	tabInt[49] = 1;

	iter<int, unsigned, void >(tabInt, 50, p);

	std::string * tab = new std::string [10];

		tab[0] = "zero";
		tab[1] = "un";
		tab[2] = "deux";
		tab[3] = "trois";
		tab[4] = "quatre";
		tab[5] = "cinq";
		tab[6] = "six";
		tab[7] = "sept";
		tab[8] = "huit";
		tab[9] = "neuf";

	void (*t)(std::string &) = &the_function;
	iter<std::string, unsigned, void >(tab, 10, t);

}
