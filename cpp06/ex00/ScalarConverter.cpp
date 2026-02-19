/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 18:04:35 by msalangi          #+#    #+#             */
/*   Updated: 2026/02/19 18:55:47 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::~ScalarConverter()
{
	
}

void	ScalarConverter::convert(std::string literal)
{
	char	c;
	int		i;
	float	f;
	double	d;


	// identify type
	std::is

	// ??
	
	/*			to char			*/
	std::cout << "char: ";
	if (literal.length() != 1 || !std::isprint(literal[0]))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout();

	/*			to int			*/
	i = std::stoi(literal);
	
	/*			to float		*/
	f = std::stof(literal);
	
	/*			to double		*/
	d = std::stod(literal);
}