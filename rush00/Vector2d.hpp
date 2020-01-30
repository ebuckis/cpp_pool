/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Vector2d.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 15:55:01 by bnoyer       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/19 15:12:44 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef VECTOR2D_HPP
# define VECTOR2D_HPP

#include <iostream>

class Vector2d
{
	public:
		Vector2d(Vector2d const &rhs);
		Vector2d(bool m, int = 0, int = 0);
		Vector2d(void);
		~Vector2d(void);

		Vector2d	&operator=(Vector2d const &);
		Vector2d	operator+(Vector2d const &);
		Vector2d	operator-(Vector2d const &);

		bool	operator==(Vector2d const &src);

		int			getX(void) const;
		int			getY(void) const;
		bool		getM(void) const;

		void		setX(int);
		void		setY(int);
		void		setM(bool);

	private:
		int		_x;
		int		_y;
		bool	_m; //movement
};

#endif
