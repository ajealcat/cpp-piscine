/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 12:15:03 by ajearuth          #+#    #+#             */
/*   Updated: 2022/08/19 13:47:27 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPtr = &string;
	std::string& stringRef = string;

	std::cout << &string <<std::endl;
	std::cout << stringPtr << std::endl;
	std::cout << &stringRef << std::endl;
	
	std::cout << string <<std::endl;
	std::cout << *stringPtr << std::endl;
	std::cout << stringRef << std::endl;

	return (0);
}