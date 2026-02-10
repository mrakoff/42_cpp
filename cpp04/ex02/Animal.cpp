/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 02:43:01 by msalangi          #+#    #+#             */
/*   Updated: 2026/02/10 22:14:53 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "\033[32mDefault constructor for Animal called\033[0m" << std::endl;
	_type = "Animal";
}

Animal::Animal(std::string type)
{
	std::cout << "\033[32mConstructor for Animal called\033[0m" << std::endl;
	_type = type;
}

Animal::Animal(const Animal &other)
{
	std::cout << "\033[32mCopy constructor for Animal called\033[0m" << std::endl;
	_type = other._type;
}

Animal&	Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "\033[31mDestructor for Animal called\033[0m" << std::endl;
}

std::string Animal::getType() const		{	return (_type);		}
