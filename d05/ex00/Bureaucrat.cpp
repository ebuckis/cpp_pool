/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Bureaucrat.cpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 10:09:07 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 15:09:50 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* Canonical form */

Bureaucrat::Bureaucrat(std::string const name, unsigned grade) : _name(name)
{
	this->setGrade(grade);
}

Bureaucrat::~Bureaucrat(void)
{
}

/* Setters/Getters */

std::string		Bureaucrat::getName(void) const
{
	return this->_name;
}

unsigned		Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void			Bureaucrat::setGrade(unsigned val)
{
	if (val < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (val > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = val;
}

void			Bureaucrat::incGrade(void)
{
	this->setGrade(this->_grade - 1);
}

void			Bureaucrat::decGrade(void)
{
	this->setGrade(this->_grade + 1);
}

/* Overwrite */

std::ostream & operator<<(std::ostream& os, const Bureaucrat &bur)
{
	os << bur.getName() << ", bureacrat grade " << bur.getGrade();
	return os;
}

/* GradeTooHighException */

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too Low");
}