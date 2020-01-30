/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/22 10:38:54 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/23 10:47:31 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main()
{
	Array<char> test(10);

	try
	{	
		test[8] = 48;
		test[6] = 58;
		test[7] = 65;
		test[1] = 36;
		test[3] = 86;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	for (unsigned i = 0; i < test.size() ; i++)
	{
		try
		{
			std::cout << test[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		
	}

	std::cout << "------------------test2-------------------" <<std::endl; 

	Array<std::string> test2(10);

	try
	{	
		test2[8] = "huit";
		test2[6] = "six";
		test2[7] = "sept";
		test2[1] = "un";
		test2[3] = "trois";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	for (unsigned i = 0; i < test2.size() ; i++)
	{
		try
		{
			std::cout << test2[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		
	}

	std::cout << "------------------test3-------------------" <<std::endl; 

	Array<bool> test3;
	try
	{
		test3[25];
	}
	catch(const std::exception& e)
	{
			std::cout << e.what() << std::endl;
	}
	
	std::cout << "------------------test4-------------------" <<std::endl; 

	Array<bool> test4(100);
	try
	{
		test4[25];
		test4[20];
		test4[25] = true;
	}
	catch(const std::exception& e)
	{
			std::cout << e.what() << std::endl;
	}

	for (unsigned i = 0; i < test4.size() ; i++)
	{
		try
		{
			std::cout << test4[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "------------------test5(2)-------------------" <<std::endl; 

	Array<std::string> test5(test2);

	try
	{
		test5[8] = "string 8";
		test5[9] = "string 9";
		test5[20] = "string 20";
	}
	catch(const std::exception& e)
	{
			std::cout << e.what() << std::endl;
	}

	for (unsigned i = 0; i < test5.size() ; i++)
	{
		try
		{
			std::cout << test5[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << "------------------test2 = 5-------------------" <<std::endl; 

	test2 = test5;

	for (unsigned i = 0; i < test2.size() ; i++)
	{
		try
		{
			std::cout << test2[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
	}	
	return 0;
}