/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Monitor.cpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:04:29 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 21:40:47 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Monitor.hpp"

Monitor::Monitor(int choice)
{
    this->modules.push_back(new HostModule());
    this->modules.push_back(new DateModule());
    this->modules.push_back(new CpuModule());
    this->modules.push_back(new RamModule());
    this->modules.push_back(new OSModule());
    if (choice == eShell)
        this->displayMode = new ShellUI();
    else
        this->displayMode = new WxmacDisplay();
}

Monitor::~Monitor()
{
}

Monitor::Monitor(Monitor &m)
{
    *this = m;
}

Monitor &Monitor::operator=(Monitor const &m)
{
    (void)m;
    return *this;
}

void Monitor::display()
{
    try
    {
        displayMode->display(this->modules);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

void Monitor::refresh()
{
    try
    {
        displayMode->refresh(modules);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}
