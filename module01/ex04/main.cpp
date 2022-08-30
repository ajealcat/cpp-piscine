/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 10:00:54 by ajearuth          #+#    #+#             */
/*   Updated: 2022/08/30 13:28:14 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string search_n_replace(std::string to_replace, std::string with_me, std::string line)
{
	std::size_t found = line.find(to_replace);
	std::string tmp;
	std::size_t i = 0;
	
	if (found == std::string::npos)
	{
		tmp = line;
	}
	else
	{
		while (found != std::string::npos)
		{
			tmp += line.substr(i, found - i);
			tmp += with_me;
			i = found + to_replace.size();
			found = line.find(to_replace, i);
		}
		tmp += line.substr(i, std::string::npos);
	}
	return (tmp);
}

int main(int ac, char **av)
{
	
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string 	tmp;
	std::string		arg1;

	if (ac == 4)
	{
		if (av[2][0] == '\0' || av[3][0] == '\0')
			return (-1);
		ifs.open(av[1]);
		if (!ifs.is_open())
			return(-1);
		arg1 = av[1] + std::string(".replace");
		ofs.open(arg1.c_str(), std::ios::out);
		if (!ofs.is_open())
		{
			ifs.close();
			return (-1);
		}
		while (getline(ifs, tmp))
		{		
			if (ifs.fail())
			{
				break ;
			}
			if (ifs.eof())
			{
				ofs << search_n_replace(av[2], av[3], tmp);
				break ;
			}
			ofs << search_n_replace(av[2], av[3], tmp) << std::endl;		
		}
		ofs.close();
		ifs.close();
	}
}