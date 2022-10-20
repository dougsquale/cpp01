/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelpaum <dbelpaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:22:47 by dbelpaum          #+#    #+#             */
/*   Updated: 2022/10/20 11:54:17 by dbelpaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::cout << "Creating a horde of 5 zombies :" << std::endl;
	Zombie *zombieArray = zombieHorde(5, "Zombie among the horde");
	for (int i = 0; i < 5; i++)
	{
		std::cout << "[" << i + 1 << "] ";
		zombieArray[i].announce();
	}
	std::cout << std::endl;

	
	std::cout << "Creating a horde of 10 zombies :" << std::endl;
	Zombie *zombieArray2 = zombieHorde(10, "Zombie among the horde");
	for (int i = 0; i < 10; i++)
	{
		std::cout << "[" << i + 1 << "] ";
		zombieArray2[i].announce();
	}


	delete [] zombieArray;
	delete [] zombieArray2;
	return (0);
}