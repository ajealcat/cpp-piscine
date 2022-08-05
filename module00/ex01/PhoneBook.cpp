/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 11:27:22 by ajearuth          #+#    #+#             */
/*   Updated: 2022/08/05 15:07:24 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>
#include <iomanip>

PhoneBook::PhoneBook(void)
{
	this->_contact = 0;
}

PhoneBook::~PhoneBook(void)
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
		std::cout << "➡️" << std::endl;
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

void PhoneBook::create_new_contact(void)
{
	int	i;
	
	Contact new_contact(get_prompt("first name"), get_prompt("last name"), get_prompt("nick name"),
				get_prompt("phone number"), get_prompt("darkest secret"));
	i = this->_contact % 8;
	this->_contact_list[i] = new_contact;
	this->_contact++;
}

std::string	resize(std::string const input)
{
	if (input.size() > 10)
		return (input.substr(0, 9) + ".");
	else
		return (input);
	return (NULL);
}

void PhoneBook::show_contact(void)
{
	size_t 		i;
	std::string	index;
	
	for (i = 0 ; i < this->_contact && i < 8 ; i++)
	{
		std::cout << std::setw(10) << "[" << i + 1 << "]" << " | ";
		std::cout << std::setw(10) << resize(this->_contact_list[i].get_firstname()) << " | ";
		std::cout << std::setw(10) << resize(this->_contact_list[i].get_lastname()) << " | ";
		std::cout << std::setw(10) << resize(this->_contact_list[i].get_nickname()) << std::endl;
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
