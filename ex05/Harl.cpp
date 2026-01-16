/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:52:51 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/16 14:15:37 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*
*	f is an array of pointers to member functions of Harl, they return void and take no args. 
*	since it's a pointer array, the values are addresses of member functions.
*
*	(this->*f[i])() is basically Harl.*f[i] or even harl::f[i].
*	'this' is a pointer to object. it allows us to navigate to the object from the member function, and call other member functions.
*	in this case that is precisely why we need 'this' - since we can't call a member function without an object.
*	'->*' is binding an object to a member function, making it possible to call the member function.
*
*/
void	Harl::complain(std::string level)
{
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*f[])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	int			i = 0;
	
	while (levels[i] != level)
		i++;
	(this->*f[i])();
}

void	Harl::_debug(void)
{
	std::cout << "\033[31m" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger."
	<< "I really do!" << "\033[0m" << std::endl;
}

void	Harl::_info(void)
{
	std::cout <<  "\033[31m" << "I cannot believe adding extra bacon costs more money." 
	<< "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
	<< "\033[0m" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout <<  "\033[31m" << "I think I deserve to have some extra bacon for free."
	<< "I've been coming for years, whereas you started working here just last month."
	<< "\033[0m" << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "\033[31m" << "This is unacceptable! I want to speak to the manager now." 
	<< "\033[0m" << std::endl;
}
