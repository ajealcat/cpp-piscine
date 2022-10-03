/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:56:14 by ajearuth          #+#    #+#             */
/*   Updated: 2022/10/03 18:50:45 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <time.h> 


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Base::~Base()
{
	std::cout << "Base destructor called." << std::endl;
}


// -----------------------------------------------------------------------------

Base *generate(void)
{
	srand(time(NULL));
	switch (rand() % 3)
	{
		case(0) :
		{
			std::cout << "Base A generated" << std::endl;
			return reinterpret_cast<Base *>(new A);
		}
		case(1) :
		{
			std::cout << "Base B generated" << std::endl;
			return reinterpret_cast<Base *>(new B);
		}
		case(2) :
		{
			std::cout << "Base C generated" << std::endl;
			return reinterpret_cast<Base *>(new C);
		}
	}
	return(NULL);
}

void identify(Base *p)
{
	void	*ptr;

	ptr = dynamic_cast<A *>(p);
	if (ptr != NULL)
	{
		std::cout << "Type A." << std::endl;
		return ;
	}
	ptr = dynamic_cast<B *>(p);
	if (ptr != NULL)
	{
		std::cout << "Type B." << std::endl;
		return ;
	}
	ptr = dynamic_cast<C *>(p);
	if (ptr != NULL)
	{
		std::cout << "Type C." << std::endl;
		return ;
	}
	std::cout << "Type unknown." << std::endl;	
}

void identify(Base &p) // une ref ne peut pas renvoyer NULL
{
	try 
	{
		A &refa = dynamic_cast<A &>(p);
		(void)refa;
		std::cout << "Type A." << std::endl;
		return ;
	}
	catch(std::exception &badcast)
	{	
	}
	try
	{
		B &refb = dynamic_cast<B &>(p);
		(void)refb;
		std::cout << "Type B." << std::endl;
		return ;
	}
		catch(std::exception &badcast)
	{
	}
	try
	{
		C &refc = dynamic_cast<C &>(p);
		(void)refc;
		std::cout << "Type C." << std::endl;
		return ;
	}
	catch (std::exception &badcast)
	{
		std::cout << "Type unknown." << std::endl;
	}
}
