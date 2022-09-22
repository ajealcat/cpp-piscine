/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:09:24 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/22 14:27:46 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

	public:

		Animal(std::string species = "Default");
		Animal(Animal const &src);
		virtual ~Animal();

		Animal 			&operator=( Animal const & rhs );
		virtual void	makeSound(void) const;
		std::string 	const &getType(void) const;

	protected :
		
		std::string _type;	


};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */