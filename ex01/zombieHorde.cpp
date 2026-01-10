/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:22:18 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/10 17:57:51 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* allocates an array of zombies, returns ptr to the first element, sets a name to the index of zombie and appends the name
*
*	notes:
*	= new Zombie(name)[N] is not possible.. passing arguments to the constructor is only possible when creating one object,
*	in this case the default constructor is being used;
*	
*/
Zombie* zombieHorde( int N, std::string name )
{
	Zombie		*zombieList;
	int			i = 0;
	std::string	newName;
	
	try
	{
		zombieList = new Zombie[N];
	}
	catch	(const std::bad_alloc &error)
	{
		std::cerr << "new() failed" << std::endl;
		return (NULL);
	}

	while (i < N)
	{
		newName = std::to_string(i + 1).append(" of ").append(name);
		zombieList[i].setName(newName);
		i++;
	}
	return (zombieList);
}