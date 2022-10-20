/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelpaum <dbelpaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:14:57 by dbelpaum          #+#    #+#             */
/*   Updated: 2022/10/20 18:07:16 by dbelpaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;

	if (ac != 2)
		return (std::cout << "usage: ./run [DEBUG|INFO|WARNING|ERROR]" << std::endl, 1);
	harl.complain(av[1]);
	return (0);
}