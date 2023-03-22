/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:14:16 by ajearuth          #+#    #+#             */
/*   Updated: 2023/03/22 17:55:34 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	
	if (ac != 2)
		std::cout << "Error\n";
	else
	{
		std::string str = av[1];
		if (str.find_first_not_of("0123456789/*-+ ") != std::string::npos)
		{
			std::cout << "Error" << std::endl;
			return 1;
		}
		RPN stack = RPN();
		if (!stack.checkvalidity(str))
		{
			std::cout << "Error : incorrect operators number" << std::endl;
			return 1;
		}
		stack.calcul(str);
		if(!stack.getStack().empty())
			std::cout << stack.getStack().top() << std::endl;
	}
	return 0;
}
