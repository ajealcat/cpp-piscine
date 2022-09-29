/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:16:26 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/28 14:33:05 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main(void)
{
	Form One("Boss File", 1, 1);
	Form Two("For le Stagiaire", 150, 150);
	Form Three("Secret execution file", 150, 1);

	Bureaucrat a("Vi", 1);
	Bureaucrat b("Jinx", 50);
	Bureaucrat c("Teemo", 150);
	
	try
	{
		a.signForm(One);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		b.signForm(Three);
		// b.promote();
		// std::cout << b << std::endl;
		// b.demote();
		// std::cout << b << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}	
	try
	{
		Form Four("Negatif", 0, -1);
		a.signForm(Four);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		c.promote();
		std::cout << c << std::endl;
		c.demote();
		std::cout << c << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return(0);
}