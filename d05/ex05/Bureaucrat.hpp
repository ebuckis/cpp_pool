/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Bureaucrat.hpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 10:07:45 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 22:54:08 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_

#include <iostream>

class Form;

class Bureaucrat
{
	public:
		~Bureaucrat(void);
		Bureaucrat(std::string const , unsigned);
		Bureaucrat(Bureaucrat const &);

		std::string		getName(void) const;
		unsigned		getGrade(void) const;
		void			setGrade(unsigned);
		void			incGrade(void);
		void			decGrade(void);

		void	signForm(Form &) const;
		void	executeForm(Form const &);

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

	private :
		Bureaucrat & operator=(Bureaucrat const &);
		Bureaucrat(void);
		std::string	const _name;
		unsigned	_grade;

};

std::ostream & operator<<(std::ostream &, const Bureaucrat &);

#endif