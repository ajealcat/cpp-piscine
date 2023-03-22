/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:16:40 by ajearuth          #+#    #+#             */
/*   Updated: 2023/03/22 17:16:48 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PmergeMe::~PmergeMe()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PmergeMe &PmergeMe::operator=(PmergeMe const &rhs)
{
	if ( this == &rhs )
		return *this;
	this->_vec = rhs._vec;
	this->_deq = rhs._deq;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void PmergeMe::merge_vec(std::vector<int> &vec, int start, int half, int end)
{
	std::vector<int> right(vec.begin() + start, vec.begin() + half + 1);
	std::vector<int> left(vec.begin() + half + 1, vec.begin() + end + 1);

	size_t i_right = 0;
	size_t i_left = 0;

	for (int i = start; i < end + 1; i++)
	{
		if (i_right == right.size())
		{
			vec[i] = left[i_left];
			i_left++;
		}
		else if (i_left == left.size())
		{
			vec[i] = right[i_right];
			i_right++;
		}
		else if (right[i_right] > left[i_left])
		{
			vec[i] = left[i_left];
			i_left++;
		}
		else
		{
			vec[i] = right[i_right];
			i_right++;
		}
	}
}

void PmergeMe::merge_deq(std::deque<int> &deq, int start, int half, int end)
{
	std::deque<int> right(deq.begin() + start, deq.begin() + half + 1);
	std::deque<int> left(deq.begin() + half + 1, deq.begin() + end + 1);

	size_t i_right = 0;
	size_t i_left = 0;

	for (int i = start; i < end + 1; i++)
	{
		if (i_right == right.size())
		{
			deq[i] = left[i_left];
			i_left++;
		}
		else if (i_left == left.size())
		{
			deq[i] = right[i_right];
			i_right++;
		}
		else if (right[i_right] > left[i_left])
		{
			deq[i] = left[i_left];
			i_left++;
		}
		else
		{
			deq[i] = right[i_right];
			i_right++;
		}
	}
}

void PmergeMe::insert_vec(std::vector<int> &vec, int start, int end)
{
	if (vec[start] > vec[end])
	{
		int tmp = vec[start];
		vec[start] = vec[end];
		vec[end] = tmp;
	}
}
		
void PmergeMe::insert_deq(std::deque<int> &deq, int start, int end)
{
	if (deq[start] > deq[end])
	{
		int tmp = deq[start];
		deq[start] = deq[end];
		deq[end] = tmp;
	}
}

void PmergeMe::sort_vec(std::vector<int> &vec, int start, int end)
{
	if(end - start >= 2)
	{
		int half = (start + end) / 2;
		sort_vec(vec, start, half);
		sort_vec(vec, half + 1, end);
		merge_vec(vec, start, half, end);
	}
	else
		insert_vec(vec, start, end);
}

void PmergeMe::sort_deq(std::deque<int> &deq, int start, int end)
{
	if(end - start >= 2)
	{
		int half = (start + end) / 2;
		sort_deq(deq, start, half);
		sort_deq(deq, half + 1, end);
		merge_deq(deq, start, half, end);
	}
	else
		insert_deq(deq, start, end);
}

void PmergeMe::merge_sort()
{
	clock_t vec_time, deq_time;

	vec_time = clock();
	sort_vec(this->_vec, 0, this->_vec.size() - 1);
	vec_time = clock() - vec_time;

	deq_time = clock();
	sort_deq(this->_deq, 0, this->_deq.size() - 1);
	deq_time = clock() - deq_time;

	std::cout << "After: ";
	std::vector<int>::iterator it = this->_vec.begin();
	if (this->_vec.size() > 5)
	{
		for (; it < this->_vec.begin() + 4 ; it++)
		{
			std::cout << *it << " ";
		}
		std::cout << "[...]" << std::endl;
	}
	else 
	{
		for (; it != this->_vec.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
	}
	double time = (double)vec_time / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << this->_vec.size() << " elements with std::vector : " << std::fixed << std::setprecision(6) << time << " s" << std::endl;
	time = (double)deq_time / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << this->_deq.size() << " elements with std::deque : " << std::fixed << std::setprecision(6) << time << " s" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::vector<int>  &PmergeMe::getVector()
{
	return this->_vec;
}

std::deque<int>  &PmergeMe::getDeque()
{
	return this->_deq;
}
/* ************************************************************************** */