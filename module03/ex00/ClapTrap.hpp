/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:21:56 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/19 17:15:17 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap(std::string name = "Default");
		ClapTrap(ClapTrap const & src);  // constructeur par copie
		~ClapTrap();

		ClapTrap	&operator=(ClapTrap const &rhs); // operateur d'assignation
	

		std::string		getName(void) const;
		unsigned int	getHitPoints(void) const;
		unsigned int	getEnergyPoints(void) const;
		unsigned int	getAttackDamage(void) const;

		void		setHitPoints(unsigned int new_HP);
	
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
	private:

		std::string				 _name;
		unsigned int			_Hitpoints;
		unsigned int			_Energypoints;
		unsigned int			_Attackdamage; 

};

std::ostream &operator<<( std::ostream &o, ClapTrap const &i);

#endif 
