/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:16:47 by ajearuth          #+#    #+#             */
/*   Updated: 2023/03/22 17:17:10 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <cstring>
# include <vector>
# include <cstdlib>
# include <algorithm>
# include <deque>
# include <time.h>
# include <iomanip>

#define STR_INT_MAX std::string("2147483647")

class PmergeMe
{

	public:

		PmergeMe();
		PmergeMe(PmergeMe const &src);
		PmergeMe &operator=(PmergeMe const &rhs);
		~PmergeMe();

		std::vector<int> &getVector();
		std::deque<int> &getDeque();

		void merge_sort();
		void merge_vec(std::vector<int> &vec, int start, int half, int end);
		void merge_deq(std::deque<int> &deq, int start, int half, int end);
		void insert_vec(std::vector<int> &vec, int start, int end);
		void insert_deq(std::deque<int> &deq, int start, int end);
		void sort_vec(std::vector<int> &vec, int start, int end);
		void sort_deq(std::deque<int> &deq, int start, int end);


	private:
		std::vector<int> _vec;
		std::deque<int> _deq;

};


#endif /* ******************************************************** PMERGEME_H */