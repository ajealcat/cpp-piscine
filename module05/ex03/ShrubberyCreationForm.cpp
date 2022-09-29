/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anna <anna@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:00:20 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/29 10:54:09 by anna             ###   ########.fr       */
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
		ofs << "               ,@@@@@@@, " << std::endl;
		ofs << "       ,,,.   ,@@@@@@/@@,  .oo8888o. " << std::endl;
		ofs << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o " << std::endl;
		ofs << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88' " << std::endl;
		ofs << "   %&&%&%&/%&&%@\\@@/ /@@@88888\\88888'" << std::endl;
		ofs << "    %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88' " << std::endl;
		ofs << "    `&%\\ ` /%&'    |.|        \\ '|8' " << std::endl;
		ofs << "        |o|        | |         | | " << std::endl;
		ofs << "        |.|        | |         | | " << std::endl;
		ofs << "     \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
		ofs.close();
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