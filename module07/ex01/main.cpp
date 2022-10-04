/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:22:10 by ajearuth          #+#    #+#             */
/*   Updated: 2022/10/04 16:52:02 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <cstdlib>
#include <string>

void increment(int &i)
{
    i++;
}

void putcharacter(const char &c)
{
    std::cout << c;
}

int	mystrrev(std::string & str)
{
	size_t n = str.length();
	
	for (size_t i = 0; i < n / 2; ++i)
		std::swap(str[i], str[n - i - 1]);
	return EXIT_SUCCESS;
}

int main()
{
    int tab[7] = {0, 1, 2, 3, 4, 5, 6};
    const char *str = "Wesh la street";
	std::string strr[2] = {"Wesh la street", "coucou les copains"};
    
    iter(tab, 7,  &increment);
    for (int i = 0; i < 7; i++)
        std::cout << tab[i] << " ";
    std::cout << std::endl;
    
    iter(str, 15 , &putcharacter);
	std::cout << std::endl;;
	iter(strr, 2, &mystrrev);
	iter(strr[0].c_str(), strr[0].size(), &putcharacter);
	std::cout << std::endl;;
	iter(strr[1].c_str(), strr[1].size(), &putcharacter);
	std::cout << std::endl;
}
