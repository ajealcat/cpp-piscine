/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:15:52 by ajearuth          #+#    #+#             */
/*   Updated: 2022/08/22 13:26:22 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{

	public:

		HumanA(Weapon &arme, std::string nom);
		~HumanA();

	void attack(void) const;
	
	private:
	
	Weapon &_weapon;
	std::string _name;

};


#endif /* ********************************************************** HUMANA_H */