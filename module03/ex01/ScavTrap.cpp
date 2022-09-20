/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:36:48 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/20 15:47:42 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_Hitpoints = 100;
	this->_Energypoints = 50;
	this->_Attackdamage = 20;
	std::cout << "ScavTrap constructor called " << _name << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap & src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_Hitpoints = rhs.getHitPoints();
		this->_Energypoints = rhs.getEnergyPoints();
		this->_Attackdamage = rhs.getAttackDamage();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i )
{
	o << "ScavTrap " << i.getName()
	<< "has " << i.getHitPoints() << " HP left, "
	<< i.getEnergyPoints() << " Energy points left and deals "
	<< i.getAttackDamage() << " damage.";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void    ScavTrap::attack(std::string const &target)
{
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
	{
    	std::cout << "ScavTrap " << this->getName();
		std::cout << " attack " << target;
		std::cout << ", causing " << this->getAttackDamage();
    	std::cout << " points of damage !" << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap entered Gate Keeper mode" << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */