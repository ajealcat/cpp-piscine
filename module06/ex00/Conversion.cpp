/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:33:22 by ajearuth          #+#    #+#             */
/*   Updated: 2022/10/03 17:41:44 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(std::string str) : _input(str)
{
	int i;
	
	for (i = 0; isalnum(str[i]) || str[i] == '+' || str[i] == '-' || str[i] == '.'; ++i);
	if (str[i])
		throw BadArgument();
	i = 0;
	if (str == "nanf" || str == "-inff" || str == "+inff")
	{
		this->_detected = 1; // float
		return ;
	}
	if (str == "nan" || str == "-inf" || str == "+inf")
	{
		this->_detected = 2; // double
		return ;
	}
	for ( ; str[i] && (str[i] == '-' || str[i] == '+'); ++i);
	for ( ; str[i] && isdigit(str[i]); ++i);
	if (!str[i])
	{
		this->_detected = 3; // int
		return ;
	}
	else if (str[i] == 'f' && !str[++i])
	{
		this->_detected = 1; // float
		return ;
	}
	if (str.length() == 1 && isprint(str[0]))
	{
		this->_detected = 4; // char
		return ;
	}
	i = 0;
	for ( ; str[i] && (str[i] == '-' || str[i] == '+'); ++i);
	for ( ; str[i] && isdigit(str[i]); ++i);
	if (str[i] == '.')
		++i;
	else
		throw BadArgument();
	for ( ; str[i] && isdigit(str[i]); ++i);
	if (!str[i])
	{
		this->_detected = 2; // double
		return ;
	}
	else if (str[i] == 'f' && !str[++i])
	{
		this->_detected = 1; // float
		return ;
	}
	throw BadArgument();
}

Conversion::~Conversion()
{	
}

Conversion::Conversion(const Conversion &src)
{
    *this = src;
}

Conversion &Conversion::operator=(const Conversion &rhs)
{
    if (&rhs == this)
        return *this;
    this->_input = rhs._input;
    return *this;
}

int Conversion::getDetected(void) const
{
	return this->_detected;
}

void	Conversion::all_impossible(void)
{
	std::cout << "char: impossible\n";
	std::cout << "int: impossible\n";
	std::cout << "float: impossible\n";
	std::cout << "double: impossible" << std::endl;
}

void Conversion::ConvertChar()
{
	char c = this->_input[0];
	
    std::cout << "char: ";
	if (!isprint(c))
        std::cout << "Non displayable" << std::endl;
    else
	{
        std::cout << c << std::endl;
		std::cout << "int: " << static_cast<int>(c) << "\n";
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f\n";
		std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
	}
}

void Conversion::ConvertInt()
{
	long i = std::strtol(this->_input.c_str(), NULL, 10); // protege contre les overflow
	if ( i > __INT_MAX__ || i < INT_MIN)
		return (this->all_impossible());
	std::cout << "char: "; 
	if (i > CHAR_MAX || i < CHAR_MIN)
		std::cout << "impossible\n";
	else if (!isprint(i))
		std::cout << "Non displayable\n";
	else
		std::cout << static_cast<char>(i) << "\n";
	std::cout << "int: " << i << "\n";
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f\n";
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
}

void Conversion::ConvertFloat()
{
	float f = std::strtof(this->_input.c_str(), NULL); // protege contre les overflow
	if (errno)
		return (this->all_impossible());
	std::cout << "char: "; 
	if (round(f) > CHAR_MAX || round(f) < CHAR_MIN || isnanf(f))
		std::cout << "impossible\n";
	else if (!isprint(static_cast<char>(f)))
		std::cout << "Non displayable\n";
	else 
		std::cout << static_cast<char>(f) << "\n";
	std::cout << "int: ";
	if (round(f) > __INT_MAX__ || round(f) < INT_MIN || isnanf(f))
		std::cout << "impossible\n";
	else
	{
		std::cout << static_cast<int>(f) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f\n";
		std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
	}
}

void Conversion::ConvertDouble()
{
	double	d = strtod(this->_input.c_str(), NULL);
	if (errno)
		return (this->all_impossible());
		
	std::cout << "char: ";
	if (d > static_cast<double>(CHAR_MAX) || d < static_cast<double>(CHAR_MIN) || isnan(d))
		std::cout << "impossible\n";
	else
	{
		char c = static_cast<char>(round(d));
		if (!isprint(c))
			std::cout << "Non displayable\n";
		else
			std::cout << "'" << c << "'\n";
	}
	std::cout << "int: ";
	if (d > static_cast<double>(__INT_MAX__) || d < static_cast<double>(INT_MIN) || isnan(d))
		std::cout << "impossible\n";
	else
		std::cout << static_cast<int>(round(d)) << "\n";
	std::cout << "float: ";
	if (d > static_cast<double>(__FLT_MAX__) || d < static_cast<double>(-__FLT_MAX__))
		std::cout << "impossible\n";
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f\n";
	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}

const char *Conversion::BadArgument::what() const throw()
{
    return ("Bad argument");
}