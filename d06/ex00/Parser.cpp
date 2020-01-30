/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Parser.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 15:11:40 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 15:44:26 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Parser.hpp"

Parser::Parser(char *str)
{
	this->_val = str;
}


void	Parser::charCast()
{
	//char	c = static_cast<char>();
}

void	Parser::intCast()
{
	if (isdigit(this->_val))
	{
		 = atoi (str);
	}
}

void	Parser::floatCast()
{
	
}

void	Parser::doubleCast()
{
}
