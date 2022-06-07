/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:09:36 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/07 10:28:25 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define BLU "\e[0;34m"
#define VIO "\e[35m"
#define NC "\e[0m"

template <typename T>
class Array
{
	public:
	Array()
	{
		_tab = new T;
		_size = 0;
		std::cout << GRN "Constructeur par défaut\n" << NC;
	}

	Array(unsigned int n)
	{
		_tab = new T[n];
		_size = n;
		std::cout << GRN "Constructeur surchargé\n" << NC;
	}
	
	Array(Array const &copy)
	{
		_size = copy._size;
		_tab = new T[copy._size];
		for (unsigned int i = 0; i < copy._size; i++)
			_tab[i] = copy._tab[i];
		std::cout << GRN "Constructeur de recopie\n" << NC;
	
	}

	Array &operator=(Array const &rhs)
	{
		if (this != &rhs)
		{
			_size = rhs._size;
			delete _tab;
			_tab = new T[rhs._size];
			for (unsigned int i = 0; i < _size; i++)
				_tab[i] = rhs._tab[i];
			std::cout << GRN "Overload operator =\n" << NC;
		}
		return *this;
	}

	~Array() 
	{
		delete[] _tab;
		std::cout << VIO "Destructeur\n" << NC;
	}

	T &operator[](unsigned int index)
	{
		if (index >= _size)
		{
			throw InvalidIndex();
		}
		return _tab[index];
	}

	unsigned int size(void)
	{
		return _size;
	}

	class InvalidIndex : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return "Invalid Index !";
			}
	};

	private:
		T *_tab;
		unsigned int _size;
};

#endif