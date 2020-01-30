/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   PlasmaRifle.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 13:51:34 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 14:51:02 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PLASMRIFLE_HPP_
#define PLASMRIFLE_HPP_

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public :
		PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const &);
		~PlasmaRifle(void);

		void attack() const;

	private :

};

#endif