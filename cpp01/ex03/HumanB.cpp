/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 13:55:57 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/14 17:20:17 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str) : _weapon(nullptr)
{
	setName(str);
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void HumanB::setName(std::string str)
{
	_name = str;
}

void HumanB::attack()
{
	if (_weapon)
		std::cout << _name <<  " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " is harmless!" << std::endl;
}