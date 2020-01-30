/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Form.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:31:05 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 20:00:20 by kcabus      ###    #+. /#+    ###.fr     */
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
		virtual ~Form(void);
		Form(std::string const , unsigned const, unsigned const);
		Form(Form const &);
		Form & operator=(Form const &);

		std::string	getName(void) const;
		bool		getSigned(void) const;
		unsigned	getGradeToSign(void) const;
		unsigned	getGradeToExe(void) const;

		void	verifyGrade(unsigned);

		bool	beSigned(Bureaucrat const &);
		virtual void	action(void) const = 0;
		virtual void	execute(Bureaucrat const & executor) const;

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
		class NotSignedExecption : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
		

	protected :
		std::string		_target;

	private :
		std::string	const _name;
		bool		_signed;
		unsigned	const _gradeToSign;
		unsigned	const _gradeToExe;
};

std::ostream & operator<<(std::ostream &, const Form &);

#endif