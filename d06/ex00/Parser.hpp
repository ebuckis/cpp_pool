/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Parser.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 14:56:54 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 15:32:52 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PARSER_HPP_
#define PARSER_HPP_

#include <iostream>

class	Parser
{
	public :
		Parser(char *);
		void	charCast();
		void	intCast();
		void	floatCast();
		void	doubleCast();
		
	private :
	char* _val;
	
};

#endif