/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Intern.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 21:24:15 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 08:53:30 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::Intern(Intern const & copy)
{
	(void)copy;
}

Intern::~Intern(void)
{
}

Form * Intern::makeForm(std::string nameForm, std::string target)
{
	static const std::string	robot("robotomy request");
	static const std::string	shrubbery("shrubbery request");
	static const std::string	president("president request");

	Form *newForm = NULL;

	if (robot.compare(nameForm) == 0)
	{
		std::cout << "[Intern] creates Robotomy Request Form" << std::endl;
		newForm = new RobotomyRequestForm(target);	
	}
	else if (shrubbery.compare(nameForm) == 0)
	{
		std::cout << "[Intern] creates Shrubbery Creation Form" << std::endl;
		newForm = new ShrubberyCreationForm(target);
	}
	else if (president.compare(nameForm) == 0)
	{
		std::cout << "[Intern] creates Presidential Pardon Form" << std::endl;
		newForm = new PresidentialPardonForm(target);
	}
	else
	{
		throw Intern::UnknownFormTypeException();
	}
	return newForm;
}

Intern & Intern::operator=(Intern const & copy)
{
	(void)copy;
	return (*this);
}

const char* Intern::UnknownFormTypeException::what() const throw()
{
	return ("[Intern] doesn't know [Form] type");
}