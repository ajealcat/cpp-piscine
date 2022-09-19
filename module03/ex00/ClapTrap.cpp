/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:22:06 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/19 14:32:07 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap(std::string name) : _name(name), _Hitpoints(10), _Energypoints(10), _Attackdamage(0)
{
	std::cout << "Default constructor called (named Default)" << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &ClapTrap::operator=(ClapTrap const & rhs)
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

std::ostream &operator<<(std::ostream &o, ClapTrap const &i)
{
	o << "ClapTrap " << i.getName()
	<< "has " << i.getHitPoints() << " HP left, "
	<< i.getEnergyPoints() << " Energy points left and deals "
	<< i.getAttackDamage() << " damage.";
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void    ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << this->getName();
    std::cout << " attack " << target;
    std::cout << ", causing " << this->getAttackDamage();
    std::cout << " points of damage !" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    int damage = (int)this->getHitPoints() - (int)amount;
    if (damage < 0)
        damage = 0;
    std::cout << "ClapTrap "  << this->getName();
    std::cout << " take " << amount << " damage !" << std::endl;
    this->setHitPoints(damage);
    std::cout << "Hit points left: ";
    std::cout << this->getHitPoints() << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap "  << this->_name;
    std::cout << " is repaired for " << amount << " hit points !" << std::endl;
    this->setHitPoints(this->_Hitpoints + amount);
    std::cout << "Hit points left: ";
    std::cout << this->getHitPoints() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string ClapTrap::getName() const
{
	return (this->_name);
}

unsigned int					ClapTrap::getHitPoints() const
{
	return (this->_Hitpoints);
}

unsigned int					ClapTrap::getEnergyPoints() const
{
	return (this->_Energypoints);
}

unsigned int					ClapTrap::getAttackDamage() const
{
	return (this->_Attackdamage);
}
