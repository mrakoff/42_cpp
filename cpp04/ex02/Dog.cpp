/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 03:00:19 by msalangi          #+#    #+#             */
/*   Updated: 2026/02/10 22:03:24 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "\033[32mDefault constructor for Dog called\033[0m" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(std::string type)
{
	std::cout << "\033[32mConstructor for Dog called\033[0m" << std::endl;
	_type = type;
	_brain = new Brain();
}

Dog::Dog(const Dog &other)
{
	std::cout << "\033[32mCopy constructor for Dog called\033[0m" << std::endl;

	_type = other._type;
	_brain = new Brain((*other._brain));
}

Dog&	Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		_type = other._type;
		delete _brain;
		_brain = new Brain((*other._brain));
	}
	return (*this);
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "\033[31mDestructor for Dog called\033[0m" << std::endl;
}

Brain*	Dog::getBrain()				{	return(_brain);		}
void	Dog::makeSound() const		{	std::cout << "woof" << std::endl;	}