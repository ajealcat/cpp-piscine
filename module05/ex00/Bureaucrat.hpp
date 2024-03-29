#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat
{

	public:

		Bureaucrat(std::string name = "default_bureaucrat", int grade = 150);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

		void	promote( void );
		void	demote( void );
		std::string const	&getName() const;
		int					getGrade() const;


	private:

		std::string const _name;
		int	_grade;

		class GradeTooHighException : public std::exception
		{
			public : 
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public : 
				virtual const char* what() const throw();

		};

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */
