/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelpaum <dbelpaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:13:52 by dbelpaum          #+#    #+#             */
/*   Updated: 2022/10/20 11:30:52 by dbelpaum         ###   ########.fr       */
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
	void	announce(void) const;

private:

	std::string _name;

};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif