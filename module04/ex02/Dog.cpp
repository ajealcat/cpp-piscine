/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anna <anna@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:12:18 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/25 17:46:55 by anna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Default dog constructor called" << std::endl;
}

Dog::Dog( const Dog & src )
{
	std::cout << "Copy dog constructor called" << std::endl;
	this->_brain = new Brain();
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
		*(this->_brain) = *(rhs.getBrain());
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void	Dog::makeSound(void) const
{
	std::cout << "WooOoOoOuUuUuF" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Brain* Dog::getBrain(void) const
{
	return this->_brain;
}


/* ************************************************************************** */