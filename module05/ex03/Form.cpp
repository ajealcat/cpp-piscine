/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:14:23 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/30 11:36:34 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(std::string const &name, int const grade_sign, int const grade_exec) : _name(name), _signed(false), _gradetosign(grade_sign), _gradetoexec(grade_exec)
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

void	Form::beSigned(const Bureaucrat &someone)
{
	if (someone.getGrade() > this->_gradetosign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == false)
		throw Form::NotSignedException();
	else if (executor.getGrade() > this->getGradetoexec())
		throw Form::GradeTooLowException();
	else 
		doit();
		
}

const char*	Form::GradeTooHighException::what( void ) const throw()
{
	return "Form grade is too high.";
}

const char*	Form::GradeTooLowException::what( void ) const throw()
{
	return "Form grade is too low.";
}

const char*	Form::NotSignedException::what( void ) const throw()
{
	return "Form is not signed.";
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