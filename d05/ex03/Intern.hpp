/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Intern.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 21:20:50 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 22:03:33 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef INTERN_HPP_
#define INTERN_HPP_

#include <iostream>
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public :
		Intern(void);
		~Intern(void);
		Intern(Intern const & );
		Form * makeForm(std::string, std::string);
		Intern & operator=(Intern const & );

		class UnknownFormTypeException : public std::exception
		{
			public :
				virtual const char* what() const throw();

		};
	private :
};



#endif