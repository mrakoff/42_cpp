/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 03:00:19 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/27 03:05:48 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "\033[32mDefault constructor for Dog called\033[0m" << std::endl;
}


Dog::Dog(std::string type)
{
	std::cout << "\033[32mConstructor for Dog called\033[0m" << std::endl;
	_type = type;
}

Dog::Dog(const Dog &other)
{
	std::cout << "\033[32mCopy constructor for Dog called\033[0m" << std::endl;
	_type = other._type;
}

Dog&	Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "\033[31mDestructor for Dog called\033[0m" << std::endl;
}