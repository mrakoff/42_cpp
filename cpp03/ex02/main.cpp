/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 13:19:30 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/23 14:56:32 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap	Frag("Frag");

	Frag.attack("Someone angry");
	Frag.takeDamage(30);
	Frag.beRepaired(20);
	Frag.highFivesGuys();

}