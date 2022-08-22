/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 14:01:36 by ajearuth          #+#    #+#             */
/*   Updated: 2022/08/22 13:08:00 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	public:
		
		Weapon(std::string weapon = "some other type of club");
		~Weapon(void);

		const std::string &getType(void) const;
		void setType(std::string weapon);
	
	private:
	
	std::string _type;
	
};


#endif
