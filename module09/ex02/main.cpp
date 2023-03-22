/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:52:33 by ajearuth          #+#    #+#             */
/*   Updated: 2023/03/22 17:57:40 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
        std::cout << "Error" << std::endl;
    else
    {
        PmergeMe value = PmergeMe();
        for (int i = 1; i < ac; i++)
        {
            std::string str = av[i];
            for (size_t i = 0; i < str.size(); i++)
            {
                if (str[i] == '+')
                    continue ;
                if (!isdigit(str[i]) || str.size() > 10 || (str.size() == 10 && str.compare(STR_INT_MAX) > 0))
                {
                    std::cout << "Error" << std::endl;
                    return 0;
                }
            }
            value.getVector().push_back(atoi(str.c_str()));
            value.getDeque().push_back(atoi(str.c_str()));
        }
        std::cout << "Before: ";
        std::vector<int>::iterator it = value.getVector().begin();
        if (value.getVector().size() > 5)
        {
            for (; it < value.getVector().begin() + 4 ; it++)
            {
                std::cout << *it << " ";
            }
            std::cout << "[...]" << std::endl;
        }
        else
        {
            for (; it != value.getVector().end(); it++)
                std::cout << *it << " ";
            std::cout << std::endl;
        }
        value.merge_sort();
    }
    return 0;
}