/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 22:50:26 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/27 23:44:38 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	Animal	*zoo[4];
	int		i = 0;

	while (i + 1 < 4)
	{
		zoo[i] = new Dog();
		zoo[i + 1] = new Cat();
		i += 2;
	}

	std::cout << zoo[2]->getType() << " says ";
	zoo[2]->makeSound();

	std::cout << zoo[3]->getType() << " says ";
	zoo[3]->makeSound();

	i = 0;
	while (i < 4)
	{
		delete zoo[i];
		i++;
	}

}