/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:20:41 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/20 16:38:10 by ajearuth         ###   ########.fr       */
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
	ft1.beRepaired(10);
	ft1.takeDamage(100);
	st1.guardGate();

	// int i = 0;
	// while(i < 100)
	// {
	// 	ft1.attack("Pikachu GO");
	// 	i++;
	// }
	std::cout << ft1.getEnergyPoints() << std::endl;
	std::cout << ft1.getAttackDamage() << std::endl;
	std::cout << ft1.getHitPoints() << std::endl;
}
