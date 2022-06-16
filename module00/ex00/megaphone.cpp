/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:42:49 by ajearuth          #+#    #+#             */
/*   Updated: 2022/06/10 16:07:23 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

int main(int ac, char **av)
{
	int i;
	int size;
	char s;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	if (ac > 1)
	{
		size = 1;
		while(size < ac)
		{
			i = 0;
			while (av[size][i])
			{
				s = toupper(av[size][i]);
				std::cout << s;
				++i;
			}
			++size;
		}
		std::cout << std::endl;
	}
	return (0);
}
