/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:08:29 by ajearuth          #+#    #+#             */
/*   Updated: 2022/10/01 16:58:49 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <limits.h>
# include <cstdlib>
# include <cstring>

void	isChar(std::string const str);
void	isInt(std::string const str);
void	isFloat(std::string const str);
void	isDouble(std::string const str);
void	isExcept(std::string const str);

bool		checkChar(std::string str);
bool		checkInt(std::string str);
bool		checkFloat(std::string str);
bool		checkDouble(std::string str);
bool		checkExcep(std::string str);


#endif