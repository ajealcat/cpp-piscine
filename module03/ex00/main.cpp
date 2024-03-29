/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:21:39 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/20 15:48:10 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

int main()
{
	ClapTrap ct1("Pikachu");
	ClapTrap ct2("Onix");
	ClapTrap ct3(ct2);
	
	std::cout << ct1.getName() << std::endl;
	std::cout << ct2.getName() << std::endl;
	std::cout << ct3.getName() << std::endl;

	ct1.attack("Thunder Shock");
	ct2.takeDamage(0);
	ct1.beRepaired(10);
	ct1.takeDamage(100);
	std::cout << ct1.getEnergyPoints() << std::endl;
	std::cout << ct1.getAttackDamage() << std::endl;
	std::cout << ct1.getHitPoints() << std::endl;
}
