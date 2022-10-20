/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelpaum <dbelpaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:33:32 by dbelpaum          #+#    #+#             */
/*   Updated: 2022/10/20 13:02:43 by dbelpaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanB {

private:

	std::string _name;
	Weapon *_weapon;

public:

	HumanB(std::string name);
	~HumanB(void);
	void setWeapon(Weapon &weapon);
	void attack(void) const;
};

#endif