/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 13:57:01 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/14 17:20:08 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
	setType(str);
}

std::string const &Weapon::getType()
{
	return (_type);
}
void Weapon::setType(std::string str)
{
	_type = str;
}
