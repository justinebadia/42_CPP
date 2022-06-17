/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 13:52:07 by jbadia            #+#    #+#             */
/*   Updated: 2022/06/17 15:25:32 by jbadia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <numeric>
#include <algorithm>
#include <cmath>
#include <iostream>


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


unsigned int Span::shortestSpan(void)
{
	if (_span.size() <= 1)
		throw noDistance();
	std::vector<int> res(_n);
    std::vector<int> shortest(_n);
	std::adjacent_difference(_span.begin(), _span.end(), res.begin());
    std::transform(res.begin(), res.end(), shortest.begin(), static_cast<int (*)(int)>(&std::abs));
    std::vector<int>::iterator it = std::min_element(shortest.begin(), shortest.end());
    return *it;
}

unsigned int Span::longestSpan(void)
{
	if (_span.size() <= 1)
		throw noDistance();
	std::vector<int> res(_n);
    std::vector<int> longest(_n);
	std::adjacent_difference(_span.begin(), _span.end(), res.begin());
    std::transform(res.begin(), res.end(), longest.begin(), static_cast<int (*)(int)>(&std::abs));
    std::vector<int>::iterator it = std::max_element(longest.begin(), longest.end());
    return *it;
}

const char* Span::noDistance::what() const throw()
{
	return "No distance !";
}

const char* Span::fullException::what() const throw()
{
	 return "No more place !";
}