/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msalangi <msalangi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 02:38:07 by msalangi          #+#    #+#             */
/*   Updated: 2026/01/27 22:37:50 by msalangi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main(void)
{
	const Animal* 	meta = new Animal();
	const Animal* 	j = new Dog();
	const Animal* 	i = new Cat();

	const WrongAnimal*	wrongMeta = new WrongAnimal();
	const WrongAnimal*	wrongCat = new WrongCat();

	std::cout << "**************	DOG / CAT / ANIMAL	**************" << std::endl;
	std::cout << j->getType() << " says ";
	j->makeSound();

	std::cout << i->getType() << " says ";
	i->makeSound();

	std::cout << meta->getType() << " says ";
	meta->makeSound();

	std::cout << std::endl << "************	WRONGCAT / WRONGANIMAL	**************" << std::endl;
	std::cout << wrongCat->getType() << " says ";
	wrongCat->makeSound();
	
	std::cout << wrongMeta->getType() << " says ";
	wrongMeta->makeSound();

	delete j;
	delete i;
	delete meta;
	delete wrongMeta;
	delete wrongCat;

	return 0;
}
