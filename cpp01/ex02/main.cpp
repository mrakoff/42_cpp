/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 14:12:55 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/14 13:52:47 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *strPtr = &str;
	std::string	&strRef = str;
	
	std::cout << &str << std::endl;
	std::cout << strPtr << std::endl;
	std::cout << &strRef << std::endl;

	std::cout << str << std::endl;
	std::cout << *strPtr << std::endl;
	std::cout << strRef << std::endl;
}
