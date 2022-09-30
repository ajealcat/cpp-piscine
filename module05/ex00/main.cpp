/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:16:26 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/30 12:17:29 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main(void)
{

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
	std::cout << " ================================================================= " << std::endl;
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
	std::cout << " ================================================================= " << std::endl;
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
	std::cout << " ================================================================= " << std::endl;
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