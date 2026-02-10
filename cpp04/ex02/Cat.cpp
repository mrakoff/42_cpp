/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 02:58:53 by msalangi          #+#    #+#             */
/*   Updated: 2026/02/10 22:03:19 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "\033[32mDefault constructor for Cat called\033[0m" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(std::string type)
{
	std::cout << "\033[32mConstructor for Cat called\033[0m" << std::endl;
	_type = type;
	_brain = new Brain();
}

Cat::Cat(const Cat &other)
{
	std::cout << "\033[32mCopy constructor for Cat called\033[0m" << std::endl;

	_type = other._type;
	_brain = new Brain((*other._brain));
}

Cat&	Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		_type = other._type;
		delete _brain;
		_brain = new Brain((*other._brain));
	}
	return (*this);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "\033[31mDestructor for Cat called\033[0m" << std::endl;
}

Brain*	Cat::getBrain()				{	return(_brain);		}
void	Cat::makeSound() const		{	std::cout << "meow" << std::endl;	}
