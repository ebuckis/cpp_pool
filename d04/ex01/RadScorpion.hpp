/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   RadScorpion.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 13:51:36 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 15:21:57 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP_
#define RADSCORPION_HPP_

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public :
		RadScorpion(void);
		RadScorpion(RadScorpion const &);
		~RadScorpion(void);

		RadScorpion & operator=(RadScorpion const &);

	private :
};

#endif