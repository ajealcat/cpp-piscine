/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:49:26 by ajearuth          #+#    #+#             */
/*   Updated: 2022/10/04 15:26:41 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template <typename T>
void swap(T &a, T &b)
{
	T tmp;

	tmp = b;
	b = a;
	a = tmp;
}

template <typename T>
T min(T const &a, T const &b)
{
	if (a >= b)
		return (b);
	return (a);
}

template <typename T>
T max(T const &a, T const &b)
{
	if (a <= b)
		return (b);
	return (a);
}

#endif /* ******************************************************** WHATEVER_H */