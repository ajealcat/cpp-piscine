/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:18:27 by ajearuth          #+#    #+#             */
/*   Updated: 2022/09/13 16:28:53 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
# define __FIXED_H__

# include <iostream>
# include <cmath>

class	Fixed
{
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(Fixed const &src);
	~Fixed();
	
	Fixed	&operator=(Fixed const &rhs);
	
	bool	operator>(Fixed const &rhs) const;
	bool	operator<(Fixed const &rhs) const;
	bool	operator>=(Fixed const &rhs) const;
	bool	operator<=(Fixed const &rhs) const;
	bool	operator==(Fixed const &rhs) const;
	bool	operator!=(Fixed const &rhs) const;

	Fixed	operator+(Fixed const &rhs) const;
	Fixed	operator-(Fixed const &rhs) const;
	Fixed	operator*(Fixed const &rhs) const;
	Fixed	operator/(Fixed const &rhs) const;

	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat() const;
	int		toInt() const;

private:
	int					_value;
	static const int	_fracBits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif
