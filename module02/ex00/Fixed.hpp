/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 16:31:00 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/12 12:27:27 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{

	public:

		Fixed();
		Fixed(Fixed const & src);
		~Fixed();

		Fixed &		operator=(Fixed const &rhs);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	
	private:
		int					value;
		static const int	fracBits = 8;

};

#endif /* *********************************************************** FIXED_H */
