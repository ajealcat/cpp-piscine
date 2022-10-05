/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:19:41 by ajearuth          #+#    #+#             */
/*   Updated: 2022/10/05 17:55:13 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{

	public:

		MutantStack<T>() : std::stack<T>() {}
		MutantStack<T>( MutantStack<T> const & src ) : std::stack<T>(src) {}
		~MutantStack<T>() {}

		MutantStack &		operator=( MutantStack<T> const & rhs ) {
			this->std::stack<T>::operator=(rhs);
			return *this;
		}

	typedef typename std::deque<T>::iterator iterator;
	typedef typename std::deque<T>::const_iterator const_iterator;

	iterator begin()
	{
		return this->c.begin();
	}
	
	iterator end()
	{
		return this->c.end();
	}

	const_iterator begin() const
	{
		return this->c.begin();
	}
	
	const_iterator end() const
	{
		return this->c.end();
	}
};

#endif /* ***************************************************** MUTANTSTACK_H */