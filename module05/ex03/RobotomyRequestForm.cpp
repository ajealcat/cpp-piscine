/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anna <anna@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:01:06 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/28 19:43:13 by anna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("Robotomy Request", 72, 45), _target(target)
{
	std::srand(time(NULL));
	std::cout << "Default constructor RobotomyRequestForm created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : Form(src), _target(src._target)
{
	std::srand(time(NULL));
	std::cout << "Copy constructor RobotomyRequestForm created" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm deleted" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
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

void	RobotomyRequestForm::doit( void ) const
{
	std::cout << "wBzzzzzzZZzzzT..." << std::endl;
	if (rand() % 2)
		std::cout << "Robotomy of " << this->_target << " is a success!" << std::endl;
	else
		std::cout << "Wooops! Robotomy of " << this->_target << " failed..." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	const & RobotomyRequestForm::getTarget( void ) const
{
	return (this->_target);
}

/* ************************************************************************** */