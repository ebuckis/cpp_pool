/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Game.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/19 10:36:36 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 16:32:48 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Game.hpp"
#include "rush.h"

#include <ncurses.h>

/*
** Canonical form
*/

Game::Game(void) : _player('A', (LINE_CUST - 1), (COL_CUST - 1) / 2)
{
	// Game::_pop = this->new_entity(player);
	for (int i = 0; i < 10; i++)
		new AEnemy('x', Vector2d(false, i * 3, 0), Vector2d(true, 0, 1));

	// std::cout << "construct" << std::endl;
}

Game::Game(Game const &copy)
{
	*this = copy;
}

Game::~Game(void)
{
	s_population *tmp;
	s_population *current = Game::getPop();
	
	while (current)
	{
		tmp = current->next;
		if (current->entity != &this->_player)
			delete current->entity;
		delete current;
		current = tmp;
	}
}

Game & Game::operator=(Game const &)
{
	return (*this);
}

/*
** Member functions
*/

void			Game::setPop(s_population *neo)
{
	Game::_pop = neo;
}

s_population	*Game::getPop()
{
	return(Game::_pop);
}

s_population *	Game::new_entity(AEntity *theNew)
{
	s_population *curr = Game::getPop();
	s_population *prev = NULL;

	while (curr)
	{
		prev = curr;
		curr = curr->next;
	}
	curr = new s_population;
	curr->entity = theNew;
	curr->next = NULL;
	if (prev)
		prev->next = curr;
	else
		Game::setPop(curr);
	return Game::_pop;
}

void	Game::newpop(void)
{
	for (int i = 0; i < 10; i++)
		new AEnemy('x', Vector2d(false, i * 3, 0), Vector2d(true, 0, 1));

}


void	Game::delete_entity(AEntity *elem)
{
	s_population	*current = Game::getPop();
	s_population	*tmp = current;

	if (!current || !elem)
		return ;

	while (current && current->entity != elem)
	{
		tmp = current;
		current = current->next;
	}
	tmp->next = current->next;
	delete current->entity;
	delete current;
}

void	Game::manage_colision(AEntity *ent)
{
	s_population *current= this->_pop;
	Vector2d	my_pos = ent->getPos();

	while (current != NULL)
	{
		if (ent != current->entity && my_pos == current->entity->getPos())
		{
			if (ent->colision(*current->entity))
			{
				this->_player.takeDamage(1);
				ent->die();
			}
			if (current->entity->isAlive() && current != this->_pop)
			{
				this->delete_entity(current->entity);
			}
			else if (!ent->isAlive() && current != this->_pop)
			{
				this->_player.takeDamage(1);
				mvaddstr(0,0,"Took damage");
				nodelay(stdscr, FALSE);
				getch();
				nodelay(stdscr, TRUE);
	}
		}
		current = current->next;
	}
	if (!ent->isAlive() && current != this->_pop)
	{
		this->delete_entity(ent);
	}
	else if (!ent->isAlive() && current != this->_pop)
	{
		this->_player.takeDamage(1);
		mvaddstr(0,0,"Took damage");
		nodelay(stdscr, FALSE);
		getch();
		nodelay(stdscr, TRUE);
	}
}

bool	Game::move_and_colision(int nFrame)
{
	s_population *current = this->_pop;

	if (current->entity->update_pos(nFrame))
	{
		this->manage_colision(current->entity);
	}
	if (!this->_player.isAlive())
		return (false);

	current = this->_pop->next->next;
	while (current != NULL)
	{
		if (current->entity->update_pos(nFrame))
		{
			this->manage_colision(current->entity);
		}
		if (!this->_player.isAlive())
			return (false);
	
		current = current->next;
	}
	return (true);
}

void	Game::display(void)
{
	s_population *current= Game::getPop()->next->next;

	this->_player.display();

	while (current != NULL)
	{
		current->entity->display();
		current = current->next;
	}
	std::string s = SSTR( "Score : " << Game::score );
	mvaddstr( 0, LINES - 15, s.c_str());
	std::string s2 = SSTR( "Vie(s) : " << this->_player.getNbLife() );
	mvaddstr( 1, LINES - 15, s2.c_str());

}

bool	Game::run(int input, int frame)
{

	if (input == ' ')
		this->_player.shot();
	else
	{
		if (input == KEY_LEFT)
			this->_player.getPos().setX(this->_player.getPos().getX() - this->_player.getSpeed().getX());
		else if (input == KEY_RIGHT)
			this->_player.getPos().setX(this->_player.getPos().getX() + this->_player.getSpeed().getX());
		if (input == KEY_UP)
			this->_player.getPos().setY(this->_player.getPos().getY() - this->_player.getSpeed().getY());
		else if (input == KEY_DOWN)
			this->_player.getPos().setY(this->_player.getPos().getY() + this->_player.getSpeed().getY());
		
		if (this->_player.getPos().getX() < 0)
			this->_player.getPos().setX(0);
		else if (COL_CUST - 1 < this->_player.getPos().getX())
			this->_player.getPos().setX(COL_CUST - 1);
		
		if (this->_player.getPos().getY() < 0)
			this->_player.getPos().setY(0);
		else if (LINE_CUST - 1 < this->_player.getPos().getY())
			this->_player.getPos().setY(LINE_CUST - 1);
	}
	// (void)frame;
	this->move_and_colision(frame);
	return (this->_player.isAlive());
}

unsigned Game::score = 0;
s_population *Game::_pop = NULL;
