/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   CentralBureaucracy.hpp                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 09:14:07 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 12:45:36 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef CENTRALBUREAUCRACY_HPP_
#define CENTRALBUREAUCRACY_HPP_

#include "Bureaucrat.hpp"
#include "OfficeBlock.hpp"

struct s_list
{
	std::string target;
	s_list *next;
};


class CentralBureaucracy
{
	public :
		CentralBureaucracy(void);
		~CentralBureaucracy(void);
		CentralBureaucracy(CentralBureaucracy const &);
		CentralBureaucracy & operator=(CentralBureaucracy const &);
		
		void	queueUp(std::string &);
		void	complete_form(void);
		void	feed(Bureaucrat &, Bureaucrat &);
		void	run(void);

		class TooManyBureaucratException : public std::exception
		{
			public :
				virtual const char* what() const throw();

		};

	private :
		Intern		*_intern;
		OfficeBlock	*_ourOffice[20];
		unsigned	_nOffice;
		s_list		*head;
		unsigned	_nDoss;


};

#endif
