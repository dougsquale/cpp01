/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelpaum <dbelpaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:33:38 by dbelpaum          #+#    #+#             */
/*   Updated: 2022/10/20 13:51:30 by dbelpaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

// int main()
// {
// 	Weapon weap = Weapon("dagger");
// 	HumanA jean("Jean", weap);
// 	HumanB louis("Louis");
// 	louis.setWeapon(weap);
// 	jean.attack();
// 	louis.attack();
	
// 	weap.setType("Shortsword");
// 	jean.attack();
// 	louis.attack();

// 	HumanB noob("Noob");
// 	noob.attack();
// }

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
