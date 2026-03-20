/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 15:27:01 by msalangi          #+#    #+#             */
/*   Updated: 2026/03/20 20:34:22 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Intern 		someRandomIntern;
		Bureaucrat 	Boss("Boss", 1);
		Bureaucrat	Manager("Manager", 42);
		AForm* 		form;
		
		form = someRandomIntern.makeForm("robotomy request", "Bender");
		
		Manager.signForm(*form);
		Boss.executeForm(*form);
		
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
