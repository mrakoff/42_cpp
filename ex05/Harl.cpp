/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:52:51 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/15 18:59:12 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain(std::string level)
{
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Harl::*f[])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	int			i = 0;
	
	while (levels[i] != level)
		i++;
	(this->*f[i])();
	// harl::f[i]???
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
