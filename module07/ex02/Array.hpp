/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:27:16 by ajearuth          #+#    #+#             */
/*   Updated: 2022/10/04 19:28:04 by ajearuth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include <iomanip>


template <typename T>
class Array
{
	public:
		Array<T>(void);
		Array<T>(unsigned int n);
		Array<T>(Array<T> const &src);
		Array<T> &operator=(Array<T> const &rhs);
		T &operator[](unsigned int index);
		
		~Array<T>(void);
		
		unsigned int size(void) const;
		
	private:
		T *_array;
		unsigned int _size;

		class BadIndexException : public std::exception
		{
			public : 
				virtual const char* what() const throw()
				{
					return ("Bad Index!\n");
				};
		};
};

template<typename T>
Array<T>::Array(void) : _array(NULL), _size(0)
{
	std::cout << " Array default constructor called." << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	this->_array = new T[_size];	
}


template<typename T>
Array<T>::~Array(void)
{
	delete [] this->_array;
	std::cout << "Array destructor called" << std::endl;
}

template<typename T>
Array<T>::Array( const Array &src )
{
	*this = src;
}

template<typename T>
Array<T> &Array<T>::operator=( Array const & rhs )
{
	if ( this != &rhs)
	{
		if (this->_array != NULL)
			delete[] this->_array;
		this->_size = rhs._size;
		this->_array = new T[this->_size];
		for(size_t i = 0; i < this->_size; ++i)
			this->_array[i] = rhs._array[i];
	}
	return *this;
}

template<typename T>
T	&Array<T>::operator[](unsigned int index)
{
	if (index >= this->_size)
		throw Array::BadIndexException();
	return this->_array[index];
}

// const char *Array::BadIndexException::what() const throw()
// {
// 	return ("Bad index!\n");
// }

template<typename T>
unsigned int Array<T>::size(void) const
{
	return this->_size;
}

#endif