/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:04:36 by ajearuth          #+#    #+#             */
/*   Updated: 2022/08/22 13:14:27 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) : _type(weapon)
{
};

Weapon::~Weapon()
{	
};

const std::string &Weapon::getType(void) const
{
	return(this->_type);
};

void Weapon::setType(std::string weapon)
{
	this->_type = weapon;
};