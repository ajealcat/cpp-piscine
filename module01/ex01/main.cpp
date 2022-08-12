/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:38:43 by ajearuth          #+#    #+#             */
/*   Updated: 2022/08/12 15:18:19 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);


int main(void)
{
	Zombie *Horde;
	Zombie Song;
	int i;
	
	Horde = zombieHorde(2, "Ra");
	Song.setName("Rasputin");
	
	for (i = 0 ; i < 2 ; i++)
		Horde[i].announce();
	Song.announce();
	delete [] Horde;
	return (0);
}
