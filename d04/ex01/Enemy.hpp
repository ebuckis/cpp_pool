/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Enemy.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 13:51:33 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 17:27:46 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ENEMY_HPP_
#define ENEMY_HPP_

#include <iostream>

class Enemy
{
	private :
		unsigned int	_hp;
		std::string		_type;

	public :
		Enemy(int hp, std::string const & type);
		std::string getType() const;
		int 		getHP() const;

		Enemy(void);
		Enemy(Enemy const & copy);
		virtual ~Enemy(void);
		Enemy & operator=(Enemy const &copy);

		virtual void takeDamage(int);

};

#endif