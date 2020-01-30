/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   easyfind.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/23 10:36:33 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/23 14:27:33 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef EASYFIND_HPP_
#define EASYFIND_HPP_

#include <iostream>
#include <vector>
#include <list>

template <typename T>
int		easyfind(T &tab, int val)
{
	int	ind = 0;
	for (typename T::iterator it = tab.begin() ; it != tab.end(); it++)
	{
		if (*it == val)
			return (ind);
		ind++;
	}
	return (-1);
}

#endif