/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:02:53 by ajearuth          #+#    #+#             */
/*   Updated: 2023/03/21 11:01:35 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <map>
# include <fstream>
# include <math.h>
# include <algorithm>

#define STR_INT_MAX std::string("2147483647")

class BitcoinExchange
{

	public:

		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &src);
		BitcoinExchange &operator=(BitcoinExchange const &rhs);
		~BitcoinExchange();


		std::map<std::string, float> const &getMap() const;

		bool dateChecker(std::string line);
		bool valueChecker(std::string val);
		void fillMap();
		void inputChecker(std::string line);



	private:

	 	std::map<std::string, float> _map;
		std::string _value;
		std::string _date;

};

std::ostream &operator<<(std::ostream &o, BitcoinExchange const &i);

#endif /* ************************************************* BITCOINEXCHANGE_H */
