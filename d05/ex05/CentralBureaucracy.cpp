/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   CentralBureaucracy.cpp                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 09:15:07 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 13:18:09 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"

CentralBureaucracy::CentralBureaucracy(void)
{
	this->_intern = new Intern();
	this->_nOffice = 0;
	this->_nDoss = 0;
	this->head = NULL;
}

CentralBureaucracy::~CentralBureaucracy(void)
{
	for (int i = 0; i < 20; i++)
	{
		if (this->_ourOffice[i])
		{
			delete (this->_ourOffice[i]->getSigner());
			delete (this->_ourOffice[i]);
		}
	}
	this->_nOffice = 0;
	delete this->_intern;
}

CentralBureaucracy::CentralBureaucracy(CentralBureaucracy const &copy)
{
	*this = copy;
}

CentralBureaucracy & CentralBureaucracy::operator=(CentralBureaucracy const &)
{
	return (*this);
}

void	CentralBureaucracy::complete_form(void)
{
	s_list *save = NULL;
	
	if (this->head)
	{
		save = this->head->next;
		delete this->head;
		this->head = save;
		this->_nDoss--;
	}
}

void	CentralBureaucracy::queueUp(std::string & targ)
{
	s_list *curr = this->head;
	s_list *prev = NULL;

	while (curr)
	{
		prev = curr;
		curr = curr->next;
	}
	curr = new s_list;
	curr->target = targ;
	curr->next = NULL;
	if (prev)
		prev->next = curr;
	else
		this->head = curr;

	this->_nDoss++;
}

void	CentralBureaucracy::feed(Bureaucrat &sign, Bureaucrat &exec)
{
	if (this->_nOffice >= 20)
	{
		throw CentralBureaucracy::TooManyBureaucratException();
	}
	else
	{
		this->_ourOffice[this->_nOffice] = new OfficeBlock(*this->_intern, sign, exec);
		this->_nOffice++;
	}
}

void	CentralBureaucracy::run(void)
{
	static const std::string nameForm[3] = {"robotomy request", "shrubbery request", "president request"};

	std::cout << std::endl << "		++++[Central Bureaucracy] IT'S TIME TO WORK++++ " << std::endl;
	std::cout << "			There are " << this->_nDoss << " target in the queue." << std::endl;
	std::cout << "			There are " << this->_nOffice << " seats, occuped." << std::endl << std::endl;

	while (this->head)
	{
		for (unsigned i = 0; i < this->_nOffice; i++)
		{
			try
			{
				this->_ourOffice[i]->doBureaucracy(nameForm[rand() % 3], this->head->target);
			}
			catch(Intern::UnknownFormTypeException & e)
			{
				std::cout << "[Central Bureaucracy] -> " << e.what() << std::endl;
			}
			std::cout << std::endl;
		}
		this->complete_form();
	}
	std::cout << std::endl << "		++++[Central Bureaucracy] IT'S TIME TO SLEEP++++ " << std::endl;
	std::cout << "			There are " << this->_nDoss << " target in the queue." << std::endl;
	std::cout << "			There are " << this->_nOffice << " seats, occuped." << std::endl << std::endl;

}

const char* CentralBureaucracy::TooManyBureaucratException::what() const throw()
{
	return ("No enougth seats for Bureaucrats.");
}


