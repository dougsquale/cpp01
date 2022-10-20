/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelpaum <dbelpaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:14:47 by dbelpaum          #+#    #+#             */
/*   Updated: 2022/10/20 17:27:48 by dbelpaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl {

public:
	Harl(void);
	~Harl(void);
	void complain(std::string level) const;

private:
	void debug(void) const;
	void info(void) const;
	void warning(void) const;
	void error(void) const;

};

#endif