/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:09:38 by ajearuth          #+#    #+#             */
/*   Updated: 2022/10/03 13:45:03 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int ac, char **av)
{
	
	if (ac != 2)
		return(EXIT_FAILURE);
	try
	{
		Conversion Convert(av[1]);
		Convert.ConvertChar();
		Convert .ConvertDouble();
		Convert.ConvertInt();
		Convert.ConvertFloat();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return(0);
}
