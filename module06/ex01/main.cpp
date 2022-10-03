/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:28:43 by ajearuth          #+#    #+#             */
/*   Updated: 2022/10/03 09:52:14 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

int main(void)
{
	Data test;

	test.name = "I'm a test";
	test.c = 'a';
	test.i = 12;
	
	std::cout << "Before conversion of : " << test.name << " into uintptr" << std::endl;
	std::cout << " c value is : " << test.c << std::endl;
	std::cout << "i value is : " << test.i << std::endl;

	uintptr_t i = serialize(&test);
	Data *new_test;
	new_test = deserialize(i);
    std::cout << std::endl;

	std::cout << "After conversion of : " << test.name << " into uintptr" << std::endl;
	std::cout << " c value is : " << new_test->c << std::endl;
	std::cout << "i value is : " << new_test->i << std::endl;

	return (0);
}
