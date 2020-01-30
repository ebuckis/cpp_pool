/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 10:08:37 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 21:03:17 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
	RobotomyRequestForm r("r2d2");
	ShrubberyCreationForm s("villa");
	PresidentialPardonForm p("macron"); 
	Bureaucrat b("Michel", 1);

	std::cout << r << std::endl;
	b.executeForm(r);
	b.signForm(r);
	b.executeForm(r);
	b.executeForm(r);
	std::cout << r << std::endl;
	std::cout << std::endl;

	std::cout << s << std::endl;
	b.executeForm(s);
	b.signForm(s);
	b.executeForm(s);
	b.executeForm(s);
	std::cout << s << std::endl;
	std::cout << std::endl;
	
	std::cout << p << std::endl;
	b.executeForm(p);
	b.signForm(p);
	b.executeForm(p);
	b.executeForm(p);
	std::cout << p << std::endl;
	std::cout << std::endl;


	return 0;
}