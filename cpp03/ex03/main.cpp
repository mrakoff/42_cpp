/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 14:51:21 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/27 02:12:43 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap Diamond("Diamond");

	std::cout << "DiamondTrap stats:" << std::endl;
	std::cout << "Name: " << Diamond.getName() << std::endl;
	std::cout << "Energy Points: " << Diamond.getEnergyPoints() << std::endl;
	std::cout << "HP: " << Diamond.getHitPoints() << std::endl;
	std::cout << "Attack Damage: " << Diamond.getAttackDamage() << std::endl << std::endl;
	
	Diamond.attack("Someone");
	Diamond.takeDamage(20);
	Diamond.beRepaired(10);
	Diamond.guardGate();
	Diamond.highFivesGuys();
	Diamond.whoAmI();
}
