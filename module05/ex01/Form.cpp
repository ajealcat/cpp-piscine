/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:14:23 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/28 12:31:45 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(std::string const &name, int const grade_sign, int const grade_exec) : _name(name), _gradetosign(grade_sign), _gradetoexec(grade_exec)
{
	if(grade_sign < 1 || grade_exec < 1)
		throw Form::GradeTooHighException();
	else if (grade_exec > 150 || grade_sign > 150)
		throw Form::GradeTooLowException();
	std::cout << "Default constructor of Form " << getName() << " called" << std::endl;
}

Form::Form( const Form & src ) : _name(src._name), _signed(false), _gradetosign(src._gradetosign), _gradetoexec(src._gradetoexec)
{
	if (src.getGradetoexec() < 1 || src.getGradetosign() < 1)
		throw Form::GradeTooHighException();
	else if (src.getGradetoexec() > 150 || src.getGradetosign() > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form " << getName() << " copied" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
	std::cout << "Desctructor of Form " << getName() << " called" << std::endl;

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
	{
		this->_signed = rhs.getSigned();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form named " << i.getName() << " is";
	if (!i.getSigned())
		o << " not";
	o << " signed, has required a grade of " << i.getGradetosign() << " to be signed and a grade of " << i.getGradetoexec() << " to be executed";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Form::beSigned(Bureaucrat &someone)
{
	if ()
}

const char*	Form::GradeTooHighException::what( void ) const throw()
{
	return "Form grade is too high.";
}

const char*	Form::GradeTooLowException::what( void ) const throw()
{
	return "Form grade is too low.";
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &Form::getName( void ) const
{
	return this->_name;
}

bool	Form::getSigned( void ) const
{
	return this->_signed;
}

int		Form::getGradetosign( void ) const
{
	return this->_gradetosign;
}

int		Form::getGradetoexec( void ) const
{
	return this->_gradetoexec;
}


/* ************************************************************************** */