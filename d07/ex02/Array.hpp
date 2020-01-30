/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Array.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/22 10:13:00 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/23 1:46:06 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef	ARRAY_HPP_
#define	ARRAY_HPP_

#include <iostream>

template<typename T>
class Array
{
	public :
		class OutOfMemoryException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("You try to access outside of Array.");
				}
			
		};

		Array<T>(void)
		{
			this->_size = 0;
			this->_arr = NULL;
		}
		
		Array<T>(unsigned int n)
		{
			this->_size = n;
			this->_arr = new T [n]();
		}

		Array<T>(Array const &copy) : _arr(NULL)
		{
			*this = copy;
		}

		Array &	operator=(Array const & copy)
		{
			if (this != &copy)
			{
				if (this->_arr)
					delete [] this->_arr;

				this->_size = copy._size;
				if (copy._size == 0)
					this->_arr = NULL;
				else
					this->_arr = new T [this->_size];
				for ( unsigned i = 0; i < copy._size; i++)
				{
					this->_arr[i] = copy._arr[i];
				}
			}
			return (*this);
		}

		~Array(void)
		{
			if (this->_size)
				delete [] this->_arr;
		}
		
		T &	operator[](unsigned i)
		{
			if (i < this->_size)
				return this->_arr[i];
			else
				throw Array::OutOfMemoryException();
		}

		unsigned	size(void) const
		{
			return this->_size;
		}

	private :
		T	*_arr;
		unsigned	_size;
};


#endif