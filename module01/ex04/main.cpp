/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 10:00:54 by ajearuth          #+#    #+#             */
/*   Updated: 2022/08/24 15:34:36 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
	
	std::ifstream	ifs;
	std::ofstream	ofs;
	
	if (ac == 4)
	{
		ifs.open(av[1]);
		if (!ifs.is_open())
			return(-1);
		ofs.open(av[1] + std::string(".replace"), std::ios::out);
		if (!ofs.is_open())
		{
			ifs.close();
			return (-1);
		}
		
		ofs.close();
		ifs.close();
	}
}