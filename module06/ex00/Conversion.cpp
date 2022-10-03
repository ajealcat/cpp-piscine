/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:33:22 by ajearuth          #+#    #+#             */
/*   Updated: 2022/10/03 11:55:17 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(std::string str) : _double(atof(str.c_str()))
{
    if (!_double and str.size() == 1 and str.c_str()[0] != '0')
        _double = static_cast<double>(str.c_str()[0]);
    else if (!_double and str.size() > 1 and str[0] != '0')
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
    this->_double = rhs._double;
    return *this;
}


void Conversion::ConvertChar()
{
    std::cout << "char: ";
    if (std::isnan(this->_double) or std::isinf(this->_double))
        std::cout << "impossible" << std::endl;
    else if (!isprint(static_cast<char>(this->_double)))
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << static_cast<char>(this->_double) << std::endl;
}

void Conversion::ConvertInt()
{
    std::cout << "int: ";
    if (std::isnan(this->_double) or std::isinf(this->_double))
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(this->_double) << std::endl;
}

void Conversion::ConvertFloat()
{
    std::cout << "float: ";
    std::cout << static_cast<float>(this->_double);
    if (std::fmod(this->_double,1) == 0)
        std::cout << ".0";
    std::cout << 'f' << std::endl;
}

void Conversion::ConvertDouble()
{
    std::cout << "double: ";
    std::cout << static_cast<double>(this->_double);    
    if (std::fmod(this->_double,1) == 0)
        std::cout << ".0";
    std::cout << std::endl;
}

const char *Conversion::BadArgument::what() const throw()
{
    return ("Bad argument");
}