/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:34:09 by ajearuth          #+#    #+#             */
/*   Updated: 2022/08/22 14:48:31 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{

	public:

		HumanB(Weapon arme, std::string nom);
		~HumanB();

	void attack(void) const;

	private:

	Weapon 	*_weapon;
	std::string _name; 	

};


#endif /* ********************************************************** HUMANB_H */