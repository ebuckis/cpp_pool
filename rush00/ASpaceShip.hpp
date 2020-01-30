/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ASpaceShip.hpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bnoyer <bnoyer@student.42.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 10:34:02 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/19 23:29:54 by bnoyer      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ASPACESHIP_HPP_
#define ASPACESHIP_HPP_

#include "AEntity.hpp"

class ASpaceShip : public AEntity
{
	public :
		ASpaceShip(ASpaceShip const &);
		ASpaceShip(char skin, Vector2d pos, Vector2d speed, unsigned frm);
		ASpaceShip & operator=(ASpaceShip const &);
		virtual ~ASpaceShip(void);
		
		virtual bool	colision(AEntity & col) = 0;

		virtual void	takeDamage(unsigned int) = 0;
		virtual void	die(void) = 0;
	protected :
		ASpaceShip(void);
		//weapon 

	private : 

};

#endif
