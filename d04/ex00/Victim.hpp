/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Victim.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 10:44:12 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 14:33:17 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef	VICTIM_HPP_
#define	VICTIM_HPP_

#include <iostream>

class Victim
{
	public :
		Victim(Victim const &);
		virtual ~Victim(void);
		Victim & operator=(Victim const &);

		Victim(std::string name);

		std::string	getName(void) const;

		virtual void	getPolymorphed(void) const;

	protected :
		std::string _name;

	private :
		Victim(void);
};

std::ostream & operator<<(std::ostream &, const Victim &);

#endif
