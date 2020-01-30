/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Game.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/19 10:27:40 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 16:33:01 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GAME_HPP_
#define GAME_HPP_

#include "AEnemy.hpp"
#include "Player.hpp"

#include <sstream>

#define SSTR( x ) static_cast< std::ostringstream & >( \
        ( std::ostringstream() << std::dec << x ) ).str()

struct	s_population
{
	AEntity			*entity;
	s_population	*next;
};


class Game
{
	public :
		Game(void);
		Game(Game const &);
		~Game(void);
		Game & operator=(Game const &);

		static s_population	*new_entity(AEntity *);
		static void			delete_entity(AEntity *);

		bool	move_and_colision(int nFrame);
		void	display(void);

		static s_population	*getPop(void);
		static void			setPop(s_population *);

		bool				run(int key, int frame);
		static unsigned		score;
		static Player		getPlayer(void);

		void	newpop(void);

	private :
		Player _player;
		void	manage_colision(AEntity *ent);
		static s_population *_pop;
};

#endif
