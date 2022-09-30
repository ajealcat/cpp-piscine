/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:16:26 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/30 11:43:43 by ajearuth         ###   ########.fr       */
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

        newForm = stagiaire.makeForm("presidential pardon", "Pardon");
        delete newForm;
        newForm = stagiaire.makeForm("roboomy request", "Robot");
        delete newForm;
        newForm = stagiaire.makeForm("shrubbery form", "Tea Tree");
        delete newForm;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // try
	// {
	// 	Intern someRandomIntern;
	// 	Form* rrf;
		
	// 	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	// 	delete rrf;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }	
	return(0);
}