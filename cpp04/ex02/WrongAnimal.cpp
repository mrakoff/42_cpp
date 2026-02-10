/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 22:19:43 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/27 22:38:08 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "\033[32mDefault constructor for WrongAnimal called\033[0m" << std::endl;
	_wrongType = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "\033[32mConstructor for WrongAnimal called\033[0m" << std::endl;
	_wrongType = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "\033[32mCopy constructor for WrongAnimal called\033[0m" << std::endl;
	_wrongType = other._wrongType;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		_wrongType = other._wrongType;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()	
{
	std::cout << "\033[31mDestructor for WrongAnimal called\033[0m" << std::endl;
}

void		WrongAnimal::makeSound() const			{	std::cout << "..." << std::endl;	}
std::string WrongAnimal::getType() const			{	return (_wrongType);		}
