/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:20:41 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/20 16:21:07 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <string>
#include <iostream>

int main()
{
	ScavTrap st1("Pikachu");
	ScavTrap st2("Onix");
	ScavTrap st3(st2);

	FragTrap ft1("Ash");
	
	// ClapTrap ct1("Jessy");
	// ClapTrap ct2("James");
	
	std::cout << ft1.getName() << std::endl;

	std::cout << st1.getName() << std::endl;
	std::cout << st2.getName() << std::endl;
	std::cout << st3.getName() << std::endl;


	// std::cout << ct1.getName() << std::endl;
	// std::cout << ct2.getName() << std::endl;

	ft1.highFivesGuys();
	
	ft1.attack("Pikachu GO");
	st1.attack("Thunder Schock");
	st2.takeDamage(20);
	st1.beRepaired(10);
	st1.takeDamage(100);
	st1.guardGate();
	std::cout << st1.getEnergyPoints() << std::endl;
	std::cout << st1.getAttackDamage() << std::endl;
	std::cout << st1.getHitPoints() << std::endl;
}
