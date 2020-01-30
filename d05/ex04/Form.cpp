/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Form.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 16:24:30 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 09:10:09 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Form.hpp"


Form::~Form(void)
{
}

Form::Form(std::string const name, unsigned const gradeSign, unsigned const gradeExe) : _name(name), _signed(false), _gradeToSign(gradeSign), _gradeToExe(gradeExe)
{
	this->verifyGrade(gradeSign);
	this->verifyGrade(gradeExe);
}

void	Form::verifyGrade(unsigned val)
{
	if (val < 1)
		throw Form::GradeTooHighException();
	else if (val > 150)
		throw Form::GradeTooLowException();
}

std::string	Form::getName(void) const
{
	return this->_name; 
}

bool		Form::getSigned(void) const
{
	return this->_signed; 
}

unsigned	Form::getGradeToSign(void) const
{
	return this->_gradeToSign; 
}

unsigned	Form::getGradeToExe(void) const
{
	return this->_gradeToExe; 
}


std::ostream & operator<<(std::ostream &os, const Form & form)
{
	os << "[Form] : " << form.getName() << ", sign requirement : [" << form.getGradeToSign() <<  "], exec requirement : [" << form.getGradeToExe() << "]";
	if (form.getSigned())
		os << " and is signed.";
	else
		os << " and isn't signed.";

	return os;
}

bool	Form::beSigned(Bureaucrat const & bur)
{
	if (bur.getGrade() > this->_gradeToSign )
	{
		throw Form::GradeTooLowException();
	}
	this->_signed = true;
	return true;
}

void	Form::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned())
	{
		throw Form::NotSignedExecption();
	}
	if (executor.getGrade() > this->getGradeToExe())
	{
		throw Form::GradeTooLowException();
	}
}


const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too High, Any Bureaucrat can do it.");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too Low");
}

const char* Form::NotSignedExecption::what() const throw()
{
	return ("The Form is not signed");
}
