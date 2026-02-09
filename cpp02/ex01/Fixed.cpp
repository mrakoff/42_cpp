/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 15:07:13 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/20 19:16:43 by msalangi         ###   ########.fr       */
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
	/* n multiplied by 2^bits */
	setRawBits(roundf(n * static_cast<float>(1 << _bits)));
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
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_value = other._value;

	return (*this);
}

/*
*	an overload of the insertion («) operator that inserts a floating-point representation
*	of the fixed-point number into the output stream object passed as a parameter.
*
*	ref to object os, ref to object Fixed		
*/
std::ostream&	operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}

///////////////////////////////////////////////////////////////////////
//		 MEMBER FUNCTIONS		 									//
/////////////////////////////////////////////////////////////////////

int		Fixed::getRawBits(void) const		{	return (_value);	}

void	Fixed::setRawBits(int const raw)	{	_value = raw;	}

float	Fixed::toFloat( void ) const
{
	/* converts the fixed-point value to a floating-point value */
	return (static_cast<float>_value / static_cast<float>(1 << _bits));
}

int		Fixed::toInt( void ) const
{
	/*	shift x bits to the right	*/
	return (_value >> _bits);
}
