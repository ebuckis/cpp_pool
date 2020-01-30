/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   SuperMutant.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 13:51:36 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 17:28:01 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP_
#define SUPERMUTANT_HPP_

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public :
		SuperMutant(void);
		SuperMutant(SuperMutant const &);
		~SuperMutant(void);

		SuperMutant & operator=(SuperMutant const &);
		void takeDamage(int);

	private :
};

#endif