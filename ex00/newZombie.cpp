/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 04:04:36 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/10 14:09:10 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* creates a zombie on the heap, returns a ptr to it 
*
*	notes:
*	&error by reference avoids creating a copy
*	std::cerr prints to STDERR
*/
Zombie* newZombie( std::string name )
{
	Zombie	*zombiePtr;

	try
	{
		zombiePtr = new Zombie(name);
	}
	catch	(const std::bad_alloc &error)
	{
		std::cerr << "new() failed" << std::endl;
		return (NULL);
	}
	return (zombiePtr);
}
