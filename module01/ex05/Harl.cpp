/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 16:04:37 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/05 17:29:09 by ajearuth         ###   ########.fr       */
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


void	Harl::debug(void) 
{
	std::cout << "[DEBUG] " << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" 
	<< std::endl;
}

void Harl::info(void) 
{
	std::cout << "[INFO] " << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
	<< std::endl;
}

void Harl::warning(void) 
{
	std::cout << "[WARNING] " << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month."
	<< std::endl;
}

void Harl::error(void) 
{
	std::cout << "[ERROR] " << "This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}

void Harl::complain(std::string level)
{
	size_t i = 0;

	std::string tab[4] = {"DEBUG", "INFO", "WARNING","ERROR"};
	void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    while (i < 4)
    {
        if (level == tab[i])
            (this->*f[i])();
        i++;
    }
}
