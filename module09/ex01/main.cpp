/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:14:16 by ajearuth          #+#    #+#             */
/*   Updated: 2023/03/21 22:46:35 by ajearuth         ###   ########.fr       */
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
		for (size_t i = 0; i < str.size(); i++)
		{
			if (str[i] == '(' or str[i] == ')')
			{
				std::cout << "Error\n";
				return 0;
			}
		}
		RPN stack = RPN();
		if (!stack.checkvalidity(str))
		{
			std::cout << "Error : incorrect operators number" << std::endl;
			return 0;
		}
		stack.calcul(str);
		if(!stack.getStack().empty())
			std::cout << stack.getStack().top() << std::endl;
	}
	return 0;
}
