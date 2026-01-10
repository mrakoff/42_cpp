/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 04:04:36 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/09 05:17:00 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// allocated an the heap

Zombie* newZombie( std::string name )
{
	//setName(name);
	Zombie	*freshZombie;
	Zombie	freshZombie("Big Zombie");
	
	
	return (freshZombie);
	
}