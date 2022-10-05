/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 22:42:54 by ajearuth          #+#    #+#             */
/*   Updated: 2022/10/05 14:50:58 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <string>
#include <iostream>

int main(void)
{
	std::vector<int>::const_iterator i;
	
	std::vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(4);
	nums.push_back(8);
	nums.push_back(16);

	try 
	{
		i = easyfind(nums, 8);
		std::cout << *i << std::endl;
	}
	catch (std::exception &e){ std::cerr << e.what() << '\n'; }
	try
	{
		i = easyfind(nums, 30);
		std::cout << *i << std::endl;
	}
	catch (std::exception &e){ std::cerr << e.what() << '\n'; }
	return(0);
}