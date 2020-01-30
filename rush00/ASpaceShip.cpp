/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ASpaceShip.cpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 10:33:34 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/19 14:23:57 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ASpaceShip.hpp"

ASpaceShip::ASpaceShip(char skin, Vector2d pos, Vector2d speed, unsigned frm) : AEntity(skin, pos, speed, frm)
{
}

ASpaceShip::ASpaceShip(void) : AEntity()
{

}

ASpaceShip::~ASpaceShip()
{
	
}
