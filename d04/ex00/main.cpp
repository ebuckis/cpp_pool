/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 10:44:10 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 14:34:01 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

class Michel : public Victim
{
	public :
		~Michel(void)
		{
			std::cout << "oink oink..." << std::endl;
		}

		Michel(std::string name) : Victim(name)
		{
			std::cout << "Coin Coin."  << std::endl;
		}

		virtual void	getPolymorphed(void) const
		{
			std::cout << this->_name << " has been turned into a duck !" << std::endl;		
		}

	private :
		Michel(void);
};


int main()
{
	Victim *v = new Peon("ness");

	delete v;
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Michel michel("Michel");
	std::cout << robert << jim << joe << michel;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(michel);

	return 0;
}