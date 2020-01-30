/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ex04.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 12:45:02 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 12:48:19 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string phrase = "HI THIS IS BRAIN";
	std::string* pointer = &phrase;
	std::string& reference = phrase;

	std::cout << *pointer << std::endl;
	std::cout << reference << std::endl;
}