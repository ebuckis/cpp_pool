/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ShellUI.cpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 20:12:29 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 16:53:48 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ShellUI.hpp"

ShellUI::ShellUI(/* args */)
{
	initscr();
	nodelay(stdscr, true);
	noecho();

	this->height = 1;
	this->width = COLS;
	this->windows.push_back(subwin(stdscr, height + 2, width, 0, 0));
	this->windows.push_back(subwin(stdscr, height + 2, width, 3, 0));
	this->windows.push_back(subwin(stdscr, height + 2, width, 6, 0));
	this->windows.push_back(subwin(stdscr, height + 2, width, 9, 0));
	this->windows.push_back(subwin(stdscr, height + 2, width, 12, 0));
	keypad(stdscr, TRUE);
	nodelay(stdscr, TRUE);
}

ShellUI::~ShellUI()
{
	for (std::vector<WINDOW *>::iterator it = windows.begin(); it != windows.end(); it++)
	{
		delwin(*it);
	}
	endwin();
}

ShellUI &ShellUI::operator=(ShellUI const &s)
{
	(void)s;
	return *this;
}

ShellUI::ShellUI(ShellUI &s)
{
	*this = s;
}

void ShellUI::display(std::vector<IMonitorModule *> modules)
{
	try
	{
		clear();

		std::vector<IMonitorModule *>::iterator module = modules.begin();

		for (std::vector<WINDOW *>::iterator it = windows.begin(); it != windows.end() && module != modules.end(); it++, module++)
		{
			mvwprintw(*it, 1, 1, (*module)->getData().c_str());
			box(*it, ACS_VLINE, ACS_HLINE);
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}

void ShellUI::refresh(std::vector<IMonitorModule *> modules)
{
	try
	{
		std::vector<IMonitorModule *>::iterator module = modules.begin();

		for (std::vector<WINDOW *>::iterator it = windows.begin(); it != windows.end(); it++, module++)
		{
			(*module)->updateData();
			wnoutrefresh(*it);
		}
		doupdate(); // equivalent refresh()
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	if (getch() == 27)
		exit(1);
}
