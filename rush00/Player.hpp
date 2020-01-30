/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Player.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bnoyer <bnoyer@student.42.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 10:33:55 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/19 23:30:33 by bnoyer      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PLAYER_HPP_
#define PLAYER_HPP_

#include "ASpaceShip.hpp"
#include "AWeapon.hpp"
#include "AEnemy.hpp"

class Player : public ASpaceShip
{
	public :
	Player(void);
	Player(Player const &);
	Player(char skin, int y, int x);
	Player & operator=(Player const &);

	~Player(void);

	bool	colision(AEntity & col);
	bool	update_pos(unsigned long frm);

	void	takeDamage(unsigned int);
	void	die(void);
	void 	shot(void);

	unsigned getNbLife();

	void		setNbLife(unsigned const nb);
	void		setWeapon(AWeapon *wp);
	unsigned	getNbLife(void) const;
	AWeapon		*getWeapon(void) const;

	bool	colision(AEnemy & col);
	bool	colision(Projectile & col);

private:
	unsigned _nbLife;
	AWeapon *_weapon;
};

#endif
