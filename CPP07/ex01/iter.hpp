/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:34:51 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/06 12:52:05 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include<cctype>

#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define BLU "\e[0;34m"
#define VIO "\e[35m"
#define NC "\e[0m"

template <typename T>
void iter(T const *tab, int size, void function(const T&))
{
	for (int i = 0; i < size; i++)
		function(tab[i]);
}

template <typename T>
void printer(T &tab)
{
	std::cout << tab << std::endl;
}

template <typename T>
void add(T &tab)
{
	std::cout << tab + 2 << std::endl;
}

template<>
void add<const std::string>(std::string const &tab)
{
	std::cout << tab << " + add" << std::endl;
} 

#endif