/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Squad.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 16:53:51 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/18 21:42:41 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : _units(0)
{
	this->_team = new marineSquad;
	this->_team->marine = NULL;
	this->_team->next = NULL;
}

Squad::Squad(Squad const & copy)
{
	*this = copy;
}

Squad & Squad::operator=(Squad const & copy)
{
	t_marineSquad	*tmp = NULL;
	t_marineSquad	*current = NULL;
	if (this != &copy)
	{
		if (this->_units > 0)
		{	
			current = this->_team;
			tmp = this->_team->next;
			while (current)
			{
				delete current;
				current = tmp;
				tmp = current->next;
			}
		}
		this->_units = copy._units;
		current = this->_team;
		tmp = copy._team;
		while (tmp)
		{
			current;
			current = tmp;
			tmp = current->next;
		}
		for (int i = 0; i < copy._units; i++)
		{
			this->_spaceMarine[i] = copy._spaceMarine[i]->clone();
		}
	}
	return (*this);
}


Squad::~Squad()
{
	for (int i = 0; i < this->_units; i++)
		delete this->_spaceMarine[i];
	delete [] this->_spaceMarine;
}

int Squad::getCount() const
{
	return this->_units;
}

ISpaceMarine *Squad::getUnit(int n) const
{
	ISpaceMarine *tmp;

	tmp = this->_spaceMarine;
	for (int i = 0; i < this->_units; i++)
		tmp = 
	return this->_spaceMarine[n];
}

int Squad::push(ISpaceMarine *sm)
{
	this->_units++;
	ISpaceMarine **newSquad = new ISpaceMarine*[this->_units];
	for (int i = 0; i < this->_units - 1; i++)
	{
		newSquad[i] = this->_spaceMarine[i]->clone();
	}

	if (this->_units > 1)
	{
		delete [] this->_spaceMarine;
	}

	newSquad[this->_units - 1] = sm;

	return this->_units;
}
