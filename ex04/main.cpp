/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelpaum <dbelpaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:55:45 by dbelpaum          #+#    #+#             */
/*   Updated: 2022/10/20 15:50:51 by dbelpaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	std::ifstream	inputFile;
	std::ifstream	checkFile;
	std::ofstream	outputFile;
	std::string		filename;
	std::string		s1;
	std::string		s2;
	std::string		line;
	size_t			findpos;
	size_t			offset;
	

	if (ac != 4)
		return (std::cout << "usage : ./run <filename> <s1> <s2>" << std::endl, 1);
	filename = av[1];
	s1 = av[2];
	s2 = av[3];
	if (s1.empty())
		return (std::cout << "s1 can't be empty" << std::endl, 1);
	// open filename for reading
	inputFile.open(filename);
	if (!inputFile.good())
		return (std::cout << "Error : could not open file " << filename << std::endl, 1);

	// check if filename.replace exists
	checkFile.open(filename + ".replace");
	if (checkFile.is_open())
		std::cout << "Warning : Overwriting file " << filename << ".replace" << std::endl;
	checkFile.close();

	// create/open filename.replace for writing
	outputFile.open(filename + ".replace", std::ios::trunc);
	if (!outputFile.good())
		return (std::cout << "Error : could not open file " << filename << ".replace" << std::endl, inputFile.close(), 1);
	
	while (getline(inputFile, line, '\0'))
	{
		offset = 0;
		while (line.find(s1, offset) != std::string::npos)
		{
			findpos = line.find(s1, offset);
			line.erase(findpos, s1.length());
			line.insert(findpos, s2);
			offset = findpos + s2.length();
		}
		outputFile << line;
	}
	inputFile.close();
	outputFile.close();
}