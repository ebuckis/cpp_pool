/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Monitor.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 15:26:28 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 16:59:58 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef MONITOR
#define MONITOR

#include <vector>
#include <unistd.h>

#include "IMonitorModule.hpp"
#include "IMonitorDisplay.hpp"
#include "ShellUI.hpp"
#include "GraphicUI.hpp"
#include "CpuModule.hpp"
#include "DateModule.hpp"
#include "HostModule.hpp"
#include "OSModule.hpp"
#include "RamModule.hpp"

enum    eDisplayType
{
    eShell,
    eGraphical
};

// Monitor handles the modules using dislpayMode
class Monitor
{
private:
    std::vector<IMonitorModule *> modules; // seeHostModule
    IMonitorDisplay * displayMode; // see ShellUI and GraphicUI
    Monitor();

    public:
    Monitor(int choice);
    ~Monitor();
    Monitor & operator=(Monitor const &);
    Monitor(Monitor &);

    void display();
    void refresh();
};


#endif