/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Brain.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 12:56:32 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/15 08:49:36 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{

}

std::string	Brain::identify(void) const
{
    std::ostringstream ostr;
    ostr << this;

    return(ostr.str());
}