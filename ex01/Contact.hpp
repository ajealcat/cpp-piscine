/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:48:29 by ajearuth          #+#    #+#             */
/*   Updated: 2022/06/14 15:23:30 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
	public:

	Contact(std::string firstname = "default", std::string lastname = "default", 
			std::string nickname = "default", std::string phonenumber = "default",
			std::string darkestsecret = "default");
	~Contact(void);

	void	contact_form(void) const;
	std::string	get_firstname(void) const;
	std::string	get_lastname(void) const;
	std::string	get_nickname(void) const;
	std::string	get_phonenumber(void) const;
	std::string	get_darkestsecret(void) const;;
	
	private:

	std::string _firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _phonenumber;
	std::string _darkestsecret;

};

#endif