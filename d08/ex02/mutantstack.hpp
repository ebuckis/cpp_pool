/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   mutantstack.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/23 17:01:41 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/24 11:58:06 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP_
#define MUTANTSTACK_HPP_

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public :
		MutantStack::iterator & begin();
		MutantStack::iterator & end();

		class iterator : public std::iterator<
							std::input_iterator_tag, // iterator_category
							T,				// value_type
							T,				// difference_type
							T *,			// pointer
							T>				// reference
		{
			public :
				iterator(void);
				~iterator(void);
				iterator(iterator & const copy);
				iterator & operator=(iterator & const copy);

				iterator & operator==();
				iterator & operator!=();
				iterator & operator++();
				iterator & operator--();
				iterator & operator++(int);
				iterator & operator--(int);
				iterator & operator*();

			private :
				long _index;
		}
	private :
};

#endif
