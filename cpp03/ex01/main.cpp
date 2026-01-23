/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:37:58 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/23 13:16:16 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	Scav("Scav");

	Scav.attack("Someone");
	Scav.takeDamage(20);
	Scav.beRepaired(10);
	Scav.guardGate();

	ClapTrap	Clap("Clap");
	
	Clap.takeDamage(5);
	Clap.attack("Gate");
	Clap.beRepaired(1);
	Clap.takeDamage(10);
}
