/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:21:39 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/20 14:10:48 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

int main()
{
	ClapTrap cp1("Pikachu");
	ClapTrap cp2("Onix");
	ClapTrap cp3(cp2);
	
	std::cout << cp1.getName() << std::endl;
	std::cout << cp2.getName() << std::endl;
	std::cout << cp3.getName() << std::endl;

	cp1.attack("Thunder Shock");
	cp2.takeDamage(0);
	cp1.beRepaired(10);
	cp1.takeDamage(100);
	cp1.attack("normalement il peut pas");
	std::cout << cp1.getEnergyPoints() << std::endl;
	std::cout << cp1.getAttackDamage() << std::endl;
	std::cout << cp1.getHitPoints() << std::endl;
}
