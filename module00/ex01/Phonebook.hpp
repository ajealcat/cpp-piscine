/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:29:28 by ajearuth          #+#    #+#             */
/*   Updated: 2022/06/16 11:22:08 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

class Phonebook 
{
	public:

		Phonebook(void);
		~Phonebook(void);

		void create_new_contact(void);
		void show_contact(void);
		
	private:
		
		Contact _contact_list[8];
		size_t	_contact;
};

#endif
