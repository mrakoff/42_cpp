/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 18:36:06 by mel               #+#    #+#             */
/*   Updated: 2026/03/18 15:51:12 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "************  TEST 1  ************" << std::endl;
	try
	{
		Bureaucrat Boss("Boss", 1);
		Form F("Important", 1, 1);
		
		std::cout << Boss << std::endl;
		std::cout << F;

		Boss.signForm(F);
		std::cout << F;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "************  TEST 2  ************" << std::endl;
	try 
	{
		Bureaucrat Junior("Junior", 150);
		Form F("Long", 100, 100);
		
		std::cout << Junior << std::endl;
		std::cout << F;

		Junior.signForm(F);
		std::cout << F;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;	
	}
	std::cout << std::endl;

	std::cout << "************  TEST 3  ************" << std::endl;
	try
	{
		Bureaucrat Middle("Middle", 75);
		Form F("Medium", 75, 10);
		
		std::cout << Middle << std::endl;
		std::cout << F;

		Middle.signForm(F);
		std::cout << F;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;	
	}
	std::cout << std::endl;
	
}


