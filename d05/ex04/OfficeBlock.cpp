/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   OfficeBlock.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 22:14:12 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 22:48:38 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock(Intern &i, Bureaucrat &s, Bureaucrat &e)
{
	this->_intern = &i;
	this->_signer = &s;
	this->_executor = &e;
}

OfficeBlock::OfficeBlock(void)
{
}

OfficeBlock::~OfficeBlock(void)
{
}

void	OfficeBlock::setExecutor(Bureaucrat &b)
{
	this->_executor = &b;
}

void	OfficeBlock::setSigner(Bureaucrat &b)
{
	this->_signer = &b;
}

void	OfficeBlock::setIntern(Intern &i)
{
	this->_intern = &i;
}

void	OfficeBlock::verif_team(void) const
{
	if (!this->_intern)
		throw OfficeBlock::noInternException();
	if (!this->_signer)
		throw OfficeBlock::noSignerException();
	if (!this->_executor)
		throw OfficeBlock::noExecutorException();
}

void	OfficeBlock::doBureaucracy(std::string name, std::string target)
{
	Form *newForm = NULL;

	this->verif_team();
	
	try
	{
		newForm = this->_intern->makeForm(name, target);
	}
	catch(Intern::UnknownFormTypeException & e)
	{
		std::cout << e.what() << std::endl;
		return ;
	}
	std::cout << *newForm << std::endl;
	this->_signer->signForm(*newForm);
	this->_executor->executeForm(*newForm);
	delete newForm;
}


const char* 	OfficeBlock::noInternException::what() const throw()
{
	return ("No Intern in the team.");
}

const char* 	OfficeBlock::noSignerException::what() const throw()
{
	return ("No Signer in the team.");
}

const char* 	OfficeBlock::noExecutorException::what() const throw()
{
	return ("No Executor in the team.");
}
