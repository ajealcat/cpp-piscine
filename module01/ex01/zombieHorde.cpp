/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:52:56 by ajearuth          #+#    #+#             */
/*   Updated: 2022/08/11 16:33:31 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{	
	Zombie* Newzombie = new Zombie[N];
	
	for(int i = 0 ; i < N ; i++)
		Newzombie[i].setName(name);
}
