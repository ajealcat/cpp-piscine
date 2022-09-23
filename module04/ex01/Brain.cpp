/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anna <anna@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:05:35 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/23 13:58:23 by anna             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain( const Brain & src )
{
	*this = src;
	std::cout << "Default brain copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Brain const & i )
{
	for (int j = 0 ; j < 100 ; ++j) 
			o << i.getIdeas(j) << " ";

	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Brain::getIdeas(int idea)
{
	if (idea >= 0 && idea < 100)
    	return (this->_ideas[idea]);
	return "";
}

void Brain::setIdea(std::string str, int idea)
{
	if (idea >= 0 && idea < 100)
    	this->_ideas[idea] = str;
    return ;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */