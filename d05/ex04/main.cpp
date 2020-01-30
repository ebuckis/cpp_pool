/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 10:08:37 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 08:57:19 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int main()
{
	Intern idiotOne;
	Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
	Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);
	OfficeBlock ob;
	ob.setIntern(idiotOne);
	ob.setSigner(bob);
	ob.setExecutor(hermes);

	try
	{
		ob.doBureaucracy("robotomy request", "Pigley");
		ob.setSigner(hermes);
		ob.setExecutor(hermes);
		ob.doBureaucracy("robotomy request", "Pigley");
		ob.setSigner(bob);
		ob.setExecutor(bob);
		ob.doBureaucracy("robotomy request", "Pigley");
		ob.setSigner(hermes);
		ob.setExecutor(bob);
		ob.doBureaucracy("robotomy request", "Pigley");
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	return 0;
}