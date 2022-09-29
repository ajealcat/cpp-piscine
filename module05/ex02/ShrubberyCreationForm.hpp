/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anna <anna@student.42.fr>                  +#+  +:+       +#+        */
/* Votre position                                               +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:00:21 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/28 19:37:34 by anna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:

		ShrubberyCreationForm( std::string target = "Happy Tree" );
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		virtual ~ShrubberyCreationForm();

		virtual ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );

		virtual void	doit( void ) const;

		std::string	const & getTarget( void ) const;

	private:

		std::string	_target;
};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */