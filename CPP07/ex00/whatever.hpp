/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:20:26 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/06 10:30:32 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define BLU "\e[0;34m"
#define VIO "\e[35m"
#define NC "\e[0m"

template <typename T>
void swap(T &a,T &b)
{
	T buffer = a;
	a = b;
	b = buffer;
}

template <typename T>
T const &min(const T &a, const T &b)
{
	return (a < b ? a : b);
}

// template<>
// std::string const &min<std::string>(const std::string &a, const std::string &b)
// {
//   	if (a.size() < b.size())
//    	 return a;
//  	 else
//  	   return b;
// }

template <typename T>
T const &max(const T &a, const T &b)
{
	return (a > b ? a : b);
}

// template<>
// std::string const &max<std::string>(const std::string &a, const std::string &b)
// {
//   	if (a.size() > b.size())
//    	 return a;
//  	 else
//  	   return b;
// }

#endif