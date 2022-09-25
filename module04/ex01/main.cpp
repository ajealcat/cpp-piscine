/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anna <anna@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:16:05 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/25 17:57:59 by anna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
# include "Brain.hpp"

int main()
{
	/*
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	// std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	
*/

/*

	Dog* Voltoutou = new Dog();
	Cat* Miaous = new Cat();
	
	Dog* Azazel = new Dog();
	Cat* Belial = new Cat();
	
	std::cout << "What does Voltoutou say ?  ";
	Voltoutou->makeSound();
	std::cout << "What does Miaous say ?  ";
	Miaous->makeSound();

	for (int i = 0; i < 3; i++)
	{
		Miaous->getBrain()->setIdeas("I hate my slave", i);
		Voltoutou->getBrain()->setIdeas("I love my human", i);
	}

	std::cout << "Voltoutou adresse : " << Voltoutou->getBrain() << std::endl;
	std::cout << "Miaous adresse : " << Miaous->getBrain() << std::endl;
	std::cout << "Azazel adresse : " << Azazel->getBrain() << std::endl;
	std::cout << "Belial adresse : " << Belial->getBrain() << std::endl;

	*Azazel = *Voltoutou;
	*Belial = *Miaous;

	std::cout << "Voltoutou adresse : " << Voltoutou->getBrain() << std::endl;
	std::cout << "Miaous adresse : " << Miaous->getBrain() << std::endl;
	std::cout << "Azazel adresse : " << Azazel->getBrain() << std::endl;
	std::cout << "Belial adresse : " << Belial->getBrain() << std::endl;
	
	std::cout << *(Azazel->getBrain()) << std::endl;
	std::cout << *(Belial->getBrain()) << std::endl;

	delete Voltoutou;
	delete Miaous;
	delete Azazel;
	delete Belial;

*/

	Animal *Club[4];

	for (int i = 0; i < 4; i++)
	{
		if ( i % 2 == 0)
			Club[i] = new Cat;
		else 
			Club[i] = new Dog;
	}

	for (int i = 4 ; i >= 0; i--)
		delete Club[i];
	
	return 0;
}