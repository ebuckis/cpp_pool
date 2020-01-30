/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 10:08:37 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 15:28:27 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat *new_bur(std::string const s, unsigned g)
{
	Bureaucrat * bur = NULL;

	try
	{
		bur = new Bureaucrat(s, g);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
		delete bur;
		bur = NULL;		
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
		delete bur;
		bur = NULL;
	}
	return (bur);
}

void try_bur(Bureaucrat *bur)
{
	if (bur)
	{
		try
		{
			bur->decGrade();
			bur->decGrade();
			bur->decGrade();
			bur->decGrade();
			bur->decGrade();
			bur->setGrade(1);
			bur->incGrade();
			bur->incGrade();
			bur->incGrade();
			bur->incGrade();
			bur->incGrade();
			bur->setGrade(15151);
			bur->setGrade(100);
			bur->setGrade(95);
			bur->setGrade(0);
		}
		catch (Bureaucrat::GradeTooHighException &e)
		{
			std::cout << e.what() << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << *bur << std::endl;
	}
}

int main()
{
	Bureaucrat * bur0 = NULL;
	Bureaucrat * bur1 = NULL;
	Bureaucrat * bur2 = NULL;
	Bureaucrat * bur3 = NULL;

	bur0 = new_bur("First", 0);
	bur1 = new_bur("Second", 1);
	bur2 = new_bur("Third", 125);
	bur3 = new_bur("Fourth", 5649);

	try_bur(bur0);
	try_bur(bur1);
	try_bur(bur2);
	try_bur(bur3);

	return 0;
}