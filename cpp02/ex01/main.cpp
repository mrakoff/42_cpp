/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 15:07:04 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/20 19:16:57 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


// /1 << scale for that value of scale does nasty things on a system with a 16 bit int. The author needs a good talking to. Just write 65536, or 0x10000,

/*
*	about overloads:
*	If the name refers to more than one entity, it is said to be overloaded, 
*	and the compiler must determine which overload to call. In simple terms, 
*	the overload whose parameters match the arguments most closely is the one that is called.
*
*	about shifting and representation of fixed point numbers:
*	shifting to the right is basically multiplying that number by (2 power of x),
*	where x is by how many positions we want to shift or scale, and shifting to the left is basically division by 2x
*
*
*/
int main( void )
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	// std::cout << "a is " << a.toFloat() << " as float" << std::endl;
	// std::cout << "b is " << b.toFloat() << " as float" << std::endl;
	// std::cout << "c is " << c.toFloat() << " as float" << std::endl;
	// std::cout << "d is " << d.toFloat() << " as float" << std::endl;

	return 0;
}
