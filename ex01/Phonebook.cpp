/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 11:27:22 by ajearuth          #+#    #+#             */
/*   Updated: 2022/06/16 11:27:58 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <cstdlib>

Phonebook::Phonebook(void)
{
	this->_contact = 0;
}

Phonebook::~Phonebook(void)
{
}

std::string	get_prompt(std::string const entry)
{
	std::string	input;
	
	std::cout << entry;
	std::cout << " : " << std::endl;
	getline(std::cin, input);
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore();
		std::exit(EXIT_FAILURE);
	}
	while (!input.size())
	{
		std::cout << ">" << std::endl;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore();
			std::exit(EXIT_FAILURE);
		}
		getline(std::cin, input);
	}
	return (input);
}

void Phonebook::create_new_contact(void)
{
	int	i;
	
	Contact new_contact(get_prompt("first name"), get_prompt("last name"), get_prompt("nick name"),
				get_prompt("phone number"), get_prompt("darkest secret"));
	i = this->_contact % 8;
	this->_contact_list[i] = new_contact;
	this->_contact++;
}

void Phonebook::show_contact(void)
{
	size_t 		i;
	std::string	index;
	
	for (i = 0 ; i < this->_contact && i < 8 ; i++)
	{
		std::cout << "[" << i + 1 << "]	";
		std::cout << this->_contact_list[i].get_firstname() << " | ";
		std::cout << this->_contact_list[i].get_lastname() << " | ";
		std::cout << this->_contact_list[i].get_nickname()<< std::endl;
	}
	std::cout << "Choose a contact :" << std::endl;
	std::getline(std::cin, index);
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore();
		std::exit(EXIT_FAILURE);
	}
	i = std::strtoul(index.c_str(), NULL, 10);
	if (index.size() && index.find_first_not_of("0123456789+\f\t\n\r\v ") == index.npos
		&& --i >= 0 && i < this->_contact && i < 8)
		this->_contact_list[i].contact_form();
	else
		std::cout << "Index not valid." << std::endl;
}
