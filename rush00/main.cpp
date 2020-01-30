/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 10:11:33 by bnoyer       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 16:34:55 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <ncurses.h>
#include <iostream>

#include "AEnemy.hpp"
#include "Player.hpp"
#include "Game.hpp"

#include <time.h>
#include "rush.h"
#include <unistd.h>

#include <string>
#include <sstream>


static long	millisecond_timer(void)
{
	struct timespec		tp;

	clock_gettime(CLOCK_REALTIME, &tp);
	return (long(tp.tv_sec * 1000 + tp.tv_nsec / 1000000) * 1000);
}

int main(void)
{
	initscr();

	if (COL_CUST + 15 > COLS || LINE_CUST + 15 > LINES)
	{
		endwin();
		std::cout << "Terminal trop petit" << std::endl;
		return (0);
	}

	long		frameStart;
	int			frame;


	int			input;
	Game		game = Game();

	frame = 1;
	curs_set(0);
	noecho();
	keypad(stdscr, TRUE);
	nodelay(stdscr, TRUE);
	clear();
	game.display();
	while (true)
	{
		frameStart = millisecond_timer();
		if ((input = getch()) == 27)
			break;
		clear();

		if (input != -1)
		{
			if (!(game.run(input, frame)))
			{
				break;
			}
		}
		if (!game.move_and_colision(frame))
			break;
		game.display();
		refresh();
		while (FDELAY > millisecond_timer() - frameStart)
			;
		frame++;

		if (frame % 64 == 0)
			game.newpop();
			
	}
	endwin();
	return (0);
}
