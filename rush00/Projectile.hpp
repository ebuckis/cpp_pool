/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Projectile.hpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bnoyer <bnoyer@student.42.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 10:33:52 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/19 23:30:11 by bnoyer      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PROJECTILE_HPP_
#define PROJECTILE_HPP_

#include "AEntity.hpp"
#include "ASpaceShip.hpp"

class Projectile : public AEntity
{
	public :
		Projectile(void);
		Projectile(Projectile const &);
		Projectile(Projectile const &, Vector2d org);
		Projectile & operator=(Projectile const &);
		~Projectile(void);

		Projectile(char skin, Vector2d pos, Vector2d speed, unsigned dmg, unsigned frm);
		bool	colision(AEntity & col);
		bool	update_pos(unsigned long frm);

		bool	colision(ASpaceShip & col);
		bool	colision(Projectile & col);
		unsigned	getDmg() const;
		void		setDmg(unsigned);
		
	protected :
		unsigned	_dmg;
		//countdown ?
	private :

};

#endif
