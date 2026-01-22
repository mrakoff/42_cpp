/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:37:58 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/22 13:46:23 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	Clap("Clap");
	
	Clap.attack("Trap");
	Clap.takeDamage(2);
	Clap.beRepaired(1);
	Clap.takeDamage(10);
	Clap.attack("Trap");
	Clap.beRepaired(1);
}
