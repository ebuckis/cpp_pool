/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   AEntity.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bnoyer <bnoyer@student.42.fr>              +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 10:33:57 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/19 23:29:42 by bnoyer      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef AEntity_HPP_
#define AEntity_HPP_

#include <iostream>

#include "Vector2d.hpp"

class AEntity
{
	public :
		AEntity(char skin, Vector2d pos, Vector2d speed, unsigned frm);
		AEntity(AEntity const &);
		AEntity & operator=(AEntity const &);
		virtual ~AEntity(void);

		virtual bool	colision(AEntity & col) = 0;
		virtual bool	update_pos(unsigned long) = 0;

		Vector2d			&getPos();
		Vector2d			&getSpeed();
		virtual char		getSkin() const;

		void				setNFrame(unsigned);
		void				setPos(Vector2d newPos);
		void				setSpeed(Vector2d newSpeed);
		void				setPos(int x, int y);
		void				setSpeed(int x, int y);

		bool				isAlive();
		void				virtual die();

		void				display(void);

	protected :
		AEntity(void);

		char		_skin;
		Vector2d 	_pos;
		Vector2d 	_speed;
		unsigned	_nFrame;
		bool		_alive;

	private : 

};

#endif
