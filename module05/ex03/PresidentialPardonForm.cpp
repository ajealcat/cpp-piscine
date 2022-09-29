/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:01:27 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/29 15:33:14 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("Presidential Pardon", 25, 5), _target(target)
{
	std::cout << "Default constructor PresidentialPardonForm created" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : Form(src), _target(src._target)
{
		std::cout << "Copy constructor PresidentialPardonForm created" << std::endl;

}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm deleted" << std::endl;

}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		*(Form *)this = rhs;
		this->_target = rhs.getTarget();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	PresidentialPardonForm::doit( void ) const
{
	std::cout << this->_target << " has been forgiven by Zaphod Beeblebrox!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	const & PresidentialPardonForm::getTarget( void ) const
{
	return (this->_target);
}

/* ************************************************************************** */