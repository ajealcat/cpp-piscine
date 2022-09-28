/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:14:23 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/28 11:55:54 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Form
{

	public:

		Form(std::string const &name = "default_form", int const grade_sign = 1, int const grade_exec = 1 );
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & rhs );
		std::string const &getName( void ) const;
		bool	getSigned( void ) const;
		int		getGradetosign( void ) const;
		int		getGradetoexec( void ) const;
		void	beSigned( Bureaucrat &someone ); 


	private:

		std::string const _name;
		bool _signed;
		int	const _gradetosign;
		int const _gradetoexec;
		
		class GradeTooHighException : public std::exception
		{
				virtual const char*	what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
				virtual const char*	what() const throw();
		};
	

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */