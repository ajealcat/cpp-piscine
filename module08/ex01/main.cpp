/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:37:54 by ajearuth          #+#    #+#             */
/*   Updated: 2022/10/05 17:16:54 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return 0;
// }

int main()
{
	srand(time(NULL));
	try{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(10);	
	}
	catch (std::exception &e){ std::cerr << e.what() << '\n'; }

	try{
		Span sp = Span(5);
		std::vector<int> tmp;
		for (size_t it = 0; it < 5; it++)
			tmp.push_back(rand() % 50);
		for (std::vector<int>::iterator h = tmp.begin(); h < tmp.end(); h++)
            std::cout << "tmp : " << *h << " ";
		std::cout << std::endl;
		sp.addSpan(tmp.begin(), tmp.end());
		std::cout << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		// sp.addNumber(42);
		// sp.addSpan(tmp.begin(), tmp.end());
	}
	catch (std::exception &e){ std::cerr << e.what() << '\n'; }
	try{
		Span sp = Span(10000);
		std::vector<int> tmp;
		for (size_t it = 0; it < 10000; it++)
			tmp.push_back(rand());
		for (std::vector<int>::iterator h = tmp.begin(); h < tmp.end(); h++)
            std::cout << "tmp : " << *h << " ";
		std::cout << std::endl;
		sp.addSpan(tmp.begin(), tmp.end());
		std::cout << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception &e){ std::cerr << e.what() << '\n'; }

	std::vector<int> tmp;
}