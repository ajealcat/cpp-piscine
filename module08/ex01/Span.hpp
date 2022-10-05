/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:54:06 by ajearuth          #+#    #+#             */
/*   Updated: 2022/10/05 16:50:49 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>


class Span
{

	public:

		Span(unsigned int N = 0);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );
		
		void	addNumber(int nbr);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;
		void	addSpan(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);
		
	private:
	
		unsigned int _n;
		std::vector<int> _container;
		
		class	NumberException : public std::exception
		{
			const char*	what() const throw();
		};
		
		class	AddNumberFullException : public std::exception
		{
			const char*	what() const throw();
		};
};


#endif /* ************************************************************ SPAN_H */