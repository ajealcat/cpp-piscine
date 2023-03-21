/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:14:27 by ajearuth          #+#    #+#             */
/*   Updated: 2023/03/21 22:47:57 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RPN::RPN()
{
}

RPN::RPN(const RPN &src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RPN::~RPN()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RPN &RPN::operator=(RPN const &rhs)
{
	if (this == &rhs)
		return *this;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

bool RPN::operateur(const char c)
{
	std::string operateurs = "+-/*";
	bool res = false;
	if (operateurs.find(c) != std::string::npos)
		res = true;
	return res;
}


void RPN::calcul(std::string str)
{
	int val1;
	int val2;
	int res;

	for (size_t i = 0; i < str.size(); i++)
	{
		if (str.at(i) == ' ')
			continue ;
		else if (!operateur(str.at(i)))
			this->_pile.push(str.at(i) - '0');
		else 
		{
			if(!this->_pile.empty())
				val1 = this->_pile.top();
			if(!this->_pile.empty())
				this->_pile.pop();
			if(!this->_pile.empty())
				val2 = this->_pile.top();
			if(!this->_pile.empty())
				this->_pile.pop();
			if(str.at(i) == '+')
					res = val2 + val1;
			else if (str.at(i) == '-')
					res = val2 - val1;
			else if(str.at(i) == '*')
					res = val2 * val1;
			else
			{
				if (val1 == 0)
				{
					std::cout << "Error : operation impossible" << std::endl;
					return ;
				}
				res = val2 / val1;
			}
			this->_pile.push(res);
		}
	}
}

bool	RPN::checkvalidity(std::string str)
{
	int oper = 0;
	int numbers = 0;
	size_t i = 0;

	while(i < str.size())
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
			oper++;
		else if (str[i] != ' ')
			numbers++;
		++i;
	}
	if (oper == 0 || oper != numbers - 1)
		return false ;
	return true;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::stack<int> const &RPN::getStack() const
{
	return this->_pile;
}

/* ************************************************************************** */
