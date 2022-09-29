#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Intern
{
	public:

		Intern();
		Intern( Intern const & src );
		~Intern();

		Intern &		operator=( Intern const & rhs );

		Form*	makeForm(std::string const & formName, std::string const & target) const;
	
	private:

		class FormNotFoundException : public std::exception
		{
				virtual const char* what() const throw();
		};
};

#endif /* ********************************************************** INTERN_H */