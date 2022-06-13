/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:36:10 by ajearuth          #+#    #+#             */
/*   Updated: 2022/06/13 11:22:53 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(std::string firstname, std::string lastname, 
			std::string nickname, std::string phonenumber,
			std::string darkestsecret) : _firstname(firstname),
			_lastname(lastname), _nickname(nickname),
			_phonenumber(phonenumber), _darkestsecret(darkestsecret)
{	
}

Contact::~Contact(void)
{
}

std::string	Contact::get_firstname(void) const
{
	return (this->_firstname);
}

std::string	Contact::get_lastname(void) const
{
	return (this->_lastname);
}

std::string	Contact::get_nickname(void) const
{
	return (this->_nickname);
}

std::string	Contact::get_phonenumber(void) const
{
	return (this->_phonenumber);
}

std::string	Contact::get_darkestsecret(void) const
{
	return (this->_darkestsecret);
}

void	Contact::contact_form(void) const
{
	std::cout << "first name : " << this->_firstname << std::endl;
	std::cout << "last name : " << this->_firstname << std::endl;
	std::cout << "nick name : " << this->_firstname << std::endl;
	std::cout << "phone number : " << this->_firstname << std::endl;
	std::cout << "darkest secret : " << this->_firstname << std::endl;
}
