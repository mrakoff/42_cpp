/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 02:58:53 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/27 22:49:18 by msalangi         ###   ########.fr       */
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
	int i = 0;

	_type = other._type;
	_brain = new Brain();
	_brain->setI(other._brain->getI());
	
	while (i < _brain->getI())
	{
		_brain->setIdea(other._brain->getIdea(i));
		i++;
	}
}

Cat&	Cat::operator=(const Cat &other)
{
	int i = 0;
	if (this != &other)
	{
		_type = other._type;
		delete _brain;
		_brain = new Brain;
		
		_brain->setI(other._brain->getI());
		while (i < _brain->getI())
		{
			_brain->setIdea(other._brain->getIdea(i));
			i++;
		}
	}
	return (*this);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "\033[31mDestructor for Cat called\033[0m" << std::endl;
}

Brain*	Cat::getBrain()
{
	return(_brain);
}

void	Cat::makeSound() const	{	std::cout << "meow" << std::endl;	}
