/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:20:41 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/20 15:49:59 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <string>
#include <iostream>

int main()
{
	ScavTrap st1("Pikachu");
	ScavTrap st2("Onix");
	ScavTrap st3(st2);
	
	std::cout << st1.getName() << std::endl;
	std::cout << st2.getName() << std::endl;
	std::cout << st3.getName() << std::endl;

	st1.attack("Thunder Shock");
	st2.takeDamage(0);
	st1.beRepaired(10);
	st1.takeDamage(100);
	st1.attack("normalement il peut pas");
	st1.guardGate();
	std::cout << st1.getEnergyPoints() << std::endl;
	std::cout << st1.getAttackDamage() << std::endl;
	std::cout << st1.getHitPoints() << std::endl;
}
