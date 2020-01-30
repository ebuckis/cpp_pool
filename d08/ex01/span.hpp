/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   span.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/23 14:32:51 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/23 16:27:13 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SPAN_HPP_
#define SPAN_HPP_

#include <iostream>
#include <vector>

class Span
{
	public :
		Span(unsigned n);
		~Span(void);
		void	addNumber(int n);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;

		class DoubleIntException : public std::exception
		{
			public : 
				virtual const char* what() const throw();
		};
		class TooManyValueException : public std::exception
		{
			public : 
				virtual const char* what() const throw();
		};
		class NoEnougthValueException : public std::exception
		{
			public : 
				virtual const char* what() const throw();
		};
	private :
		std::vector<int>	_tab;
		unsigned	_len;
		unsigned	_maxLen;
		int			_max;
		int			_min;
		int			_shortest;
		
		
		Span(Span const & copy);
		Span(void);
		Span & operator=(Span const & copy);


};

#endif
