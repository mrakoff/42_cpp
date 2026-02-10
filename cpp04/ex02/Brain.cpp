/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 22:43:08 by msalangi          #+#    #+#             */
/*   Updated: 2026/02/10 22:02:52 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "\033[32mDefault constructor for Brain called\033[0m" << std::endl;
	_i = 0;
}

Brain::~Brain()
{
	std::cout << "\033[31mDestructor for Brain called\033[0m" << std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << "\033[32mCopy constructor for Brain called\033[0m" << std::endl;
    *this = other;
}

void	Brain::setIdea(const std::string &idea)
{
	if (_i < 100)
	{
		_ideas[_i] = idea;
		_i++;
	}
}

void	Brain::changeIdea(unsigned int index, std::string idea)		{	_ideas[index] = idea;	}

std::string	Brain::getIdea(unsigned int index) const
{
	if (index < 100 && index >= 0 && index < _i)
		return (_ideas[index]);
	return ("No thoughts, head empty...");
}
