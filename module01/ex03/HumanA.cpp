/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:24:44 by ajearuth          #+#    #+#             */
/*   Updated: 2022/08/22 13:33:38 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

HumanA::HumanA(Weapon &arme, std::string nom) : _weapon(arme), _name(nom)
{
};

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

HumanA::~HumanA()
{
};

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */