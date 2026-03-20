/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 18:36:06 by mel               #+#    #+#             */
/*   Updated: 2026/03/20 13:58:59 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main(void)
{
	std::cout << "**********  SHRUBBERY FORM / TEST 1 / SUCCESSFUL EXECUTION  **********" << std::endl;
	try
	{
		Bureaucrat Boss("Boss", 1);
		ShrubberyCreationForm G("Green");
		G.beSigned(Boss);
		Boss.executeForm(G);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;	
	}
	std::cout << std::endl;

	std::cout << "************  SHRUBBERY FORM / TEST 2 / NOT SIGNED  ************" << std::endl;
	try
	{
		Bureaucrat Middle("Middle", 75);
		ShrubberyCreationForm G("Green");
		Middle.executeForm(G);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;	
	}
	std::cout << std::endl;

	std::cout << "********  SHRUBBERY FORM / TEST 3 / GRADE TOO LOW FOR EXECUTION ********" << std::endl;
	try
	{
		Bureaucrat Junior("Junior", 145);
		ShrubberyCreationForm G("Green");
		G.beSigned(Junior);
		Junior.executeForm(G);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;	
	}
	std::cout << std::endl;

	std::cout << "**********  ROBOTOMY FORM / TEST 1 / SUCCESSFUL EXECUTION  **********" << std::endl;
	try
	{
		Bureaucrat Boss("Boss", 1);
		RobotomyRequestForm R("You");
		R.beSigned(Boss);
		Boss.executeForm(R);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;	
	}
	std::cout << std::endl;
	std::cout << "************  ROBOTOMY FORM / TEST 2 / NOT SIGNED  ************" << std::endl;
	try
	{
		Bureaucrat Middle("Middle", 75);
		RobotomyRequestForm R("Me");
		Middle.executeForm(R);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;	
	}
	std::cout << std::endl;

	std::cout << "*********  ROBOTOMY FORM / TEST 3 / GRADE TOO LOW TO SIGN  *********" << std::endl;
	try
	{
		Bureaucrat Junior("Junior", 145);
		RobotomyRequestForm R("Random robot");
		R.beSigned(Junior);
		Junior.executeForm(R);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;	
	}
	std::cout << std::endl;

	std::cout << "**********  PARDON FORM / TEST 1 / SUCCESSFUL EXECUTION  **********" << std::endl;
	try
	{
		Bureaucrat Boss("Boss", 1);
		PresidentialPardonForm R("Me");
		R.beSigned(Boss);
		Boss.executeForm(R);

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;	
	}
	std::cout << std::endl;
	std::cout << "************  PARDON FORM / TEST 2 / NOT SIGNED  ************" << std::endl;
	try
	{
		Bureaucrat Middle("Middle", 75);
		PresidentialPardonForm R("You");
		Middle.executeForm(R);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;	
	}
	std::cout << std::endl;

	std::cout << "*********  PARDON FORM / TEST 3 / GRADE TOO LOW TO SIGN  *********" << std::endl;
	try
	{
		Bureaucrat Junior("Junior", 145);
		PresidentialPardonForm R("Random robot");
		R.beSigned(Junior);
		Junior.executeForm(R);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;	
	}
	std::cout << std::endl;

}


