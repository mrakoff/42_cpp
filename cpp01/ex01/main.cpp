/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 14:22:38 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/10 17:55:15 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int		i = 0;

	std::cout << std::endl << "\033[1;34m***   TEST 1   ***\033[0m" << std::endl;
	horde = zombieHorde(2, "2 brains");
	std::cout << "A hoarde of 2 zombies is now attacking!" << std::endl;
	while (i < 2)
	{
		horde[i].announce();
		i++;
	}
	delete []horde;
	i = 0;

	std::cout << std::endl << "\033[1;34m***   TEST 2   ***\033[0m" << std::endl;
	horde = zombieHorde(5, "5 brains");
	std::cout << "A hoarde of 5 zombies is now attacking!" << std::endl;
	while (i < 5)
	{
		horde[i].announce();
		i++;
	}
	delete []horde;
	i = 0;

	std::cout << std::endl << "\033[1;34m***   TEST 3   ***\033[0m" << std::endl;
	horde = zombieHorde(10, "10 brains");
	std::cout << "A hoarde of 10 zombies is now attacking!" << std::endl;
	while (i < 10)
	{
		
		horde[i].announce();
		i++;
	}
	delete []horde;
}
