/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   GraphicUI.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fablin <fablin@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/20 20:12:02 by fablin       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/25 22:15:34 by fablin      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "GraphicUI.hpp"

GraphicUI::GraphicUI(/* args */)
{
}

GraphicUI::~GraphicUI()
{
}

GraphicUI &GraphicUI::operator=(GraphicUI const &g)
{
    (void)g;
    return *this;
}

GraphicUI::GraphicUI(GraphicUI &g)
{
    *this = g;
}

bool GraphicUI::OnInit()
{
    this->frame = new Frame("Rush00", wxPoint(50, 50), wxSize(900, 600));
    frame->Show(true);
    return true;
}