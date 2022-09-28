/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:16:26 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/28 12:51:31 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main(void)
{
	Form One("Only the boss", 1, 1);
	Form Two("For le Stagiaire", 150, 150);
	Form Three("You can sign but not exec", 150, 1);
	Form Four("Negatif", 0, -1);
	Form Five("Too low", 4010, 4010);

	try
	{
		Bureaucrat a("Vi", 1);
		a.promote();
		std::cout << a << std::endl;
		a.demote();
		std::cout << a << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat b("Jinx", 50);
		b.promote();
		std::cout << b << std::endl;
		b.demote();
		std::cout << b << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}	
	try
	{
		Bureaucrat c("Teemo", 150);
		c.promote();
		std::cout << c << std::endl;
		c.demote();
		std::cout << c << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat d("Aphelios", -10);
		d.promote();
		std::cout << d << std::endl;
		d.demote();
		std::cout << d << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return(0);
}