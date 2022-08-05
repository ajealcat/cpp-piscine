/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:29:28 by ajearuth          #+#    #+#             */
/*   Updated: 2022/08/05 15:05:48 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class PhoneBook 
{
	public:

		PhoneBook(void);
		~PhoneBook(void);

		void create_new_contact(void);
		void show_contact(void);
		
	private:
		
		Contact _contact_list[8];
		size_t	_contact;
};

#endif
