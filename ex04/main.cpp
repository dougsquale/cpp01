/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelpaum <dbelpaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:55:45 by dbelpaum          #+#    #+#             */
/*   Updated: 2022/10/24 11:33:57 by dbelpaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>


int	main(int ac, char **av)
{
	if (ac != 4)
		return (std::cout << "usage : ./run <filename> <s1> <s2>" << std::endl, 1);

	std::string		filename(av[1]);
	std::ifstream	inputFile(av[1]);
	std::string		s1(av[2]);
	std::string		s2(av[3]);
	std::string		line;
	size_t			findpos;
	size_t			offset;
	

	if (!inputFile)
		return (std::cout << "Error : cannot open file" << std::endl, 1);

	std::ofstream	outputFile(filename.append(".replace").data());
	if (!outputFile.good())
		return (std::cout << "Error : cannot create file " << filename << std::endl, 1);
	
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