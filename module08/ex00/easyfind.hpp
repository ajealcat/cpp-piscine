/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 22:43:13 by ajearuth          #+#    #+#             */
/*   Updated: 2022/10/05 14:32:49 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <iterator>
# include <stdexcept>


template<typename T>
typename T::const_iterator	easyfind(T const & container, int const n);

class	ElementNotFoundException : public std::exception
{
	const char*	what() const throw()
	{
		return "Couldn't found the occurence.\n";
	};
};

template<typename T>
typename T::const_iterator	easyfind(T const & container, int const n)
{
	typename T::const_iterator pouet;
	 
	if ((pouet = find(container.begin(), container.end(), n)) == container.end())
		throw ElementNotFoundException() ;
	return (pouet);
}

#endif