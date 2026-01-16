/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 13:55:19 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/14 16:31:06 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon)
{
	setName(name);
}

void HumanA::setName(std::string str)
{
	_name = str;
}

void HumanA::attack()
{
	std::cout << _name <<  " attacks with their " << _weapon.getType() << std::endl;
}