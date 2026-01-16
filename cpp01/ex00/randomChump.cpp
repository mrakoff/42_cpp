/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 04:05:03 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/10 14:03:23 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* creates a zombie on the stack, announces it */
void randomChump( std::string name )
{
	Zombie	newZombie(name);

	newZombie.announce();
}
