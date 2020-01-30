/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Squad.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 16:53:59 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/18 21:37:00 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */


#ifndef SQUAD_HPP_
#define SQUAD_HPP_

#include <iostream>
#include "ISquad.hpp"

typedef struct	s_marineSquad
{
	ISpaceMarine*	marine;
	struct s_marineSquad*	next;
}				t_marineSquad;

class Squad : public ISquad
{
	
	public:
		Squad(void);
		Squad(Squad const & copy);
		Squad & operator=(Squad const & copy);
		~Squad();
		
		int getCount() const;
		ISpaceMarine *getUnit(int) const;
		int push(ISpaceMarine *);

	private :
		int 			_units;
		t_marineSquad *	_team;

};


#endif