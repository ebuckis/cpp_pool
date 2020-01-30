/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ShrubberyCreationForm.cpp                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 18:09:02 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 20:30:44 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("Shrubbery", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	ShrubberyCreationForm::action(void) const
{
	std::ofstream	ofs(this->_target + "_shrubbery");
	ofs << "	       _-_	"	<< std::endl;
	ofs << "	    /~~   ~~\\	"	<< std::endl;
	ofs << "	 /~~         ~~\\	"	<< std::endl;
	ofs << "	{               }	"	<< std::endl;
	ofs << "	 \\  _-     -_  /	"	<< std::endl;
	ofs << "	   ~  \\ // ~	"	<< std::endl;
	ofs << "	_- -   | | _- _	"	<< std::endl;
	ofs << "	  _ -  | |   -_	"	<< std::endl;
	ofs << "	      // \\	"	<< std::endl;


}
