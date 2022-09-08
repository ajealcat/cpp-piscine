/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:42:26 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/08 15:43:08 by ajearuth         ###   ########.fr       */
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
	customer.complain("INFO");
	customer.complain("WARNING");
	customer.complain("POUET");
	return (EXIT_SUCCESS);
}
