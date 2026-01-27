/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 02:58:53 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/27 21:10:10 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "\033[32mDefault constructor for Cat called\033[0m" << std::endl;
	_type = "Cat";
}

Cat::Cat(std::string type)
{
	std::cout << "\033[32mConstructor for Cat called\033[0m" << std::endl;
	_type = type;
}

Cat::Cat(const Cat &other)
{
	std::cout << "\033[32mCopy constructor for Cat called\033[0m" << std::endl;
	_type = other._type;
}

Cat&	Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "\033[31mDestructor for Cat called\033[0m" << std::endl;
}

void	Cat::makeSound() const	{	std::cout << "meow" << std::endl;	}
