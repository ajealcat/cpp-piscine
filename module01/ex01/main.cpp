/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:38:43 by ajearuth          #+#    #+#             */
/*   Updated: 2022/08/12 14:31:01 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);


int main(void)
{
	Zombie *Horde;
	int i;
	
	Horde = zombieHorde(3, "Rasputin");
	for (i = 0 ; i < 3 ; i++)
		Horde[i].announce();
	delete [] Horde;
	return (0);
}
