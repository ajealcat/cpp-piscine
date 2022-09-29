/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:16:26 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/29 17:43:13 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{

	try
    {
        Intern  stagiaire;
        Form *newForm;

        newForm = stagiaire.makeForm("ShrubberyForm", "Tea Tree");
        delete newForm;
        newForm = stagiaire.makeForm("Bip boup", "Robot");
        delete newForm;
        newForm = stagiaire.makeForm("PresidentialForm", "Pardon");
        delete newForm;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
	// ShrubberyCreationForm One("Little Tree");
	// PresidentialPardonForm Two("Silco");
	// RobotomyRequestForm Three("Ekko");

	// Bureaucrat a("Vi", 1);
	// Bureaucrat b("Jinx", 50);
	// Bureaucrat c("Teemo", 150);
	// std::cout << " ================================================================= " << std::endl;
	// try
	// {
	// 	a.signForm(One);
	// 	a.executeForm(One);
	// 	a.signForm(Two);
	// 	a.executeForm(Two);
	// 	a.signForm(Three);
	// 	a.executeForm(Three);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	// std::cout << " ================================================================= " << std::endl;
	// try
	// {
	// 	b.signForm(Two);
	// 	b.executeForm(Two);

	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }	
	// std::cout << " ================================================================= " << std::endl;
	// try
	// {
	// 	c.signForm(Three);
	// 	c.executeForm(Three);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	// std::cout << " ================================================================= " << std::endl;
	return(0);
}