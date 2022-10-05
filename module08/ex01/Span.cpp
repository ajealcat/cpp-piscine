/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:54:06 by ajearuth          #+#    #+#             */
/*   Updated: 2022/10/05 16:56:03 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(unsigned int N) : _n(N), _container()
{
	std::cout << "Default constructor called" << std::endl;
}

Span::Span( const Span & src ) : _n(src._n), _container()
{
	*this = src;
	std::cout << "Copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
	std::cout << "Span destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->_n = rhs._n;
		this->_container = rhs._container;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Span::addNumber(int nbr)
{
	if (this->_container.size() >= this->_n)
		throw Span::AddNumberFullException();
	this->_container.push_back(nbr);
}

int	Span::shortestSpan(void) const
{
	size_t i;
	std::vector<int> tmp = this->_container;

	if(this->_container.size() <= 1)
		throw NumberException();
	sort(tmp.begin(), tmp.end());
	int j = tmp[1] - tmp[0];
	for(i = 0; i + 1 < tmp.size(); ++i)
	{
		if (tmp[i + 1] - tmp[i] < j)
			j = std::abs(tmp[i + 1] - tmp[i]);
	}
	return (j);
}

void	Span::addSpan(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end)
{
	if (static_cast<unsigned int>(end - begin) > (this->_n - this->_container.size()))
		throw Span::AddNumberFullException();
	else 
	{
		this->_container.insert(this->_container.end(), begin, end);
	}
	
}

int Span::longestSpan(void) const
{
	std::vector<int>::const_iterator i;
	std::vector<int>::const_iterator j;

	if(this->_container.size() <= 1)
		throw NumberException();
	i = std::min_element(this->_container.begin(), this->_container.end());
	j = std::max_element(this->_container.begin(), this->_container.end());

	return (*j - *i);
}

const char *Span::NumberException::what() const throw()
{
	return "Couldn't find any distance.\n";
}

const char *Span::AddNumberFullException::what() const throw()
{
	return "Span is full.\n";
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */