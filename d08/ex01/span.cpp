/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   span.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/23 14:44:48 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/23 16:49:35 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "span.hpp"


Span::Span(unsigned n) : _len(0), _maxLen(n)
{
	
}

Span::~Span(void)
{
}

void		Span::addNumber(int n)
{
	if (this->_len >= this->_maxLen)
		throw Span::TooManyValueException ();



	for (std::vector<int>::iterator it = this->_tab.begin(); it != this->_tab.end(); it++)
	{
		if (*it == n)
			throw Span::DoubleIntException();
		if (this->_len == 1)
			this->_shortest = abs(n - *it);
		else if (this->_shortest > abs(n - *it))
			this->_shortest = abs(n - *it);
	}
	this->_tab.push_back(n);
	this->_len++;
	if (this->_len == 1)
	{
		this->_max = n;
		this->_min = n;
	}
	else
	{
		if (n < this->_min)
			this->_min = n;
		if (n > this->_max)
			this->_max = n;
	}
}

int		Span::shortestSpan(void) const
{
	if (this->_len < 2)
		throw Span::NoEnougthValueException();
	return this->_shortest;
}

int		Span::longestSpan(void) const
{
	if (this->_len < 2)
		throw Span::NoEnougthValueException();
	return this->_max - this->_min;
}


const char* Span::DoubleIntException::what() const throw()
{
	return ("This value is already saved.");
}

const char* Span::TooManyValueException::what() const throw()
{
	return ("the array is full.");
}

const char* Span::NoEnougthValueException::what() const throw()
{
	return ("No enougth value to have a span.");
}