/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 10:08:37 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 20:57:04 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main()
{
	int i = 5;
	Bureaucrat n("Nessim", 150);
	Bureaucrat r("Baptiste", 15);
	Form f("f1", 10, 15);
	Form f2("f2", 150, 15);

	std::cout << n << std::endl;
	std::cout << r << std::endl;
	std::cout << f << std::endl;
	std::cout << f2 << std::endl;

	n.signForm(f);
	std::cout << f << std::endl;
	r.signForm(f);
	while (i--)
		r.incGrade();
	std::cout << r << std::endl;
	r.signForm(f);
	std::cout << f << std::endl;
	n.signForm(f2);
	std::cout << f2 << std::endl;
	
	Form f3("f3", 1, 1);
	std::cout << "test------------" << std::endl;
	try
	{
		Form f4("f4", 0, 1);
		Form f5("f5", 1, 0);
		Form f6("f6", 0, 0);
		Form f7("f7", 150, 150);
		Form f8("f8", 151, 150);
		Form f9("f9", 150, 151);
		Form f10("f10", 151, 151);
		Form f11("f10", 0, 151);
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout <<"Error:\n\t" << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout <<"Error:\n\t" << e.what() << std::endl;
	}
	return 0;
}