/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   AWeapon.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bnoyer <bnoyer@student.42.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 10:35:26 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/19 19:03:10 by bnoyer      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef AWEAPON_HPP_
#define AWEAPON_HPP_

#include <iostream>
#include "Projectile.hpp"

class AWeapon
{
	public :
		AWeapon(void);
		AWeapon(AWeapon const &);
		AWeapon & operator=(AWeapon const &);
		virtual ~AWeapon(void);

		AWeapon(Projectile * proj);
		void	shot(Vector2d org) const;

		void	setProjectilDir(Vector2d);

	protected :
		Projectile	*_proj;
		Vector2d	_projDir;
		//countdown ?

	private :
};

#endif
