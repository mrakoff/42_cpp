/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 15:07:13 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/20 20:06:51 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

///////////////////////////////////////////////////////////////////////
//			CONSTRUCTORS											//
/////////////////////////////////////////////////////////////////////

Fixed::Fixed()
{
	std::cout << "\033[32mDefault constructor called\033[0m" << std::endl;
	setRawBits(0);
}

Fixed::Fixed(const int n)
{
	std::cout << "\033[32mInt constructor called\033[0m" << std::endl;
	setRawBits(n << _bits);
}

Fixed::Fixed(const float n)
{
	std::cout << "\033[32mFloat constructor called\033[0m" << std::endl;
	setRawBits(roundf(n * (float)(1 << _bits)));
}

Fixed::Fixed(const Fixed &other) : _value(other._value)
{
	std::cout << "\033[32mCopy constructor called\033[0m" << std::endl;
	setRawBits(other.getRawBits());
}

///////////////////////////////////////////////////////////////////////
//			DESTRUCTORS			 									//
/////////////////////////////////////////////////////////////////////

Fixed::~Fixed()	{	std::cout << "\033[31mDestructor called\033[0m" << std::endl;	}

///////////////////////////////////////////////////////////////////////
//			 OPERATORS			 									//
/////////////////////////////////////////////////////////////////////

Fixed&	Fixed::operator=(const Fixed &other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_value = other._value;

	return (*this);
}

bool	Fixed::operator>(const Fixed &other)
{
	
}

bool	Fixed::operator<(const Fixed &other)
{
	
}

bool	Fixed::operator>=(const Fixed &other)
{
	
}

bool	Fixed::operator<=(const Fixed &other)
{
	
}

bool	Fixed::operator==(const Fixed &other)
{
	
}

bool	Fixed::operator!=(const Fixed &other)
{
	
}

Fixed	Fixed::operator+(const Fixed &other)
{
	
}

Fixed	Fixed::operator-(const Fixed &other)
{
	
}

Fixed	Fixed::operator*(const Fixed &other)
{

}

Fixed	Fixed::operator/(const Fixed &other)
{
	
}

Fixed&	Fixed::operator++()
{

}

Fixed&	Fixed::operator--()
{

}

Fixed	Fixed::operator++(int)
{

}

Fixed	Fixed::operator--(int)
{
	
}

std::ostream&	operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}

///////////////////////////////////////////////////////////////////////
//		 MEMBER FUNCTIONS		 									//
/////////////////////////////////////////////////////////////////////

Fixed& Fixed::min(Fixed &obj1, Fixed &obj2)
{
	
}

const Fixed&	Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
	
}
Fixed&	Fixed::max(Fixed &obj1, Fixed &obj2)
{
	
}

const Fixed&	Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
	
}

int		Fixed::getRawBits(void) const		{	return (_value);	}

void	Fixed::setRawBits(int const raw)	{	_value = raw;	}

float	Fixed::toFloat( void ) const		{	return ((float)_value / (float)(1 << _bits));	}

int		Fixed::toInt( void ) const			{	return (_value >> _bits);	}
