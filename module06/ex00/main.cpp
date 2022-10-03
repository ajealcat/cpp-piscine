/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:09:38 by ajearuth          #+#    #+#             */
/*   Updated: 2022/10/03 15:18:00 by ajearuth         ###   ########.fr       */
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

		switch (Convert.getDetected())
		{
			case 1 :
			{
				Convert.ConvertFloat();
				break;
			}
			case 2 :
			{
				Convert.ConvertDouble();
				break;
			}
			case 3 :
			{
				Convert.ConvertInt();
				break;
			}
			case 4 :
			{
				Convert.ConvertChar();
				break;
			}
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return(0);
}
