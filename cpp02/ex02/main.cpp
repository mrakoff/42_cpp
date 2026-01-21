/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 15:07:04 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/21 18:45:36 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
*	std::cout prints floats with default precision (typically 6 significant digits),
*	rounding 11.99609375 to 11.9961. The underlying fixed-point value is accurate,
*	but the display is formatted this way. If you need more precision,
*	you could modify the << operator to use std::fixed and std::setprecision
*
*/
int main( void )
{
	/*		SUBJECT TESTS	*/
	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;

	/*		MY TESTS 		*/
	Fixed a = 12;
	Fixed c(0.125f);

	std::cout << a << std::endl;
	std::cout << c << std::endl;
	std::cout << --a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << Fixed::min( a, c ) << std::endl;
	std::cout << Fixed::max( a, c ) << std::endl;
	std::cout << (a < c) << std::endl;
	std::cout << (a > c) << std::endl;
	std::cout << (a * c) << std::endl;
	std::cout << (a / c) << std::endl;

	std::cout << (a - c) << std::endl;
	std::cout << (a + c) << std::endl;

	std::cout << (a != c) << std::endl;
	std::cout << (a == c) << std::endl;
	std::cout << (a <= c) << std::endl;
	std::cout << (a >= c) << std::endl;

	return (0);
}