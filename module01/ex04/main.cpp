/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 10:00:54 by ajearuth          #+#    #+#             */
/*   Updated: 2022/08/25 16:58:02 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int search_n_relace(char *to_replace, char *with_me, std::string tmp)
{
	std::size_t found = tmp.find(to_replace);
	std::size_t i = 0;
	
	if (found == 0)
		return(-1);
	else
	{
		
	}
}

int main(int ac, char **av)
{
	
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string 	tmp;

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
		while (getline(ifs, tmp))
		{
			if (ifs.badbit)
				break ;
			
			if (ifs.eofbit)
			
		}
		
		ofs.close();
		ifs.close();
	}
}