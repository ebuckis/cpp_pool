/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ShellUI.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:07:20 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 16:27:39 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SHELLUI
#define SHELLUI

#include <ncurses.h>
#include <vector>

#include "IMonitorModule.hpp"
#include "IMonitorDisplay.hpp"

class ShellUI : public IMonitorDisplay
{
private:
    std::vector<WINDOW *> windows;
    int width;
    int height;

public:
    ShellUI(/* args */);
    ~ShellUI();
    ShellUI & operator=(ShellUI const &);
    ShellUI(ShellUI &);

    void display(std::vector<IMonitorModule *>);
    void refresh(std::vector<IMonitorModule *>);
};


#endif