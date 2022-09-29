#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Bureaucrat default constructor of " << getName() << " called" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : _name(src.getName()), _grade(src.getGrade())
{
	if (src.getGrade() < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (src.getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Bureaucrat " << getName() << " copied" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat desctructor of " << getName() << " called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	if ( this != &rhs )
	{
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Bureaucrat::signForm(Form &paper) const
{
	try 
	{
		paper.beSigned(*this);
        std::cout << this->getName() << " signed " << paper.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << this->getName() << " couldn't sign " << paper.getName() << " because " << e.what() << std::endl;
    }
}

void	Bureaucrat::promote( void )
{
	if (this->_grade < 2)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::demote( void )
{
	if (this->_grade > 149)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

const char* Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return ("Error: Grade too high!");
}

const char* Bureaucrat::GradeTooLowException::what( void ) const throw()
{
	return ("Error: Grade too low!");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string const	&Bureaucrat::getName() const
{
	return this->_name;
}

int					Bureaucrat::getGrade() const
{
	return this->_grade;
}

/* ************************************************************************** */