/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:35:52 by ajearuth          #+#    #+#             */
/*   Updated: 2022/06/16 14:48:00 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <cstdlib>

int main(void)
{
	Phonebook	repertory;
	std::string	cmd;

	std::cout << "Thank you for using our phonebook 🤖" << std::endl;
	std::cout << "To add a new contact use ADD 📥" << std::endl;
	std::cout << "To search a contact use SEARCH 🔎" << std::endl;
	std::cout << "To quit a contact use EXIT ❌" << std::endl;
	while (cmd != "EXIT")
	{
		std::cout << "➡️ ";
		std::getline(std::cin, cmd);
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::exit(EXIT_FAILURE);
		}
		if (cmd == "ADD")
			repertory.create_new_contact();
		else if (cmd == "SEARCH")
			repertory.show_contact();
	}
	
	return (0);
}