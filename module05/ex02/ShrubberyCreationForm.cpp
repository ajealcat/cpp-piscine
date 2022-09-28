/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anna <anna@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:00:20 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/28 19:57:40 by anna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form("Tea Tree", 145, 137), _target(target)
{
	std::cout << "Default constructor ShrubberyCreationForm created" << std::endl;

}


ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : Form(src), _target(src._target)
{
	std::cout << "Copy constructor ShrubberyCreationForm created" << std::endl;

}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm deleted" << std::endl;

}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
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

void	ShrubberyCreationForm::doit( void ) const
{
	std::ofstream	ofs;

	ofs.open( (this->_target + std::string("_shrubbery")).c_str() );
	if (ofs.is_open() == false)
		throw std::ios::failure( "Error opening output file. ");
	for (int i = 3; i; --i)
	{
		ofs << " \n";
		ofs << "   ccee88oo \n";
		ofs << " C8O8O8Q8PoOb o8oo \n";
		ofs << "dOB69QO8PdUOpugoO9bD \n";
		ofs << "CgggbU8OU qOp qOdoUOdcb \n";
		ofs << "  6OuU  /p u gcoUodpP \n";
		ofs << "   \\\\//  /douUP \n";
		ofs << "    \\\\//// \n";
		ofs << "      |||/\\  \n";
		ofs << "      |||\\/  \n";
		ofs << "      |||||  \n";
		ofs << ".....//||||\\.... \n" << std::endl;
	}
	ofs.close();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	const & ShrubberyCreationForm::getTarget( void ) const
{
	return (this->_target);
}

/* ************************************************************************** */