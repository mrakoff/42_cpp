/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 04:10:34 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/10 15:18:13 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*z;
	Zombie	zombie("Stack Zombie");
	
	zombie.announce();
	z = newZombie("Heap Zombie");
	z->announce();
	randomChump("Chump Zombie");
	delete z;

	return (0);
}
