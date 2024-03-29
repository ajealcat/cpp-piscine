/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:05:45 by ajearuth          #+#    #+#             */
/*   Updated: 2022/10/03 09:24:44 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <cstdlib>
# include <iostream>
# include <stdint.h>

typedef struct s_data
{
	std::string name;
	char 		c;
	int 		i;
} Data;

uintptr_t serialize(Data *ptr);
Data*	deserialize(uintptr_t raw);

#endif