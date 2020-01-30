/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   OfficeBlock.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 22:08:26 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 12:56:54 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_HPP_
#define OFFICEBLOCK_HPP_

#include <iostream>
#include "Intern.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class OfficeBlock
{
	public :
		OfficeBlock(void);
		OfficeBlock(Intern &, Bureaucrat &, Bureaucrat &);
		~OfficeBlock(void);
	
		void	doBureaucracy(std::string, std::string);
		
		void	setIntern(Intern &);
		void	setSigner(Bureaucrat &);
		void	setExecutor(Bureaucrat &);
		Bureaucrat	*getSigner(void) const;

		void	verif_team(void) const;

		class noInternException : public std::exception
		{
			public :
				virtual const char* what() const throw();

		};
		class noSignerException : public std::exception
		{
			public :
				virtual const char* what() const throw();

		};
		class noExecutorException : public std::exception
		{
			public :
				virtual const char* what() const throw();

		};

	private :
		OfficeBlock(OfficeBlock const &);
		OfficeBlock & operator=(OfficeBlock const &);

		Intern *		_intern;
		Bureaucrat *	_signer;
		Bureaucrat *	_executor;
};

#endif