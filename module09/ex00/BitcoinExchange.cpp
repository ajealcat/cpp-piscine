/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:02:28 by ajearuth          #+#    #+#             */
/*   Updated: 2023/03/22 14:14:03 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

BitcoinExchange::BitcoinExchange() : _value("Default"), _date("Default")
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

BitcoinExchange::~BitcoinExchange()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
	if ( this == &rhs )
		return *this;
	this->_map = rhs._map;
	this->_value = rhs._value;
	this->_date = rhs._date;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

bool BitcoinExchange::dateChecker(std::string line)
{
	size_t pos;
	std::string rest;
	std::string year;
	std::string month;
	std::string day;

	pos = line.find("-");
	year = line.substr(0, pos);
	rest = line.substr(pos + 1);
	pos = rest.find("-");
	month = rest.substr(0, pos);
	day = rest.substr(pos + 1, 2);
	this->_date = year + "-" + month + "-" + day;

	if (year.size() > 4)
		return false;
	else if (atoi(month.c_str()) < 1 || atoi(month.c_str()) > 12)
		return false;
	else if (atoi(month.c_str()) == 2)
	{
		if (atoi(day.c_str()) < 1 || atoi(day.c_str()) > 28)
			return false;
	}
	else if (atoi(month.c_str()) == 1 || atoi(month.c_str()) == 0 ||atoi(month.c_str()) == 5 ||atoi(month.c_str()) == 7 || atoi(month.c_str()) == 8 || atoi(month.c_str()) == 10 || atoi(month.c_str()) == 12)
	{	
		if (atoi(day.c_str()) < 1 || atoi(day.c_str()) > 31)
			return false;
	}
	else if (atoi(month.c_str()) == 4 || atoi(month.c_str()) == 6 ||atoi(month.c_str()) == 9 ||atoi(month.c_str()) == 11)
	{
		if (atoi(day.c_str()) < 1 || atoi(day.c_str()) > 30)
			return false;
	}
	return true;
}

bool BitcoinExchange::valueChecker(std::string val)
{
	size_t pos;
	size_t pos2;

	if (!val.find("|"))
		return false;
	pos = val.find("|");
	this->_value = val.substr(pos + 2);
	pos2 = this->_value.find_first_not_of("0123456789.-", 0);
	if (pos2 != std::string::npos)
	{
		std::cout << "Error: not a number" << std::endl;
		return false;
	}
	else if (this->_value.size() > 10 || (this->_value.size() == 10 && this->_value.compare(STR_INT_MAX) > 0)) 
	{
		std::cout << "Error: too large a number." << std::endl;
		return (false);
	}
	else if (atoi(this->_value.c_str()) < 0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return false;
	}
	else if (atoi(this->_value.c_str()) > 1000)
	{
		std::cout << "Error: too large a number." << std::endl;
		return false;
	}
	return true;
}

void BitcoinExchange::fillMap()
{
	std::string line;
	std::string date;
	std::string	value;
	std::ifstream data("data.csv");
	std::size_t found;

	if (data.is_open())
	{
		while (getline(data, line))
		{
			if (line.empty())
				continue ;
			else
			{
				if (dateChecker(line) == false)
					continue ;
				if (valueCheckerCsv(line) == false)
					continue ;
				found = line.find(",");
				date = line.substr(0, found);
				value = line.substr(found + 1);

				this->_map.insert(std::pair<std::string, float>(date, atof(value.c_str())));
			}
		}
		
	}
	else
		std::cout << "Error: could not open csv data file\n";
	data.close();  
}

bool BitcoinExchange::valueCheckerCsv(std::string str)
{
	size_t pos;
	size_t pos2;

	if (!str.find(","))
		return false;
	pos = str.find(",");
	this->_value = str.substr(pos + 1);
	pos2 = this->_value.find_first_not_of("0123456789.", 0);
	if (pos2 != std::string::npos)
	{
		std::cout << "Error: not a number" << std::endl;
		return false;
	}
	else if (this->_value.size() > 10 || (this->_value.size() == 10 && this->_value.compare(STR_INT_MAX) > 0)) 
	{
		std::cout << "Error: too large a number." << std::endl;
		return (false);
	}
	else if (atoi(this->_value.c_str()) < 0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return false;
	}
	return true;
}

void BitcoinExchange::inputChecker(std::string line)
{

	float res;

	res = 0;
	if (dateChecker(line) == false)
		std::cout << "Error: bad input => " << this->_date << std::endl;
	else if (valueChecker(line) == false)
		return ;
	else
	{
		std::string key = this->_date;
		float rate = this->_map[key];
		if (this->_map[key])
		{
			res = rate * atof(this->_value.c_str());
			std:: cout << this->_date << " => " << this->_value << " = " << res << std::endl;
		}
		else
		{
			std::map<std::string, float>::iterator it2;
			it2 = this->_map.lower_bound(this->_date);
			if (it2 == this->_map.begin())
				std::cout << "Error: no data for this early\n";
			else if (it2 == this->_map.end())
				std::cout << "Error: no data for this late\n";
			else
			{
				--it2;
				res = it2->second * atof(this->_value.c_str());
				std:: cout << this->_date << " => " << this->_value << " = " << res << std::endl;
			}
		}
	}
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::map<std::string, float> const &BitcoinExchange::getMap() const
{
	return this->_map;
}


/* ************************************************************************** */
