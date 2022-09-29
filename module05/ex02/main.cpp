/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:16:26 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/29 14:59:31 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	ShrubberyCreationForm One("Little Tree");
	PresidentialPardonForm Two("Silco");
	RobotomyRequestForm Three("Ekko");

	Bureaucrat a("Vi", 1);
	Bureaucrat b("Jinx", 50);
	Bureaucrat c("Teemo", 150);
	std::cout << " ================================================================= " << std::endl;
	try
	{
		a.signForm(One);
		One.doit();
		a.signForm(Two);
		Two.doit();
		a.signForm(Three);
		Three.doit();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << " ================================================================= " << std::endl;
	try
	{
		b.signForm(Two);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}	
	std::cout << " ================================================================= " << std::endl;
	try
	{
		c.signForm(Three);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << " ================================================================= " << std::endl;
	return(0);
}