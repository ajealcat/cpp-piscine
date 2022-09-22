/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:09:24 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/22 13:58:47 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal(std::string species)
{
	this->_type = species;
	std::cout << "Default animal constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Copy animal constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &Animal::operator=( Animal const &rhs )
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Animal const & i )
{
	o << "Animal type = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Animal::makeSound(void) const
{
	std::cout << "GrrrraaaOoOouUuUu" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string 	const &Animal::getType(void) const
{
	return this->_type;
}

/* ************************************************************************** */