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

	std::cout << "************	SHALLOW/DEEP COPY TEST	************" << std::endl;
	
	Cat		*Gato = new Cat();
	Cat		*Cato(Gato);

	Gato->getBrain()->setIdea("hmmmmmm..");
	std::cout << "Gato is thinking.. " << Gato->getBrain()->getIdea(0) << std::endl;
	std::cout << "Cato is thinking.. " << Cato->getBrain()->getIdea(0) << std::endl;
	
	Cato->getBrain()->changeIdea(0, "Cato is hungry..");
	std::cout << "Gato is thinking.. " << Gato->getBrain()->getIdea(0) << std::endl;
	std::cout << "Cato is thinking.. " << Cato->getBrain()->getIdea(0) << std::endl;

	delete Gato;
	std::cout << "Cato is thinking.. " << Cato->getBrain()->getIdea(0) << std::endl;
	
	// Cat		Gato(Cat);
	// Cat		Cato(&Gato);

	// Gato.getBrain()->setIdea("hmmmmmm..");
	// std::cout << "Gato is thinking.. " << Gato.getBrain()->getIdea(0) << std::endl;
	// std::cout << "Cato is thinking.. " << Cato.getBrain()->getIdea(0) << std::endl;

	// Gato.getBrain()->changeIdea(0, "Gato is hungry..");
	// std::cout << "Gato is thinking.. " << Gato.getBrain()->getIdea(0) << std::endl;
	// std::cout << "Cato is thinking.. " << Cato.getBrain()->getIdea(0) << std::endl;

	// std::cout << "Cato is thinking.. " << Cato.getBrain()->getIdea(0) << std::endl;

	std::cout << std::endl << "*******************	TEST	*******************" << std::endl;

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