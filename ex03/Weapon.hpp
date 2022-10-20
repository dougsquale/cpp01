/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelpaum <dbelpaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:33:27 by dbelpaum          #+#    #+#             */
/*   Updated: 2022/10/20 12:58:09 by dbelpaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {

private:

	std::string _type;

public:

	Weapon(void);
	Weapon(std::string type);
	~Weapon(void);

	std::string const &getType(void) const;
	void setType(std::string type);

};

#endif