/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:52:07 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/14 10:22:14 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <numeric>


Span::Span()
{
    _n = 0;
    _span.reserve(_n);
}

Span:: ~Span()
{}

Span::Span(unsigned int n) : _n(n)
{
    _span.reserve(_n);
}

Span::Span(Span const &copy)
{
    *this = copy;
    return ;
}

Span &Span::operator=(Span const &rhs)
{
	_span = rhs._span;
	_n = rhs._n;
    return *this;
}

void Span::addNumber(int number)
{
    if (_span.size() == _n)
        throw fullException();
   _span.push_back(number);
}

void Span::addNumber(std::vector<int>::iterator ifirst, std::vector<int>::iterator ilast, std::vector<int> tab)
{
	for (std::vector<int>::iterator it = ifirst; it != ilast; it++)
	{
		_span[*it] = tab[*it];
		std::cout << _span[*it] << std::endl;
	}
}

int Span::shortestSpan(void)
{
	if (_span.size() <= 1)
		throw noDistance();
	std::vector<int> res(_n);
	std::adjacent_difference(_span.begin(), _span.end(), res.begin());
	int nb = INT32_MAX;
	for (unsigned int i = 1; i < res.size() ; i++)
	{
		int rabs = abs(res[i]);
		//std::cout << res[i] << std::endl;
		if (nb > rabs)
			nb = rabs;
	}
	return nb;
}

int Span::longestSpan(void)
{
	if (_span.size() <= 1)
		throw noDistance();
	std::vector<int> res(_n);
	std::adjacent_difference(_span.begin(), _span.end(), res.begin());
	int nb = INT32_MIN;
	for (unsigned int i = 1; i < res.size() ; i++)
	{
		int rabs = abs(res[i]);
	//	std::cout << res[i] << std::endl;
		if (nb < rabs)
			nb = rabs;
	}
	return nb;
}

const char* Span::noDistance::what() const throw()
{
	return "No distance !";
}

const char* Span::fullException::what() const throw()
{
	 return "No more place !";
}