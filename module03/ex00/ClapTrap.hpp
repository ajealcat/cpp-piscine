/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:21:56 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/16 14:59:02 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap(std::string _name);
		ClapTrap(ClapTrap const & src);  // constructeur par copie
		~ClapTrap();

		ClapTrap	&operator=(ClapTrap const &rhs); // operateur d'assignation
	
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
	private:

	std::string _name;
	int			_Hitpoints = 10;
	int			_Energypoints = 10;
	int			_Attackdamage = 0; 

};

#endif 