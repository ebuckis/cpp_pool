/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   RobotomyRequestForm.cpp                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 20:01:39 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 08:54:44 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : Form("Robot", 72, 45)
{
	this->_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::action(void) const
{
	if (RobotomyRequestForm::half)
	{
		std::cout << "[RobotomyRequestForm] \a Driiiing !!! " << this->_target << "has been robotomized successfully." << std::endl;
	}
	else
	{
		std::cout << "[RobotomyRequestForm] It’s a failure." << std::endl;
	}
	RobotomyRequestForm::half = !RobotomyRequestForm::half;
}

bool RobotomyRequestForm::half = true;