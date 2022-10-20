/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelpaum <dbelpaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:13:52 by dbelpaum          #+#    #+#             */
/*   Updated: 2022/10/20 11:45:13 by dbelpaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	
public:

	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
	void	setName(std::string name);
	void	announce(void) const;

private:

	std::string _name;

};

Zombie *zombieHorde(int N, std::string name);

#endif