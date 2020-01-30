/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 10:08:37 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 22:07:32 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main()
{
	Intern intern;
	Form *f0;
	Form *f1;
	Form *f2;
	Form *f3;

	f0 = intern.makeForm("robotomy request", "one");
	f1 = intern.makeForm("shrubbery request", "two");
	f2 = intern.makeForm("president request", "three");
	try
	{
		f3 = intern.makeForm("super truc", "four");
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		f3 = NULL;
	}


	if (f0)
		delete f0;
	if (f1)
		delete f1;
	if (f2)
		delete f2;
	if (f3)
		delete f3;

	return 0;
}