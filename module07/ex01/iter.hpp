/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:22:43 by ajearuth          #+#    #+#             */
/*   Updated: 2022/10/04 16:31:48 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>


template <typename T, typename R>
void	iter(T *tab, size_t const size, R(*fonction)(T&))
{
	for (size_t i = 0; i < size; ++i)
		fonction(tab[i]);
}

template <typename T>
void	iter(T const *tab, size_t const size,  void(*fonction)(T const &ref))
{
	for (size_t i = 0; i < size; ++i)
		fonction(tab[i]);
}

#endif