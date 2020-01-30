/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 10:08:37 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 13:20:34 by kcabus      ###    #+. /#+    ###.fr     */
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
#include "CentralBureaucracy.hpp"
#include <sstream>

int main()
{
	CentralBureaucracy central;
	Bureaucrat *newOne;

	std::string doss = "Dossier n";
	
	for (int i = 0; i < 25; i++)
	{
		newOne = NULL;
		try
		{
			newOne = new Bureaucrat("Teeeeest", rand() % 152);
			central.feed(*newOne, *newOne);
		}
		catch (std::exception &e)
		{
			if (newOne)
				delete newOne;
			std::cout << "[Bureaucrat Creation] " << e.what() << std::endl;
			continue;
		}
	}
	std::cout << "[Central Bureaucracy] -> is Well feeded" << std::endl;

	for (int i = 0; i < 50 ; i++)
	{
		std::string s = "Dossier n" +  std::to_string(i);
		central.queueUp(s);
	}

	central.run();

	return 0;
}