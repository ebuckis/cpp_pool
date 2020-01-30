/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   AEnemy.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bnoyer <bnoyer@student.42.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 10:33:59 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/19 23:30:22 by bnoyer      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */


#ifndef AENEMY_HPP_
#define AENEMY_HPP_

#include "ASpaceShip.hpp"
#include "Projectile.hpp"

class AEnemy : public ASpaceShip
{
	public :
		AEnemy(void);
		AEnemy(AEnemy const &);
		AEnemy(char skin, Vector2d pos, Vector2d speed);
		AEnemy & operator=(AEnemy const &);
		~AEnemy(void);

		bool	colision(AEntity & col);
		bool	update_pos(unsigned long);

		bool	colision(ASpaceShip & col);
		bool	colision(Projectile & col);

		void	takeDamage(unsigned int);
		void	die(void);

	protected :
		unsigned _hp;
};


#endif
