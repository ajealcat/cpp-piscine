/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:16:05 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/22 14:54:14 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

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
	const Animal* Pikachu = new Animal();
	const Animal* Voltoutou = new Dog();
	const Animal* Miaous = new Cat();
	
	const WrongAnimal* Smogogo = new WrongAnimal();
	const WrongAnimal* Mewtoo = new WrongCat();
	
	
	std::cout << "What does Pikachu say ?  ";
	Pikachu->makeSound();
	std::cout << "What does Voltoutou say ?  ";
	Voltoutou->makeSound();
	std::cout << "What does Miaous say ?  ";
	Miaous->makeSound();

	std::cout << "What does Smogogo the wrong animal say ?  ";
	Smogogo->makeSound();
	std::cout << "What does Mewtoo the wrong cat say ?  ";
	Mewtoo->makeSound();

	delete Smogogo;
	delete Mewtoo;
	delete Pikachu;
	delete Voltoutou;
	delete Miaous;

	return 0;
}