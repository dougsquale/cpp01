/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelpaum <dbelpaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:23:48 by dbelpaum          #+#    #+#             */
/*   Updated: 2022/10/20 12:30:52 by dbelpaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// Pointers :
// A pointer is a variable that holds the memory address of another variable.
// A pointer needs to be dereferenced with the * operator to access the memory location it points to. 

// References :
// A reference variable is an alias, that is, another name for an already existing variable.
// A reference, like a pointer, is also implemented by storing the address of an object. 

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "str addr	: " << &str << std::endl;
	std::cout << "*ptr addr	: " << ptr << std::endl; 
	std::cout << "ref addr	: " << &ref << std::endl;

	std::cout << "str		: " << str << std::endl;
	std::cout << "*ptr		: " << *ptr << std::endl;
	std::cout << "ref		: " << ref << std::endl;

	return (0);
}