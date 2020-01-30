/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 17:30:18 by kcabus       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 18:57:55 by kcabus      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string		my_upperCase(std::string s)
{
	std::transform(s.begin(), s.end(),s.begin(), ::toupper);
	return (s);
}

void		search_replace(std::string& s, std::string oldstr, std::string newstr)
{
	std::string::size_type pos ;
	
	while( (pos = s.find(oldstr, pos)) != std::string::npos)
	{
		s.replace(pos, oldstr.length(), newstr);
		pos += newstr.length();
	}
}

int main(int ac, char **av)
{
	std::string		fileName;
	std::string		s1;
	std::string		s2;
	std::ifstream	ifs;
	
	if (ac != 4)
		return (1);

	fileName = av[1];
	s1 = av[2];
	s2 = av[3];

	if (s1.length() == 0 || s2.length() == 0)
		return (1);

	ifs.open(fileName);
	if (!ifs)
	{
		std::cout << "Unable to open this file" << std::endl;
		return (1);
	}
	//read all file
	std::string str((std::istreambuf_iterator<char>(ifs)),
					std::istreambuf_iterator<char>());

	//close file
	ifs.close();
	
	//create new file
	ifs.open(my_upperCase(fileName) + ".replace");
	if (ifs)
	{
		std::cout << "Error, the file " << my_upperCase(fileName) + ".replace" << " already exists." << std::endl;
		return (1);
	}
	std::ofstream	ofs(my_upperCase(fileName) + ".replace");

	//parcour and replace
	search_replace(str, s1, s2);

	ofs << str ;
	// close
	ofs.close();
	return (0);
}