/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelpaum <dbelpaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:22:47 by dbelpaum          #+#    #+#             */
/*   Updated: 2022/10/20 11:34:37 by dbelpaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::cout << "Zombies on the stack:" << std::endl;
	Zombie zumboy("Charlie le Zombie");
	zumboy.announce();
	Zombie defaultZombie;
	defaultZombie.announce();
	randomChump("Alex el zombos");

	std::cout << std::endl << "Zombies on the heap:" << std::endl;
	Zombie *returnedZombie = newZombie("ReturnedZombie");
	returnedZombie->announce();
	
	// If delete is ommited, leaks will be detected by valgrind
	delete(returnedZombie);
	return (0);
}