/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:36:10 by ajearuth          #+#    #+#             */
/*   Updated: 2022/06/10 15:38:47 by ajearuth         ###   ########.fr       */
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

