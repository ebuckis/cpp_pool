/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Rifle.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 16:01:09 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/18 16:59:24 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef RIFLE_HPP_
#define RIFLE_HPP_

#include "AWeapon.hpp"

class Rifle : public AWeapon
{
	public :
		Rifle(Rifle const &);
		Rifle & operator=(Rifle const &);
		~Rifle(void);

		Rifle(Projectile * proj);

	protected :

	private :
		Rifle(void);
};

#endif