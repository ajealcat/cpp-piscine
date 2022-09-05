/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:04:37 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/05 17:02:37 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Harl::Harl()
{
}

Harl::~Harl()
{
}


void	Harl::debug(void) const
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" 
	<< std::endl;
}

void Harl::info(void) const
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put
	enough bacon in my burger! If you did, I wouldn’t be asking for more!"
	<< std::endl;
}

void Harl::warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for
	years whereas you started working here since last month."
	<< std::endl;
}

void Harl::error(void) const
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}

void Harl::complain(std::string level) const
{
	
}