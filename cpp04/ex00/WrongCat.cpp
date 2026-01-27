/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 21:15:31 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/27 21:18:13 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "\033[32mDefault constructor for WrongCat called\033[0m" << std::endl;
	_wrongType = "WrongCat";
}

WrongCat::WrongCat(std::string type)
{
	std::cout << "\033[32mConstructor for WrongCat called\033[0m" << std::endl;
	_wrongType = type;
}

WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << "\033[32mCopy constructor for WrongCat called\033[0m" << std::endl;
	_wrongType = other._wrongType;
}

WrongCat&	WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		_wrongType = other._wrongType;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "\033[31mDestructor for WrongCat called\033[0m" << std::endl;
}
