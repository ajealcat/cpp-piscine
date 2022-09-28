/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anna <anna@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:01:06 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/28 19:37:51 by anna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:

		RobotomyRequestForm( std::string target = "BipBoop" );
		RobotomyRequestForm( RobotomyRequestForm const & src );
		virtual ~RobotomyRequestForm();

		virtual RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

		virtual void	doit( void ) const;

		std::string	const & getTarget( void ) const;

	private:

		std::string _target;
};

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */