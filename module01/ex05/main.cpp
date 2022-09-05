/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:01:18 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/05 13:08:27 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int	main(void)
{
	Harl	customer;
	
	customer.complain("DEBUG");
	customer.complain("INFO");
	customer.complain("WARNING");
	customer.complain("ERROR");
	customer.complain("LOL");
	customer.complain("ERROR");
	customer.complain("INFO");
	customer.complain("DEBUG");
	customer.complain("WARNING");
	return (EXIT_SUCCESS);
}