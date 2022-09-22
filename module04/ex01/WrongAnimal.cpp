/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:26:58 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/22 14:36:20 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal(std::string species)
{
	this->_type = species;
	std::cout << "Default wrong animal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "Copy wrong animal constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong animal destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &WrongAnimal::operator=( WrongAnimal const &rhs )
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i )
{
	o << "WrongAnimal type = " << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	WrongAnimal::makeSound(void) const
{
	std::cout << "GrrrraaaOoOouUuUu" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string 	const &WrongAnimal::getType(void) const
{
	return this->_type;
}



/* ************************************************************************** */