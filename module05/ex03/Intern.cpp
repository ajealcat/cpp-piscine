#include "Intern.hpp"

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	std::cout << "Default constructor Intern created." << std::endl;
}

Intern::Intern(const Intern &src)
{
	*this = src;
	std::cout << "Intern constructor copied." << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
	std::cout << "Intern destroyed." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

const char *Intern::FormNotFoundException::what() const throw()
{
	return "Form not found.";
}

static Form *makeShrubbery(std::string const &target)
{
	std::cout << "Intern creates ShrubberyCreationForm." << std::endl;
	return new ShrubberyCreationForm(target);
}

static Form *makeRobotomy(std::string const &target)
{
	std::cout << "Intern creates RobotomyRequestForm." << std::endl;
	return new RobotomyRequestForm(target);
}

static Form *makePresidential(std::string const &target)
{
	std::cout << "Intern creates PresidentialPardonForm." << std::endl;
	return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string const &formName, std::string const &target) const
{
	std::string formNames[3] = {"shrubbery form", "robotomy request", "pardon"};
	Form *(*test[3])(std::string const &) = {&makeShrubbery, &makeRobotomy, &makePresidential};
	try
	{	
		for (int i = 0; test[i] != NULL && formNames[i] == formName; ++i)
			return test[i](target);
		throw Intern::FormNotFoundException();
		return (NULL);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return(NULL);
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */