/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:34:09 by ajearuth          #+#    #+#             */
/*   Updated: 2022/08/22 16:36:28 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

HumanB::HumanB(std::string nom) : _name(nom)
{
}



/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

HumanB::~HumanB()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void	HumanB::attack(void) const
{
	if (this->_weapon == NULL)
		std::cout << this->_name << " attacks with nothing because he has no weapon, poor him. Say goodbye to " << this->_name << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void HumanB::setWeapon(Weapon &arme)
{
	this->_weapon = &arme;
}

/* ************************************************************************** */