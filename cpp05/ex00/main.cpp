/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 18:36:06 by mel               #+#    #+#             */
/*   Updated: 2026/03/18 15:51:51 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "************  TEST 1  ************" << std::endl;
	std::cout << "level 1: " << std::endl;
	try
	{
		Bureaucrat Boss("Boss", 1);
		std::cout << Boss;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;	
	}
	std::cout << std::endl;

	std::cout << "************  TEST 2  ************" << std::endl;
	std::cout << "level 150: " << std::endl;	
	try
	{
		Bureaucrat Newbie("Newbie", 150);
		std::cout << Newbie;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "************  TEST 3  ************" << std::endl;
	std::cout << "level 1500: " << std::endl;
	try
	{
		Bureaucrat A("A", 1500);
		std::cout << A;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;	
	}
	std::cout << std::endl;

	std::cout << "************  TEST 4  ************" << std::endl;
	std::cout << "level 0: " << std::endl;	
	try
	{
		Bureaucrat B("B", 0);
		std::cout << B;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;	
	}
	std::cout << std::endl;

	std::cout << "************  TEST 5  ************" << std::endl;
	std::cout << "level 2 to 0: " << std::endl;
	try
	{
		Bureaucrat Senior("Senior", 2);
		std::cout << Senior;
		Senior.gradeUp();
		std::cout << Senior;
		Senior.gradeUp();
		std::cout << Senior;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;	
	}
	std::cout << std::endl;

	std::cout << "************  TEST 6  ************" << std::endl;
	std::cout << "level 149 to 151: " << std::endl;
	try
	{
		Bureaucrat Junior("Junior", 149);
		std::cout << Junior;
		Junior.gradeDown();
		std::cout << Junior;
		Junior.gradeDown();
		std::cout << Junior;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;	
	}
	std::cout << std::endl;

	std::cout << "************  TEST 7  ************" << std::endl;
	std::cout << "level 75 to 76 and back: " << std::endl;
	try
	{
		Bureaucrat Middle("Middle", 75);
		std::cout << Middle;
		Middle.gradeDown();
		std::cout << Middle;
		Middle.gradeUp();
		std::cout << Middle;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;	
	}
	std::cout << std::endl;

}
