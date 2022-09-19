/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:21:39 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/19 14:29:56 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

int main()
{
    ClapTrap cp1;
    ClapTrap cp2("John");
    ClapTrap cp3(cp2);
    cp1 = cp2;

    std::cout << cp1.getName() << std::endl;
    std::cout << cp2.getName() << std::endl;
    std::cout << cp3.getName() << std::endl;

    cp1.attack("Invicible");
    cp1.beRepaired(10);
    cp1.takeDamage(10);
    cp1.takeDamage(100);
}
