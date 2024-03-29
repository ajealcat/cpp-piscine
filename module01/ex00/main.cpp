/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:34:02 by ajearuth          #+#    #+#             */
/*   Updated: 2022/08/08 16:28:58 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

int main(void)
{
	Zombie Foo("Foo");
	Zombie *Boo;
	
	
	Foo.announce();
	Boo = newZombie("Boo");
	Boo->announce();
	randomChump("Gnougnou");
	
	delete Boo;
}
