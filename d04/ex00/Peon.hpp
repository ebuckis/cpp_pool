/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Peon.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 10:44:17 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 13:27:35 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef	PEON_HPP_
#define	PEON_HPP_

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
	public :
		~Peon(void);

		Peon(std::string name);

		virtual void	getPolymorphed(void) const;

	private :
		Peon(void);
};


#endif
