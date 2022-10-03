/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:08:29 by ajearuth          #+#    #+#             */
/*   Updated: 2022/10/03 11:48:41 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <limits.h>
# include <cstdlib>
# include <cstring>
#include <cmath>
#include <iomanip>

class Conversion
{
	public:

			Conversion(std::string str = "default");
			Conversion(const Conversion &src);

			Conversion &operator=(const Conversion &rhs);

			~Conversion();
			
			void	ConvertChar();
			void	ConvertInt();
			void	ConvertFloat();
			void	ConvertDouble();

	private:

			double	_double;

			class BadArgument : public std::exception
			{
				const char *what() const throw();
			};
};


#endif