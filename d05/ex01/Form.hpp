/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Form.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:31:05 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 19:06:33 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FORM_HPP_
#define FORM_HPP_

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	public :
		~Form(void);
		Form(std::string const , unsigned const, unsigned const);
		Form(Form const &);
		Form & operator=(Form const &);

		std::string	getName(void) const;
		bool		getSigned(void) const;
		unsigned	getGradeToSign(void) const;
		unsigned	getGradeToExe(void) const;

		void	verifyGrade(unsigned);

		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
		
		bool	beSigned(Bureaucrat &);

	private :
		std::string	const _name;
		bool		_signed;
		unsigned	const _gradeToSign;
		unsigned	const _gradeToExe;
};

std::ostream & operator<<(std::ostream &, const Form &);

#endif