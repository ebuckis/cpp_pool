/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Bureaucrat.hpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 10:07:45 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/20 17:38:46 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_

#include <iostream>
//#include <stdexcept>

class Bureaucrat
{
	public:
		~Bureaucrat(void);
		Bureaucrat(std::string const , unsigned);

		std::string		getName(void) const;
		unsigned		getGrade(void) const;
		void			setGrade(unsigned);
		void			incGrade(void);
		void			decGrade(void);

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
		Bureaucrat(Bureaucrat const &);
		Bureaucrat & operator=(Bureaucrat const &);
		Bureaucrat(void);
		std::string	const _name;
		unsigned	_grade;

};

std::ostream & operator<<(std::ostream &, const Bureaucrat &);

#endif