/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:08:29 by ajearuth          #+#    #+#             */
/*   Updated: 2022/10/03 16:48:16 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <limits.h>
# include <cstdlib>
# include <cstring>
# include <stdexcept>
# include <cmath>
# include <errno.h>
# include <iomanip>
# include <string>

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
			int		getDetected(void) const;
			void	all_impossible(void);

	private:

			std::string	_input;
			int			_detected;

			class BadArgument : public std::exception
			{
				const char *what() const throw();
			};
};


#endif